# -*- coding: utf-8 -*-
"""
Copyright Epic Games, Inc. All Rights Reserved.
"""
import struct
import time
import unreal as ue
import os
import platform
import numpy as np
import torch
from torch.utils.data import DataLoader

try:
    from torch.utils.tensorboard import SummaryWriter

    has_tensorboard = True
except ImportError:
    has_tensorboard = False

from importlib import reload
import mldeformer.tensorboard_helpers
import mldeformer.training_helpers
import mldeformer.morph_helpers

# Reload some modules, so we don't have to restart the UE editor after editing their code.
reload(mldeformer.tensorboard_helpers)
reload(mldeformer.training_helpers)
reload(mldeformer.morph_helpers)

# Set this to True if you want to use Tensorboard to track model performance.
dev_mode = False
dev_mode &= has_tensorboard


def save_neural_morph_mlp(network, file_writer, model_mode):
    """Write an MLP using a given file writer.

    Keyword arguments:
        network                     -- The pytorch model.
        file_writer                 -- The file object as returned by the open(filename, "wb") command.
        model_mode                  -- 0=Local mode, 1=Global mode.
    """
    # Write the fourcc.
    fourcc = b'NMLP'
    file_writer.write(fourcc)

    # Write the version.
    version = 1
    file_writer.write(version.to_bytes(4, byteorder='little', signed=True))

    # Write the number of layers.
    num_layers = len(network.weighted_layers)
    file_writer.write(num_layers.to_bytes(4, byteorder='little', signed=True))

    # Write the weights and biases.
    for index, layer in enumerate(network.weighted_layers):
        weights = layer.weight.T
        biases = layer.bias.T

        if model_mode == 0:
            # Make the number of bones the first dimension, so we get something like:
            # [NumBones][Rows][Columns] instead of [Rows][Columns][NumBones]
            weights = torch.swapaxes(weights, 0, 2)
            weights = torch.swapaxes(weights, 1, 2)
            biases = torch.swapaxes(biases, 0, 2)
            biases = torch.swapaxes(biases, 1, 2)
            layer_header = struct.pack('<iiii',
                                       int(weights.shape[1]),
                                       int(weights.shape[2]),
                                       int(torch.numel(weights)),
                                       int(torch.numel(biases)))
        else:
            assert model_mode == 1, 'Expecting global mode (mode 1)'
            layer_header = struct.pack('<iiii',
                                       int(weights.shape[0]),
                                       int(weights.shape[1]),
                                       int(torch.numel(weights)),
                                       int(torch.numel(biases)))

        file_writer.write(layer_header)

        weight_data = weights.ravel().cpu().detach().numpy().tolist()
        bias_data = biases.ravel().cpu().detach().numpy().tolist()
        file_writer.write(struct.pack('<' + 'f' * len(weight_data), *weight_data))
        file_writer.write(struct.pack('<' + 'f' * len(bias_data), *bias_data))


