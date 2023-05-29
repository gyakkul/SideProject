#!/usr/bin/env ruby

require 'optparse'

ARGV << '-h' if ARGV.empty?


$options = {}
$options[:identities] = "iPhone Developer;Apple Development"
$options[:certonly] = false
$options[:verifyonly] = false

parser = OptionParser.new do |opts|
	opts.banner = "Turnkey IOS Cert, Provision, and Device Verification Tool\n"
	opts.banner +=	"  Usage: VerifyIOS.rb [options]"

	opts.separator ""

	opts.on('-c', '--certonly', 'If specified, this will only check for valid certificate, then quit') { |v| $options[:certonly] = true }
	opts.on('-i', '--identity IDENTITIES', 'Semicolon separated list of signing identities (default: iPhone Developer;Apple Developer)') { |v| $options[:identities] = v }
	opts.on('-m', '--provision PROVISIONNAME', 'Name of the pprovision to use (not filename, but name registered in DevCenter)') { |v| $options[:provision] = v }
	opts.on('-b', '--bundleid BUNDLEID', 'Bundle ID of your app (ex: com.company.app)') { |v| $options[:bundleid] = v }
	opts.on('-d', '--device DEVICENAME', 'Name of device to verify (must be connected to retrieve UDID), or first to use first connected device; implies -v') { |v| $options[:devicename] = v }
	opts.on('-u', '--udid DEVICEID', 'UDID of a device (does not need to be connected to verify; implies -v') { |v| $options[:udid] = v }
	opts.on('-l', '--login USERNAME', 'Username of your DevCenter account to be used') { |v| $options[:username] = v }
	opts.on('-p', '--password PASSWORD', 'Password of your DevCenter account to be used (not required if previously logged in, or saved session exists)') { |v| $options[:password] = v }
	opts.on('-t', '--team TEAMID', 'Team ID, not name, to use (not required if USERNAME only is on one team)') { |v| $options[:teamid] = v }
	opts.on('-v', '--verifyonly', 'Only perform verification, do not attempt any fixup') { |v| $options[:verifyonly] = v }
end.parse!

if ($options[:bundleid] == nil and !$options[:certonly])
	warn "Bundle id is required!"
	puts parser.to_s
	exit 1
end

# puts $options

require 'fastlane'
require 'sigh'
require 'spaceship'

$haderror = false

class HybridUI < FastlaneCore::Shell

	def select(message, options)
		super message, options
	end
	
	def error(message)
		$haderror = true
		super message
	end

	def input(message)
		super message;
	end

	def password(message)
		super message;
	end
	
end

FastlaneCore::UI.ui_object = HybridUI.new()

# does a string match a wildcard like com.company.*
def MatchesWildcard(param, wildcard)
	escaped = Regexp.escape(wildcard).gsub('\*','.*?')
	regex = Regexp.new "^#{escaped}$", Regexp::IGNORECASE

	param =~ regex	
end

# gets the app id portion after team id: TEAMID.com.company.app returns com.company.app
def GetAppIdPortion(fullappid)
	fullappid.match(/.+?\.(.*)/)[1];
end


def IsProfileValid(teamid, appid, name)
	# match team - must be a full string match (no wildcards) if we were given one
	if $options[:teamid] == nil or ($options[:teamid].casecmp teamid) == 0
		# match app id - it has to be a full match, or a wildcard match
		if ($options[:bundleid].casecmp appid) == 0 or MatchesWildcard($options[:bundleid], appid)
			if $options[:provision] == nil or ($options[:provision].casecmp name) == 0
				# if everything matches return true
				return true
			end
		end
	end
	
	# if anything didn't match, we are not valid
	return false
end

def CompareProfileProperties(idA, idB, dateA, dateB)

	# sort by bundle_id:
	# - direct match
	# - wildcards that match
	#   - longer wildcard that matches is better (com.company.* is better than *)
	# then, sort by modification date
	# if the two profiles have a matching bundle_id, check date (using expiration_date, "dateCreated" can be nil)
	if (idA.casecmp(idB) == 0)
		return dateB <=> dateA
	end
	
	isWildcardA = idA.include? "*"		
	isWildcardB = idB.include? "*"		
	if isWildcardA == isWildcardB
		return idB.length <=> idA.length;
	end
		
	# prefer non-wildcards
	return isWildcardA ? 1 : -1
end

def CompareLocalProfiles(a, b)
	return CompareProfileProperties(GetAppIdPortion(a["Entitlements"]["application-identifier"]), GetAppIdPortion(b["Entitlements"]["application-identifier"]),
		a["ExpirationDate"], b["ExpirationDate"]);
end

