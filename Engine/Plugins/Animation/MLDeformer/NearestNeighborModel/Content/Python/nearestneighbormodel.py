# -*- coding: utf-8 -*-
"""
Copyright Epic Games, Inc. All Rights Reserved.
"""

import os
from os.path import join, isdir
import traceback
import logging
import time
import unreal as ue
import numpy as np
import torch
import torch.nn as nn
import datetime
from torch.utils.data import DataLoader

onnx_exist = True
try:
    import onnx
    import onnxruntime
except ImportError as e:
    onnx_exist = False

tensorboard_exist = True
try:
    from torch.utils.tensorboard import SummaryWriter
except ImportError as e:
    tensorboard_exist = False

sklearn_exist = True
try:
    from sklearn.decomposition import PCA
    from sklearn.cluster import KMeans
except ImportError as e:
    sklearn_exist = False

trimesh_exist = True
try:
    import trimesh
except ImportError as e:
    trimesh_exist = False

scipy_exist = True
try:
    from scipy.sparse.linalg import svds
except ImportError as e:
    scipy_exist = False

class TensorDataset:
    def __init__(self, inputs, outputs):
        self.inputs = inputs
        self.outputs = outputs

    def __getitem__(self, index):
        return self.inputs[index], self.outputs[index]

    def __len__(self):
        return len(self.inputs)


class MLPPCA(nn.Module):
    def __init__(self, dims, inputs_mean, inputs_std, outputs_mean, outputs_std):
        super(MLPPCA, self).__init__()
        layers=[]
        for i in range(len(dims)-2):
            layers+=[
                nn.Linear(dims[i],dims[i+1]),
                nn.BatchNorm1d(dims[i+1]),
                nn.PReLU()
            ]
        layers.append(nn.Linear(dims[-2],dims[-1]))
        self.model=nn.Sequential(*layers)

        self.register_buffer('inputs_mean', inputs_mean[None,:])
        self.register_buffer('inputs_std', inputs_std[None,:] + 1e-6)
        self.register_buffer('outputs_mean', outputs_mean[None,:])
        self.register_buffer('outputs_std', outputs_std[None,:] + 1e-6)

    def forward(self, x):
        x=(x-self.inputs_mean)/self.inputs_std
        return self.model(x)*self.outputs_std+self.outputs_mean

    def _apply(self, fn):
        super(MLPPCA, self)._apply(fn)
        self.inputs_mean = fn(self.inputs_mean)
        self.inputs_std = fn(self.inputs_std)
        self.outputs_mean = fn(self.outputs_mean)
        self.outputs_std = fn(self.outputs_std)

        return self


def generate_time_strings(cur_iteration, total_num_iterations, start_time):
    iterations_remaining = total_num_iterations - cur_iteration
    passed_time = time.time() - start_time
    avg_iteration_time = passed_time / (cur_iteration + 1)
    est_time_remaining = iterations_remaining * avg_iteration_time
    est_time_remaining_string = str(datetime.timedelta(seconds=int(est_time_remaining)))
    passed_time_string = str(datetime.timedelta(seconds=int(passed_time)))
    return passed_time_string, est_time_remaining_string

def get_device():
    if torch.cuda.is_available():
        device = 'cuda'
    else:
        device = 'cpu'
    return device

def load_torch_network(self, path):
    model = self.get_nearest_neighbor_model()
    assert(model is not None)

    input_dim = 3 * self.get_number_sample_transforms() 
    hidden_dims = self.get_model().get_hidden_layer_dims()
    output_dim = sum([model.get_pca_coeff_num(part_id) for part_id in range(model.get_num_parts())])
    dims = [input_dim] + list(hidden_dims) + [output_dim]

    inputs_mean = torch.zeros(input_dim)
    inputs_std = torch.zeros(input_dim)
    outputs_mean = torch.zeros(output_dim)
    outputs_std = torch.zeros(output_dim)

    network = MLPPCA(dims, inputs_mean, inputs_std, outputs_mean, outputs_std)
    network.load_state_dict(torch.load(path))

    return network

def has_error(return_code):
    return (return_code & 1) != 0

