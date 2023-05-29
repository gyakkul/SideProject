#Copyright Epic Games, Inc. All Rights Reserved.

require 'sketchup.rb'

require_relative './logging'

module EpicGames
  module Datasmith

    class ManageConnectionsDialog
      def initialize
        super

        create_dialog
      end

      def create_dialog
        options = {
          :dialog_title =>  EpicGames::Loc.t(:ManageConnectionsTooltip),
          :style => UI::HtmlDialog::STYLE_DIALOG,
          :min_width => 700,
          :min_height => 400,
        }

        @dialog = UI::HtmlDialog.new(options)

        # todo: localization
        html_content = <<-EOT
<!DOCTYPE html>
<html>
<head>
<style>
html, body, #main_container{
  height: 100%;
  display: flex;
  flex-direction: column;
}

#status_container {
  width: 100%;
  flex:auto;
}

#status_no_connection_container {
  height:100%;
}

#status_no_connection {
  text-align: center;
}

#status {
  table-layout: fixed;
  width: 100%;
  border-collapse: collapse;
  border: 1px solid black;
}

th, td {
  padding: 4px;
  border: 1px dotted #999;
}

td {
  text-align: left;
  overflow: hidden; 
}

th {
  text-align: left;
  overflow: hidden; 
}

#cache_directory_container {
	flex:none;
  display: flex;
	flex-direction: row;
}

#cache_directory {
  flex:auto;
}

select_cache_directory {
	flex:none;
}
</style>
</head>
<body onload='initialize()'>
<div id="main_container">
  <div id="status_container">
    <div id="status_table_container">
      <table id="status">
        <thead>
          <tr>
            <th>Source</th>
            <th>Destination</th>
          </tr>
        </thead>
        <tbody id="status_body"></tbody>
      </table>
    </div>
    <div id="status_no_connection_container">
      <div id="status_no_connection">No connection found.<br/><br/>Waiting for a Datasmith Direct Link connection to be established.<br/><br/>Please start an application supporting Datasmith Direct Link such as Twinmotion or Unreal Engine.
      </div>
    </div>
  </div>
  <br/>
  <div id="cache_directory_container">
    <label>Cache Directory:</label>
    <input id="cache_directory" type="text" disabled></input>
    <button id="select_cache_directory" onclick="sketchup.select_cache_directory()">...</button>
  </div>
</div>
<script>
  function initialize() {
    sketchup.request_directory();
    sketchup.request_status();
  }
  function setDirectory(s) {
    let cache_directory = document.getElementById('cache_directory');
    cache_directory.value = s;
  }
  function directoryUpdated() {
    sketchup.request_directory();
  }
  function getEndpointText(endpoint) {
    return `User : ${endpoint[1]}\nComputer Name : ${endpoint[3]}\nProgram Name: ${endpoint[2]}\nEndpoint Name : ${endpoint[0]}`
  }
  function setStatus(status_info) {
    if (status_info.length == 0) {
      let status_no_connection_container_element = document.getElementById('status_no_connection_container');
      status_no_connection_container_element.style.display = ''

      let status_table_element = document.getElementById('status');
      status_table_element.style.display = 'none'
    }
    else {
      let status_no_connection_container_element = document.getElementById('status_no_connection_container');
      status_no_connection_container_element.style.display = 'none'

      let status_table_element = document.getElementById('status');
      status_table_element.style.display = ''
      fillStatusTable(status_info)
    }
  }
    
  function fillStatusTable(status_info) {
    let status_element = document.getElementById('status');
    let row_count = status_element.rows.length
    for(let row_index = row_count-1; row_index>0; --row_index)
    {
      status_element.deleteRow(row_index);
    }
    status_info.forEach( info =>{
      let row = status_element.insertRow();
      
      let source_cell = row.insertCell(0)
      source_cell.innerHTML = info.source.name;
      source_cell.setAttribute('title', getEndpointText(info.source.endpoint));

      let destination_cell = row.insertCell(1);
      destination_cell.innerHTML = info.destination.name;
      destination_cell.setAttribute('title', getEndpointText(info.destination.endpoint));
    });
  }
  function statusUpdated() {
    sketchup.request_status();
  }
</script>
</body>
</html>

        EOT
        @dialog.set_html html_content

        @dialog.add_action_callback("select_cache_directory") { |_, value|
          directory_selected = UI.select_directory(
            title: "Cache Directory",
            directory: nil,
            select_multiple: false
          )
          if directory_selected
            set_cache_directory directory_selected
          end
          nil
        }

        @dialog.add_action_callback("request_directory") { |_, value|
          if @cache_directory
            # convert path string to json to add quotes
            @dialog.execute_script("setDirectory(#{@cache_directory.to_json})")
          end
          nil
        }

        @dialog.add_action_callback("request_status") { |_, value|
          unless @status_info.nil?
            # ["unnamed", "DatasmithExporter", "kerim", "SketchUp", "MOLOTILKA", "DatasmithRuntime", "DatasmithRuntimeActor_0", "DatasmithRuntime", "kerim", "UE4Editor", "MOLOTILKA"]
            infos = @status_info.each_slice(11).to_a.map do |s|
              source_name = s[0]
              source_endpoint_info = s[1..4]
              destination_name = "#{s[5]}:#{s[6]}"
              destination_endpoint_info = s[7..11]

              {'source'=>{'name'=>source_name, 'endpoint'=>source_endpoint_info},
               'destination'=>{'name'=>destination_name, 'endpoint'=>destination_endpoint_info}}
            end

            @dialog.execute_script("setStatus(#{infos.to_json})")
          end
          nil
        }

        @dialog.add_action_callback("close") { |_, value|
          @dialog.close
          nil
        }
      end

      def close
        @dialog.close
      end

      def show
        if @dialog.visible?
          @dialog.bring_to_front
        else
          create_dialog
          @dialog.show
        end
      end

      def set_cache_directory(cache_directory)
        @cache_directory = cache_directory
        @dialog.execute_script("directoryUpdated()")
      end

      def get_cache_directory
        @cache_directory
      end

      def set_status(status_info)
        return if @status_info == status_info
        
        @status_info = status_info
        @dialog.execute_script("statusUpdated()")
      end
    end

    def self.get_manage_connections_dialog
      unless @manage_connections_dialog
        @manage_connections_dialog = ManageConnectionsDialog.new
      end
      @manage_connections_dialog
    end
  end
end
