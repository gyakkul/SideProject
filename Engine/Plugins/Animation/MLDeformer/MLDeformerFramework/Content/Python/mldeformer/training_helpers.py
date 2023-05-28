# -*- coding: utf-8 -*-
"""
Copyright Epic Games, Inc. All Rights Reserved.
"""
import unreal as ue
import os
import torch
from torch.utils.data import Dataset
import mldeformer.tensorboard_helpers
import numpy as np
import datetime
import time


class TensorUploadDataset(Dataset):
    def __init__(self, inputs, outputs, device):
        self.inputs = inputs
        self.outputs = outputs
        self.device = device

    def __getitem__(self, index):
        return self.inputs[index], self.outputs[index]

    def __len__(self):
        return len(self.inputs)

    def collate(self, args):
        return (torch.tensor(np.concatenate([a[0][None] for a in args], axis=0), device=self.device),
                torch.tensor(np.concatenate([a[1][None] for a in args], axis=0), device=self.device))


def get_training_dir(training_model) -> str:
    """Get the training directory for a given training model.

    Keyword arguments:
        training_model  -- The ML Deformer training model.

    Returns:
        A string containing the full folder path.
    """
    intermediate_dir = ue.Paths.convert_relative_path_to_full(ue.Paths.project_intermediate_dir())
    model_name = str(training_model.get_model().get_class().get_fname())
    training_dir = os.path.join(intermediate_dir, model_name)
    return training_dir


def get_inputs_outputs_filename(training_dir: str):
    """Get the filenames that can be used to make memory mapped files for the input and output training data.
    Please note that this does not create any files or so, it just returns the filenames.

    Keyword arguments:
        training_dir        -- The training directory for this model.

    Returns:
        inputs_filename     -- The filename for the inputs. 
        outputs_filename    -- The filename for the outputs.
    """
    inputs_filename = os.path.join(training_dir, 'inputs.bin')
    outputs_filename = os.path.join(training_dir, 'outputs.bin')
    return inputs_filename, outputs_filename


def prepare_training_folder(training_dir: str, ignore_list: list = None):
    """Prepare the training folder. This will automatically create the folder if it doesn't exist.
    It also remove all existing files inside this folder, except files that are inside some ignore list.
    This function automatically adds the inputs and outputs file as returned by get_inputs_outputs_filename to the 
    ignore list. Also the Tensorboard runs file will be automatically added.

    Keyword arguments:
        training_dir        -- The training directory for this model.
        ignore_list         -- The list of filenames (strings) to ignore.
    """
    inputs_filename, outputs_filename = get_inputs_outputs_filename(training_dir)
    if ignore_list is None:
        ignore_list = list()
    ignore_list.append(inputs_filename)
    ignore_list.append(outputs_filename)
    ignore_list.append(mldeformer.tensorboard_helpers.get_runs_filename(training_dir))
    if os.path.exists(training_dir):
        for f in os.listdir(training_dir):
            filename = os.path.join(training_dir, f)
            if filename not in ignore_list:
                if os.path.isfile(filename):
                    os.remove(filename)

    # If our intermediate training folder doesn't exist yet, create it.
    if not os.path.exists(training_dir):
        os.makedirs(training_dir)


def generate_time_strings(cur_iteration: int, total_num_iterations: int, start_time: float):
    """Generate the elapsed and remaining time strings that we show in the progress window.   

    Keyword arguments:
        cur_iteration           -- The current training iteration.
        total_num_iterations    -- The total number of iterations.
        start_time              -- The start time as returned by time.time().

    Returns:
        passed_time_string          -- The string containing the passed time.
        est_time_remaining_string   -- The string containing the estimated remaining time.   
    """
    iterations_remaining = total_num_iterations - cur_iteration
    passed_time = time.time() - start_time
    avg_iteration_time = passed_time / (cur_iteration + 1)
    est_time_remaining = iterations_remaining * avg_iteration_time
    est_time_remaining_string = str(datetime.timedelta(seconds=int(est_time_remaining)))
    passed_time_string = str(datetime.timedelta(seconds=int(passed_time)))
    return passed_time_string, est_time_remaining_string


def generate_inputs_outputs(training_model,
                            inputs_filename: str,
                            outputs_filename: str,
                            data_start_time: float,
                            include_curves: bool,
                            num_inputs_per_curve: int = 1):
    """Generate the training input and output data, stored in memory mapped files.
    This will create the memory mapped files, sample the inputs and outputs, and save the memory mapped files.
    A SlowTask dialog will be created during sampling of all the input samples.
    
    Keyword arguments:
        training_model       -- The ML Deformer training model.
        inputs_filename      -- The filename to use for the memory mapped file that contains the training inputs.
        outputs_filename     -- The filename to use for the memory mapped file that contains the training outputs.
        data_start_time      -- The start time when we started sampling.
        include_curves       -- Should we include sampling curves?
    """   
    training_model.set_num_floats_per_curve(num_inputs_per_curve)
    num_samples = training_model.num_samples()
    num_bone_values = 6 * training_model.get_number_sample_transforms()  # 2 columns of 3x3 rotation matrix per bone.
    num_curve_values = num_inputs_per_curve * training_model.get_number_sample_curves() if include_curves else 0
    num_delta_values = 3 * training_model.get_number_sample_deltas()  # xyz per vertex delta.

    # Create inputs/outputs. Memory map inputs and outputs.
    num_inputs = num_bone_values + num_curve_values
    inputs = np.memmap(inputs_filename, dtype=np.float32, mode='w+', shape=(num_samples, num_inputs))
    outputs = np.memmap(outputs_filename, dtype=np.float32, mode='w+', shape=(num_samples, num_delta_values))

    # Iterate over all sample frames.
    with ue.ScopedSlowTask(num_samples, 'Sampling Frames') as sampling_task:
        sampling_task.make_dialog(True)
        for i in range(num_samples):
            # Stop if the user has pressed Cancel in the UI.
            # The 'CannotUse' makes sure the user doesn't get offered to use the partially trained network, because
            # at this stage we didn't even create and train a network yet.
            if sampling_task.should_cancel():
                raise GeneratorExit('CannotUse')

            # Set the sample.
            sample_exists = training_model.set_current_sample_index(int(i))
            assert sample_exists

            # Copy inputs.
            inputs[i, :num_bone_values] = training_model.sample_bone_rotations
            if include_curves:
                inputs[i, num_bone_values:] = training_model.sample_curve_values

            # Copy outputs
            outputs[i] = training_model.sample_deltas

            # Calculate passed and estimated time and report progress.
            passed_time_string, est_time_remaining_string = generate_time_strings(i, num_samples, data_start_time)
            sampling_task.enter_progress_frame(
                1,
                f'Sampling frame {i + 1:6d} of {num_samples} - '
                f'Time: {passed_time_string} - Left: {est_time_remaining_string}')

    # Save the generated inputs and outputs.
    inputs._mmap.close()
    outputs._mmap.close()
