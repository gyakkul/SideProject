$version=$args[0]
$destFolder="$version\windows"

# Run a separate PowerShell process because the script calls exit, so it will end the current PowerShell session.
&powershell -NoProfile -ExecutionPolicy unrestricted -Command "[Net.ServicePointManager]::SecurityProtocol = [Net.SecurityProtocolType]::Tls12; &([scriptblock]::Create((Invoke-WebRequest -UseBasicParsing 'https://dot.net/v1/dotnet-install.ps1'))) -NoPath -Version $version -InstallDir $destFolder"