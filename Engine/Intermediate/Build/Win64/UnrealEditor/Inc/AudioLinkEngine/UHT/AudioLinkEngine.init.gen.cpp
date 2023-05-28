// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioLinkEngine_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AudioLinkEngine;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AudioLinkEngine()
	{
		if (!Z_Registration_Info_UPackage__Script_AudioLinkEngine.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AudioLinkEngine",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xACBF7626,
				0xB181A295,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AudioLinkEngine.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AudioLinkEngine.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AudioLinkEngine(Z_Construct_UPackage__Script_AudioLinkEngine, TEXT("/Script/AudioLinkEngine"), Z_Registration_Info_UPackage__Script_AudioLinkEngine, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xACBF7626, 0xB181A295));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