def save_neural_morph_network(network,
                              filename: str,
                              model_mode: int,
                              num_inputs: int,
                              num_outputs: int,
                              num_hidden_layers: int,
                              num_units_per_hidden_layer: int,
                              num_morphs_per_bone: int,
                              num_bones: int,
                              num_curves: int,
                              num_floats_per_curve: int,
                              inputs_mean,
                              inputs_std,
                              groups: list):
    """Save the neural morph network into its own file format.
    The data saved in this file is read after training, to create setup a neural network with custom inference.
    This is specific to the Neural Morph Model, to get maximum performance at runtime.

    Keyword arguments:
        network                     -- The pytorch model.
        filename                    -- The output filename to write this model to.
        model_mode                  -- 0=Local mode, 1=Global mode.
        num_inputs                  -- The number of network inputs.
        num_outputs                 -- The number of network outputs.
        num_hidden_layers           -- The number of hidden layers.
        num_units_per_hidden_layer  -- The number of units per hidden layer.
        num_morphs_per_bone         -- The number of morphs per bone, used for the local mode, otherwise set to 0.
        num_bones                   -- The number of bones used as input.
        num_curves                  -- The number of curves used as input.
        num_floats_per_curve        -- The number of floats per curve input.
        inputs_mean                 -- The mean of the input data.
        inputs_std                  -- The standard deviation of the inputs.
        groups                      -- The 2D list (a list lists) of groups (bone and curve groups).
    """
    try:
        with open(filename, "wb") as f:
            # Write the fourcc.
            fourcc = b'NMMN'  # Neural Morph Model Network.
            f.write(fourcc)

            # Write the version.
            version = 3
            f.write(version.to_bytes(4, byteorder='little', signed=True))

            num_groups = len(groups)
            num_items_per_group = len(groups[0]) if groups else 0

            # Write the info header.
            info = struct.pack('<iiiiiiiiiii',
                               int(model_mode),
                               int(num_inputs),
                               int(num_hidden_layers),
                               int(num_units_per_hidden_layer),
                               int(num_outputs),
                               int(num_morphs_per_bone),
                               int(num_bones),
                               int(num_curves),
                               int(num_floats_per_curve),
                               int(num_groups),
                               int(num_items_per_group))
            f.write(info)
            print(f'Saving neural morph network:')
            print('\tMode:             {0}'.format('Local' if model_mode == 0 else 'Global'))
            print(f'\tInputs:           {num_inputs}')
            print(f'\tOutputs:          {num_outputs}')
            print(f'\tHidden layers:    {num_hidden_layers}')
            print(f'\tUnits per layer:  {num_units_per_hidden_layer}')
            print(f'\tMorphs per bone:  {num_morphs_per_bone}')
            print(f'\tNum bones:        {num_bones}')
            print(f'\tNum curves:       {num_curves}')
            print(f'\tFloats per curve: {num_floats_per_curve}')
            print(f'\tNum groups:       {num_groups}')
            print(f'\tItems per group:  {num_items_per_group}')

            # Write input std and mean.
            inputs_std_list = inputs_std.ravel().cpu().detach().numpy().tolist()
            inputs_mean_list = inputs_mean.ravel().cpu().detach().numpy().tolist()
            assert num_inputs == len(inputs_std_list), 'Unexpected number of inputs'
            f.write(struct.pack('<' + 'f' * len(inputs_std_list), *inputs_std_list))
            f.write(struct.pack('<' + 'f' * len(inputs_mean_list), *inputs_mean_list))

            # Write the weights and biases.
            main_network = network.network
            save_neural_morph_mlp(main_network, f, model_mode)

            # Save the group neural network.
            groups_network = network.groups_network if model_mode == 0 and network.feature_groups is not None else None
            if groups_network:
                assert num_groups > 0, 'Expecting num groups to be larger than zero.'
                save_neural_morph_mlp(groups_network, f, model_mode)

    except IOError as e:
        print(f'Failed to write neural morph network to file {filename} because: {str(e)}')


