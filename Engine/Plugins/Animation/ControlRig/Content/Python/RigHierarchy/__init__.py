import unreal

# A wrapper for an element in a URigHierarchy, 
# representing a combination of the hierarchy
# and an element's key. 
# The element wrapper offers a high level abstraction
# to invoke URigHierarchy and URigHierarchyController functionality,
# such as navigating the hierarchy (get_children, get_parent etc)
# and interacting with elements' data such as transforms and 
# control settings.
class element_wrapper():

	__hierarchy = None
	__key = None

	def __init__(self, hierarchy = None, key: unreal.RigElementKey = unreal.RigElementKey()):
		if not hierarchy is None and not type(hierarchy) is hierarchy_wrapper:
			print(hierarchy)
			raise Exception("Passed hierarchy is not a hierarchy_wrapper")
		self.__hierarchy = hierarchy
		self.__key = key

	def __str__(self):
		return self.get_key().export_text()

	def __eq__(self, other):
		return self.get_key().export_text() == other.get_key().export_text() and \
			self.get_hierarchy() == other.get_hierarchy()

	def __ne__(self, other):
		return not self.__eq__(other)

	# returns True if this element is valid
	def is_valid(self):
		return not self.__hierarchy is None and \
			not self.__key is None

	# resets the element and removes internal state
	def reset(self):
		self.__hierarchy = None
		self.__key = unreal.RigElementKey()

   # requests a rename of the element and returns the new name
   # this ensures name uniqueness and name sanitization
	def rename(self, name: str) -> str:
		if not self.is_valid():
			return False
		new_key = self.__hierarchy.get_core_controller().rename_element(self.get_key(), name)
		if new_key.export_text() == self.get_key().export_text():
			return False
		self.__key = new_key
		return self.get_name()

	# returns the hierarchy (wrapper) of this element
	def get_hierarchy(self):
		return self.__hierarchy

	# returns the element's key
	def get_key(self):
		return self.__key

	# returns the element given an element or a key
	@classmethod
	def _get_element(self, element_or_key):
		if type(element_or_key) is unreal.RigElementKey:
			return element_wrapper(self, key)
		if type(element_or_key) is element_wrapper:
			return element_or_key
		raise Exception('Passed element_or_key is neither an unreal.RigElementKey nor an element_wrapper')

	# returns the key given an element or key
	@classmethod
	def _get_key(self, element_or_key):
		if type(element_or_key) is unreal.RigElementKey:
			return element_or_key
		if type(element_or_key) is element_wrapper:
			return element_or_key.get_key()
		raise Exception('Passed element_or_key is neither an unreal.RigElementKey nor an element_wrapper')

	# returns the element's name
	def get_name(self):
		return self.get_key().name

	# returns the element's display name
	def get_display_name(self):
		if not self.is_valid():
			return None
		if self.get_type() == unreal.RigElementType.CONTROL:
			settings = self.get_control_settings()
			print(settings)
			if not settings.display_name is None and not settings.display_name.is_none():
				return settings.display_name
		return self.get_name()

	# returns the element's type
	def get_type(self):
		return self.get_key().type

	# returns the element's (first) parent or None
	def get_parent(self) -> object:
		if not self.is_valid():
			return None
		parent_key = self.__hierarchy.get_core_hierarchy().get_first_parent(self.__key)
		if parent_key.type == unreal.RigElementType.NONE:
			return None
		return element_wrapper(self.__hierarchy, parent_key)

	# returns a list of parents of this element
	def get_parents(self) -> list:
		if not self.is_valid():
			return []
		parent_keys = self.__hierarchy.get_core_hierarchy().get_parents(self.__key)
		parents = []
		for parent_key in parent_keys:
			parents += [element_wrapper(self.__hierarchy, parent_key)]
		return parents

	# sets the new parent of this element - removes any other parent
	def set_parent(self, parent, maintain_global: bool = True) -> bool:
		if not self.is_valid():
			return False
		parent = element_wrapper._get_element(parent)
		if not self.get_hierarchy() == parent.get_hierarchy():
			return False
		return self.__hierarchy.get_core_controller().set_parent(self.get_key(), parent.get_key(), maintain_global)

	# adds a new parent to the element
	def add_parent(self, parent, weight: float = 0.0, maintain_global: bool = True) -> bool:
		if not self.is_valid():
			return False
		parent = element_wrapper._get_element(parent)
		if not self.get_hierarchy() == parent.get_hierarchy():
			return False
		return self.__hierarchy.get_core_controller().add_parent(self.get_key(), parent.get_key(), weight, maintain_global)

	# removes a parent from the element
	def remove_parent(self, parent, maintain_global: bool = True) -> bool:
		if not self.is_valid():
			return False
		parent = element_wrapper._get_element(parent)
		if not self.get_hierarchy() == parent.get_hierarchy():
			return False
		return self.__hierarchy.get_core_controller().remove_parent(self.get_key(), parent.get_key(), maintain_global)

	# returns the weight of the parent relationship
	def get_parent_weight(self, parent, initial: bool = False) -> unreal.RigElementWeight:
		if not self.is_valid():
			return None
		parent = element_wrapper._get_element(parent)
		if not self.get_hierarchy() == parent.get_hierarchy():
			return None
		return self.__hierarchy.get_core_hierarchy().get_parent_weight(self.__key, parent.get_key(), initial)

	# sets the weight of the parent relationship
	def set_parent_weight(self, parent, weight: unreal.RigElementWeight, initial: bool = False):
		if not self.is_valid():
			return
		parent = element_wrapper._get_element(parent)
		if not self.get_hierarchy() == parent.get_hierarchy():
			return
		self.__hierarchy.get_core_hierarchy().set_parent_weight(self.__key, parent.get_key(), weight, initial)

	# returns all children of this element
	def get_children(self) -> list:
		if not self.is_valid():
			return []
		child_keys = self.__hierarchy.get_core_hierarchy().get_children(self.__key)
		children = []
		for child_key in child_keys:
			children += [element_wrapper(self.__hierarchy, child_key)]
		return children

	# returns the local transform of this element
	def get_local_transform(self, initial: bool = False):
		if not self.is_valid():
			return None
		return self.__hierarchy.get_core_hierarchy().get_local_transform(self.__key, initial)			

	# sets the local transform of this element
	def set_local_transform(self, transform: unreal.Transform, initial: bool = False):
		if not self.is_valid() or transform is None:
			return
		self.__hierarchy.get_core_hierarchy().set_local_transform(self.__key, transform, initial)			

	# returns the global transform of this element
	def get_global_transform(self, initial: bool = False):
		if not self.is_valid():
			return None
		return self.__hierarchy.get_core_hierarchy().get_global_transform(self.__key, initial)			

	# sets the global transform of this element
	def set_global_transform(self, transform: unreal.Transform, initial: bool = False):
		if not self.is_valid() or transform is None:
			return
		self.__hierarchy.get_core_hierarchy().set_global_transform(self.__key, transform, initial)			

	# returns the offset transform of this element - only works for controls
	def get_offset_transform(self, initial: bool = False):
		if not self.is_valid():
			return None
		if not self.get_type() == unreal.RigElementType.CONTROL:
			raise Exception('Calling get_offset_transform on element '+str(self)+', this is only valid for controls.')
		return self.__hierarchy.get_core_hierarchy().get_control_offset_transform(self.__key, initial)			

	# sets the offset transform of this element - only works for controls
	def set_offset_transform(self, transform: unreal.Transform, initial: bool = False):
		if not self.is_valid() or transform is None:
			return
		if not self.get_type() == unreal.RigElementType.CONTROL:
			raise Exception('Calling set_offset_transform on element '+str(self)+', this is only valid for controls.')
		self.__hierarchy.get_core_hierarchy().set_control_offset_transform(self.__key, transform, initial)			

	# returns the shape transform of this element - only works for controls
	def get_shape_transform(self, initial: bool = False):
		if not self.is_valid():
			return None
		if not self.get_type() == unreal.RigElementType.CONTROL:
			raise Exception('Calling get_shape_transform on element '+str(self)+', this is only valid for controls.')
		return self.__hierarchy.get_core_hierarchy().get_control_shape_transform(self.__key, initial)			

	# sets the shape transform of this element - only works for controls
	def set_shape_transform(self, transform: unreal.Transform, initial: bool = False):
		if not self.is_valid() or transform is None:
			return
		if not self.get_type() == unreal.RigElementType.CONTROL:
			raise Exception('Calling set_shape_transform on element '+str(self)+', this is only valid for controls.')
		self.__hierarchy.get_core_hierarchy().set_control_shape_transform(self.__key, transform, initial)			

	# returns the control value as a python value - only works for controls
	def get_control_value(self, value_type: unreal.RigControlValueType = unreal.RigControlValueType.CURRENT):
		if not self.is_valid():
			return None
		if not self.get_type() == unreal.RigElementType.CONTROL:
			raise Exception('Calling get_control_value on element '+str(self)+', this is only valid for controls.')
		settings = self.get_control_settings()
		control_value = self.__hierarchy.get_core_hierarchy().get_control_value(self.__key, value_type)
		return hierarchy_wrapper_utils.control_value_to_python_value(control_value, settings.control_type)

	# sets the control value as a python value - only works for controls
	def set_control_value(self, value, value_type: unreal.RigControlValueType = unreal.RigControlValueType.CURRENT):
		if not self.is_valid():
			return
		if not self.get_type() == unreal.RigElementType.CONTROL:
			raise Exception('Calling get_control_value on element '+str(self)+', this is only valid for controls.')
		settings = self.get_control_settings()
		control_value = hierarchy_wrapper_utils.python_value_to_control_value(value)
		if control_value is None:
			raise Exception('Invalid control value '+str(value))
		control_type = hierarchy_wrapper_utils.python_value_to_control_type(value)
		if not control_type == settings.control_type:
			raise Exception('Type of value ' + str(control_type) + ' does not match settings.control_type ' + str(settings.control_type))
		self.__hierarchy.get_core_hierarchy().set_control_value(self.__key, control_value, value_type)

	# returns the control's settings - only works for controls
	def get_control_settings(self) -> unreal.RigControlSettings:
		if not self.is_valid():
			return None
		if not self.get_type() == unreal.RigElementType.CONTROL:
			raise Exception('Calling get_shape_transform on element '+str(self)+', this is only valid for controls.')
		return self.__hierarchy.get_core_controller().get_control_settings(self.get_key())

	# sets the control's settings - only works for controls
	def set_control_settings(self, settings: unreal.RigControlSettings) -> unreal.RigControlSettings:
		if not self.is_valid() or settings is None:
			return None
		if not self.get_type() == unreal.RigElementType.CONTROL:
			raise Exception('Calling get_shape_transform on element '+str(self)+', this is only valid for controls.')
		self.__hierarchy.get_core_controller().set_control_settings(self.get_key(), settings)

	# returns all child animation channels of this element
	def get_animation_channels(self) -> list:
		if not self.is_valid():
			return None
		return list(filter( \
			lambda child: ( \
				child.get_type() == unreal.RigElementType.CONTROL and \
				child.get_control_settings().animation_type == unreal.RigControlAnimationType.ANIMATION_CHANNEL \
			), self.get_children()))

