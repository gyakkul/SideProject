// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AudioEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AudioEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_AudioEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AudioEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x70236214,
				0x898C5769,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AudioEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AudioEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AudioEditor(Z_Construct_UPackage__Script_AudioEditor, TEXT("/Script/AudioEditor"), Z_Registration_Info_UPackage__Script_AudioEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x70236214, 0x898C5769));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
