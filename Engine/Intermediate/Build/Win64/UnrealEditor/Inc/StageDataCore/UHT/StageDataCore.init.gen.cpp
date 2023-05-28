// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStageDataCore_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_StageDataCore;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_StageDataCore()
	{
		if (!Z_Registration_Info_UPackage__Script_StageDataCore.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/StageDataCore",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x9CE0D760,
				0x3EEB4181,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_StageDataCore.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_StageDataCore.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_StageDataCore(Z_Construct_UPackage__Script_StageDataCore, TEXT("/Script/StageDataCore"), Z_Registration_Info_UPackage__Script_StageDataCore, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9CE0D760, 0x3EEB4181));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