# The hierarchy_wrapper offers a high level abstraction of the
# underlying URigHierarchy. It can be used to interact with hierarchy,
# add / remove elements etc
class hierarchy_wrapper():

	__hierarchy = None
	__controller = None

	def __init__(self, hierarchy_or_blueprint):

		if type(hierarchy_or_blueprint) is unreal.RigHierarchy:
			self.__hierarchy = hierarchy_or_blueprint
		elif type(hierarchy_or_blueprint) is unreal.ControlRigBlueprint:
			self.__hierarchy = hierarchy_or_blueprint.get_hierarchy()
		else:
			raise Exception('hierarchy_or_blueprint needs to be a RigHierarchy or a ControlRigBlueprint')

		self.__controller = self.__hierarchy.get_controller()

	def __eq__(self, other):
		return self.get_core_hierarchy() == other.get_core_hierarchy()

	def __ne__(self, other):
		return not self.__eq__(other)

	# returns true if this element is valid
	def is_valid(self):
		return not self.__hierarchy is None and \
			not self.__controller is None

	# returns the unterlying URigHierarchy object
	def get_core_hierarchy(self) -> unreal.RigHierarchy:
		return self.__hierarchy

	# returns the unterlying URigHierarchyController object
	def get_core_controller(self) -> unreal.RigHierarchyController:
		return self.__controller

	# returns a list of wrappers for all elements of this hierarchy
	def get_elements(self) -> list:
		if not self.is_valid():
			return []
		keys = self.__hierarchy.get_all_keys(True)
		elements = []
		for key in keys:
			elements += [element_wrapper(self, key)]
		return elements

	# returns True if the hierarchy contains an element given its key
	def contains_element(self, key: unreal.RigElementKey) -> bool:
		if not self.is_valid() or key is None:
			return False
		return self.__hierarchy.contains(key)

	# returns a specific element given its key (or None)
	def get_element(self, key: unreal.RigElementKey) -> object:
		if not self.contains_element(key):
			return None;
		return element_wrapper(self, key)

	# adds a new bone to the hierarchy and returns its element_wrapper
	def add_bone(self, name: str, parent = None, transform: unreal.Transform = unreal.Transform(), transform_is_global: bool = True) -> object:
		if not self.is_valid():
			return None
		if parent is None:
			parent = element_wrapper()
		parent = element_wrapper._get_element(parent)
		key = self.__controller.add_bone(name, parent.get_key(), transform, transform_is_global)
		return element_wrapper(self, key)

	# adds a new control to the hierarchy and returns its element_wrapper
	def add_control(self, name: str, parent = None, settings: unreal.RigControlSettings = unreal.RigControlSettings(), value = None, offset_transform: unreal.Transform = unreal.Transform(), shape_transform: unreal.Transform = unreal.Transform()) -> object:
		if not self.is_valid():
			return None
		if parent is None:
			parent = element_wrapper()
		parent = element_wrapper._get_element(parent)
		if value is None:
			value = hierarchy_wrapper_utils.get_default_control_value(settings.control_type)
		control_type = hierarchy_wrapper_utils.python_value_to_control_type(value)
		if not control_type == settings.control_type:
			raise Exception('Type of value ' + str(control_type) + ' does not match settings.control_type ' + str(settings.control_type))
		control_value = hierarchy_wrapper_utils.python_value_to_control_value(value)
		if control_value is None:
			raise Exception('Provided value is not compatible (needs to be bool, float, int, Vector2D, Vector, Rotator or EulerTransform')
		key = self.__controller.add_control(name, parent.get_key(), settings, control_value)
		element = element_wrapper(self, key)
		element.set_offset_transform(offset_transform, True)
		element.set_shape_transform(shape_transform, True)
		return element

	# adds a new null to the hierarchy and returns its element_wrapper
	def add_null(self, name: str, parent = None, transform: unreal.Transform = unreal.Transform(), transform_is_global: bool = True) -> object:
		if not self.is_valid():
			return None
		if parent is None:
			parent = element_wrapper()
		parent = element_wrapper._get_element(parent)
		key = self.__controller.add_null(name, parent.get_key(), transform, transform_is_global)
		return element_wrapper(self, key)

	# removes an element from the hierarchy given its wrapper
	def remove_element(self, element) -> bool:
		if not self.is_valid():
			return False
		key = element_wrapper._get_key(element)
		if not self.contains_element(key):
			return 	False
		if self.__controller.remove_element(key):
			element.reset()
			return True
		return False

