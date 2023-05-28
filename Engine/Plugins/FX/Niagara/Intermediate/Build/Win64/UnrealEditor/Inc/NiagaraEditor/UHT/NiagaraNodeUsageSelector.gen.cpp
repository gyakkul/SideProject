// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/NiagaraNodeUsageSelector.h"
#include "../Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraNodeUsageSelector() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeUsageSelector();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeUsageSelector_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeWithDynamicPins();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraNodeUsageSelector::StaticRegisterNativesUNiagaraNodeUsageSelector()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraNodeUsageSelector);
	UClass* Z_Construct_UClass_UNiagaraNodeUsageSelector_NoRegister()
	{
		return UNiagaraNodeUsageSelector::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputVars_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputVars_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputVars;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputVarGuids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputVarGuids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputVarGuids;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectorGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectorGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumOptionsPerVariable_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumOptionsPerVariable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraNodeWithDynamicPins,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraNodeUsageSelector.h" },
		{ "ModuleRelativePath", "Private/NiagaraNodeUsageSelector.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::NewProp_OutputVars_Inner = { "OutputVars", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(nullptr, 0) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::NewProp_OutputVars_MetaData[] = {
		{ "ModuleRelativePath", "Private/NiagaraNodeUsageSelector.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::NewProp_OutputVars = { "OutputVars", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeUsageSelector, OutputVars), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::NewProp_OutputVars_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::NewProp_OutputVars_MetaData)) }; // 2575088255
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::NewProp_OutputVarGuids_Inner = { "OutputVarGuids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::NewProp_OutputVarGuids_MetaData[] = {
		{ "ModuleRelativePath", "Private/NiagaraNodeUsageSelector.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::NewProp_OutputVarGuids = { "OutputVarGuids", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeUsageSelector, OutputVarGuids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::NewProp_OutputVarGuids_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::NewProp_OutputVarGuids_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::NewProp_SelectorGuid_MetaData[] = {
		{ "ModuleRelativePath", "Private/NiagaraNodeUsageSelector.h" },
		{ "SkipForCompileHash", "true" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::NewProp_SelectorGuid = { "SelectorGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeUsageSelector, SelectorGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::NewProp_SelectorGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::NewProp_SelectorGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::NewProp_NumOptionsPerVariable_MetaData[] = {
		{ "ModuleRelativePath", "Private/NiagaraNodeUsageSelector.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::NewProp_NumOptionsPerVariable = { "NumOptionsPerVariable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeUsageSelector, NumOptionsPerVariable), METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::NewProp_NumOptionsPerVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::NewProp_NumOptionsPerVariable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::NewProp_OutputVars_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::NewProp_OutputVars,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::NewProp_OutputVarGuids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::NewProp_OutputVarGuids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::NewProp_SelectorGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::NewProp_NumOptionsPerVariable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraNodeUsageSelector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::ClassParams = {
		&UNiagaraNodeUsageSelector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraNodeUsageSelector()
	{
		if (!Z_Registration_Info_UClass_UNiagaraNodeUsageSelector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraNodeUsageSelector.OuterSingleton, Z_Construct_UClass_UNiagaraNodeUsageSelector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraNodeUsageSelector.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraNodeUsageSelector>()
	{
		return UNiagaraNodeUsageSelector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraNodeUsageSelector);
	UNiagaraNodeUsageSelector::~UNiagaraNodeUsageSelector() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeUsageSelector_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeUsageSelector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraNodeUsageSelector, UNiagaraNodeUsageSelector::StaticClass, TEXT("UNiagaraNodeUsageSelector"), &Z_Registration_Info_UClass_UNiagaraNodeUsageSelector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraNodeUsageSelector), 3023663637U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeUsageSelector_h_435402720(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeUsageSelector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeUsageSelector_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
