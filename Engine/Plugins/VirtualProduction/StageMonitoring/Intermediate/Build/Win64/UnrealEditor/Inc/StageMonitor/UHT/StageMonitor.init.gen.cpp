// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStageMonitor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_StageMonitor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_StageMonitor()
	{
		if (!Z_Registration_Info_UPackage__Script_StageMonitor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/StageMonitor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000100,
				0x19326929,
				0x65CB2BD4,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_StageMonitor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_StageMonitor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_StageMonitor(Z_Construct_UPackage__Script_StageMonitor, TEXT("/Script/StageMonitor"), Z_Registration_Info_UPackage__Script_StageMonitor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x19326929, 0x65CB2BD4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
