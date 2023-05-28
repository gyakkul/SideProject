// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDocumentation_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Documentation;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Documentation()
	{
		if (!Z_Registration_Info_UPackage__Script_Documentation.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Documentation",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x8D1ECDE1,
				0x58B26E60,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Documentation.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Documentation.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Documentation(Z_Construct_UPackage__Script_Documentation, TEXT("/Script/Documentation"), Z_Registration_Info_UPackage__Script_Documentation, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8D1ECDE1, 0x58B26E60));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
