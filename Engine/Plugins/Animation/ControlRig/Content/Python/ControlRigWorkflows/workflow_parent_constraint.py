'''
	This is an example of how to implement a workflow for a node in Python

    The action will set up the node's pin default values based on the selection
'''

import unreal

class provider:

    provider_handles = {}

    def __call__(self, in_node):
        # create a new workflow
        workflow = unreal.RigVMUserWorkflow()
        workflow.type = unreal.RigVMUserWorkflowType.NODE_CONTEXT
        workflow.title = 'Configure Child and Parents from Selection'
        workflow.tooltip = 'Configure the child and the parents based on the selected elements'
        workflow.on_perform_workflow.bind_callable(self.perform_user_workflow)

        # choose the default options class. you can define your own classes
        # if you want to provide options to the user to choose from.
        workflow.options_class = unreal.ControlRigWorkflowOptions.static_class()

        # return a list of workflows for this provider
        return [workflow]

    def perform_user_workflow(self, in_options, in_controller):

        if not len(in_options.selection) > 1:
        
            if len(in_options.selection) <= 0:

                in_options.report_error('No selected items. Please selection any item in the hierarchy')

            in_options.report_error('Driven item only selected. Please select driven item and all drivers in the hierarchy to configure the Parent Constraint node')
            
            return False

        node = in_options.subject

        # extract all of the elements from the selection
        child_key = in_options.selection[0]
        parent_keys = in_options.selection[1:]
        print(child_key)
        print(parent_keys)

        # create a new node to base our settings on
        new_defaults = unreal.RigUnit_ParentConstraint()

        # init the settings based on the current defaults on the node
        # this makes sure we keep settings that we don't want to change
        new_defaults.import_text(node.get_struct_default_value())

        parents = []

        for parent_key in parent_keys:

            parent = unreal.ConstraintParent()
            parent.item = parent_key
            parent.weight = 1.0

            parents.append(parent)

        # setup the items on the node
        new_defaults.child = child_key

        new_defaults.parents = parents

        if in_controller.set_unit_node_defaults(node, new_defaults.export_text()):
            
            in_controller.set_pin_expansion(node.find_pin("Parents").get_pin_path(), True)

            for sub_pin in node.find_pin("Parents").get_sub_pins():

                in_controller.set_pin_expansion(sub_pin.get_pin_path(), True)

                for child_pin in sub_pin.get_sub_pins():

                    in_controller.set_pin_expansion(child_pin.get_pin_path(), True)

            return True

    @classmethod
    def register(cls):
        # retrieve the node we want to add a workflow to
        unit_struct = unreal.RigUnit_ParentConstraint.static_struct()

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
        for (handle, provider) in cls.provider_handles:
            unreal.RigVMUserWorkflowRegistry.get().unregister_provider(handle)
        cls.provider_handles = {}
