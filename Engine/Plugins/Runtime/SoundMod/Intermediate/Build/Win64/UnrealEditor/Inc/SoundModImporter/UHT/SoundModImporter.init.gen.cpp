// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundModImporter_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SoundModImporter;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SoundModImporter()
	{
		if (!Z_Registration_Info_UPackage__Script_SoundModImporter.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SoundModImporter",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x8DE90D9C,
				0x0CCE9E49,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SoundModImporter.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SoundModImporter.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SoundModImporter(Z_Construct_UPackage__Script_SoundModImporter, TEXT("/Script/SoundModImporter"), Z_Registration_Info_UPackage__Script_SoundModImporter, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8DE90D9C, 0x0CCE9E49));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