def update_nearest_neighbor_data(self):
    return_code = 0
    try:
        model = self.get_nearest_neighbor_model()
        assert(model is not None)
        num_parts = model.get_num_parts()

        dim_inputs = self.get_number_sample_transforms() * 3
        part_inputs = [None for part_id in range(num_parts)]
        part_deltas = [None for part_id in range(num_parts)]
        part_num_samples = [self.get_part_num_neighbors(part_id) for part_id in range(num_parts)]
        part_num_verts = [0 for part_id in range(num_parts)]

        total_tasks = 2 * sum(part_num_samples)
        pca_start = 0

        use_part_only_mesh = model.use_part_only_mesh
        if not use_part_only_mesh:
            num_sample_deltas = self.get_number_sample_deltas()
            num_delta_values = 3 * num_sample_deltas  # xyz per vertex delta
            delta_dtype = np.float32
            full_delta = np.empty(num_delta_values, dtype=delta_dtype)

            part_num_vts = [model.get_part_num_verts(part_id) for part_id in range(num_parts)]
            vertex_maps = [np.empty(part_num_vts[part_id], dtype=np.int32) for part_id in range(num_parts)]
            for part_id in range(num_parts):
                vertex_maps[part_id][:] = self.get_part_vertex_map(part_id)

        with ue.ScopedSlowTask(total_tasks, "Update nearest neighbor data") as update_task:
            update_task.make_dialog(True)
            for part_id in range(num_parts):
                return_code |= self.set_sampler_part_data(part_id)
                if has_error(return_code):
                    raise GeneratorExit('SetSamplerFailed')

                num_samples = part_num_samples[part_id]            
                num_verts = model.get_part_num_verts(part_id)
                part_num_verts[part_id] = num_verts

                inputs = np.empty((num_samples, dim_inputs), dtype = np.float32)
                deltas = np.empty((num_samples, num_verts * 3), dtype = np.float32)
                delta = np.empty(num_verts * 3, dtype = np.float32)

                for sample_id in range(num_samples):
                    if update_task.should_cancel():
                        raise GeneratorExit('Aborted')

                    if use_part_only_mesh:
                        return_code |= self.sample_part(part_id, int(sample_id))
                        if has_error(return_code):
                            raise GeneratorExit('SamplePartFailed')
                        deltas[sample_id,:] = self.part_sample_deltas
                    else:
                        sample_exists = self.set_current_sample_index(int(sample_id))
                        full_delta[:] = self.sample_deltas
                        deltas[sample_id,:] = full_delta.reshape((-1,3))[vertex_maps[part_id]].reshape(-1)


                    inputs[sample_id,:] = self.sample_bone_rotations
                    inputs[sample_id,:] = model.clip_inputs(inputs[sample_id,:].tolist())

                    update_task.enter_progress_frame(1, f'UpdateNearestNeighborData: sampling part {part_id}, frame {sample_id + 1:6d} of {num_samples:6d}')

                part_inputs[part_id] = inputs
                part_deltas[part_id] = deltas

            model_dir = model.get_model_dir()

            if onnx_exist:
                net_path = f'{model_dir}/NearestNeighborModel.onnx'
                ort_session = onnxruntime.InferenceSession(net_path, providers = ['CUDAExecutionProvider'])
            else:
                net_path = f'{model_dir}/NearestNeighborModel.pt'
                network = load_torch_network(self, net_path)
                device = get_device()
                network.to(device)
                network.eval()

            for part_id in range(num_parts):
                inputs = part_inputs[part_id]
                deltas = part_deltas[part_id]
                num_samples = part_num_samples[part_id]
                num_verts = part_num_verts[part_id]
                num_pca = model.get_pca_coeff_num(part_id)

                vertex_mean = np.empty(num_verts * 3, dtype = np.float32)
                vertex_mean[:] = model.vertex_mean(part_id)

                pca_basis = np.empty(num_pca * num_verts * 3, dtype = np.float32)
                pca_basis[:] = model.pca_basis(part_id)
                pca_basis = pca_basis.reshape((num_pca, num_verts * 3))

                coeffs = np.empty((num_samples, num_pca), dtype = np.float32)
                remaining_offsets = np.empty((num_samples, num_verts * 3), dtype = np.float32)

                for sample_id in range(num_samples):
                    if update_task.should_cancel():
                        raise GeneratorExit('Aborted')

                    if onnx_exist:
                        ort_inputs = {ort_session.get_inputs()[0].name : inputs[sample_id:sample_id+1]}
                        ort_outputs = ort_session.run(None, ort_inputs)
                        sample_coeff = ort_outputs[0][0][pca_start : pca_start + num_pca]
                    else:
                        with torch.no_grad():
                            inputs_i = torch.from_numpy(inputs[sample_id:sample_id+1]).to(device)
                            sample_coeff = network(inputs_i)[0][pca_start : pca_start + num_pca].cpu().numpy()

                    coeffs[sample_id, :] = sample_coeff
                    remaining_offsets[sample_id, :] = deltas[sample_id] - sample_coeff.dot(pca_basis) - vertex_mean

                    update_task.enter_progress_frame(1, f'UpdateNearestNeighborData: updating part {part_id}: frame {sample_id + 1:6d} of {num_samples:6d}')

                model.set_num_neighbors(part_id, num_samples)
                model.set_neighbor_coeffs(part_id, coeffs.reshape(-1).tolist())
                model.set_neighbor_offsets(part_id, remaining_offsets.reshape(-1).tolist())

                pca_start += num_pca

    except GeneratorExit as e:
        if str(e) == 'Aborted':
            ue.log_warning('Nearest neighbor update aborted by user')
            return_code = 2 # warning
        else:
            return_code = 1 # error
    except Exception as e:
        logging.error(e)
        logging.error(traceback.format_exc())
        return_code = 1

    return return_code

