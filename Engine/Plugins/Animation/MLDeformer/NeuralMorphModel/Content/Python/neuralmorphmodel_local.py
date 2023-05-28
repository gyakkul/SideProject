# -*- coding: utf-8 -*-
"""
Copyright Epic Games, Inc. All Rights Reserved.
"""
from importlib import reload
import torch
import math
import nmm_shared
import torch.nn as nn


class BlockLinear(nn.Module):
    def __init__(self,
                 in_features: int,
                 out_features: int,
                 blocks: int):
        super().__init__()
        self.in_features = in_features
        self.out_features = out_features
        self.blocks = blocks
        self.weight = nn.Parameter(torch.empty((blocks, out_features, in_features)))
        self.bias = nn.Parameter(torch.empty(blocks, out_features, 1))
        self.reset_parameters()

    def reset_parameters(self) -> None:
        nn.init.kaiming_uniform_(self.weight, a=math.sqrt(5))
        if self.bias is not None:
            fan_in, _ = nn.init._calculate_fan_in_and_fan_out(self.weight)
            bound = 1 / math.sqrt(fan_in) if fan_in > 0 else 0
            nn.init.uniform_(self.bias, -bound, bound)

    def forward(self, x):
        # The shape of x is (BatchSize, NumBones, in_features, 1)
        return torch.matmul(self.weight, x) + self.bias


class MultiMLP(torch.nn.Module):
    def __init__(self,
                 input_layers: list,
                 num_blocks: int,
                 activation_function=torch.nn.ELU):

        # Block based mlp that takes an input of size <num_blocks x input_layers[0]> and
        # outputs a result of size <num_blocks x input_layers[-1]>
        super().__init__()
        self.weighted_layers = list()
        self.num_blocks = num_blocks
        self.block_input_features = input_layers[0]
        self.input_features = num_blocks * input_layers[0]
        self.output_features = num_blocks * input_layers[-1]
        self.layers = torch.nn.Sequential()
        for k in range(0, len(input_layers) - 1):
            self.layers.add_module('linear_%i' % k,
                                   BlockLinear(input_layers[k], input_layers[k + 1], num_blocks))
            self.weighted_layers.append(self.layers[-1])
            if activation_function is not None:
                self.layers.add_module('activation_%i' % k, activation_function())

    def forward(self, x: torch.Tensor) -> torch.Tensor:
        # The value of shape will be equal to the batch size.
        shape = list(x.shape)[:-1]

        # Forward parameter shape: (BatchSize, NumBones, input_layers[0], 1), where input_layers[0] is the number
        # of features per bone.        
        # Return value shape: (BatchSize, TotalNumMorphs)
        return self.layers.forward(x.reshape(shape + [self.num_blocks, -1, 1])).reshape(shape + [-1])