def train(training_model, create_network_function, include_curves: bool) -> int:
    """Save the neural morph network into its own file format.
    The data saved in this file is read after training, to create setup a neural network with custom inference.
    This is specific to the Neural Morph Model, to get maximum performance at runtime.

    Keyword arguments:
        training_model          -- The ML Deformer training model.
        create_network_function -- The function that will create the pytorch model.
        include_curves          -- Should we include curves during training?
        
    Returns:
        An integer that represents the training process result. Possible return codes:
        0 = Training successfully completed.
        1 = Training aborted, but partially trained model can be used.
        2 = Training aborted, but there is no partially trained data we can use.
    """
    training_state = 'none'

    # Get the training directory and clean it, or recreate it if needed.
    training_dir = mldeformer.training_helpers.get_training_dir(training_model)
    mldeformer.training_helpers.prepare_training_folder(training_dir, list())

    # Extract some training settings from the model.
    model = training_model.get_model()
    batch_size = model.batch_size
    num_iters = model.num_iterations
    lr = model.learning_rate
    regularization_factor = model.regularization_factor

    if torch.cuda.is_available():
        device = 'cuda'
    else:
        device = 'cpu'
    print(f'Training using device: {device}')

    # Init the random seed to a fixed one, so we always get the same result when we train multiple times.
    seed = 777
    np.random.seed(seed)
    torch.manual_seed(seed)

    # Get some numbers for the inputs and outputs.
    num_floats_per_curve = 6 if model.mode == 0 else 1
    num_bones = training_model.get_number_sample_transforms()
    num_samples = training_model.num_samples()
    num_bone_values = 6 * num_bones  # 2 columns of 3x3 rotation matrix per bone, so 3x2.
    num_curve_values = training_model.get_number_sample_curves() * num_floats_per_curve if include_curves else 0
    num_vertices = training_model.get_number_sample_deltas()
    num_delta_values = 3 * num_vertices  # xyz per vertex delta.
    num_inputs = num_bone_values + num_curve_values

    # Create the tensorboard summary writer in the intermediate folder.
    if dev_mode:
        run_index = mldeformer.tensorboard_helpers.get_next_run_index(training_dir)
        tensorboard_writer = init_tensorboard(training_model, training_dir, run_index)
    else:
        tensorboard_writer = None

    # Compute all inputs/outputs if needed.
    inputs_filename, outputs_filename = mldeformer.training_helpers.get_inputs_outputs_filename(training_dir)
    try:
        # If the input and output files don't exist, or the sizes don't match or our
        # input settings to the network changed, then regenerate.
        input_output_files_exist = os.path.exists(inputs_filename) and os.path.exists(outputs_filename)
        if (not input_output_files_exist) or training_model.get_needs_resampling():
            sampling_start_time = time.time()
            mldeformer.training_helpers.generate_inputs_outputs(
                training_model=training_model,
                inputs_filename=inputs_filename,
                outputs_filename=outputs_filename,
                data_start_time=sampling_start_time,
                include_curves=include_curves,
                num_inputs_per_curve=num_floats_per_curve)
            data_elapsed_time = time.time() - sampling_start_time
            print(f'Calculating inputs and outputs took {data_elapsed_time:.0f} seconds.')

    except GeneratorExit as message:
        ue.log_warning('Sampling frames canceled by user.')
        if str(message) == 'CannotUse':
            training_state = 'aborted_cant_use'
            return 2  # 'aborted_cant_use'
        else:
            training_state = 'aborted'
            return 1  # 'aborted'

    # Now dataset is constructed, reload memory mapped files in read-only mode.
    inputs = np.memmap(inputs_filename, dtype=np.float32, mode='r', shape=(num_samples, num_inputs))
    outputs = np.memmap(outputs_filename, dtype=np.float32, mode='r', shape=(num_samples, num_delta_values))

    # Create the dataset.
    dataset = mldeformer.training_helpers.TensorUploadDataset(inputs, outputs, device)

    # Split into train and test set.
    if dev_mode:
        test_dataset_percentage = 0.2  # 20% test set, 80% training set.
        train_size = int((1.0 - test_dataset_percentage) * len(dataset))
        test_size = len(dataset) - train_size
        train_dataset, test_dataset = torch.utils.data.random_split(dataset, [train_size, test_size])
        print(f'Split dataset of {len(dataset)} items into a training set of {len(train_dataset)} ' +
              f'and test set of {len(test_dataset)} items')
    else:
        test_dataset = None
        train_dataset = dataset

    with ue.ScopedSlowTask(4, 'Preparing for training') as training_task:
        training_task.make_dialog(True)

        # Create the data loader on the training set.
        dataloader = DataLoader(
            train_dataset,
            batch_size=batch_size,
            shuffle=True,
            collate_fn=dataset.collate)

        # Create the data loader on the test set.
        if dev_mode:
            test_dataloader = DataLoader(
                test_dataset,
                batch_size=batch_size,
                shuffle=True,
                collate_fn=dataset.collate)
        else:
            test_dataloader = None

        training_task.enter_progress_frame(1)

        # Input uses simple mean
        input_mean = inputs.mean(axis=0)

        # Input std is averaged for each type of input (bone rotations / curves)
        input_std = np.ones_like(input_mean)
        if num_bone_values > 0:
            input_std[:num_bone_values] = inputs[:, :num_bone_values].std(axis=0).mean() + 1e-5
        if num_curve_values > 0:
            input_std[num_bone_values:] = inputs[:, num_bone_values:].std(axis=0).mean() + 1e-5

        # Output uses simple mean and std
        output_mean = outputs.mean(axis=0)
        output_std = outputs.std(axis=0)

        # Create tensors for the mean and standard deviations.
        input_mean = torch.tensor(input_mean, device=device)
        input_std = torch.tensor(input_std, device=device)
        output_mean = torch.tensor(output_mean, device=device)
        output_std = torch.tensor(output_std, device=device)

        training_task.enter_progress_frame(1)

        # Build the list of lists that represents the bone groups.
        # Every list will contain the same number of items.
        # This basically turns al list like: [0, 4, 6, 7, 4, 5] into [[0, 4, 6], [7, 4, 5]].
        num_bone_groups = training_model.get_num_bone_groups()
        feature_groups = None
        if num_bone_groups > 0:
            feature_groups = list()
            bone_group_indices = training_model.generate_bone_group_indices()
            assert len(bone_group_indices) % num_bone_groups == 0, \
                'All bone groups must have the same number of bones'
            for i in range(num_bone_groups):
                num_bone_group_items = len(bone_group_indices) // num_bone_groups
                start_index = i * num_bone_group_items
                group_items = bone_group_indices[start_index: start_index + num_bone_group_items]
                feature_groups.append(list(group_items))

        # Do the same for the curves, and attach them to the list.
        num_curve_groups = training_model.get_num_curve_groups()
        if num_curve_groups > 0:
            if feature_groups is None:
                feature_groups = list()
            curve_group_indices = training_model.generate_curve_group_indices()
            assert len(curve_group_indices) % num_curve_groups == 0, \
                'All curve groups must have the same number of curves'
            for i in range(num_curve_groups):
                num_curve_group_items = len(curve_group_indices) // num_curve_groups
                start_index = i * num_curve_group_items
                group_items = curve_group_indices[start_index: start_index + num_curve_group_items]
                for c in range(len(group_items)):
                    group_items[c] = group_items[c] + num_bones
                feature_groups.append(list(group_items))

        print('Feature groups:', feature_groups)

        # Create the neural network.
        hidden_size = model.local_num_neurons_per_layer if model.mode == 0 else model.global_num_neurons_per_layer
        num_layers = model.local_num_hidden_layers if model.mode == 0 else model.global_num_hidden_layers
        num_morph_targets = model.local_num_morph_targets_per_bone if model.mode == 0 else model.global_num_morph_targets
        network = create_network_function(
            num_vertices=num_vertices,
            num_inputs=num_inputs,
            num_morph_targets=num_morph_targets,
            num_bones=num_bones,
            num_hidden_layers=num_layers,
            num_units_per_hidden_layer=hidden_size,
            feature_groups=feature_groups,
            device=device,
            input_mean=input_mean,
            input_std=input_std,
            output_mean=output_mean,
            output_std=output_std
        ).to(device)

        training_task.enter_progress_frame(1)

        # Create the optimizer and scheduler.
        optimizer = torch.optim.Adam(network.parameters(), lr=lr)
        lr_decay = model.learning_rate_decay
        scheduler = torch.optim.lr_scheduler.StepLR(optimizer, step_size=1000, gamma=lr_decay)

        training_task.enter_progress_frame(1)

    # Network training loop.    
    try:
        training_start_time = time.time()
        with ue.ScopedSlowTask(num_iters, 'Training Model') as training_task:
            training_task.make_dialog(True)
            rolling_loss = []

            for i in range(num_iters):
                # Stop if the user has pressed Cancel in the UI.
                if training_task.should_cancel():
                    raise GeneratorExit()

                # Set all tensor gradients to zero.
                optimizer.zero_grad()

                # Get a batch of training data.
                x, y = next(iter(dataloader))

                # Compute the loss.
                loss = torch.mean(torch.abs(y - network.forward(x)))
                error_in_cm = loss.item()

                # L1 Regularization.
                if regularization_factor > 0.0:
                    loss += torch.mean(torch.abs(network.morph_target_matrix)) * regularization_factor

                loss.backward()
                optimizer.step()

                # Get the loss.
                rolling_loss.append(error_in_cm)
                rolling_loss = rolling_loss[-1000:]

                # Get some other values.
                avg_error_cm = np.mean(rolling_loss)
                current_lr = scheduler.get_last_lr()[0]

                # Write tensorboard scalars.
                if dev_mode:
                    # Evaluate test set.
                    if i % 5 == 0:
                        x_test, y_test = next(iter(test_dataloader))
                        test_loss = torch.mean(torch.abs(y_test - network.forward(x_test)))
                        if tensorboard_writer:
                            tensorboard_writer.add_scalar('loss/test', test_loss, i + 1)

                if tensorboard_writer:
                    tensorboard_writer.add_scalar('loss/train', loss, i + 1)
                    tensorboard_writer.add_scalar('lr/train', current_lr, i + 1)

                if torch.cuda.is_available() and device != 'cpu':
                    cuda_allocated_gb = torch.cuda.memory_allocated(device) / (1024 * 1024 * 1024)

                # Decay the learning rate.
                scheduler.step()

                # Calculate passed and estimated remaining time, and report progress.
                passed_time_string, est_time_remaining_string = \
                    mldeformer.training_helpers.generate_time_strings(i, num_iters, training_start_time)

                progress_string = \
                    f'Training iteration: {i + 1:6d} of {num_iters} - ' + \
                    f'Time: {passed_time_string} - Left: {est_time_remaining_string} - '
                if torch.cuda.is_available() and device != 'cpu':
                    progress_string += f'GPU: {cuda_allocated_gb:.2f} gb - '
                progress_string += f'Avg loss: {avg_error_cm:.5f} cm'
                training_task.enter_progress_frame(1, progress_string)
                if i % 100 == 0 or i == num_iters - 1:
                    print(progress_string + f' - lr: {current_lr:.8f}')
            print('Model successfully trained.')
            training_state = 'succeeded'
            return 0  # 'succeeded'

    except GeneratorExit as message:
        ue.log_warning('Training canceled by user.')
        training_state = 'aborted'
        return 1  # 'aborted'

    finally:
        # Extract the morph targets.
        mldeformer.morph_helpers.extract_morph_targets(
            morph_tensor=network.morph_target_matrix,
            training_model=training_model,
            output_mean=output_mean,
            output_std=output_std,
            network=network,
            inputs=inputs,
            training_set=train_dataset,
            dataset=dataset)

        # Close the tensorboard writer. 
        if dev_mode:
            tensorboard_writer.close()

        # Save the trained network to a file.
        use_onnx = False
        if use_onnx:
            network.eval()
            if platform.system() != "Linux":
                # Save final version.
                x, _ = next(iter(dataloader))
                torch.onnx.export(
                    network, x[:1],
                    os.path.join(training_dir, 'NeuralMorphModel.onnx'),
                    verbose=False,
                    export_params=True,
                    input_names=['InputParams'],
                    output_names=['OutputPredictions'])
            else:
                ue.log_warning('Pytorch on linux does not support onnx export.')
                training_state = 'aborted'
                model_path = os.path.join(training_dir, 'NeuralMorphModel.pt')
                model_dict_path = os.path.join(training_dir, 'NeuralMorphModel_StateDict.pth')
                torch.save(network, model_path)
                torch.save(network.state_dict(), model_dict_path)
        else:
            # Save to the Neural Morph Model Network format.
            num_outputs = model.local_num_morph_targets_per_bone * num_bones if model.mode == 0 else model.global_num_morph_targets
            model_mode = 0 if model.mode == 0 else 1
            save_neural_morph_network(
                network=network,
                filename=os.path.join(training_dir, 'NeuralMorphModel.nmn'),
                model_mode=model_mode,
                num_inputs=num_inputs,
                num_outputs=num_outputs,
                num_hidden_layers=num_layers,
                num_units_per_hidden_layer=hidden_size,
                num_morphs_per_bone=model.local_num_morph_targets_per_bone if model_mode == 0 else 0,
                num_bones=num_bones,
                num_curves=num_curve_values,
                num_floats_per_curve=num_floats_per_curve,
                inputs_mean=input_mean,
                inputs_std=input_std,
                groups=feature_groups if feature_groups else list())

        # Remove memory mapped files.
        outputs._mmap.close()
        inputs._mmap.close()

        if torch.cuda.is_available():
            torch.cuda.empty_cache()