def CompareOnlineProfiles(a, b)
	return CompareProfileProperties(a.app.bundle_id, b.app.bundle_id, a.expires, b.expires);
end

def LoginAndGetProfiles()

	# login with supplied username to avoid interaction
	client = Spaceship.login($options[:username], $options[:password])
	
	# select team if given - important if any people are on multiple accounts (recommended to set in settings to avoid this prompt)
	if $options[:teamid] != nil
		client.team_id = $options[:teamid];
	elsif client.teams.length > 1 
		client.select_team
	end

	# find any online provisions with this device
	developerProfiles = Spaceship::Portal.provisioning_profile.development.all	 	

puts "Found #{developerProfiles.length} dev profiles"

	# get ones that match team and app	(app prefix is the teamID)
	validDevProfiles = developerProfiles.find_all { |x| 
		IsProfileValid(x.app.prefix, x.app.bundle_id, x.name) and x.platform == "ios" and 
		x.sub_platform == nil and x.status == "Active" and !x.managed_by_xcode? and
		x.valid? and x.certificate_valid?
	}
	
puts "Found #{validDevProfiles.length} valid profiles"

	if validDevProfiles.length == 0
#		puts"#{$options[:teamid]} #{$options[:bundleid]}"
#		developerProfiles.each do |x|
#			puts " #{x.name} #{x.app.prefix} #{x.app.bundle_id} #{x.status} #{x.type} #{x.platform} #{x.sub_platform} #{x.expires}"
#			puts IsProfileValid(x.app.prefix, x.app.bundle_id, x.name)
#			puts x.valid?
#			puts x.certificate_valid?
#		end
		return nil
	end


	# push wildcard profiles to the back, with longer strings preferred (com.company.* is better than *)
	validDevProfiles.sort! { |a,b| CompareOnlineProfiles(a, b) }

	validDevProfiles.each {|x| puts "  #{x.name} #{x.app.bundle_id} #{x.status} #{x.type} #{x.platform} #{x.sub_platform} #{x.expires}" }

	return validDevProfiles
end

def DownloadProfile(profile)
	
	puts "Downloading profile #{profile.name}..."
	profileFilename = File.join(Dir.tmpdir, 'TurnkeyDownload.provision')
	File.write(profileFilename, profile.download)
	Sigh::Manager.install_profile(profileFilename)
	File.delete(profileFilename)
	
	# find the profile we just downloaded
	return Sigh::LocalManage::load_profiles.find { |x| x["UUID"] == profile.uuid }

end


# get local certificates


# cant use FastlaneCore::CertChecker directly because it doesn't filter on name, and it returns fingerprints without names to search on
# validFingerprints = FastlaneCore::CertChecker.installed_identies

validFingerprints = []
$options[:identities].split(";").each do |signingPrefix|
  idents = `security find-identity -p codesigning -v | grep "#{signingPrefix}"`
  idents.split("\n").each do |ident|
  	# skip any revoked ones
    next if ident.include?("REVOKED")
    
    # pull out the SHA1 fingerprint
    fingerprint = ident.match(/.*\) ([[:xdigit:]]*) \".*/)[1];
    
    # add to our list of potential validFingerprints
	validFingerprints.push(fingerprint) unless validFingerprints.include?(fingerprint)
  end
end

# get local provisions
localProfiles = Sigh::LocalManage.load_profiles

# find ones that match our inputs
validProfiles = localProfiles.find_all { |x| 
	IsProfileValid(x["TeamIdentifier"].first, GetAppIdPortion(x["Entitlements"]["application-identifier"]), x["Name"]) }

# sort based on date, etc
validProfiles.sort! { |a,b| CompareLocalProfiles(a,b) }

puts "There are #{validProfiles.length} profiles found that are valid for app '#{$options[:bundleid]}' (before considering any devices):"
validProfiles.each { |x| puts "\t #{x["AppIDName"]} - #{GetAppIdPortion(x["Entitlements"]["application-identifier"])} - #{x["UUID"]}" }

# get teamid if not specified, if we found a matching explicit provision name
if $options[:teamid] == nil and $options[:provision] != nil and validProfiles.length > 0
	# if there are more than 1, if there are somehow multiple teams by bad luck, then we can't use it
	testTeamId = validProfiles.first["TeamIdentifier"].first

	puts "Comparing all profiles to team ID #{testTeamId}"

	if validProfiles.all? { |x| x["TeamIdentifier"].first == testTeamId }
		puts "Getting team identifier from existing profile '#{testTeamId}'"
		$options[:teamid] = testTeamId
	end
end

