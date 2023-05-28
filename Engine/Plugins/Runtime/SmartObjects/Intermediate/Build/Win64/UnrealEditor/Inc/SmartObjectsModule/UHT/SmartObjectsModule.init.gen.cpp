// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectsModule_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SmartObjectsModule;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SmartObjectsModule()
	{
		if (!Z_Registration_Info_UPackage__Script_SmartObjectsModule.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SmartObjectsModule",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xBC01616F,
				0xC7E96017,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SmartObjectsModule.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SmartObjectsModule.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SmartObjectsModule(Z_Construct_UPackage__Script_SmartObjectsModule, TEXT("/Script/SmartObjectsModule"), Z_Registration_Info_UPackage__Script_SmartObjectsModule, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBC01616F, 0xC7E96017));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