def init_tensorboard(training_model, training_dir: str, run_index: int):
    """Initialize tensorboard for this model, and return the SummaryWriter for this session.

    Keyword arguments:
        training_model   -- The ML Deformer training model.
        training_dir     -- The training folder for this model.
        run_index        -- The run index of this training session.
    """
    # Get some training settings.
    num_samples = training_model.num_samples()
    num_iters = training_model.get_model().num_iterations
    batch_size = training_model.get_model().batch_size
    lr = training_model.get_model().learning_rate
    num_morph_targets_per_bone = training_model.get_model().local_num_morph_targets_per_bone
    regularization = training_model.get_model().regularization_factor
    model = training_model.get_model()
    lr_string = f'{lr:.6f}'.rstrip('0').rstrip('.')
    lr_string = lr_string.split('.')[1]
    reg_string = f'{regularization:.6f}'.rstrip('0').rstrip('.')
    mode_string = 'local' if model.mode == 0 else 'global'
    morphs_per_bone_string = f'{num_morph_targets_per_bone}mtpb_' if model.mode == 0 else ''
    num_transforms = training_model.get_number_sample_transforms()
    num_local_morphs = num_transforms * model.local_num_morph_targets_per_bone
    total_morphs = num_local_morphs if model.mode == 0 else model.global_num_morph_targets
    num_hidden_layers = model.local_num_hidden_layers if model.mode == 0 else model.global_num_hidden_layers
    num_neurons_per_layer = model.local_num_neurons_per_layer if model.mode == 0 else model.global_num_neurons_per_layer
    num_bone_groups = training_model.get_num_bone_groups()
    num_curve_groups = training_model.get_num_curve_groups()

    # Build a Tensorboard session name based on all training settings.
    session_name = \
        f'{model.get_outer().get_name()}_' + \
        f'run{run_index:03d}_' + \
        f'{mode_string}_' + \
        f'{total_morphs}mt_' + \
        f'{morphs_per_bone_string}' + \
        f'{num_samples}s_' + \
        f'{num_hidden_layers}l_' + \
        f'{num_neurons_per_layer}u_' + \
        f'{num_iters}it_' + \
        f'{batch_size}b_' + \
        f'{lr_string}lr_' + \
        f'{num_bone_groups}bg_' + \
        f'{num_curve_groups}cg_' + \
        f'{reg_string}reg'

    # Create and get the tensorboard data folder.
    tensorboard_dir = mldeformer.tensorboard_helpers.prepare_tensorboard_dir(training_dir)

    # Create a SummaryWriter for this session. 
    tensorboard_dir = tensorboard_dir + f'/{session_name}'
    tensorboard_writer = SummaryWriter(log_dir=tensorboard_dir, flush_secs=5)

    # Add some easy to read description of all training settings.
    # This will appear inside the Text section of Tensorboard.
    session_description = \
        f'Asset: {model.get_outer().get_name()}<br>' + \
        f'Run: {run_index}<br>' + \
        f'Mode: {mode_string}<br>' + \
        f'Morph Targets: {total_morphs}<br>' + \
        f'Iterations: {num_iters}<br>' + \
        f'Num Samples: {num_samples}<br>' + \
        f'Num Hidden Layers: {num_hidden_layers}<br>' + \
        f'Num Units Per Layer: {num_neurons_per_layer}<br>' + \
        f'Batch Size: {batch_size}<br>' + \
        f'Learning Rate: {lr:.6f}<br>' + \
        f'Regularization Factor: {regularization:.6f}<br>' + \
        f'Num Transforms: {training_model.get_number_sample_transforms()}<br>' + \
        f'Num Curves: {training_model.get_number_sample_curves()}<br>' + \
        f'Num Bone Groups: {num_bone_groups}<br>' + \
        f'Num Curve Groups: {num_curve_groups}'
    tensorboard_writer.add_text('description', session_description)
    return tensorboard_writer
