// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamAudio_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SteamAudio;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SteamAudio()
	{
		if (!Z_Registration_Info_UPackage__Script_SteamAudio.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SteamAudio",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xACBD81F5,
				0xB7D6636B,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SteamAudio.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SteamAudio.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SteamAudio(Z_Construct_UPackage__Script_SteamAudio, TEXT("/Script/SteamAudio"), Z_Registration_Info_UPackage__Script_SteamAudio, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xACBD81F5, 0xB7D6636B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
