// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AnimationEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AnimationEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_AnimationEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AnimationEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x39ED37B6,
				0x5E986003,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AnimationEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AnimationEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AnimationEditor(Z_Construct_UPackage__Script_AnimationEditor, TEXT("/Script/AnimationEditor"), Z_Registration_Info_UPackage__Script_AnimationEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x39ED37B6, 0x5E986003));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
