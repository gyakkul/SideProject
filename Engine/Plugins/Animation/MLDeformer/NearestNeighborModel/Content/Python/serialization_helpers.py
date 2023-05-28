import onnx
from onnx import numpy_helper
import traceback
import logging
import numpy as np
import unreal

def get_tensor_from_node(node):
	value_attr = next(attr for attr in node.attribute if attr.name == "value")
	tensor = value_attr.t
	return numpy_helper.to_array(tensor)

def get_named_tensors_from_proto(initializer):
	return {w.name: numpy_helper.to_array(w) for w in initializer}

# Remove trailing '_'. For example, 'Gemm_2' -> 'Gemm'
def clean_name(name):
	idx = name.find('_')
	return name[:idx] if idx != -1 else name

linear_ops = ['Add', 'Mul', 'Sub', 'Div', 'Gemm', 'BatchNormalization']
nonlinear_ops = ['PRelu']

# ['Add', 'Mul', 'Sub', 'Div']
def get_arithmetic_tensor(node, named_tensors):
	for input_name in node.input:
		if input_name in named_tensors:
			return named_tensors[input_name].reshape(-1)
	return None

def get_gemm_tensors(node, named_tensors):
	weight, bias = None, None
	for input_name in node.input:
		if input_name.endswith('weight'):
			weight = named_tensors[input_name]
		elif input_name.endswith('bias'):
			bias = named_tensors[input_name]
	return weight, bias

def get_batchnorm_tensors(node, named_tensors):
	weight, bias, mean, var = None, None, None, None
	for input_name in node.input:
		if input_name.endswith('weight'):
			weight = named_tensors[input_name]
		elif input_name.endswith('bias'):
			bias = named_tensors[input_name]
		elif input_name.endswith('running_mean'):
			mean = named_tensors[input_name]
		elif input_name.endswith('running_var'):
			var = named_tensors[input_name]
	return weight, bias, mean, var

def get_node_tensors(node, named_tensors):
	return [named_tensors[input_name] for input_name in node.input if input_name in named_tensors]

# merge linear operators into one linear operator. 
# returns effective weight and bias for the linear operator
def merge_linear_parameters(nodes, named_tensors):
	node_names = [clean_name(node.name) for node in nodes]

	gemm_idx = node_names.index('Gemm')
	if gemm_idx == -1:
		raise GeneratorExit('No gemm node found. Merge not implemented')
	gemm_node = nodes[gemm_idx]

	weight, bias = get_gemm_tensors(gemm_node, named_tensors)
	if weight is None or bias is None:
		raise GeneratorExit('No weight or bias found.')

	# merge to the front
	if gemm_idx > 0:
		for idx in range(gemm_idx - 1, -1, -1):
			node_name = node_names[idx]
			if node_name == 'Sub':
				tensor = get_arithmetic_tensor(nodes[idx], named_tensors)
				bias = bias - weight.dot(tensor)
			elif node_name == 'Div':
				tensor = get_arithmetic_tensor(nodes[idx], named_tensors)
				weight = weight.dot(np.diag(1. / tensor))
			else:
				raise GeneratorExit(f'Unimplemented merge behavior for {node_name}')

	# merge to the back
	if gemm_idx < len(nodes) - 1:
		for idx in range(gemm_idx + 1, len(nodes)):
			node_name = node_names[idx]
			if node_name == 'Add':
				tensor = get_arithmetic_tensor(nodes[idx], named_tensors)
				bias = bias + tensor

			elif node_name == 'Mul':
				tensor = get_arithmetic_tensor(nodes[idx], named_tensors)
				bias = tensor * bias
				weight = np.diag(tensor).dot(weight)

			elif node_name == 'BatchNormalization':
				bn_weight, bn_bias, bn_mean, bn_var = get_batchnorm_tensors(nodes[idx], named_tensors)
				bn_std = np.sqrt(bn_var + 1e-5)
				a = bn_weight / bn_std
				b = bn_bias - bn_mean * bn_weight / bn_std
				bias = a * bias + b
				weight = np.diag(a).dot(weight)
			else:
				raise GeneratorExit(f'Unimplemented merge behavior for {node_name}')

	# return transposed weights for better cache locality
	weightT = np.ascontiguousarray(weight.T)
	return weightT, bias

def add_layer(network, linear_nodes, nonlinear_node, named_tensors):
	LT = unreal.NearestNeighborNetworkLayerType
	layer_parameters = list(merge_linear_parameters(linear_nodes, named_tensors))

	if nonlinear_node is not None:
		nonlinear_name = clean_name(nonlinear_node.name)
		if nonlinear_name == 'PRelu':
			layer_parameters += get_node_tensors(nonlinear_node, named_tensors)
			layer = network.add_layer(LT.GEMM_PRELU.value)
		else:
			raise GeneratorExit('Unimplemented nonlinear layer')
	else:
		layer = network.add_layer(LT.GEMM.value)

	layer.num_inputs = layer_parameters[0].shape[0]
	layer.num_outputs = layer_parameters[0].shape[1]

	for parameter in layer_parameters:
		layer.add_parameter(parameter.reshape(-1).tolist(), list(parameter.shape))

def load_optimized_network(self, onnx_path):
	try:
		model = onnx.load(onnx_path)

		network = self.get_optimized_network()
		network.empty()
		named_tensors = get_named_tensors_from_proto(model.graph.initializer)
		stack = []
		for node in model.graph.node:
			op_name = clean_name(node.name)
			if op_name == 'Constant':
				name = node.output[0]
				named_tensors[name] = get_tensor_from_node(node)
			elif op_name in linear_ops:
				stack.append(node)
			elif op_name in nonlinear_ops:
				# merge linear ops and add layer
				add_layer(network, stack, node, named_tensors)
				stack = []
			else:
				print('unrecognized node type')

		if len(stack) != 0:
			add_layer(network, stack, None, named_tensors)
			stack = []
	except Exception as e:
		logging.error(e)
		logging.error(traceback.format_exc())
		return False
	return True

