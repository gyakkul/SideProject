// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorFramework_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_EditorFramework;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_EditorFramework()
	{
		if (!Z_Registration_Info_UPackage__Script_EditorFramework.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/EditorFramework",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x754AB22B,
				0x7D059ABA,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_EditorFramework.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_EditorFramework.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_EditorFramework(Z_Construct_UPackage__Script_EditorFramework, TEXT("/Script/EditorFramework"), Z_Registration_Info_UPackage__Script_EditorFramework, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x754AB22B, 0x7D059ABA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