class Corrective(torch.nn.Module):
    def __init__(self,
                 num_vertices,
                 in_features_per_block,
                 out_shapes_per_block,
                 num_blocks,
                 hidden_layer_shape=None,
                 activation_function=torch.nn.ELU,
                 feature_groups=None,
                 input_mean=None,
                 input_std=None,
                 output_mean=None,
                 output_std=None):

        # Takes as input a vector of size <num_blocks x in_features_per_block> and runs this through
        # a small block base MLP to generate <num_blocks x out_shapes_per_block> morph target coefficients.
        # Additional will take a tensor of <m x n> group blocks which will create an additional
        # <m x out_shapes_per_block> morph target coefficients concatenated.
        super().__init__()
        if hidden_layer_shape is None:
            hidden_layer_shape = [4]
        self.num_blocks = num_blocks
        self.num_group_blocks = 0
        self.feature_groups = feature_groups
        if self.feature_groups is not None:
            self.num_group_blocks = feature_groups.shape[0]
        self.num_vertices = num_vertices
        self.in_features_per_block = in_features_per_block
        self.out_shapes_per_block = out_shapes_per_block
        self.input_mean = input_mean
        self.input_std = input_std
        self.output_mean = output_mean
        self.output_std = output_std
        self.num_morph_targets = (self.num_blocks + self.num_group_blocks) * out_shapes_per_block
        
        # Create a set of empty morph targets.
        self.morph_target_matrix = torch.nn.parameter.Parameter(
            torch.zeros((self.num_vertices * 3, self.num_morph_targets)))
        torch.nn.init.kaiming_uniform_(self.morph_target_matrix, a=math.sqrt(5))

        # Create a separate tiny MLP for each joint, with it's own morph targets.
        network_layers = [self.in_features_per_block] + hidden_layer_shape + [self.out_shapes_per_block]
        self.network = MultiMLP(input_layers=network_layers,
                                num_blocks=self.num_blocks,
                                activation_function=activation_function)

        # Also create an additional multiMLP for the shared blocks where the 
        # morph targets are controlled by multiple inputs.
        if self.feature_groups is not None:
            groups_input_size = self.feature_groups.shape[1]  # 3 in case of [[0, 1, 2], [3, 4, 5]].
            groups_layers = [groups_input_size * self.in_features_per_block] + hidden_layer_shape + \
                            [self.out_shapes_per_block]
            self.groups_network = MultiMLP(input_layers=groups_layers,
                                           num_blocks=self.num_group_blocks,
                                           activation_function=activation_function)

        self.weighted_layers = self.network.weighted_layers

    def get_deltas(self, morph_target_coefficients):
        assert morph_target_coefficients.shape[-1] == self.morph_target_matrix.shape[-1]

        # Blend all morph deltas by the morph target weights to calculate the final per vertex deltas.
        deltas = torch.matmul(self.morph_target_matrix, morph_target_coefficients.unsqueeze(-1)).squeeze(-1)

        if self.output_mean is not None and self.output_std is not None:
            return deltas * self.output_std + self.output_mean
        else:
            return deltas

    def forward(self, x_in):
        # Normalize the input if we have the information.
        if self.input_mean is not None and self.input_std is not None:
            x = (x_in - self.input_mean) / self.input_std
        else:
            x = x_in

        # First do the main network.
        morph_target_coefficients = self.network.forward(x)

        # Now the coefficients for all shared joint networks.
        if self.feature_groups is not None:
            # Input shape to the forward is: 
            # [batch_size, num_features_per_block * num_shared_items * num_blocks_per_shared_item]
            # So with a shared list of [[0, 1, 2], [3, 4, 5]] and batch size of 128, the input to forward
            # would have a shape of [128, 36], where 36 = 6 * (2 * 3).
            shared_target_coefficients = \
                self.groups_network.forward(
                    x.reshape(list(x.shape)[:-1] + [-1, self.in_features_per_block])
                    [..., self.feature_groups, :].reshape(x.shape[0], -1))

            # Shape of the shared coefficients is now [batch_size, num_shared_items * num_morphs_per_bone]
            # So in the above example case it is [128, 24] with num_morphs_per_bone set to 12.
            # This is because there are 2 shared groups, each generating 12 morphs.

            # Now concat the standard morph targets for non-shared groups, with the shared ones.
            morph_target_coefficients = torch.cat([morph_target_coefficients, shared_target_coefficients], dim=-1)

        if self.training:
            return self.get_deltas(morph_target_coefficients)
        else:
            return morph_target_coefficients


# Create the neural network structure.
def create_network(num_vertices,
                   num_inputs,
                   num_morph_targets,
                   num_bones,
                   num_hidden_layers,
                   num_units_per_hidden_layer,
                   feature_groups,
                   device,
                   input_mean=None,
                   input_std=None,
                   output_mean=None,
                   output_std=None):
    # Convert the feature groups into a tensor.
    feature_groups_tensor = torch.LongTensor(feature_groups) if feature_groups else None

    # Create the list of hidden layer unit counts.
    hidden_layers = list()
    for i in range(num_hidden_layers):
        hidden_layers.append(num_units_per_hidden_layer)

    # We use six input values per bone (or curve).
    # For bones this is 2 columns of the 3x3 rotation matrix.
    # For curves this is the curve value (single float), padded with 5 additional zeros.
    num_features_per_block = 6
    assert num_inputs % num_features_per_block == 0, \
        f'The number of inputs must be a multiple of {num_features_per_block}'
    
    return Corrective(num_vertices=num_vertices,
                      in_features_per_block=num_features_per_block,
                      out_shapes_per_block=num_morph_targets,
                      num_blocks=num_inputs // num_features_per_block,
                      feature_groups=feature_groups_tensor,
                      hidden_layer_shape=hidden_layers,
                      input_mean=input_mean,
                      input_std=input_std,
                      output_mean=output_mean,
                      output_std=output_std).to(device)


# Main network training function, executed when we click the Train button in the UI.
# This is launched from inside the init_unreal.py file.
def train(training_model):
    reload(nmm_shared)
    print('Training local neural morph model')
    return nmm_shared.train(training_model, create_network, include_curves=True)
