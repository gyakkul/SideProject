// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataRegistryEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DataRegistryEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DataRegistryEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_DataRegistryEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DataRegistryEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000100,
				0x1EDD9D82,
				0x7AE90DD2,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DataRegistryEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DataRegistryEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DataRegistryEditor(Z_Construct_UPackage__Script_DataRegistryEditor, TEXT("/Script/DataRegistryEditor"), Z_Registration_Info_UPackage__Script_DataRegistryEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1EDD9D82, 0x7AE90DD2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
