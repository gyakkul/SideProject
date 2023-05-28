// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVariantManager_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_VariantManager;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_VariantManager()
	{
		if (!Z_Registration_Info_UPackage__Script_VariantManager.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/VariantManager",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x13A37C92,
				0x05727631,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_VariantManager.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_VariantManager.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_VariantManager(Z_Construct_UPackage__Script_VariantManager, TEXT("/Script/VariantManager"), Z_Registration_Info_UPackage__Script_VariantManager, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x13A37C92, 0x05727631));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
