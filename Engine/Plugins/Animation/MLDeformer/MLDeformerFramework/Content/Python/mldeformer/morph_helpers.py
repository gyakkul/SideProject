# -*- coding: utf-8 -*-
"""
Copyright Epic Games, Inc. All Rights Reserved.
"""
import unreal as ue
import torch
from torch.utils.data import DataLoader


def extract_morph_targets(morph_tensor,
                          training_model,
                          output_mean,
                          output_std,
                          network,
                          inputs,
                          training_set,
                          dataset):
    """Extract the morph targets from the trained neural network.
    This assumes the last layers contains the deltas.
    The last layer should contain xyzxyzxyz style values.
    This will pass the deltas to the morph model's c++ class. 
    It will also store the absolute max weight value of each morph target as seen during training.  

    Keyword arguments:
        morph_tensor    -- The morph target tensor, it must be of size (num_delta_floats_per_morph, num_morphs) 
        training_model  -- The ML Deformer training model object.
        output_mean     -- The means of the training target values (the deltas).
        output_std      -- The standard deviation of the training target values (the deltas).
        network         -- The pytorch trained model.
        inputs          -- The training inputs, so like the input rotations and curve values for each frame.
        training_set    -- The training dataset.
        dataset         -- The full dataset object, before splitting into train and test set.       
    """
    with ue.ScopedSlowTask(2, 'Extracting Morph Targets') as morph_task:
        morph_task.make_dialog(True)

        # Pre-multiply the morph target deltas with the standard deviation.
        morph_target_matrix = morph_tensor * output_std.unsqueeze(dim=-1)
        morph_task.enter_progress_frame(1)
        num_morph_targets = morph_target_matrix.shape[-1] + 1  # Add one, because we add the means as well.
        print('Num Morph Targets: ', num_morph_targets)

        # Store the means as first morph target, then add the generated morphs to it.
        deltas = output_mean.cpu().detach().numpy().tolist()
        deltas.extend(morph_target_matrix.T.flatten().cpu().detach().numpy().tolist())
        training_model.get_model().set_morph_target_delta_floats(deltas)

        morph_task.enter_progress_frame(1)
        
    # Save the max(abs(weight)) of each morph target, over all training samples. 
    save_morphs_max_weights(training_model, network, inputs, training_set, dataset)


def save_morphs_max_weights(training_model, network, inputs, training_set, dataset):
    """Save the absolute maximum weight of each morph target, that has been seen during training.   
    This basically passes all inputs of all frames, and runs inference, then finds the maximum absolute value
    of each morph target over all those frames.

    Keyword arguments:
        training_model  -- The ML Deformer training model object.
        network         -- The pytorch trained model.
        inputs          -- The training inputs, so like the input rotations and curve values for each frame.
        training_set    -- The training dataset.
        dataset         -- The full dataset object, before splitting into train and test set.
    """
    # Create a data loader that contains all samples.
    # And then sample the network with all those inputs, to get the morph target weights.
    batch_size = 128
    dataloader = DataLoader(training_set, batch_size=batch_size, shuffle=False, collate_fn=dataset.collate)
    num_iters = (inputs.shape[0] // batch_size) + 1
    network.training = False

    with ue.ScopedSlowTask(num_iters, 'Extracting maximum morph weights') as morph_task:
        morph_task.make_dialog(True)
        for iter_index in range(0, num_iters):               
            input_tensor, _ = next(iter(dataloader))      
            outputs = network(input_tensor)
            
            # Calculate the min and max weight of each morph target, in the training data.
            min_values, min_indices = torch.min(outputs, 0)
            max_values, max_indices = torch.max(outputs, 0)
            abs_min_values = torch.abs(min_values)
            abs_max_values = torch.abs(max_values)
    
            # Get the maximum value of both absolute min/max.
            iter_max_values = torch.maximum(abs_min_values, abs_max_values)            
            final_max_values = torch.maximum(final_max_values, iter_max_values) if iter_index > 0 else iter_max_values
            morph_task.enter_progress_frame(1)

    network.training = True   

    # Pass the maximum values as array to the morph model class in c++.
    training_model.get_model().set_morph_targets_max_weights(final_max_values.flatten().cpu().detach().numpy().tolist())
