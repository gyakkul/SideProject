// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSnapshots_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LevelSnapshots;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LevelSnapshots()
	{
		if (!Z_Registration_Info_UPackage__Script_LevelSnapshots.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LevelSnapshots",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000100,
				0x6BD42FAE,
				0x7BBC7870,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LevelSnapshots.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LevelSnapshots.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LevelSnapshots(Z_Construct_UPackage__Script_LevelSnapshots, TEXT("/Script/LevelSnapshots"), Z_Registration_Info_UPackage__Script_LevelSnapshots, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6BD42FAE, 0x7BBC7870));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
