// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpatializationEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SpatializationEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SpatializationEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_SpatializationEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SpatializationEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x818E3166,
				0x751A88D5,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SpatializationEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SpatializationEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SpatializationEditor(Z_Construct_UPackage__Script_SpatializationEditor, TEXT("/Script/SpatializationEditor"), Z_Registration_Info_UPackage__Script_SpatializationEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x818E3166, 0x751A88D5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
