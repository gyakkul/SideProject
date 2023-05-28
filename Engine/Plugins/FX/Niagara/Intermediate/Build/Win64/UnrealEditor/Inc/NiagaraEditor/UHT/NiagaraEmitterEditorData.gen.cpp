// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraEmitterEditorData.h"
#include "../Public/NiagaraStackSection.h"
#include "NiagaraEditorCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraEmitterEditorData() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEditorDataBase();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraStackSection();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraEmitterEditorData();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraEmitterEditorData_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEditorData_NoRegister();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FFunctionInputSummaryViewKey();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraEmitterEditorData::StaticRegisterNativesUNiagaraEmitterEditorData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraEmitterEditorData);
	UClass* Z_Construct_UClass_UNiagaraEmitterEditorData_NoRegister()
	{
		return UNiagaraEmitterEditorData::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraEmitterEditorData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackEditorData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StackEditorData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackRangeMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackRangeMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackRangeMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackRangeMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowSummaryView_MetaData[];
#endif
		static void NewProp_bShowSummaryView_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSummaryView;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SummaryViewFunctionInputMetadata_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SummaryViewFunctionInputMetadata_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SummaryViewFunctionInputMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SummaryViewFunctionInputMetadata;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SummarySections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SummarySections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SummarySections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraEditorDataBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Editor only UI data for emitters. */" },
		{ "IncludePath", "NiagaraEmitterEditorData.h" },
		{ "ModuleRelativePath", "Public/NiagaraEmitterEditorData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Editor only UI data for emitters." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_StackEditorData_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraEmitterEditorData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_StackEditorData = { "StackEditorData", nullptr, (EPropertyFlags)0x0046000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraEmitterEditorData, StackEditorData), Z_Construct_UClass_UNiagaraStackEditorData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_StackEditorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_StackEditorData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_PlaybackRangeMin_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEmitterEditorData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_PlaybackRangeMin = { "PlaybackRangeMin", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraEmitterEditorData, PlaybackRangeMin), METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_PlaybackRangeMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_PlaybackRangeMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_PlaybackRangeMax_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEmitterEditorData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_PlaybackRangeMax = { "PlaybackRangeMax", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraEmitterEditorData, PlaybackRangeMax), METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_PlaybackRangeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_PlaybackRangeMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_bShowSummaryView_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEmitterEditorData.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_bShowSummaryView_SetBit(void* Obj)
	{
		((UNiagaraEmitterEditorData*)Obj)->bShowSummaryView = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_bShowSummaryView = { "bShowSummaryView", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraEmitterEditorData), &Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_bShowSummaryView_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_bShowSummaryView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_bShowSummaryView_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_SummaryViewFunctionInputMetadata_ValueProp = { "SummaryViewFunctionInputMetadata", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata, METADATA_PARAMS(nullptr, 0) }; // 345758445
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_SummaryViewFunctionInputMetadata_Key_KeyProp = { "SummaryViewFunctionInputMetadata_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFunctionInputSummaryViewKey, METADATA_PARAMS(nullptr, 0) }; // 2854944151
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_SummaryViewFunctionInputMetadata_MetaData[] = {
		{ "Comment", "/** Stores metadata for filtering function inputs when in Filtered/Simple view. */" },
		{ "ModuleRelativePath", "Public/NiagaraEmitterEditorData.h" },
		{ "ToolTip", "Stores metadata for filtering function inputs when in Filtered/Simple view." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_SummaryViewFunctionInputMetadata = { "SummaryViewFunctionInputMetadata", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraEmitterEditorData, SummaryViewFunctionInputMetadata), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_SummaryViewFunctionInputMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_SummaryViewFunctionInputMetadata_MetaData)) }; // 2854944151 345758445
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_SummarySections_Inner = { "SummarySections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraStackSection, METADATA_PARAMS(nullptr, 0) }; // 672969363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_SummarySections_MetaData[] = {
		{ "Category", "Summary" },
		{ "ModuleRelativePath", "Public/NiagaraEmitterEditorData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_SummarySections = { "SummarySections", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraEmitterEditorData, SummarySections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_SummarySections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_SummarySections_MetaData)) }; // 672969363
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_StackEditorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_PlaybackRangeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_PlaybackRangeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_bShowSummaryView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_SummaryViewFunctionInputMetadata_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_SummaryViewFunctionInputMetadata_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_SummaryViewFunctionInputMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_SummarySections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::NewProp_SummarySections,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraEmitterEditorData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::ClassParams = {
		&UNiagaraEmitterEditorData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraEmitterEditorData()
	{
		if (!Z_Registration_Info_UClass_UNiagaraEmitterEditorData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraEmitterEditorData.OuterSingleton, Z_Construct_UClass_UNiagaraEmitterEditorData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraEmitterEditorData.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraEmitterEditorData>()
	{
		return UNiagaraEmitterEditorData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraEmitterEditorData);
	UNiagaraEmitterEditorData::~UNiagaraEmitterEditorData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEmitterEditorData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEmitterEditorData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraEmitterEditorData, UNiagaraEmitterEditorData::StaticClass, TEXT("UNiagaraEmitterEditorData"), &Z_Registration_Info_UClass_UNiagaraEmitterEditorData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraEmitterEditorData), 3049351735U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEmitterEditorData_h_1689278582(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEmitterEditorData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEmitterEditorData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
