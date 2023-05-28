// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandmassEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LandmassEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LandmassEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_LandmassEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LandmassEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x09847FE8,
				0x46067010,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LandmassEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LandmassEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LandmassEditor(Z_Construct_UPackage__Script_LandmassEditor, TEXT("/Script/LandmassEditor"), Z_Registration_Info_UPackage__Script_LandmassEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x09847FE8, 0x46067010));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
