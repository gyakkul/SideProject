// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LandscapeEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LandscapeEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_LandscapeEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LandscapeEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0xBDC0E3FE,
				0xB6C7A60F,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LandscapeEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LandscapeEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LandscapeEditor(Z_Construct_UPackage__Script_LandscapeEditor, TEXT("/Script/LandscapeEditor"), Z_Registration_Info_UPackage__Script_LandscapeEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBDC0E3FE, 0xB6C7A60F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
