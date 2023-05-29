#Copyright Epic Games, Inc. All Rights Reserved.

require 'sketchup.rb'
require 'extensions.rb'

module EpicGames
  module Datasmith
    unless file_loaded?(__FILE__)
      # Setting these variables prior to plugin loading are useful for debugging(when running plugin without installing it):
      # @extension_path - path to plugin_main.rb to load extension from
      # @plugin_dll - path to .so
      # @plugin_resources - icons
      # @directlink_enabled - force DirectLink support enable/disable
      # @engine_path - engine path to use
      # @dev - dev tools
      # When these variables are not defined(nil) they are loaded as though plugin is installed

      @extension_path = 'UnrealDatasmithSketchUp/plugin_main.rb' if @extension_path.nil?

      if @plugin_dll.nil?
        extension_binary_name = if Sketchup.platform == :platform_win
          'DatasmithSketchUp.so'
        else
          'DatasmithSketchUp'
        end
        @plugin_dll = File.join(File.dirname(__FILE__), 'UnrealDatasmithSketchUp', extension_binary_name)
      end

      @plugin_resources = File.join(File.dirname(__FILE__), 'UnrealDatasmithSketchUp/Resources') if @plugin_resources.nil?

      major, minor, build = Sketchup.version.split('.').map {|s| s.to_i}

      @directlink_enabled = (major >= 20) if @directlink_enabled.nil?

      # Whether ruby_api.h functions present, allowing to pass SU refs to C++, since 2020.2
      @ruby_api_supported = (major > 20) || ((major == 20) && (minor >=2)) if @ruby_api_supported.nil?

      # Api support for changing active path
      @active_path_change_supported = major >= 20 if @active_path_change_supported.nil?

      @plugin_dll_incompatible = [] if @plugin_dll_incompatible.nil?
      # Plugin binary for SU 2020 is build with 2020.2 SDK and won't be able to load on within more recent SU 2020
      if major == 20 && minor < 2
        @plugin_dll_incompatible.append :PluginIncompatible2020RequiresMinor2
      end

      plugin_version_fpath = File.join(File.dirname(__FILE__), 'UnrealDatasmithSketchUp/version')
      plugin_version = begin 
        File.read(plugin_version_fpath).rstrip
      rescue => e
        puts "UnrealDatasmithSketchUp: Can't read version file: #{e.inspect}"
        '<unknown>'
      end

      extension = SketchupExtension.new('Unreal Datasmith', @extension_path)

      description = "Unreal Datasmith plugin#{@directlink_enabled ? ' with DirectLink':''}."

      extension.description = description
      extension.version     = plugin_version
      extension.copyright   = 'Epic Games, Inc. © 2022'
      extension.creator     = 'Epic Games'

      Sketchup.register_extension(extension, true)

      file_loaded(__FILE__)
    end
  end
end

