// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightMixer_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LightMixer;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LightMixer()
	{
		if (!Z_Registration_Info_UPackage__Script_LightMixer.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LightMixer",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x60D2A7EE,
				0xF889AEE6,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LightMixer.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LightMixer.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LightMixer(Z_Construct_UPackage__Script_LightMixer, TEXT("/Script/LightMixer"), Z_Registration_Info_UPackage__Script_LightMixer, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x60D2A7EE, 0xF889AEE6));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
