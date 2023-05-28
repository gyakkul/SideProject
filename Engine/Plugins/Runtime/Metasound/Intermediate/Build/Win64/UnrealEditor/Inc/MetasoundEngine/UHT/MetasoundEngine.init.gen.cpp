// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasoundEngine_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MetasoundEngine;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MetasoundEngine()
	{
		if (!Z_Registration_Info_UPackage__Script_MetasoundEngine.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MetasoundEngine",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xDE0351A7,
				0xB49E7292,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MetasoundEngine.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MetasoundEngine.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MetasoundEngine(Z_Construct_UPackage__Script_MetasoundEngine, TEXT("/Script/MetasoundEngine"), Z_Registration_Info_UPackage__Script_MetasoundEngine, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDE0351A7, 0xB49E7292));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
