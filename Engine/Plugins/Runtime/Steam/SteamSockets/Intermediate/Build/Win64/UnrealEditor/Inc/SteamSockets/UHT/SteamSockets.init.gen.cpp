// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamSockets_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SteamSockets;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SteamSockets()
	{
		if (!Z_Registration_Info_UPackage__Script_SteamSockets.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SteamSockets",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x928E3769,
				0x300D2FFD,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SteamSockets.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SteamSockets.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SteamSockets(Z_Construct_UPackage__Script_SteamSockets, TEXT("/Script/SteamSockets"), Z_Registration_Info_UPackage__Script_SteamSockets, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x928E3769, 0x300D2FFD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
