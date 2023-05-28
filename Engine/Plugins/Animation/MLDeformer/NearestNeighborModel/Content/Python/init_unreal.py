# -*- coding: utf-8 -*-
"""
NearestNeighborTrainingModel class.

Copyright Epic Games, Inc. All Rights Reserved.
"""

from importlib import reload
import unreal

import nearestneighbormodel
serialization_helpers_success = True
try:
    import serialization_helpers
except ImportError as e:
    serialization_helpers_success = False


@unreal.uclass()
class NearestNeighborPythonTrainingModel(unreal.NearestNeighborTrainingModel):
    @unreal.ufunction(override=True)
    def train(self):
        reload(nearestneighbormodel)
        return nearestneighbormodel.train(self)

    @unreal.ufunction(override=True)
    def update_nearest_neighbor_data(self):
        reload(nearestneighbormodel)
        return nearestneighbormodel.update_nearest_neighbor_data(self)

    @unreal.ufunction(override=True)
    def kmeans_cluster_poses(self, part_id):
        reload(nearestneighbormodel)
        return nearestneighbormodel.kmeans_cluster_poses(self, part_id)

@unreal.uclass()
class NearestNeighborPythonOptimizedNetworkLoader(unreal.NearestNeighborOptimizedNetworkLoader):
    @unreal.ufunction(override=True)
    def does_meet_prerequisites(self):
        global serialization_helpers_success
        return serialization_helpers_success

    @unreal.ufunction(override=True)
    def load_optimized_network(self, onnx_path):
        global serialization_helpers_success
        if serialization_helpers_success:
            reload(serialization_helpers)
            return serialization_helpers.load_optimized_network(self, onnx_path)
        else:
            return False