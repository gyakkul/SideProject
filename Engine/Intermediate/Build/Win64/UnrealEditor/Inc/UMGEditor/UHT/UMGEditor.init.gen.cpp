// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGEditor_init() {}
	UMGEDITOR_API UFunction* Z_Construct_UDelegateFunction_UMGEditor_OnPropertyValueChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UMGEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UMGEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_UMGEditor.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UMGEditor_OnPropertyValueChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UMGEditor",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000080,
				0x45803B86,
				0xBB8D5F4A,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UMGEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UMGEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UMGEditor(Z_Construct_UPackage__Script_UMGEditor, TEXT("/Script/UMGEditor"), Z_Registration_Info_UPackage__Script_UMGEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x45803B86, 0xBB8D5F4A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
