// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePlayer_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MoviePlayer;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MoviePlayer()
	{
		if (!Z_Registration_Info_UPackage__Script_MoviePlayer.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MoviePlayer",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xCD14E91B,
				0x5D86D57F,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MoviePlayer.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MoviePlayer.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MoviePlayer(Z_Construct_UPackage__Script_MoviePlayer, TEXT("/Script/MoviePlayer"), Z_Registration_Info_UPackage__Script_MoviePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xCD14E91B, 0x5D86D57F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
