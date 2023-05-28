# -*- coding: utf-8 -*-
"""
Copyright Epic Games, Inc. All Rights Reserved.
"""
import json
import os
import unreal as ue


def get_runs_filename(training_dir: str) -> str:
    """Get the filename for the json file that contains the current runs counter.
    This counter is basically just an integer that gets increased each time you train.
    The counter can be used inside the name of the Tensorboard session.   

    Keyword arguments:
        training_dir    -- The model's training directory.

    Returns:
        The full path to the runs json file.
    """
    return os.path.join(training_dir, 'runs.json')


def save_runs_json(training_dir: str, dict_to_write: dict):
    """Save the runs json file.

    Keyword arguments:
        training_dir    -- The model's training directory.
        dict_to_write   -- The dictionary to write into the json file.
    """
    try:
        with open(get_runs_filename(training_dir), 'w') as outfile:
            json.dump(dict_to_write, outfile, indent=4, sort_keys=True)
    except IOError as e:
        pass


def read_runs_json(training_dir: str) -> dict:
    """Read the runs json file as a dictionary.

    Keyword arguments:
        training_dir    -- The model's training directory.

    Returns:
        A dictionary with the runs information.
    """
    try:
        with open(get_runs_filename(training_dir)) as runs_file:
            runs = json.load(runs_file)
            return runs
    except IOError as e:
        pass
    runs = dict()
    runs['LastRunIndex'] = 0
    return runs


def get_next_run_index(training_dir: str) -> int:
    """Get the next run index, which basically increases the run counter, and updates the json file.

    Keyword arguments:
        training_dir    -- The model's training directory.

    Returns:
        The new runs index integer.
    """
    # read_runs_json(training_dir)
    runs_dict = read_runs_json(training_dir)
    run_index = int(runs_dict['LastRunIndex']) + 1 if 'LastRunIndex' in runs_dict else 1
    runs_dict['LastRunIndex'] = run_index
    save_runs_json(training_dir, runs_dict)
    return run_index


def prepare_tensorboard_dir(training_dir: str) -> str:
    """Create a folder that can hold the Tensorboard data, and return the path to it.

    Keyword arguments:
        training_dir    -- The model's training directory.

    Returns:
        The path to the folder that can hold the tensorboard data.
    """
    tensorboard_dir = os.path.join(training_dir, 'TensorBoard')
    tensorboard_dir = ue.Paths.convert_relative_path_to_full(tensorboard_dir)
    if not os.path.exists(tensorboard_dir):
        os.makedirs(tensorboard_dir)
    return tensorboard_dir
