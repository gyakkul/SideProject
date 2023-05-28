// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MaterialEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MaterialEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_MaterialEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MaterialEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x7533043F,
				0x1ACFA062,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MaterialEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MaterialEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MaterialEditor(Z_Construct_UPackage__Script_MaterialEditor, TEXT("/Script/MaterialEditor"), Z_Registration_Info_UPackage__Script_MaterialEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7533043F, 0x1ACFA062));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
