// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigLogicModule_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RigLogicModule;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RigLogicModule()
	{
		if (!Z_Registration_Info_UPackage__Script_RigLogicModule.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RigLogicModule",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x344B47DB,
				0x78047F6A,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RigLogicModule.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RigLogicModule.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RigLogicModule(Z_Construct_UPackage__Script_RigLogicModule, TEXT("/Script/RigLogicModule"), Z_Registration_Info_UPackage__Script_RigLogicModule, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x344B47DB, 0x78047F6A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