#handle device verification
if $options[:udid] != nil or $options[:devicename] != nil 
	deviceId = $options[:udid];

	# if we didn't get an explicit device, look for one
	if deviceId == nil
	
		# get connected devices
		devices = FastlaneCore::DeviceManager.connected_devices('iOS')
		
		if $options[:devicename].casecmp("first") == 0
			device = devices.first
		else
			# find device with the given name
			device = devices.find { |x| x.name.casecmp($options[:devicename]) == 0 }
		end

		if device == nil
			puts "Device verification was requested, but no UDID was specified, and no devices were connected for discovery"
			exit 2
		end

		deviceId = device.udid;
	end
	
	puts "Found a device:\n\t Name: #{device.name} OS: #{device.os_version} UDID: #{deviceId}"

	#	validProfiles = validProfiles.find_all { |profile| profile["ProvisionedDevices"].include? deviceId }
		validProfiles = validProfiles.find_all { |profile| if profile["ProvisionedDevices"] != nil; profile["ProvisionedDevices"].any? { |x| x.casecmp(deviceId) == 0}; end }
	#	validProfiles = validProfiles.find_all { |profile| 
	#		downcased = profile["ProvisionedDevices"].map(&:upcase)
	#		downcased.include?( deviceId )
	##profile["ProvisionedDevices"].any? { |y| y.casecmp(deviceId) } 
	#	}

	puts "There are #{validProfiles.length} profiles found that are valid for #{device.name}:"
	validProfiles.each { |x| puts "\t" + x["AppIDName"] }
end

bestProfile = nil

if validProfiles.length > 0
	bestProfile = validProfiles.first
	
	#make sure it's up to date every so often
	if $options[:verifyonly] == false

		puts "Valid profile found, but checking to make sure it's up to date"

		validDevProfiles = LoginAndGetProfiles()

		if validDevProfiles.length == 0
			puts "There are no usable profiles available in DevCenter. Will use local one anyway."
		else 
			# look for a profile with same name but is newer
			updatedProfile = validDevProfiles.find { |x| x.name == bestProfile["Name"] && x.expires > bestProfile["ExpirationDate"] }	
			
			if updatedProfile != nil
				puts "Profile #{bestProfile["Name"]} is out of date, downloading updated version..."
				bestProfile = DownloadProfile(updatedProfile)
			else
				puts "Profile #{bestProfile["Name"]} is up to date!"
			end
		end
	
	end

else
	if $options[:verifyonly]
		puts "No valid profiles found for the device. Will need to run without --verifyonly"
		exit 1
	end
		
	puts "No valid profiles found, will attempt to repair everything, this will need to log in to Apple developer center."

	
	validDevProfiles = LoginAndGetProfiles()
	
	if validDevProfiles != nil and validDevProfiles.length == 0
		puts "There are no usable profiles available in DevCenter. Please use https://developer.apple.com to create one."
		exit 1
	end

	# download best match (list is sorted above)
	profileToDownload = validDevProfiles.first

	# if given a device, then make sure it's in the profile
	if deviceId != nil
	
		# does the profile list the device?
		if !profileToDownload.devices.any? { |x| x.udid.casecmp(deviceId) == 0 }

			# check if it's already registered - if it is, we don't need to exit and have Turnkey ask for a name
			device = Spaceship::Portal::Device.find_by_udid(deviceId)
			if (device == nil)
				deviceName = ask("This device is not registered in DevCenter. Enter the name (make sure to follow naming policy your company may have): ")
				device = Spaceship::Portal::Device.create!(name: deviceName, udud: deviceId)
			end
						
			# use the first (sorted above) profile to 
			puts "Adding device #{device.name} / #{device.udid} to provision #{profileToDownload.name} / #{profileToDownload.app.bundle_id}"
			profileToDownload.devices.push(device)
			profileToDownload = profileToDownload.update!

		end
	end

	bestProfile = DownloadProfile(profileToDownload)

end


	# now check the best profile to make sure it's cert is good

	# make an x509 cert for each cert blob in the provision
	x509s = bestProfile["DeveloperCertificates"].map { |cer| OpenSSL::X509::Certificate.new(cer.string) }
	profileFingerprints = x509s.map{ |x509| OpenSSL::Digest::SHA1.new(x509.to_der).to_s.upcase }

	# look to see if any of the validFingerprints overlaps our valid validFingerprints (& is intersection of arrays, who knew)
	if validFingerprints.length > 0 and profileFingerprints & validFingerprints
		puts "We have a certificate for the best matching profile (#{bestProfile["Name"]})!"
	else
		puts "No certificate found that can sign #{$options[:bundleid]} with provisioning profile #{bestProfile["Name"]}"
		exit 3
	end

# if we haven't exited at this point, we are successful, unless we had an unspecified error
exit $haderror ? 99 : 0

