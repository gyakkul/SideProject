// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/NiagaraNodeSelect.h"
#include "../Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraNodeSelect() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTypeDefinition();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeSelect();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeSelect_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeUsageSelector();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraNodeSelect::StaticRegisterNativesUNiagaraNodeSelect()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraNodeSelect);
	UClass* Z_Construct_UClass_UNiagaraNodeSelect_NoRegister()
	{
		return UNiagaraNodeSelect::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraNodeSelect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectorPinType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectorPinType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectorPinGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectorPinGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraNodeSelect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraNodeUsageSelector,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeSelect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraNodeSelect.h" },
		{ "ModuleRelativePath", "Private/NiagaraNodeSelect.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeSelect_Statics::NewProp_SelectorPinType_MetaData[] = {
		{ "ModuleRelativePath", "Private/NiagaraNodeSelect.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeSelect_Statics::NewProp_SelectorPinType = { "SelectorPinType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeSelect, SelectorPinType), Z_Construct_UScriptStruct_FNiagaraTypeDefinition, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeSelect_Statics::NewProp_SelectorPinType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeSelect_Statics::NewProp_SelectorPinType_MetaData)) }; // 1791563344
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeSelect_Statics::NewProp_SelectorPinGuid_MetaData[] = {
		{ "ModuleRelativePath", "Private/NiagaraNodeSelect.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeSelect_Statics::NewProp_SelectorPinGuid = { "SelectorPinGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeSelect, SelectorPinGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeSelect_Statics::NewProp_SelectorPinGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeSelect_Statics::NewProp_SelectorPinGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraNodeSelect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeSelect_Statics::NewProp_SelectorPinType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeSelect_Statics::NewProp_SelectorPinGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraNodeSelect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraNodeSelect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraNodeSelect_Statics::ClassParams = {
		&UNiagaraNodeSelect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraNodeSelect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeSelect_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeSelect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeSelect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraNodeSelect()
	{
		if (!Z_Registration_Info_UClass_UNiagaraNodeSelect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraNodeSelect.OuterSingleton, Z_Construct_UClass_UNiagaraNodeSelect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraNodeSelect.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraNodeSelect>()
	{
		return UNiagaraNodeSelect::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraNodeSelect);
	UNiagaraNodeSelect::~UNiagaraNodeSelect() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeSelect_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeSelect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraNodeSelect, UNiagaraNodeSelect::StaticClass, TEXT("UNiagaraNodeSelect"), &Z_Registration_Info_UClass_UNiagaraNodeSelect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraNodeSelect), 2374643105U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeSelect_h_3162900074(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeSelect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeSelect_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
