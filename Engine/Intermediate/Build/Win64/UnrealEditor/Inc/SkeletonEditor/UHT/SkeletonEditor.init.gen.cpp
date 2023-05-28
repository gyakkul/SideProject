// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletonEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SkeletonEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SkeletonEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_SkeletonEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SkeletonEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x2E0755E9,
				0x74709CE7,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SkeletonEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SkeletonEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SkeletonEditor(Z_Construct_UPackage__Script_SkeletonEditor, TEXT("/Script/SkeletonEditor"), Z_Registration_Info_UPackage__Script_SkeletonEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2E0755E9, 0x74709CE7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
