// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetManagerEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AssetManagerEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AssetManagerEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_AssetManagerEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AssetManagerEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000100,
				0x722F009F,
				0xB093B2EB,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AssetManagerEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AssetManagerEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AssetManagerEditor(Z_Construct_UPackage__Script_AssetManagerEditor, TEXT("/Script/AssetManagerEditor"), Z_Registration_Info_UPackage__Script_AssetManagerEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x722F009F, 0xB093B2EB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
