// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyPath_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PropertyPath;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PropertyPath()
	{
		if (!Z_Registration_Info_UPackage__Script_PropertyPath.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PropertyPath",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x04B447EA,
				0x38A42F71,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PropertyPath.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PropertyPath.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PropertyPath(Z_Construct_UPackage__Script_PropertyPath, TEXT("/Script/PropertyPath"), Z_Registration_Info_UPackage__Script_PropertyPath, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x04B447EA, 0x38A42F71));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
