// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorConfig_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_EditorConfig;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_EditorConfig()
	{
		if (!Z_Registration_Info_UPackage__Script_EditorConfig.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/EditorConfig",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x69BAE7C1,
				0x5EB8728B,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_EditorConfig.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_EditorConfig.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_EditorConfig(Z_Construct_UPackage__Script_EditorConfig, TEXT("/Script/EditorConfig"), Z_Registration_Info_UPackage__Script_EditorConfig, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x69BAE7C1, 0x5EB8728B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
