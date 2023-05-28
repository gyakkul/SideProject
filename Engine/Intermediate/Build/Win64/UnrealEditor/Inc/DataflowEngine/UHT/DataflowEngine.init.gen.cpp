// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowEngine_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DataflowEngine;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DataflowEngine()
	{
		if (!Z_Registration_Info_UPackage__Script_DataflowEngine.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DataflowEngine",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xBF64BC4B,
				0x078D990A,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DataflowEngine.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DataflowEngine.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DataflowEngine(Z_Construct_UPackage__Script_DataflowEngine, TEXT("/Script/DataflowEngine"), Z_Registration_Info_UPackage__Script_DataflowEngine, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBF64BC4B, 0x078D990A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
