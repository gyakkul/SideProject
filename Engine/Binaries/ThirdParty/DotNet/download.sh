#!/bin/bash
# Copyright Epic Games, Inc. All Rights Reserved.

if [ $# -ne 1 ]
then
  echo "The .NET SDK version should be specified as the only argument."
  echo "A valid SDK version is 6.0.202"
  exit 1
fi

echo Downloading the dotnet-install.sh script
curl -L https://dot.net/v1/dotnet-install.sh --output dotnet-install.sh
chmod +x dotnet-install.sh

echo Downloading the .NET SDK version "$1" for Linux and Mac
./dotnet-install.sh --architecture x64 --os linux --no-path --version "$1" --install-dir "$1/linux"
./dotnet-install.sh --architecture x64 --os osx --no-path --version "$1" --install-dir "$1/mac-x64"
./dotnet-install.sh --architecture arm64 --os osx --no-path --version "$1" --install-dir "$1/mac-arm64"

rm dotnet-install.sh

