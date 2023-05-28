// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCinematicPrestreamingEditor_init() {}
	CINEMATICPRESTREAMINGEDITOR_API UFunction* Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateAsset__DelegateSignature();
	CINEMATICPRESTREAMINGEDITOR_API UFunction* Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateData__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CinematicPrestreamingEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CinematicPrestreamingEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_CinematicPrestreamingEditor.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateAsset__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CinematicPrestreamingEditor_OnCinePrestreamingGenerateData__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CinematicPrestreamingEditor",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000100,
				0x88AA9ADA,
				0xC84F70C3,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CinematicPrestreamingEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CinematicPrestreamingEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CinematicPrestreamingEditor(Z_Construct_UPackage__Script_CinematicPrestreamingEditor, TEXT("/Script/CinematicPrestreamingEditor"), Z_Registration_Info_UPackage__Script_CinematicPrestreamingEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x88AA9ADA, 0xC84F70C3));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
