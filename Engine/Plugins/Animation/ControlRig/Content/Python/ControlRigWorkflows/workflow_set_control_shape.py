'''
	Implement a workflow for a node in Python

    The action will set a control shape based on the specified bone name
'''

import unreal

class provider:

    provider_handles = {}

    def __call__(self, in_pin):
        # create a new workflow
        workflow = unreal.RigVMUserWorkflow()
        workflow.type = unreal.RigVMUserWorkflowType.PIN_CONTEXT    # Changed to pin context
        workflow.title = 'Set control shape from bone'
        workflow.tooltip = 'Set the shape of the created control based on the linked shape library and bone name/transform'
        workflow.on_perform_workflow.bind_callable(self.perform_user_workflow)

        # custom options to have user determine axis (unused)
        workflow.options_class = unreal.ControlRigWorkflowOptions.static_class()
        # Filtering of pins and node types happens here

        # if this workflow is invoked clicking on a node instead of a pin, return early
        if not hasattr(in_pin, 'get_node'):
            return [unreal.RigVMUserWorkflow()]
            
        in_node = in_pin.get_node()

        pin_path = in_pin.get_pin_path()
        
        # only return a workflow for pins within a 'Control Settings' compound
        eligible_subpaths = ['.Control Settings']
        found = False
        for subpath in eligible_subpaths:
            if subpath in pin_path:
                found = True
                break
        if not found:
            return [unreal.RigVMUserWorkflow()]

        # return our workflow if the expected pins are found
        if in_node.find_pin('Bone.Name') and \
            (in_node.find_pin('Control Settings.Shape.Transform') or in_node.find_pin('Control Settings.Transform')) and \
            (in_node.find_pin('Control Settings.Shape.Name') or in_node.find_pin('Control Settings.Name')) :

            return [workflow]

        # otherwise return an empty workflow
        return [unreal.RigVMUserWorkflow()]


    def perform_user_workflow(self, in_options, in_controller):

        bp = in_controller.get_outer()
        rig_hier = bp.get_hierarchy_controller().get_hierarchy()

        node = in_options.subject.get_node()

        bone_name_pin = node.find_pin('Bone.Name')
        bone_name = bone_name_pin.get_default_value()
        bone_pin = node.find_pin('Bone')
        
        bone_key = unreal.RigElementKey(name=bone_name, type=unreal.RigElementType.BONE)
        bone = rig_hier.find_bone(bone_key)

        # assume the custom shape library is the last entry in the shape library list
        shape_lib = bp.get_editor_property('shape_libraries')[-1]
        
        shape_names = [str(x.shape_name) for x in shape_lib.get_editor_property('shapes')]
        shape_name = None
        if bone_name in shape_names:
            shape_name = bone_name
        else:
            # look for a shape name with a name prefix matching this CR's name
            # i.e. if CR is named CR_SomeCreature, look for a prefix SM_SomeCreature
            bp_name = bp.get_name()
            
            if bp_name.startswith('CR_'):
                pfx = bp_name.replace('CR_','SM_')+'_'
                shape_name_with_pfx = pfx + bone_name
                
                if shape_name_with_pfx in shape_names:
                    shape_name = shape_name_with_pfx
            
        if not shape_name:
            print('Shape name not found matching bone %s' % bone)
            return
                    
        new_shape_name = '%s.%s' % (shape_lib.get_name(), shape_name)        
        
        control_name_pin = node.find_pin('Control Settings.Shape.Name') or node.find_pin('Control Settings.Name')
        if control_name_pin:
            in_controller.set_pin_default_value(control_name_pin.get_pin_path(), new_shape_name)
            
        else:
            print('Pin not found to set control name')
            return
        
        control_trans_pin = node.find_pin('Control Settings.Shape.Transform.Translation') or node.find_pin('Control Settings.Transform.Translation')
        control_scale_pin = node.find_pin('Control Settings.Shape.Transform.Scale3D') or node.find_pin('Control Settings.Transform.Scale3D')
        
        if control_trans_pin:
            position = bone.pose.initial.global_.transform.translation
            
            # apply offset if 'Center of Mass' option exists and is active
            CoM_pin = node.find_pin('Center of Mass')
            upAxis_pin = node.find_pin('Up Axis')

            if CoM_pin and CoM_pin.get_default_value() == 'true':
                dimensions_pin = [p for p in node.get_pins() if p.get_name().endswith('k Dimensions')]
                if dimensions_pin:
                    z_pin = dimensions_pin[0].find_sub_pin('Z')
                    height = float(z_pin.get_default_value())
                else:
                    height = 1.
                height_offset = height * 3.2
                
                if upAxis_pin:
                    # for some reason this comes through as NewEnumerator# where # is 0-5
                    upAxis = int(upAxis_pin.get_default_value()[-1])
                    if upAxis == 0:
                        position.x += height_offset
                    if upAxis == 1:
                        position.z += height_offset
                    if upAxis == 2:
                        position.z += height_offset
                    if upAxis == 3:
                        position.x -= height_offset
                    if upAxis == 4:
                        position.y -= height_offset
                    if upAxis == 5:
                        position.z -= height_offset
                else:
                    position.z -= height_offset                    
            
            for axis in 'xyz':
                pos_pin = control_trans_pin.find_sub_pin('%s' % axis.upper())
                in_controller.set_pin_default_value(pos_pin.get_pin_path(), str(round(-1. * getattr(position, axis), 3)))
                scl_pin = control_scale_pin.find_sub_pin('%s' % axis.upper())
                in_controller.set_pin_default_value(scl_pin.get_pin_path(), '1')
                
        bp.request_auto_vm_recompilation()
        
        print('Please recompile %s to see control shape updates reflected in the viewport.' % bp.get_name())
        return True


    @classmethod
    def register(cls):

        # This is different from node workflows, for pins keep unit_struct empty
        unit_struct = None

        # create an empty callback and bind an instance of this class to it
        provider_callback = unreal.RigVMUserWorkflowProvider()
        provider_callback.bind_callable(cls())

        # remember the registered provider handle so we can unregister later
        handle = unreal.RigVMUserWorkflowRegistry.get().register_provider(unit_struct, provider_callback)

        # we also store the callback on the class 
        # so that it doesn't get garbage collected
        cls.provider_handles[handle] = provider_callback

    @classmethod
    def unregister(cls):
        for handle in cls.provider_handles:
            unreal.RigVMUserWorkflowRegistry.get().unregister_provider(handle)
        cls.provider_handles = {}



def _reregister():
    # for use in UE to reload this module for testing
    # define and run this func in the interactive editor scope
    ControlRigWorkflows.workflow_set_control_shape.provider.unregister()
    reload(ControlRigWorkflows.workflow_set_control_shape)
    ControlRigWorkflows.workflow_set_control_shape.provider.register()
    