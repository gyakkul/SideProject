'''
    Workflow implementation for Rig Elements Array
    Add selections to the Rig Item Key Element Array
'''

import unreal

class provider:

    _provider_handles = {}

    def __call__(self, in_node):
        # create a new workflow
        workflow = unreal.RigVMUserWorkflow()
        workflow.type = unreal.RigVMUserWorkflowType.NODE_CONTEXT 
        workflow.title = 'Add Selected Items to Array'
        workflow.tooltip = 'Select bones, controls or nulls and then right click add'
        workflow.on_perform_workflow.bind_callable(self.perform_user_workflow)

        # choose the default options class. you can define your own classes
        # if you want to provide options to the user to choose from.
        workflow.options_class = unreal.ControlRigWorkflowOptions.static_class()
        
        # return a list of workflows for this provider
        return [workflow]

    def perform_user_workflow(self, in_options, in_controller):

        # if nothing is selected a warning will pop up
        if len(in_options.selection) < 1:
            in_options.report_error('No selected items. Please select any items in the hirearchy')
            return False

        node = in_options.subject

        # gets the pin path from the Items Array node
        items_pin = node.find_pin("Items").get_pin_path()
        array_size = (node.find_pin("Items").get_array_size() - 1)

        for selected_item in in_options.selection:

            for i in range(array_size, -1, -1):
                x = i

            # check if one of the selections already exists in the Item Array
                if selected_item.name == node.find_pin('Items.' + str(x) + '.Name').get_default_value():
                    break
            if selected_item.name == node.find_pin('Items.' + str(x) + '.Name').get_default_value():
                pass
            else:
                #creates a new pin
                new_pin = in_controller.add_array_pin(items_pin, '', True, True)
                #sets the "Name" value based on the selected_item    
                in_controller.set_pin_default_value(new_pin + '.Name', selected_item.name, True)
                # sets the Type value based on the selected item
                in_controller.set_pin_default_value(new_pin + '.Type', selected_item.type.name, True)     
                # expands the pins so that you can see what all has been added       
                in_controller.set_pin_expansion(new_pin, True)

        return True

    @classmethod
    def register(cls):
        # retrieve the node we want to add a workflow to
        unit_struct = unreal.RigUnit_ItemArray.static_struct()

        # create an empty callback and bind an instance of this class to it
        provider_callback = unreal.RigVMUserWorkflowProvider()
        provider_callback.bind_callable(cls())

        # remember the registered provider handle so we can unregister later
        handle = unreal.RigVMUserWorkflowRegistry.get().register_provider(unit_struct, provider_callback)

        # we also store the callback on the class 
        # so that it doesn't get garbage collected
        cls._provider_handles[handle] = provider_callback

    @classmethod
    def unregister(cls):
        for (handle, provider) in cls._provider_handles:
            unreal.RigVMUserWorkflowRegistry.get().unregister_provider(handle)
        cls._provider_handles = {}