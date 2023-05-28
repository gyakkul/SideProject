# Copyright Epic Games, Inc. All Rights Reserved.
import unreal


# This script will find the given RenderGrid asset and render it.
#
# REQUIREMENTS:
#    Requires the "Python Editor Script Plugin" to be enabled in your project.
#
# USAGE:
#   Use the following command line argument to launch this:
#     UnrealEditor-Cmd.exe <path_to_uproject> -ExecutePythonScript=<path_to_this_script> -RenderGrid=<path_to_render_grid> -log
#   Example:
#     UnrealEditor-Cmd.exe "C:/MyProject/MyProject.uproject" -ExecutePythonScript="C:/UE5/Engine/Plugins/Experimental/RenderGrid/Content/Python/RenderGridRenderGiven.py" -RenderGrid="/Game/Foo/MyRenderGrid" -log


def get_given_render_grid_path() -> str:
    (cmd_tokens, cmd_switches, cmd_parameters) = unreal.SystemLibrary.parse_command_line(unreal.SystemLibrary.get_command_line())
    try:
        return cmd_parameters['RenderGrid']
    except:
        unreal.log_error("Missing '-RenderGrid=/Game/Foo/MyRenderGrid' argument")
        return ""


def start_rendering_given_render_grid():
    render_grid_path = get_given_render_grid_path()
    if render_grid_path != "":
        grid = unreal.RenderGridDeveloperLibrary.get_render_grid_asset(render_grid_path)
        if grid is not None:
            grid.render()
        else:
            unreal.log_error("Invalid render grid: " + render_grid_path)


if __name__ == '__main__':
    start_rendering_given_render_grid()
    unreal.RenderGridQueue.close_editor_on_completion()
    unreal.EditorPythonScripting.set_keep_python_script_alive(True)
