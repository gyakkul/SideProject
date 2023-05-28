// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraEditor_init() {}
	NIAGARAEDITOR_API UFunction* Z_Construct_UDelegateFunction_UNiagaraClipboardFunction_OnPastedFunctionCallNode__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NiagaraEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NiagaraEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_NiagaraEditor.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UNiagaraClipboardFunction_OnPastedFunctionCallNode__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NiagaraEditor",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000040,
				0x59E5EDEA,
				0x30909A56,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NiagaraEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NiagaraEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NiagaraEditor(Z_Construct_UPackage__Script_NiagaraEditor, TEXT("/Script/NiagaraEditor"), Z_Registration_Info_UPackage__Script_NiagaraEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x59E5EDEA, 0x30909A56));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