class hierarchy_wrapper_utils:

	@classmethod
	def get_default_control_value(self, value_type: unreal.RigControlType):
		if value_type is unreal.RigControlType.BOOL:
			return False
		if value_type is unreal.RigControlType.FLOAT:
			return 0.0
		if value_type is unreal.RigControlType.INTEGER:
			return 0
		if value_type is unreal.RigControlType.VECTOR2D:
			return unreal.Vector2D()
		if value_type is unreal.RigControlType.POSITION or \
			value_type is unreal.RigControlType.SCALE:
			return unreal.Vector()
		if value_type is unreal.RigControlType.ROTATOR:
			return unreal.Rotator()
		if value_type is unreal.RigControlType.EULER_TRANSFORM:
			return unreal.EulerTransform()
		return None		

	@classmethod
	def control_value_to_python_value(self, value: unreal.RigControlValue, value_type: unreal.RigControlType):
		if value is None:
			return get_default_control_value(value_type)
		if value_type is unreal.RigControlType.BOOL:
			return unreal.RigHierarchy.get_bool_from_control_value(value)
		if value_type is unreal.RigControlType.FLOAT:
			return unreal.RigHierarchy.get_float_from_control_value(value)
		if value_type is unreal.RigControlType.INTEGER:
			return unreal.RigHierarchy.get_int_from_control_value(value)
		if value_type is unreal.RigControlType.VECTOR2D:
			return unreal.RigHierarchy.get_vector2d_from_control_value(value)
		if value_type is unreal.RigControlType.POSITION or \
			value_type is unreal.RigControlType.SCALE:
			return unreal.RigHierarchy.get_vector_from_control_value(value)
		if value_type is unreal.RigControlType.ROTATOR:
			return unreal.RigHierarchy.get_rotator_from_control_value(value)
		if value_type is unreal.RigControlType.EULER_TRANSFORM:
			return unreal.RigHierarchy.get_euler_transform_from_control_value(value)
		return None		

	@classmethod
	def python_value_to_control_value(self, value) -> unreal.RigControlValue:
		if type(value) is bool:
			return unreal.RigHierarchy.make_control_value_from_bool(value)
		if type(value) is float:
			return unreal.RigHierarchy.make_control_value_from_float(value)
		if type(value) is int:
			return unreal.RigHierarchy.make_control_value_from_int(value)
		if type(value) is unreal.Vector2D:
			return unreal.RigHierarchy.make_control_value_from_vector2d(value)
		if type(value) is unreal.Vector:
			return unreal.RigHierarchy.make_control_value_from_vector(value)
		if type(value) is unreal.Rotator:
			return unreal.RigHierarchy.make_control_value_from_rotator(value)
		if type(value) is unreal.EulerTransform:
			return unreal.RigHierarchy.make_control_value_from_euler_transform(value)
		return None		

	@classmethod
	def python_value_to_control_type(self, value) -> unreal.RigControlValue:
		if type(value) is bool:
			return unreal.RigControlType.BOOL
		if type(value) is float:
			return unreal.RigControlType.FLOAT
		if type(value) is int:
			return unreal.RigControlType.INTEGER
		if type(value) is unreal.Vector2D:
			return unreal.RigControlType.VECTOR2D
		if type(value) is unreal.Vector:
			return unreal.RigControlType.POSITION 
		if type(value) is unreal.Rotator:
			return unreal.RigControlType.ROTATOR
		if type(value) is unreal.EulerTransform:
			return unreal.RigControlType.EULER_TRANSFORM
		return None		
