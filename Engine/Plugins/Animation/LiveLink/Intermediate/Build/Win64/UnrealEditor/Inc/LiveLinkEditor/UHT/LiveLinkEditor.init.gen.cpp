// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LiveLinkEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LiveLinkEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_LiveLinkEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LiveLinkEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x1A11334B,
				0x3D530BF8,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LiveLinkEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LiveLinkEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LiveLinkEditor(Z_Construct_UPackage__Script_LiveLinkEditor, TEXT("/Script/LiveLinkEditor"), Z_Registration_Info_UPackage__Script_LiveLinkEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1A11334B, 0x3D530BF8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
