// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OptimusEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OptimusEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_OptimusEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OptimusEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x78C85862,
				0x8F5AA337,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OptimusEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OptimusEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OptimusEditor(Z_Construct_UPackage__Script_OptimusEditor, TEXT("/Script/OptimusEditor"), Z_Registration_Info_UPackage__Script_OptimusEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x78C85862, 0x8F5AA337));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
