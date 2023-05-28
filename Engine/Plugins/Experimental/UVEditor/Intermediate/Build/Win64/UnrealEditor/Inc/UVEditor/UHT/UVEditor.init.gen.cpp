// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UVEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UVEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_UVEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UVEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x8B9DFE4B,
				0x8DA82E9D,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UVEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UVEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UVEditor(Z_Construct_UPackage__Script_UVEditor, TEXT("/Script/UVEditor"), Z_Registration_Info_UPackage__Script_UVEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8B9DFE4B, 0x8DA82E9D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
