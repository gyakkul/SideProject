// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraNodeDataSetBase.h"
#include "../Public/NiagaraCommon.h"
#include "../Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraNodeDataSetBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetID();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNode();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeDataSetBase();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeDataSetBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraNodeDataSetBase::StaticRegisterNativesUNiagaraNodeDataSetBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraNodeDataSetBase);
	UClass* Z_Construct_UClass_UNiagaraNodeDataSetBase_NoRegister()
	{
		return UNiagaraNodeDataSetBase::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataSet_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataSet;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Variables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Variables;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariableFriendlyNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableFriendlyNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VariableFriendlyNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalStructAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExternalStructAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraNode,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraNodeDataSetBase.h" },
		{ "ModuleRelativePath", "Public/NiagaraNodeDataSetBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::NewProp_DataSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraNodeDataSetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::NewProp_DataSet = { "DataSet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeDataSetBase, DataSet), Z_Construct_UScriptStruct_FNiagaraDataSetID, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::NewProp_DataSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::NewProp_DataSet_MetaData)) }; // 1812770562
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::NewProp_Variables_Inner = { "Variables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(nullptr, 0) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::NewProp_Variables_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraNodeDataSetBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::NewProp_Variables = { "Variables", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeDataSetBase, Variables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::NewProp_Variables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::NewProp_Variables_MetaData)) }; // 2575088255
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::NewProp_VariableFriendlyNames_Inner = { "VariableFriendlyNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::NewProp_VariableFriendlyNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraNodeDataSetBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::NewProp_VariableFriendlyNames = { "VariableFriendlyNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeDataSetBase, VariableFriendlyNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::NewProp_VariableFriendlyNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::NewProp_VariableFriendlyNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::NewProp_ExternalStructAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraNodeDataSetBase.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::NewProp_ExternalStructAsset = { "ExternalStructAsset", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeDataSetBase, ExternalStructAsset), Z_Construct_UClass_UStruct, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::NewProp_ExternalStructAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::NewProp_ExternalStructAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::NewProp_DataSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::NewProp_Variables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::NewProp_Variables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::NewProp_VariableFriendlyNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::NewProp_VariableFriendlyNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::NewProp_ExternalStructAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraNodeDataSetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::ClassParams = {
		&UNiagaraNodeDataSetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraNodeDataSetBase()
	{
		if (!Z_Registration_Info_UClass_UNiagaraNodeDataSetBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraNodeDataSetBase.OuterSingleton, Z_Construct_UClass_UNiagaraNodeDataSetBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraNodeDataSetBase.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraNodeDataSetBase>()
	{
		return UNiagaraNodeDataSetBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraNodeDataSetBase);
	UNiagaraNodeDataSetBase::~UNiagaraNodeDataSetBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeDataSetBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeDataSetBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraNodeDataSetBase, UNiagaraNodeDataSetBase::StaticClass, TEXT("UNiagaraNodeDataSetBase"), &Z_Registration_Info_UClass_UNiagaraNodeDataSetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraNodeDataSetBase), 2169394054U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeDataSetBase_h_2568340014(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeDataSetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeDataSetBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
