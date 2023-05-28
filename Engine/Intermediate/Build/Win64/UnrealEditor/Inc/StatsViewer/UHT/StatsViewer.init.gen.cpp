// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatsViewer_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_StatsViewer;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_StatsViewer()
	{
		if (!Z_Registration_Info_UPackage__Script_StatsViewer.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/StatsViewer",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x9DC9C69F,
				0x88DD85FB,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_StatsViewer.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_StatsViewer.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_StatsViewer(Z_Construct_UPackage__Script_StatsViewer, TEXT("/Script/StatsViewer"), Z_Registration_Info_UPackage__Script_StatsViewer, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9DC9C69F, 0x88DD85FB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
