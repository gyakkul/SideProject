// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintGraph_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BlueprintGraph;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BlueprintGraph()
	{
		if (!Z_Registration_Info_UPackage__Script_BlueprintGraph.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BlueprintGraph",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000080,
				0x0C61CB8A,
				0xE99F2545,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BlueprintGraph.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BlueprintGraph.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BlueprintGraph(Z_Construct_UPackage__Script_BlueprintGraph, TEXT("/Script/BlueprintGraph"), Z_Registration_Info_UPackage__Script_BlueprintGraph, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0C61CB8A, 0xE99F2545));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
