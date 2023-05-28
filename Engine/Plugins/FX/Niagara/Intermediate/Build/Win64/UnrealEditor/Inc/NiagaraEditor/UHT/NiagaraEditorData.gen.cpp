// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraEditorData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraEditorData() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEditorParametersAdapterBase();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraEditorParametersAdapter();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraEditorParametersAdapter_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraScriptVariable_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraEditorParametersAdapter::StaticRegisterNativesUNiagaraEditorParametersAdapter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraEditorParametersAdapter);
	UClass* Z_Construct_UClass_UNiagaraEditorParametersAdapter_NoRegister()
	{
		return UNiagaraEditorParametersAdapter::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraEditorParametersAdapter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorOnlyScriptVars_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorOnlyScriptVars_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EditorOnlyScriptVars;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraEditorParametersAdapter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraEditorParametersAdapterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorParametersAdapter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** An interface for editor only data which owns UNiagaraScriptVariables and supports synchronizing them with definitions. */" },
		{ "IncludePath", "NiagaraEditorData.h" },
		{ "ModuleRelativePath", "Public/NiagaraEditorData.h" },
		{ "ToolTip", "An interface for editor only data which owns UNiagaraScriptVariables and supports synchronizing them with definitions." },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraEditorParametersAdapter_Statics::NewProp_EditorOnlyScriptVars_Inner = { "EditorOnlyScriptVars", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraScriptVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorParametersAdapter_Statics::NewProp_EditorOnlyScriptVars_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEditorParametersAdapter_Statics::NewProp_EditorOnlyScriptVars = { "EditorOnlyScriptVars", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraEditorParametersAdapter, EditorOnlyScriptVars), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorParametersAdapter_Statics::NewProp_EditorOnlyScriptVars_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorParametersAdapter_Statics::NewProp_EditorOnlyScriptVars_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraEditorParametersAdapter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorParametersAdapter_Statics::NewProp_EditorOnlyScriptVars_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEditorParametersAdapter_Statics::NewProp_EditorOnlyScriptVars,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraEditorParametersAdapter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraEditorParametersAdapter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraEditorParametersAdapter_Statics::ClassParams = {
		&UNiagaraEditorParametersAdapter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UNiagaraEditorParametersAdapter_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorParametersAdapter_Statics::PropPointers), 0),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorParametersAdapter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorParametersAdapter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraEditorParametersAdapter()
	{
		if (!Z_Registration_Info_UClass_UNiagaraEditorParametersAdapter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraEditorParametersAdapter.OuterSingleton, Z_Construct_UClass_UNiagaraEditorParametersAdapter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraEditorParametersAdapter.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraEditorParametersAdapter>()
	{
		return UNiagaraEditorParametersAdapter::StaticClass();
	}
	UNiagaraEditorParametersAdapter::UNiagaraEditorParametersAdapter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraEditorParametersAdapter);
	UNiagaraEditorParametersAdapter::~UNiagaraEditorParametersAdapter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraEditorParametersAdapter, UNiagaraEditorParametersAdapter::StaticClass, TEXT("UNiagaraEditorParametersAdapter"), &Z_Registration_Info_UClass_UNiagaraEditorParametersAdapter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraEditorParametersAdapter), 355393293U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorData_h_2945394108(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
