// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaniteTools_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NaniteTools;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NaniteTools()
	{
		if (!Z_Registration_Info_UPackage__Script_NaniteTools.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NaniteTools",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x18CBBAA5,
				0xDC685A5B,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NaniteTools.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NaniteTools.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NaniteTools(Z_Construct_UPackage__Script_NaniteTools, TEXT("/Script/NaniteTools"), Z_Registration_Info_UPackage__Script_NaniteTools, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x18CBBAA5, 0xDC685A5B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
