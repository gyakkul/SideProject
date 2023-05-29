#!/usr/bin/env ruby

require 'cert'

$haderror = false;

class HybridUI < FastlaneCore::Shell

	def error(message)
		$haderror = true
		super message
	end
end

FastlaneCore::UI.ui_object = HybridUI.new()

FastlaneCore::KeychainImporter.import_file(ARGV[0], FastlaneCore::Helper.keychain_path("login"), certificate_password:ARGV[1])

exit $haderror ? 5 : 0