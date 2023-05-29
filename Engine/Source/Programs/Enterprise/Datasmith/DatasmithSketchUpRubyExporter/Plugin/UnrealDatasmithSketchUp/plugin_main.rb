#Copyright Epic Games, Inc. All Rights Reserved.

require 'sketchup.rb'

require_relative './logging'
require_relative './messages_dialog'
require_relative './connections_dialog'
require_relative './utils'

require 'fiddle'

if Sketchup.platform == :platform_win
  require 'win32/registry'
end

module EpicGames
  module Loc
    @translation_table = {
      :Synchronize => "Sync",
      :SynchronizeTooltip => "Sync Model with DirectLink",
      :ToggleAutoSync => "<Toggle Direct Link Auto Sync>",
      :ToggleAutoSyncTooltip => "<Toggle Direct Link Auto Sync>",
      :ManageConnections => "Connections",
      :ManageConnectionsTooltip => "Manage connections",
      :Export => "Export",
      :ExportModelToDatasmith => "Export Model to Unreal Datasmith",
      :ShowLog => "Log",
      :ShowLogTooltip => "Show messages",
      :Datasmith => "Datasmith",
      :MessagesTitle => "Datasmith Messages",
      :PluginIncompatible => "Unreal Datasmith extension is incompatible with current SketchUp version. Please disable/uninstall the extension or upgrade SketchUp.",
      :PluginIncompatible2020RequiresMinor2 => "Extension for SketchUp 2020 requires at least SketchUp  2020.2",
    }

    def self.load(locale_name)
      plugin_resources = EpicGames::Datasmith.instance_variable_get(:@plugin_resources)
      if plugin_resources
        localization_fpath = File.join(plugin_resources, locale_name, 'plugin.strings')
        EpicGames::Datasmith.log_debug { "Reading localization from '#{localization_fpath}'" }
        if File.file? localization_fpath
          File.open(localization_fpath).each_line do |line|
            # @type [str] instance
            key, text = line.split('=')
            @translation_table[key.to_sym] = eval text
            EpicGames::Datasmith.log_debug { "[#{key}]='#{@translation_table[key.to_sym]}'" }
          end
        else
          EpicGames::Datasmith.log_warn { "Localization  file '#{localization_fpath}' not found!" }
        end
      end
    end

    def self.t n
      result = @translation_table.fetch(n){ |_| "<#{_.to_s}>" }
    end
  end


  module Datasmith
    Datasmith.log_init @dev

    Datasmith.log_debug { "Executing plugin script file '#{__FILE__}'" }

    # log execution time of the block of code
    def self.timeit(name, &timed)
      time_start = Time.now
      result = timed.call()
      time_end = Time.now
      Datasmith.log_info { "'#{name}' executed in #{time_end - time_start} seconds" }
      result
    end

    # set active path to top and revert back, including selected entities
    # @param [Sketchup::Model] model
    def self.active_path_scope(model)
      log_debug { "model.active_path(initial): #{model.active_path}" }
      active_path_stored = model.active_path
      selection_stored = model.selection.to_a
      log_debug { "selection stored: #{selection_stored}" }

      # Use start_operation to make sure setting active_path is transparent(not polluting undo/redo history)
      model.start_operation("close editing context", true, false, true)
      model.active_path = nil
      model.commit_operation
      log_debug { "model.active_path(set): '#{model.active_path}'" }

      result = yield

      if @active_path_change_supported
        log_debug { "model.active_path(restoring): #{active_path_stored}" }

        model.start_operation("restore editing context", true, false, true)
        log_debug { "active_path_stored: #{active_path_stored}" }
        model.active_path = active_path_stored # revert editing context to where it was
        model.commit_operation

        log_debug { "model.active_path(restored): #{model.active_path}" }
      end

      selection_stored.each { |entity| model.selection.add entity }
      log_debug { "selection REstored: #{model.selection}" }

      result
    end

    def self.checked_call
      begin
        return yield
      rescue  => exception
        engine_path = ""

        ["Exception: '#{exception.to_s}'", *exception.backtrace].each do |line|
          Datasmith.log_error { line }
        end
      end
    end

    def self.load(dll_path)
      checked_call { _load dll_path }
    end

    def self._load(module_dll_path)
      Datasmith.log_info { "Loading '#{__FILE__}'..." }

      unless @plugin_dll_incompatible.empty?
        UI::messagebox( "#{Loc.t :PluginIncompatible}\n\n#{@plugin_dll_incompatible.map{|s| Loc.t s }.join("\n")}" )
        return
      end

      # Load extension dependent dlls - preload all dependent dlls using full path so that os doesn't need to search for them
      dll_dir = File.dirname module_dll_path
      Dir.glob(File.join(dll_dir, '*.{dll,so}').gsub("\\", '/')) do |path|
        if File.basename(path) != File.basename(module_dll_path)
          Fiddle.dlopen path
        end
      end

      # Load extension module
      Datasmith.log_info { "Loading plugin binary module from #{module_dll_path}" }
      require module_dll_path

      init_directlink

      @temp_folder = Sketchup.temp_dir

      resources_path = @plugin_resources

      Loc.load Sketchup.get_locale

      send_update_command = UI::Command.new Loc.t :Synchronize do
        checked_call do 
          send_update 
        end
        UI.refresh_toolbars if Sketchup.platform == :platform_osx # force refresh UI to fix visual state bug on Mac when button drawn pressed
      end
      send_update_command.menu_text = Loc.t :Synchronize
      send_update_command.tooltip = Loc.t :Synchronize
      send_update_command.status_bar_text = Loc.t :SynchronizeTooltip
      send_update_command.small_icon = File.join(resources_path, 'DatasmithSyncIcon16.png')
      send_update_command.large_icon = File.join(resources_path, 'DatasmithSyncIcon32.png')

      auto_sync_toggle_command = UI::Command.new Loc.t :Synchronize do
        toggle_live_update
        UI.refresh_toolbars if Sketchup.platform == :platform_osx # force refresh UI to fix visual state bug on Mac when button drawn pressed
      end
      auto_sync_toggle_command.menu_text = Loc.t :ToggleAutoSync
      auto_sync_toggle_command.tooltip = Loc.t :ToggleAutoSync
      auto_sync_toggle_command.status_bar_text = Loc.t :ToggleAutoSyncTooltip
      auto_sync_toggle_command.small_icon = File.join(resources_path, 'DatasmithAutoSyncIconOn16.png')
      auto_sync_toggle_command.large_icon = File.join(resources_path, 'DatasmithAutoSyncIconOn32.png')
      auto_sync_toggle_command.set_validation_proc do
        if live_update?
          MF_CHECKED
        else
          MF_UNCHECKED
        end
      end

      manage_connections_command = UI::Command.new Loc.t :ManageConnections do
        checked_call do 
          open_manage_connections_ui 
        end
        UI.refresh_toolbars if Sketchup.platform == :platform_osx # force refresh UI to fix visual state bug on Mac when button drawn pressed
      end
      manage_connections_command.menu_text = Loc.t :ManageConnections
      manage_connections_command.tooltip = Loc.t :ManageConnections
      manage_connections_command.status_bar_text = Loc.t :ManageConnectionsTooltip
      manage_connections_command.small_icon = File.join(resources_path, 'DatasmithManageConnectionsIcon16.png')
      manage_connections_command.large_icon = File.join(resources_path, 'DatasmithManageConnectionsIcon32.png')

      export_command = UI::Command.new("Export") do
        initial_dir = File.dirname(Sketchup.active_model.path)
        Datasmith.log_debug { "initial_dir: #{initial_dir}" }
        # looks like openpanel can accept either filename or wildcard "Unreal Datsmith|*.udatasmith||"
        initial_filename = Sketchup.active_model.title+'.udatasmith'
        # savepanel doesn't allow to pass initial filename and wildcard simultaneously
        if Sketchup.platform == :platform_win
          path = UI.savepanel(Loc.t(:ExportModelToDatasmith),
                              initial_dir, initial_filename) #"Unreal Datasmith (*.udatasmith)|*.udatasmith|")
        else
          initial_dir = nil # use last location
          path = UI.savepanel(Loc.t(:ExportModelToDatasmith),
                              initial_dir, initial_filename)
        end
        Datasmith.log_debug { "User selected path: #{path}" }
        if path
          dirpath, filename = File.split path
          name = File.basename(filename, '.udatasmith')
          Datasmith.log_debug { "Export as '#{name}' to '#{dirpath}'" }
          export(name, dirpath)
        end

        UI.refresh_toolbars if Sketchup.platform == :platform_osx # force refresh UI to fix visual state bug on Mac when button drawn pressed
      end

      export_command.menu_text = Loc.t :Export
      export_command.tooltip = Loc.t :Export
      export_command.status_bar_text = Loc.t :ExportModelToDatasmith
      export_command.small_icon = File.join(resources_path, 'DatasmithIcon16.png')
      export_command.large_icon = File.join(resources_path, 'DatasmithIcon32.png')

      show_log_command = UI::Command.new Loc.t :ShowLog do
        checked_call do 
          show_log 
        end
        UI.refresh_toolbars if Sketchup.platform == :platform_osx # force refresh UI to fix visual state bug on Mac when button drawn pressed
      end
      show_log_command.menu_text = Loc.t :ShowLog
      show_log_command.tooltip = Loc.t :ShowLog
      show_log_command.status_bar_text = Loc.t :ShowLogTooltip
      show_log_command.small_icon = File.join(resources_path, 'DatasmithLogIcon16.png')
      show_log_command.large_icon = File.join(resources_path, 'DatasmithLogIcon32.png')
      
      toolbar =  UI::Toolbar.new Loc.t :Datasmith
      toolbar.add_item send_update_command if @directlink_enabled
      toolbar.add_item auto_sync_toggle_command if @directlink_enabled
      toolbar.add_item manage_connections_command if @directlink_enabled
      toolbar.add_item export_command
      toolbar.add_item show_log_command if @directlink_enabled

      extensions_menu = UI.menu'Extensions'
      datasmith_menu = extensions_menu.add_submenu Loc.t :Datasmith
      datasmith_menu.add_item send_update_command if @directlink_enabled
      datasmith_menu.add_item auto_sync_toggle_command if @directlink_enabled
      datasmith_menu.add_item manage_connections_command if @directlink_enabled
      datasmith_menu.add_item export_command
      datasmith_menu.add_item show_log_command if @directlink_enabled

      if @dev
        dev_export_current_command = UI::Command.new("ExportCurrent") do
          checked_call { export_current_datasmith_scene }
        end
        dev_export_current_command.menu_text = "Export Current"
        dev_export_current_command.tooltip = "Export Current"
        toolbar.add_item dev_export_current_command
      end

      toolbar.show

      Sketchup.add_observer(AppObserver.new)

      Datasmith.log_debug { "Active Model: #{Sketchup.active_model}!" }

      # note: this is only needed when plugin is not loaded late -
      # expectsStartupModelNotifications ensures that onOpenModel is called on startup
      ensure_directlink_activated_for_model

      true
    end

    def self.unload
      unless @connection_status_timer.nil?
        UI.stop_timer @connection_status_timer
        @connection_status_timer = nil
      end
      EpicGames::Datasmith.stop_change_tracking
      EpicGames::DatasmithBackend.on_unload
    end

    def self.toggle_live_update
      # EpicGames::Datasmith.live_update = true
      if live_update?
        UI.stop_timer @live_update_timer
        @live_update_timer = nil
      else
        @live_update_timer = UI.start_timer 1, true do
          # Limit set of tools allowed to autosync when they are selected to make no inconvenience to user
          # E.g. RectangleTool be cancelled when Sync operation initiates - plugin needs to reset editing context
          # to extract geometry/transforms properly
          allowed_tools = Set[
            'SelectionTool',
            'PaintTool',
          ]
          if allowed_tools.include? Sketchup.active_model.tools.active_tool_name
            send_update
          end
        end
      end
    end

    def self.live_update?
      !@live_update_timer.nil?
    end

    def self.open_manage_connections_ui
      if @use_datasmith_directlink_ui
        EpicGames::DatasmithBackend.open_directlink_ui
      else
        dialog = EpicGames::Datasmith.get_manage_connections_dialog
        dialog.set_cache_directory Sketchup.temp_dir
        dialog.show
      end
    end

    attr_reader :observe_only_active_entities

    def self.set_temp_folder(path)
      @temp_folder = path
    end

    def self.directlink_cache_directory
      if @use_datasmith_directlink_ui
        path = EpicGames::DatasmithBackend.get_directlink_cache_directory
      else
        path = EpicGames::Datasmith.get_manage_connections_dialog.get_cache_directory
      end
      path && path.force_encoding('UTF-8')
    end

    def self.set_enable_directlink(enable)
      @directlink_enabled = enable
    end

    def self.get_active_path_change_supported
      @active_path_change_supported
    end

    def self.init_directlink

      enable_slate_ui = false # if can use Datasmith DirectLink UI module
      engine_path_for_slate = "" # path to minimal engine to use slate UI

      if Sketchup.platform == :platform_win
          engine_path_for_slate = @engine_path.nil? ? get_platform_engine_path : @engine_path
      end

      if engine_path_for_slate == ""
        enable_slate_ui = false
      else
        unless is_engine_path_valid engine_path_for_slate
          Datasmith.log_warn { "Path '#{engine_path_for_slate}' doesn't seem like a valid Engine path!" }
          # Passing invalid engine path to FDatasmithExporterManager::Initialize causes crash in GameThread OnInit
          # Disable UI in this case(to avoid crash)
          enable_slate_ui = false
        else
          enable_slate_ui = true
        end
      end

      Datasmith.log_info { "Engine Path: '#{engine_path_for_slate}', Enable UI: #{enable_slate_ui}" }
      EpicGames::DatasmithBackend.on_load(enable_slate_ui, engine_path_for_slate)

      @use_datasmith_directlink_ui = enable_slate_ui

      # Poll connection state and pass to connections dialog when no DirectLinkUI dialog available(e.g. on Mac)
      unless @use_datasmith_directlink_ui
        @connection_status_timer = UI.start_timer 0.2, true do
          connection_status = @exporter ? @exporter.get_connection_status : []
          dialog = EpicGames::Datasmith.get_manage_connections_dialog
          dialog.set_status connection_status
        end

        Datasmith.log_debug { "Plugin loaded!" }
      end


    end

    def self.is_engine_path_valid(engine_path)
      # some validity check for engine path(note FDatasmithExporterManager expects path to end with slash)
      # todo: probably not needed when installer is in place, and brittle
      Dir.exist?(engine_path + "Shaders/StandaloneRenderer")
    end

    def self.get_platform_engine_path
      if Sketchup.platform == :platform_win
        engine_path = "C:\\ProgramData\\Epic\\Exporter\\SketchUpEngine\\" # default if no reg key can be read
        begin
          # todo: unify EnginePath or change to SketchUp-specific
          Win32::Registry::HKEY_LOCAL_MACHINE.open('Software\Wow6432Node\EpicGames\Unreal Engine') do |r|
            engine_path = r['SketchUpEngineDir'] # for now using Revit's
            Datasmith.log_debug { "Loaded Engine Path from registry: '#{engine_path}'" }
          end
        rescue Win32::Registry::Error => exception
          [exception.message, *exception.backtrace].each do |line|
            Datasmith.log_warn { line }
          end
        end
      else
        engine_path = ""
      end
      engine_path
    end

    def self.on_model_changed
      Sketchup::active_model.tools.add_observer ToolsObserver.new
      stop_change_tracking
      ensure_directlink_activated_for_model
    end

    def self.on_active_path_changed(model)
      return unless @observe_only_active_entities
      return unless @change_tracking_started

      # clean previously observed
      # is this really needed? Maybe to save memory? This might be only to keep one reference per Entities
      unless @entities_observed_parent.nil?
        if @entities_observed_parent.is_a? Sketchup::Model or not @entities_observed_parent.deleted?
          @entities_observed_parent.entities.remove_observer @model_entities_observer
        end
      end

      @entities_observed_parent = Sketchup.active_model.active_entities.parent
      Sketchup.active_model.active_entities.add_observer @model_entities_observer

      log_debug {"Active path changed to '#{Sketchup.active_model.active_path}'" }

      log_debug {"Assigned observer to '#{Sketchup.active_model.active_entities}' of '#{@entities_observed_parent}'" }
    end

    # set hint that modifications might have been done to the SU scene after last sync
    def self.set_scene_modified
      @scene_modified = true
    end

    def self.scene_modified?
      @scene_modified
    end

    def self.reset_scene_modified
      @scene_modified = false
    end

    def self.on_element_modified(entity)
      Datasmith.timeit 'on_entity_modified' do
        modified = if entity.is_a? Sketchup::Face or entity.is_a? Sketchup::Edge
                     # SketchUp C api doesn't have a way to find entity parent
                     # So use special path for faces to identify what needs to be changed(instead of keeping map of faces in C++)
                     get_exporter.on_geometry_modified_by_id get_entity_parent_id(entity)
                   else
                     get_exporter.on_entity_modified_by_id entity.entityID
                   end
        if modified
          set_scene_modified
          log_debug {"Modified entity #{entity}, scene_modified: #{scene_modified?} change_tracking_started:#{@change_tracking_started}"}
        end
      end
    end

    # @param [Sketchup::Entity] entity
    def self.on_entity_added(entity)
      # Note: sometimes onElementAdded receives deleted entity for some reason. E.g. when using Stamp operation
      return if entity.deleted?

      Datasmith.timeit 'on_entity_added' do
        # C++ api doesn't have an easy way to determine entity parent from an Entity or Entities (except traversing scene and finding Model/Definition's Entities this entity belongs to)
        modified = if @ruby_api_supported
          # pass nil as parent to indicate Model(C API expects EntitiRef)
          if entity.parent.is_a? Sketchup::Model
            parent = nil
          else
            parent = entity.parent
          end
          get_exporter.on_entity_added(parent, entity)
        else
          parent_id = get_entity_parent_id(entity)
          if entity.is_a? Sketchup::Face
            get_exporter.on_geometry_modified_by_id parent_id
          else
            get_exporter.on_entity_added_by_id(parent_id, entity.entityID)
          end
        end
        # setup_entity_observers(entity) unless observe_only_active_entities
        if modified
          set_scene_modified
        end
      end
    end

    def self.on_component_added(definition)
      return if definition.deleted?
      definition.entities.add_observer @model_entities_observer
    end

    def self.on_material_added(materials, material)
      modified = if @ruby_api_supported
        EpicGames::Datasmith.on_entity_added material
      else
        EpicGames::Datasmith.get_exporter.on_material_added_by_id material.entityID
      end
      if modified
        set_scene_modified
      end
    end

    def self.on_layer_changed(layers, layer)
      if EpicGames::Datasmith.get_exporter.on_layer_modified layer
        set_scene_modified
      end
    end

    def self.on_style_changed
      if EpicGames::Datasmith.get_exporter.on_style_changed
        set_scene_modified
      end
    end

    def self.on_color_by_layer_changed
      if EpicGames::Datasmith.get_exporter.on_color_by_layer_changed
        set_scene_modified
      end
    end

    def self.get_entity_parent_id(entity)
      get_entity_id(entity.parent)
    end

    def self.get_entity_id(parent)
      if parent.is_a? Sketchup::Model
        0
      else
        parent.entityID
      end
    end

    # @param [Sketchup::Layers] layers
    # @param [Sketchup::Layer] layer
    def self.on_layer_added(layers, layer)
      layer.add_observer @layer_observer
    end

    def self.get_exporter
      return @exporter
    end

    def self.export(name, dirpath)
      Datasmith.log_info { "Exporting : #{dirpath} with name #{name}" }
      timeit 'export' do
        exporter = EpicGames::DatasmithBackend::DatasmithSketchUpDirectLinkExporter.new(name, dirpath, false)
        exporter.start
        update_scene exporter, true  # force processing whole update
        exporter.export_current_datasmith_scene
      end
    end

    def self.show_log
      dialog = EpicGames::Datasmith.get_messages_dialog
      @messages_log.set_on_change do
        dialog.on_messages_updated
      end
      dialog.set_messages @messages_log
      dialog.show
    end

    # used for debugging - simple way to dump current scene to disk
    def self.export_current_datasmith_scene
      update_directlink_scene

      # todo: this is a workaround for FDatasmithSceneExporter::Export that converts asset paths
      # to relative - when called on first export all is fine(source path is absolute)
      # consequent times - relative path on asset first converted to absolute using current working dir
      # before making relative path
      Dir.chdir @export_folder do
        timeit 'export_current' do
          @exporter.export_current_datasmith_scene_no_cleanup
        end
      end
    end

    # send updated datasmith scene via DirectLink
    def self.send_update
      Datasmith.log_info { "Sync '#{@name}' via '#{@export_folder}'..." }
      return unless @directlink_enabled

      if update_directlink_scene  # set actual update  via DirectLink only when update reported that something changed
        Datasmith.timeit 'sync' do
          @exporter.send_update
        end
      end
    end

    # set up DirectLink for the current scene
    # This makes connection immediately visible in Unreal
    def self.ensure_directlink_activated_for_model
      return if @exporter

      model = Sketchup.active_model
      return unless model

      # use Model.name in case it's set, as a fallback for missing filename(title is fname without extension)
      @name = model.title || model.name || 'Unnamed'

      Datasmith.log_debug { "directlink_cache_directory: '#{directlink_cache_directory}'" }

      @export_folder = directlink_cache_directory || @temp_folder

      Datasmith.log_info { "Activate DirectLink exporter for Model: '#{@name}'('#{model.path}')" }
      @exporter = EpicGames::DatasmithBackend::DatasmithSketchUpDirectLinkExporter.new(@name, @export_folder, @directlink_enabled)
      @change_tracking_started = false
    end

    def self.update_directlink_scene
      Datasmith.log_info { "update_directlink_scene" }

      ensure_change_tracking_started

      # Close edited instances
      # This is required before committing scene update because SketchUp
      # rebased all geometry vertices and instance transforms to edited instance's origin
      active_path_scope Sketchup.active_model do
        timeit "exporter.update" do
          datasmith_scene_modified = update_scene @exporter, scene_modified?
          reset_scene_modified
          datasmith_scene_modified
        end
      end
    end

    def self.update_scene(exporter, modification_hint)

      # Need to provide active scene id separately - C++ api doesn't have a way to retrieve it, no observer exists for it
      # Note: 'Scenes' in UI, 'Pages' in Ruby API; Each scene contains camera data used for Datasmith export
      # @type [Sketchup::Page]
      selected_page = Sketchup.active_model.pages.selected_page
      scene_id = selected_page.nil? ? 0 : selected_page.entityID
      exporter.set_active_scene scene_id

      exporter.update modification_hint
    end

    def self.ensure_change_tracking_started
      return if @change_tracking_started
      Datasmith.log_info { "Starting tracking changes of '#{@name}', with temp_dir: '#{@export_folder}'..." }
      @change_tracking_started = true

      timeit 'exporter.start' do
        @exporter.start
      end
      set_scene_modified  # make following update execute, after exporter reinitialized for new scene

      timeit 'setup_scene_observers' do
        setup_model_observers
      end
    end

    # cancel tracking previous model
    # todo: this not only stops tracking changes but destroys directlink connection for this model
    def self.stop_change_tracking
      return unless @exporter
      Datasmith.log_debug { "Stopping tracking scene." }
      clear_model_observers

      @exporter.stop
      @exporter = nil
    end

    def self.setup_model_observers
      @model_entities_observer = EntitiesObserver.new

      @model_observer = ModelObserver.new
      Sketchup.active_model.add_observer @model_observer

      @materials_observer = MaterialsObserver.new
      Sketchup.active_model.materials.add_observer @materials_observer

      @layers_observer = LayersObserver.new
      Sketchup.active_model.layers.add_observer @layers_observer

      @layer_observer = LayerObserver.new

      #Sketchup.active_model.active_entities.add_observer @model_entities_observer

      @observe_only_active_entities = false

      if @observe_only_active_entities
        on_active_path_changed Sketchup.active_model
      else
        #setup_entities_observers(Sketchup.active_model.entities)
        Sketchup.active_model.entities.add_observer @model_entities_observer

        Sketchup.active_model.definitions.each do |definition|
          definition.entities.add_observer @model_entities_observer
        end
      end

      @definitions_observer = DefinitionsObserver.new
      Sketchup.active_model.definitions.add_observer @definitions_observer

      Sketchup.active_model.rendering_options.add_observer RenderingOptionsObserver.new
    end

    def self.clear_model_observers

      unless @definitions_observer.nil?
        @definitions_observer.remove
        @definitions_observer = nil
      end
      
      # when onQuit is called on Mac Sketchup.active_model becomes nil
      unless Sketchup.active_model.nil?
        unless @observe_only_active_entities
          Sketchup.active_model.entities.remove_observer @model_entities_observer
  
          Sketchup.active_model.definitions.each do |definition|
            definition.entities.remove_observer @model_entities_observer
          end
        end

        Sketchup.active_model.layers.each do |layer|
          layer.remove_observer @layer_observer
        end

        Sketchup.active_model.layers.remove_observer @layers_observer

        Sketchup.active_model.materials.remove_observer @materials_observer

        Sketchup.active_model.remove_observer @model_observer
      end
      @model_observer = nil
      @model_entities_observer = nil
    end

    def self.setup_entities_observers(entities)
      entities.add_observer @model_entities_observer

      entities.each do |entity|
        setup_entity_observers(entity)
      end
    end

    def self.clear_entities_observers(entities)

      entities.each do |entity|
        if entity.is_a? Sketchup::ComponentInstance
          # @type [Sketchup::ComponentInstance] instance
          component_instance = entity
          clear_entities_observers(component_instance.definition.entities)
        elsif entity.is_a? Sketchup::Group
          # @type [Sketchup::Group]
          group = entity
          clear_entities_observers(group.entities)
        elsif entity.is_a? Sketchup::Face
          # hello
        elsif entity.is_a? Sketchup::Edge
          # skip
        else
          Datasmith.log_debug { " !UNKNOWN! #{entity}" }
        end

      end

      entities.remove_observer @model_entities_observer
    end

    def self.setup_entity_observers(entity)
      if entity.is_a? Sketchup::ComponentInstance
        # @type [Sketchup::ComponentInstance] instance
        component_instance = entity
        definition = component_instance.definition
        setup_entities_observers(component_instance.definition.entities)
      elsif entity.is_a? Sketchup::Group
        # @type [Sketchup::Group]
        group = entity

        definition = group.definition
        setup_entities_observers(group.entities)
        # todo: 'instances' variable of Sketchup::ComponentDefinition contains every instance of this
        # component. I.e. if this Component is placed somewhere(in Model or another Component) its reference
        # will be added to the 'instances' list
        # Looks like when we handle a Group or ComponentDefinition change we need to update all instances too
        group.definition.instances
      elsif entity.is_a? Sketchup::Face
        # hello
      elsif entity.is_a? Sketchup::Edge
        # skip
      else
        Datasmith.log_debug { " !UNKNOWN! #{entity}" }
      end
    end

    #todo: move observers to separate file?

    module ObserverHelperDecoratorImpl

      def self.included(base)
        EpicGames::Datasmith::ObserverHelperDecorator.install(self, base, !Datasmith.instance_variable_get(:@dev))
      end

      def log_call(method_symbol, args)
        Datasmith.log_debug do
          s = "#{self.class}.#{method_symbol}"
          return unless args

          args_string = args.map { |arg|
            case arg
            when Sketchup::Entity
              # @type [Sketchup::Entity]
              entity = arg
              if entity.deleted?
                "<deleted>"
              else
                "#{entity.typename}(#{entity.entityID} of #{entity.parent ? entity.parent.entityID : '<nil>'})"
              end
            when Sketchup::Entities
              # @type [Sketchup::Entities]
              entities = arg
              parent = entities.parent
              parent_name = if parent == nil
                              "<nil>"
                            else
                              "#{parent.typename}:#{entities.parent.entityID}"
                            end
              "Entities(#{parent_name})"
            else
              arg.to_s
            end
          }.join(', ')
          s + "(#{args_string})"
        end
      end

      def log_exception(method_symbol, exception)
        ["'#{self.class}.#{method_symbol}' raised an Exception: ", exception.message, *exception.backtrace].each do |line|
          Datasmith.log_error { line }
        end
      end

      def log_missing(method_symbol, args)
        Datasmith.log_debug { "miss:" }
        log_call method_symbol, args
      end
    end

    class EntitiesObserver < Sketchup::EntitiesObserver

      def onElementAdded(entities, entity)
        EpicGames::Datasmith.on_entity_added entity
      end

      def onElementRemoved(entities, entity_id)
        # todo: watch for removed elements
        Datasmith.log_debug { "onElementRemoved: #{entity_id}" }
        result = Datasmith.timeit('on_entity_removed') {
          if EpicGames::Datasmith.get_exporter.on_entity_removed(EpicGames::Datasmith.get_entity_id(entities.parent), entity_id)
            EpicGames::Datasmith.set_scene_modified
          end
        }
        Datasmith.log_debug { "Result: #{result}" }

      end

      def onElementModified(entities, entity)
        # todo: watch for modified elements - faces, ComponentInstances
        # triggered:
        #   - ComponentInstance
        #     - moved, name changed
        #     - its component definition replaced(select instance, right-click on a ComponentDefinition "Replace Selected")
        #   - Face
        #     - moved
        #     - size changed(edge moved)
        #
        EpicGames::Datasmith.on_element_modified entity
      end

      include ObserverHelperDecoratorImpl
    end

    class DefinitionsObserver < Sketchup::DefinitionsObserver

      def initialize
        super
      end

      def remove
      end

      def onComponentAdded(definitions, definition)
        EpicGames::Datasmith.on_component_added definition
      end

      def onComponentRemoved(definitions, definition)
      end

      include ObserverHelperDecoratorImpl
    end

    class MaterialsObserver < Sketchup::MaterialsObserver

      def onMaterialRemove(materials, material)
        # material - is a deleted entity so there's no way to retrieve its entityID. Looks like a bug in SU Ruby API
        # EpicGames::Datasmith.log_info {"#{material}"}
        # EpicGames::Datasmith.get_exporter.on_entity_removed(material.entityID)
      end

      def onMaterialAdd(materials, material)
        EpicGames::Datasmith.on_material_added materials, material
      end

      def onMaterialChange(materials, material)
        EpicGames::Datasmith.on_element_modified material
      end

      include ObserverHelperDecoratorImpl
    end

    class LayersObserver < Sketchup::LayersObserver

      def onLayerAdded(layers, layer)
        EpicGames::Datasmith.on_layer_added layers, layer
      end

      def onLayerChanged(layers, layer)
        EpicGames::Datasmith.on_layer_changed layers, layer
      end

      def onLayerFolderChanged(layers, layer_folder)
        # invalidate all descendant layers recursively
        folders = [layer_folder]
        until folders.empty?
          folder = folders.pop
          folders.concat folder.folders
          folder.layers.each do |layer|
            EpicGames::Datasmith.on_layer_changed layers, layer
          end
        end
      end

      include ObserverHelperDecoratorImpl
    end

    class LayerObserver < Sketchup::EntityObserver

      include ObserverHelperDecoratorImpl
    end

    class EntityObserver < Sketchup::EntityObserver

      def onChangeEntity(entity)
        # todo: may be used to watch concrete entity(e.g. instance)
        # note: when entity is deleted this method is also called!
        Datasmith.log_debug { "EntityObserver.onChangeEntity: #{entity}" }
      end

      def onEraseEntity(entity)
        # todo: may be used to watch concrete entity(e.g. instance) deletion
        Datasmith.log_debug { "EntityObserver.onEraseEntity: #{entity}" }
      end

      include ObserverHelperDecoratorImpl
    end

    class RenderingOptionsObserver < Sketchup::RenderingOptionsObserver

      def onRenderingOptionsChanged(rendering_options, type)
        case type
        when Sketchup::RenderingOptions::ROPSetFaceColor
          # Style color changes due to edit or getting switched to style with different color
          EpicGames::Datasmith.on_style_changed
        when Sketchup::RenderingOptions::ROPSetDisplayColorByLayer
          # "Tags window ->Color by Tag" option toggle
          EpicGames::Datasmith.on_color_by_layer_changed
        else
          nil
        end
      end

      include ObserverHelperDecoratorImpl
    end

    class ModelObserver < Sketchup::ModelObserver

      def onActivePathChanged(model)
        # todo: may be used to watch currently edited WITH UI 'stuff'(Model or Component(Definition?), something eld?)
        # called when Component is being edited
        Datasmith.log_debug { "#{self.class.name}.#{__method__}: #{model}" }

        EpicGames::Datasmith.on_active_path_changed model
      end

      def onPlaceComponent(instance)
        # todo: may be used to watch when component is placed WITH UI
        # Called when component is dragged from the Component Browser(not create)
      end

      def onTransactionStart(model)
      end

      def onTransactionCommit(model)
      end

      include ObserverHelperDecoratorImpl
    end

    class AppObserver < Sketchup::AppObserver
      # makes sure that startup model notifies
      def expectsStartupModelNotifications
        true
      end

      def onActivateModel(model)
        # Called when active model switched on MacOS. This callback is not called on Windows
        Datasmith.log_debug { "#{self.class.name}.#{__method__}: #{model}" }
        EpicGames::Datasmith.on_model_changed
      end

      def onNewModel(instance)
        Datasmith.log_debug { "#{self.class.name}.#{__method__}: #{instance}" }
        EpicGames::Datasmith.on_model_changed
      end

      def onOpenModel(model)
        Datasmith.log_debug { "#{self.class.name}.#{__method__}: #{model}" }
        EpicGames::Datasmith.on_model_changed
      end

      def onUnloadExtension(extension_name)
        Datasmith.log_debug { "#{self.class.name}.#{__method__}: #{extension_name}" }
        EpicGames::Datasmith.stop_change_tracking
      end

      def onQuit
        begin
          Datasmith.log_debug { "#{self.class.name}.#{__method__}" }
          EpicGames::Datasmith.unload
        rescue => exception
          [exception.message, *exception.backtrace].each do |line|
            Datasmith.log_warn { line }
          end
        end
      end

      include ObserverHelperDecoratorImpl
    end

    class ToolsObserver < Sketchup::ToolsObserver

      def onActiveToolChanged(tools, tool_name, tool_id)
        EpicGames::Datasmith.log_debug {"active_tool: #{Sketchup.active_model.tools.active_tool_name.inspect}"}

      end

      include ObserverHelperDecoratorImpl
    end

    unless file_loaded?(__FILE__)
      # todo: load dll, setup menu only once
      if load @plugin_dll
        file_loaded __FILE__
      end
    end
  end
end
