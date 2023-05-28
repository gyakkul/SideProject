// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraNodeWriteDataSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraNodeWriteDataSet() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeDataSetBase();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeWriteDataSet();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeWriteDataSet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraNodeWriteDataSet::StaticRegisterNativesUNiagaraNodeWriteDataSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraNodeWriteDataSet);
	UClass* Z_Construct_UClass_UNiagaraNodeWriteDataSet_NoRegister()
	{
		return UNiagaraNodeWriteDataSet::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraNodeWriteDataSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraNodeWriteDataSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraNodeDataSetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeWriteDataSet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraNodeWriteDataSet.h" },
		{ "ModuleRelativePath", "Public/NiagaraNodeWriteDataSet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeWriteDataSet_Statics::NewProp_EventName_MetaData[] = {
		{ "Category", "DataSet" },
		{ "ModuleRelativePath", "Public/NiagaraNodeWriteDataSet.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraNodeWriteDataSet_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeWriteDataSet, EventName), METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeWriteDataSet_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeWriteDataSet_Statics::NewProp_EventName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraNodeWriteDataSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeWriteDataSet_Statics::NewProp_EventName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraNodeWriteDataSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraNodeWriteDataSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraNodeWriteDataSet_Statics::ClassParams = {
		&UNiagaraNodeWriteDataSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraNodeWriteDataSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeWriteDataSet_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeWriteDataSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeWriteDataSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraNodeWriteDataSet()
	{
		if (!Z_Registration_Info_UClass_UNiagaraNodeWriteDataSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraNodeWriteDataSet.OuterSingleton, Z_Construct_UClass_UNiagaraNodeWriteDataSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraNodeWriteDataSet.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraNodeWriteDataSet>()
	{
		return UNiagaraNodeWriteDataSet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraNodeWriteDataSet);
	UNiagaraNodeWriteDataSet::~UNiagaraNodeWriteDataSet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeWriteDataSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeWriteDataSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraNodeWriteDataSet, UNiagaraNodeWriteDataSet::StaticClass, TEXT("UNiagaraNodeWriteDataSet"), &Z_Registration_Info_UClass_UNiagaraNodeWriteDataSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraNodeWriteDataSet), 2667468916U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeWriteDataSet_h_4185459989(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeWriteDataSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeWriteDataSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
