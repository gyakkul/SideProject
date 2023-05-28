// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStageDataProvider_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_StageDataProvider;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_StageDataProvider()
	{
		if (!Z_Registration_Info_UPackage__Script_StageDataProvider.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/StageDataProvider",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000100,
				0x11A9B40E,
				0x64647F51,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_StageDataProvider.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_StageDataProvider.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_StageDataProvider(Z_Construct_UPackage__Script_StageDataProvider, TEXT("/Script/StageDataProvider"), Z_Registration_Info_UPackage__Script_StageDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x11A9B40E, 0x64647F51));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