def find_nearest_neighbor(X,coeff):
    d2=(X-np.expand_dims(coeff,0))**2
    d=np.sum(d2,axis=1)
    return np.argmin(d)

def get_acc_arr(in_arr):
    out_arr = [0 for i in range(len(in_arr) + 1)]
    for i in range(len(in_arr)):
        out_arr[i+1] = out_arr[i] + in_arr[i]
    return out_arr

def kmeans_cluster_poses(self, part_id):
    results = []
    return_code = 0
    seed = 1234
    try:
        num_anims = self.get_kmeans_num_anims()
        num_anim_frames = [self.get_kmeans_anim_num_frames(anim_id) for anim_id in range(num_anims)]

        acc_anim_frames = [0 for i in range(num_anims + 1)]
        for anim_id in range(num_anims):
            acc_anim_frames[anim_id + 1] = acc_anim_frames[anim_id] + num_anim_frames[anim_id]

        def find_anim_and_frame(i, acc_anim_frames):
            for anim_id in range(num_anims):
                if i < acc_anim_frames[anim_id + 1]:
                    return anim_id, i - acc_anim_frames[anim_id]
            return num_anims - 1, num_anim_frames[-1] - 1

        total_frames = sum(num_anim_frames)
        dim_inputs = self.get_number_sample_transforms() * 3

        model = self.get_nearest_neighbor_model()
        assert(model is not None)
        model_dir = model.get_model_dir()

        if onnx_exist:
            net_path = f'{model_dir}/NearestNeighborModel.onnx'
            ort_session = onnxruntime.InferenceSession(net_path, providers = ['CUDAExecutionProvider'])
        else:
            net_path = f'{model_dir}/NearestNeighborModel.pt'
            network = load_torch_network(self, net_path)
            device = get_device()
            network.to(device)
            network.eval()

        num_parts = model.get_num_parts()
        part_coeffs = [[] for part_id in range(num_parts)]

        with ue.ScopedSlowTask(total_frames * num_parts, "KMeans sampling") as sample_task:
            sample_task.make_dialog(True)
            num_pca = model.get_pca_coeff_num(part_id)
            pca_start = model.get_pca_coeff_start(part_id)
            for anim_id in range(num_anims):
                sample_exists = self.sample_kmeans_anim(anim_id)
                num_frames = num_anim_frames[anim_id]
                for frame in range(num_frames):
                    sample_exists = self.sample_kmeans_frame(frame)
                    inputs = np.zeros(dim_inputs, dtype = np.float32)
                    inputs[:] = self.sample_bone_rotations

                    if onnx_exist:
                        ort_inputs = {ort_session.get_inputs()[0].name : inputs[None, :]}
                        ort_outputs = ort_session.run(None, ort_inputs)
                        part_coeffs[part_id].append(ort_outputs[0][0][pca_start : pca_start + num_pca])
                    else:
                        with torch.no_grad():
                            inputs_i = torch.from_numpy(inputs[None, :]).to(device)
                            part_coeffs[part_id].append(network(inputs_i)[0][pca_start : pca_start + num_pca].cpu().numpy())

                    sample_task.enter_progress_frame(1, f'Sampling Anim {anim_id}/{num_anims}, frame {frame}/{num_frames}')

        with ue.ScopedSlowTask(num_parts, "Running KMeans (this may take a while)") as kmeans_task:
            kmeans_task.make_dialog(True)
            n_clusters = self.get_kmeans_num_clusters()
            coeffs = np.array(part_coeffs[part_id])
            kmeans=KMeans(n_clusters=n_clusters,max_iter=10*n_clusters,n_init='auto',random_state=seed).fit(coeffs)

            anim_ids = []
            frames = []
            for i in range(n_clusters):
                center=kmeans.cluster_centers_[i]
                i = find_nearest_neighbor(coeffs, center)
                anim_id, frame = find_anim_and_frame(i, acc_anim_frames)
                anim_ids.append(anim_id)
                frames.append(frame)

            results = [int(item) for pair in zip(anim_ids, frames) for item in pair] 

    except Exception as e:
        logging.error(e)
        logging.error(traceback.format_exc())
        return_code = 1

    self.kmeans_results = results
    return return_code

