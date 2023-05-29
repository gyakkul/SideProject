#Copyright Epic Games, Inc. All Rights Reserved.

require 'sketchup.rb'
require 'json'

require_relative './logging'

module EpicGames
  module Datasmith

    # Sketchup HtmlDialog is very asynchronous - show, executing script, adding callback
    # So updating this dialog goes like this:
    # Initially JavaScript sends callback('request_messages') to Ruby to tell to set content
    #   this is done from JavaScript as it only knows asynchronously when onload happens
    # When Ruby needs to update content - it sends this 'need' to JS and JS calls back that it's ready to receive data
    # 1. "messagesUpdated" (Ruby -> JS)
    # 2. "request_messages" (JS -> Ruby)
    # 3. "setMessages(text)" (Ruby -> JS)
    class MessagesDialog
      def initialize
        super

        create_dialog
        @messages = MessagesLog.new
      end

      def create_dialog
        options = {
          :dialog_title =>  EpicGames::Loc.t(:MessagesTitle),
          :style => UI::HtmlDialog::STYLE_DIALOG,
        }

        @dialog = UI::HtmlDialog.new(options)

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
#messages {
  width: 100%;
  resize: none;
  flex:auto;
  overflow-y:scroll;
}
#buttons {
	flex:none;
}
</style>
</head>
<body onload='initialize()'>
<div id="main_container">
  <textarea id="messages"></textarea>
  <br/>
  <div id="buttons">
    <button onclick="sketchup.clear()">{clear}</button>
    <button onclick="sketchup.close()">{close}</button>
  </div>
</div>
<script>
  function initialize() {
    sketchup.request_messages()
  }
  function addMessage(s) {
    document.getElementById('messages').value += 's' + '\\r\\n';
  }
  function setMessages(s) {
    messages = document.getElementById('messages')
    messages.value = s;
    messages.scrollTop = messages.scrollHeight;
  }
  function messagesUpdated() {
    sketchup.request_messages();
  }
</script>
</body>
</html>

        EOT

        # localize
        html_content['{close}'] = EpicGames::Loc.t(:Close)
        html_content['{clear}'] = EpicGames::Loc.t(:Clear)
        
        @dialog.set_html html_content

        @dialog.add_action_callback("request_messages") { |_, value|
          if @messages
            @dialog.execute_script("setMessages(#{JSON.generate(@messages.get_messages_text)})")
          end
          nil
        }

        @dialog.add_action_callback("clear") { |_, value|
          @messages.clear
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

      def set_messages(messages)
        @messages = messages
        on_messages_updated
      end

      def on_messages_updated
        @dialog.execute_script("messagesUpdated()")
      end
    end

    def self.reset
      @messages_dialog = nil
    end

    def self.get_messages_dialog
      unless @messages_dialog
        @messages_dialog = MessagesDialog.new
      end
      @messages_dialog
    end
  end
end
