// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LevelSequenceEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LevelSequenceEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_LevelSequenceEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LevelSequenceEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x552A62A0,
				0xD7E13C37,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LevelSequenceEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LevelSequenceEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LevelSequenceEditor(Z_Construct_UPackage__Script_LevelSequenceEditor, TEXT("/Script/LevelSequenceEditor"), Z_Registration_Info_UPackage__Script_LevelSequenceEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x552A62A0, 0xD7E13C37));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