def remove_files_in_dir(d, skip_files):
    if os.path.exists(d):
        for f in os.listdir(d):
            if not f in skip_files:
                file_path = os.path.join(d, f)
                if os.path.isfile(file_path):
                    os.remove(file_path)

def train(self):
    try:
        # Training Parameters
        seed = 1234
        batch_size = self.get_model().get_batch_size()
        num_epochs = self.get_model().get_num_epochs()
        lr = self.get_model().get_learning_rate()

        if torch.cuda.is_available():
            device = 'cuda'
        else:
            device = 'cpu'

        np.random.seed(seed)
        torch.manual_seed(seed)

        model = self.get_nearest_neighbor_model()
        assert(model is not None)
        skip_training = False
        use_debug_mode = False
        recompute_deltas = model.recompute_deltas
        recompute_pca = model.recompute_pca
        use_file_cache = model.use_file_cache

        training_dir = model.get_model_dir()

        # Recreate directory
        if not os.path.exists(training_dir):
            os.makedirs(training_dir)

        if use_debug_mode:
            unskinned = self.get_unskinned_vertex_positions()
            unskinned = np.array(unskinned).reshape((-1, 3))
            out_path = f'{training_dir}/unskinned.npy'
            np.save(out_path, unskinned)

            faces = self.get_mesh_index_buffer()
            faces = np.array(faces).reshape((-1,3))
            out_path = f'{training_dir}/topo.npy'
            np.save(out_path, faces)

        # Dataset
        num_samples = self.num_samples()
        num_bone_values = 3 * self.get_number_sample_transforms()  # x, y, z of the quaternions
        num_curve_values = self.get_number_sample_curves()
        num_sample_deltas = self.get_number_sample_deltas()
        num_delta_values = 3 * num_sample_deltas  # xyz per vertex delta

        num_parts = model.get_num_parts()

        # Create inputs/outputs. Memory map outputs array as it can be very large
        part_num_vts = [model.get_part_num_verts(part_id) for part_id in range(num_parts)]
        vertex_maps = [np.empty(part_num_vts[part_id], dtype=np.int32) for part_id in range(num_parts)]
        for part_id in range(num_parts):
            vertex_maps[part_id][:] = self.get_part_vertex_map(part_id)
        num_pca_basis = [model.get_pca_coeff_num(part_id) for part_id in range(num_parts)]

        if recompute_deltas:
            inputs = np.empty([num_samples, num_bone_values + num_curve_values], dtype=np.float32)

        delta_dtype = np.float32
        # delta_dtype = np.float64

        num_sum_deltas = sum([part_num_vts[part_id] for part_id in range(num_parts)])
        acc_part_num_vts = get_acc_arr(part_num_vts)
        def get_part_range(part_id):
            return range(acc_part_num_vts[part_id] * 3, acc_part_num_vts[part_id + 1] * 3)

        # Precompute all inputs/outputs
        if recompute_deltas:
            full_delta = np.empty(num_delta_values, dtype=delta_dtype)
            deltas = np.memmap(os.path.join(training_dir, f'deltas.bin'), dtype=delta_dtype, mode='w+', shape=(num_samples, num_sum_deltas * 3))

            data_start_time = time.time()
            with ue.ScopedSlowTask(num_samples, "Sampling Frames") as sampling_task:
                sampling_task.make_dialog(True)
                for i in range(num_samples):
                    # Stop if the user has pressed Cancel in the UI
                    if sampling_task.should_cancel():
                        raise GeneratorExit('CannotUse')

                    # Set the sample
                    sample_exists = self.set_current_sample_index(int(i))
                    assert (sample_exists)

                    # Copy inputs
                    inputs[i, :num_bone_values] = self.sample_bone_rotations
                    inputs[i, num_bone_values:] = self.sample_curve_values

                    # Copy outputs
                    full_delta[:] = self.sample_deltas
                    full_delta_reshaped = full_delta.reshape((-1,3))
                    for part_id in range(num_parts):
                        deltas[i, get_part_range(part_id)] = full_delta_reshaped[vertex_maps[part_id]].reshape(-1)

                    # Calculate passed and estimated time and report progress
                    passed_time_string, est_time_remaining_string = generate_time_strings(i, num_samples, data_start_time)
                    sampling_task.enter_progress_frame(1,
                                                       f'Sampling frame {i + 1:6d} of {num_samples:6d} - Time: {passed_time_string} - Left: {est_time_remaining_string}')

            data_elapsed_time = time.time() - data_start_time
            ue.log(f'Calculating inputs and outputs took {data_elapsed_time:.0f} seconds.')

            deltas._mmap.close()

        if use_file_cache:
            if recompute_deltas:
                np.save(join(training_dir, 'inputs.npy'), inputs)
            else:
                inputs=np.load(join(training_dir, 'inputs.npy'))

        # Now dataset is constructed, reload memory mapped file in read-only mode
        deltas = np.memmap(os.path.join(training_dir, f'deltas.bin'), dtype=delta_dtype, mode='r', shape=(num_samples, num_sum_deltas * 3))      

        if recompute_pca: 
            smooth_pca_basis = False
            basis_smooth_iter = model.basis_smooth_iter
            if basis_smooth_iter > 0:
                if not trimesh_exist:
                    ue.log_warning('Trimesh not found, skipping smoothing')
                if not scipy_exist:
                    ue.log_warning('Scipy not found, skipping smoothing')
                smooth_pca_basis = trimesh_exist and scipy_exist

            if smooth_pca_basis:
                unskinned = self.get_unskinned_vertex_positions()
                unskinned = np.array(unskinned).reshape((-1, 3))
                faces = self.get_mesh_index_buffer()
                faces = np.array(faces).reshape((-1,3))
                full_vertex_mean = np.mean(deltas, axis=0)      

            part_coeffs = [None for part_id in range(num_parts)]
            with ue.ScopedSlowTask(num_parts, 'Computing PCA Basis') as pca_task:
                pca_task.make_dialog(True)
                for part_id in range(num_parts):
                    if pca_task.should_cancel():
                        raise GeneratorExit('CannotUse')

                    part_deltas = deltas[:, get_part_range(part_id)].copy().reshape((num_samples, -1))
                    if sklearn_exist:
                        if smooth_pca_basis:
                            part_num_pca_basis = num_pca_basis[part_id]
                            part_num_pca_basis_smooth = part_num_pca_basis + 8
                            part_num_pca_basis_reortho = part_num_pca_basis + 4
                            vertex_mean = full_vertex_mean[get_part_range(part_id)].reshape((-1, 3))
                            part_tposed_mean = unskinned[vertex_maps[part_id]] + vertex_mean

                            avg_size_sample_range = range(10) # Use first 10 samples to calculate average delta size
                            avg_delta_size = np.mean(np.linalg.norm(part_deltas[avg_size_sample_range], axis = 1))

                            pca = PCA(n_components=part_num_pca_basis_smooth,random_state=seed)
                            pca.fit(part_deltas)
                            smoothed_pca_basis = np.empty((part_num_pca_basis_smooth, part_num_vts[part_id] * 3))

                            with ue.ScopedSlowTask(part_num_pca_basis_smooth, 'Smoothing PCA Basis') as smooth_task:
                                for basis_i in range(part_num_pca_basis_smooth):
                                    if smooth_task.should_cancel():
                                        raise GeneratorExit('CannotUse')
                                    basis_verts = unskinned.copy()
                                    basis_verts[vertex_maps[part_id]] = part_tposed_mean + pca.components_[basis_i].reshape((-1, 3)) * avg_delta_size
                                    mesh = trimesh.Trimesh(basis_verts, faces)
                                    trimesh.smoothing.filter_laplacian(mesh, iterations = basis_smooth_iter)
                                    smoothed_pca_basis[basis_i] = (mesh.vertices[vertex_maps[part_id]] - part_tposed_mean).reshape(-1) / avg_delta_size
                                    smooth_task.enter_progress_frame(1, f'Smoothing PCA Basis {basis_i + 1} of {part_num_pca_basis_smooth}')

                            with ue.ScopedSlowTask(1, 'Reorthogonalize Smoothed PCA basis') as reortho_task:
                                _, _, vh = svds(smoothed_pca_basis, k = part_num_pca_basis_reortho)
                                reortho_task.enter_progress_frame(1, f'Reorthogonalize Smoothed PCA basis')

                            vertex_mean = vertex_mean.reshape(-1)
                            pca_basis = vh[:part_num_pca_basis]
                            part_coeffs[part_id] = part_deltas.dot(pca_basis.T)
                            pca_basis = pca_basis.reshape(-1)
                        else:
                            pca = PCA(n_components=num_pca_basis[part_id],random_state=seed)
                            print('part_deltas', part_deltas.shape)
                            coeffs = pca.fit_transform(part_deltas)
                            part_coeffs[part_id] = np.ascontiguousarray(coeffs).astype(np.float32)
                            vertex_mean = pca.mean_.astype(np.float32)
                            pca_basis = np.ascontiguousarray(pca.components_.astype(np.float32)).reshape(-1)
                    else:
                        data = part_deltas
                        vertex_mean = np.mean(data, axis = 0)
                        data = data - vertex_mean[None,:]
                        _, _, VH = np.linalg.svd(data)
                        basis = VH[:num_pca_basis[part_id]]
                        part_coeffs[part_id] = data.dot(basis.T)
                        vertex_mean = vertex_mean.astype(np.float32)
                        pca_basis = np.ascontiguousarray(basis.astype(np.float32)).reshape(-1)

                    model.set_vertex_mean(part_id, vertex_mean.tolist())
                    model.set_pca_basis(part_id, pca_basis.tolist())

                    if use_file_cache:
                        out_path = f'{training_dir}/pca_basis_{part_id}.npy'
                        print('write to',out_path)
                        np.save(out_path, np.ascontiguousarray(pca.components_.astype(np.float32)).reshape(-1))

                        out_path=f'{training_dir}/vertex_mean_{part_id}.npy'
                        print('write to',out_path)
                        np.save(out_path,pca.mean_.astype(np.float32))

                    pca_task.enter_progress_frame(1, f'Computing PCA Basis {part_id + 1:6d} of {num_parts:6d}')

            outputs = np.concatenate(part_coeffs, axis = 1)

            if use_file_cache:
                out_path = f'{training_dir}/output_coeffs.npy'
                print('write to',out_path)
                np.save(out_path, outputs)

        elif use_file_cache:
            for part_id in range(num_parts):
                vertex_mean = np.load(f'{training_dir}/vertex_mean_{part_id}.npy')
                model.set_vertex_mean(part_id, vertex_mean.astype(np.float32).tolist())
                pca_dim = len(vertex_mean)
                pca_basis = np.load(f'{training_dir}/pca_basis_{part_id}.npy')
                model.set_pca_basis(part_id, pca_basis.reshape((-1,pca_dim)).reshape(-1).tolist())

            outputs = np.load(f'{training_dir}/output_coeffs.npy')


        deltas._mmap.close()

        inputs_mean_np = np.mean(inputs, axis = 0)
        inputs_mean = torch.from_numpy(inputs_mean_np).float().to(device)
        inputs_std_np = np.std(inputs, axis = 0)
        inputs_std = torch.from_numpy(inputs_std_np).float().to(device)

        outputs_mean_np = np.mean(outputs, axis = 0)
        outputs_mean = torch.from_numpy(outputs_mean_np).float().to(device)
        outputs_std_np = np.std(outputs, axis = 0)
        outputs_std = torch.from_numpy(outputs_std_np).float().to(device)

        inputs_min = np.min(inputs, axis = 0)
        inputs_max = np.max(inputs, axis = 0)
        model.inputs_min = inputs_min.tolist()
        model.inputs_max = inputs_max.tolist()

        permutations = np.random.permutation(num_samples)
        num_train = int(num_samples * 0.9)
        num_val = num_samples - num_train

        train_samples = permutations[:num_train]
        train_inputs = torch.from_numpy(inputs[train_samples]).float().to(device)
        train_outputs = torch.from_numpy(outputs[train_samples]).float().to(device)
        train_dataset = TensorDataset(train_inputs, train_outputs)
        train_loader = DataLoader(train_dataset, batch_size=batch_size, shuffle=True)

        val_samples = permutations[num_train:num_samples]
        val_inputs = torch.from_numpy(inputs[val_samples]).float().to(device)
        val_outputs = torch.from_numpy(outputs[val_samples]).float().to(device)
        val_dataset = TensorDataset(val_inputs, val_outputs)
        val_loader = DataLoader(val_dataset, batch_size=batch_size, shuffle=True)

        hidden_dims = self.get_model().get_hidden_layer_dims()
        input_dim = inputs.shape[1]
        output_dim = sum(num_pca_basis)
        dims = [input_dim] + list(hidden_dims) + [output_dim]

        network = MLPPCA(dims, inputs_mean, inputs_std, outputs_mean, outputs_std)
        network.to(device)

        if skip_training:
            raise Exception('Skip training')

        min_val_loss=float('Inf')
        min_val_epoch=-1

        optimizer = torch.optim.AdamW(network.parameters(),lr=lr,weight_decay=1e-5)

        mse_loss = nn.MSELoss(reduction = 'sum')

        if tensorboard_exist:
            log_dir = f'{training_dir}/logs'
            writer = SummaryWriter(log_dir)

        return_code = 0 # success

        # Train    
        training_start_time = time.time()
        n_batches = 0
        with ue.ScopedSlowTask(num_epochs, "Training Model") as training_task:
            training_task.make_dialog(True)

            for epoch in range(num_epochs):
                train_loss = 0.0
                network.train()
                for X,Y in train_loader:
                    if training_task.should_cancel():
                        raise GeneratorExit('Usable')
                    optimizer.zero_grad()
                    batch_loss = mse_loss(network(X), Y)
                    batch_loss.backward()
                    optimizer.step()
                    train_loss += batch_loss.item() * len(X)

                    n_batches += 1

                train_loss /= len(train_dataset) * num_sample_deltas
                if tensorboard_exist:
                    writer.add_scalar('Loss/train', train_loss, epoch)

                val_loss = 0.0
                network.eval()
                with torch.no_grad():
                    for X,Y in val_loader:
                        if training_task.should_cancel():
                            raise GeneratorExit('Usable')
                        batch_loss = mse_loss(network(X), Y)
                        val_loss += batch_loss.item() * len(X)
                val_loss/=len(val_dataset) * num_sample_deltas
                if tensorboard_exist:
                    writer.add_scalar('Loss/val', val_loss, epoch)

                if val_loss < min_val_loss:
                    min_val_loss = val_loss
                    min_val_epoch = epoch

                    save_path=f'{training_dir}/NearestNeighborModel.pt'
                    torch.save(network.state_dict(),save_path)

                passed_time_string, est_time_remaining_string = generate_time_strings(epoch, num_epochs, training_start_time)
                training_task.enter_progress_frame(
                    1,
                    f'Training epoch: {epoch + 1:6d} of {num_epochs:6d}, Val error: {val_loss:.2e} Time: {passed_time_string} - Left: {est_time_remaining_string}')

            ue.log("Model successfully trained.")

    except GeneratorExit as e:
        ue.log_warning("Training canceled by user.")
        if str(e)=='Usable':
            return_code = 1  # 'aborted'
        else:
            return_code = 2  # 'aborted not useable'
    except Exception as e:
        logging.error(e)
        logging.error(traceback.format_exc())
        return_code = 2
    finally:
        # Save Final Version
        if return_code == 0 or return_code == 1 or skip_training:
            state_dict = torch.load(f'{training_dir}/NearestNeighborModel.pt')
            network.load_state_dict(state_dict)
            network.eval()
            X, _ = next(iter(train_loader))
            out_path = os.path.join(training_dir, 'NearestNeighborModel.onnx')
            print('onnx exported to', out_path)
            torch.onnx.export(
                network, X[:1],
                out_path,
                verbose=False,
                export_params=True,
                input_names=['InputParams'],
                output_names=['OutputPredictions'])

        # clean up
        if return_code == 0 and not use_file_cache:
            remove_files_in_dir(training_dir, skip_files = ['NearestNeighborModel.onnx'])

    return return_code
