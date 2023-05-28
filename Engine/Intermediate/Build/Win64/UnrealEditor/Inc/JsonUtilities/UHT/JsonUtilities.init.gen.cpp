// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJsonUtilities_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_JsonUtilities;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_JsonUtilities()
	{
		if (!Z_Registration_Info_UPackage__Script_JsonUtilities.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/JsonUtilities",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x0330C348,
				0xA8B32DC8,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_JsonUtilities.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_JsonUtilities.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_JsonUtilities(Z_Construct_UPackage__Script_JsonUtilities, TEXT("/Script/JsonUtilities"), Z_Registration_Info_UPackage__Script_JsonUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0330C348, 0xA8B32DC8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
