// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaPlayerEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MediaPlayerEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MediaPlayerEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_MediaPlayerEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MediaPlayerEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x8DF907F2,
				0x21AC77BE,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MediaPlayerEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MediaPlayerEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MediaPlayerEditor(Z_Construct_UPackage__Script_MediaPlayerEditor, TEXT("/Script/MediaPlayerEditor"), Z_Registration_Info_UPackage__Script_MediaPlayerEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8DF907F2, 0x21AC77BE));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
