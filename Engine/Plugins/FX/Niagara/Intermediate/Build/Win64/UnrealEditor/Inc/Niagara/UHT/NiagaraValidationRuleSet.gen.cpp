// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraValidationRuleSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraValidationRuleSet() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraValidationRule_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraValidationRuleSet();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraValidationRuleSet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraValidationRuleSet::StaticRegisterNativesUNiagaraValidationRuleSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraValidationRuleSet);
	UClass* Z_Construct_UClass_UNiagaraValidationRuleSet_NoRegister()
	{
		return UNiagaraValidationRuleSet::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraValidationRuleSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidationRules_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ValidationRules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidationRules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ValidationRules;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A set of reusable validation rules. */" },
		{ "IncludePath", "NiagaraValidationRuleSet.h" },
		{ "ModuleRelativePath", "Classes/NiagaraValidationRuleSet.h" },
		{ "ToolTip", "A set of reusable validation rules." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::NewProp_ValidationRules_Inner_MetaData[] = {
		{ "Category", "Validation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraValidationRuleSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::NewProp_ValidationRules_Inner = { "ValidationRules", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraValidationRule_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::NewProp_ValidationRules_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::NewProp_ValidationRules_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::NewProp_ValidationRules_MetaData[] = {
		{ "Category", "Validation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraValidationRuleSet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::NewProp_ValidationRules = { "ValidationRules", nullptr, (EPropertyFlags)0x0014008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraValidationRuleSet, ValidationRules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::NewProp_ValidationRules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::NewProp_ValidationRules_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::NewProp_ValidationRules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::NewProp_ValidationRules,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraValidationRuleSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::ClassParams = {
		&UNiagaraValidationRuleSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraValidationRuleSet()
	{
		if (!Z_Registration_Info_UClass_UNiagaraValidationRuleSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraValidationRuleSet.OuterSingleton, Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraValidationRuleSet.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraValidationRuleSet>()
	{
		return UNiagaraValidationRuleSet::StaticClass();
	}
	UNiagaraValidationRuleSet::UNiagaraValidationRuleSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraValidationRuleSet);
	UNiagaraValidationRuleSet::~UNiagaraValidationRuleSet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRuleSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRuleSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraValidationRuleSet, UNiagaraValidationRuleSet::StaticClass, TEXT("UNiagaraValidationRuleSet"), &Z_Registration_Info_UClass_UNiagaraValidationRuleSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraValidationRuleSet), 2081922667U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRuleSet_h_3095161261(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRuleSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRuleSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
