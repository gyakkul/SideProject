// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraValidationRules.h"
#include "../Classes/NiagaraPlatformSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraValidationRules() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRendererProperties_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScript_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraValidationRule();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraValidationSeverity();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPlatformSet();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraValidationRule_BannedModules();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraValidationRule_BannedModules_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraValidationRule_BannedRenderers();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraValidationRule_BannedRenderers_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraValidationRule_FixedGPUBoundsSet();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraValidationRule_FixedGPUBoundsSet_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraValidationRule_InvalidEffectType();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraValidationRule_InvalidEffectType_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraValidationRule_LWC();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraValidationRule_LWC_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraValidationRule_NoFixedDeltaTime();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraValidationRule_NoFixedDeltaTime_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraValidationRule_NoOpaqueRenderMaterial();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraValidationRule_NoOpaqueRenderMaterial_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraValidationRule_NoWarmupTime();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraValidationRule_NoWarmupTime_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraValidationRule_NoWarmupTime::StaticRegisterNativesUNiagaraValidationRule_NoWarmupTime()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraValidationRule_NoWarmupTime);
	UClass* Z_Construct_UClass_UNiagaraValidationRule_NoWarmupTime_NoRegister()
	{
		return UNiagaraValidationRule_NoWarmupTime::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraValidationRule_NoWarmupTime_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraValidationRule_NoWarmupTime_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraValidationRule,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRule_NoWarmupTime_Statics::Class_MetaDataParams[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** This validation rule ensures that no Systems have a warm up time set. */" },
		{ "DisplayName", "No Warmup Time" },
		{ "IncludePath", "NiagaraValidationRules.h" },
		{ "ModuleRelativePath", "Public/NiagaraValidationRules.h" },
		{ "ToolTip", "This validation rule ensures that no Systems have a warm up time set." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraValidationRule_NoWarmupTime_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraValidationRule_NoWarmupTime>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraValidationRule_NoWarmupTime_Statics::ClassParams = {
		&UNiagaraValidationRule_NoWarmupTime::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRule_NoWarmupTime_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_NoWarmupTime_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraValidationRule_NoWarmupTime()
	{
		if (!Z_Registration_Info_UClass_UNiagaraValidationRule_NoWarmupTime.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraValidationRule_NoWarmupTime.OuterSingleton, Z_Construct_UClass_UNiagaraValidationRule_NoWarmupTime_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraValidationRule_NoWarmupTime.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraValidationRule_NoWarmupTime>()
	{
		return UNiagaraValidationRule_NoWarmupTime::StaticClass();
	}
	UNiagaraValidationRule_NoWarmupTime::UNiagaraValidationRule_NoWarmupTime(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraValidationRule_NoWarmupTime);
	UNiagaraValidationRule_NoWarmupTime::~UNiagaraValidationRule_NoWarmupTime() {}
	void UNiagaraValidationRule_FixedGPUBoundsSet::StaticRegisterNativesUNiagaraValidationRule_FixedGPUBoundsSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraValidationRule_FixedGPUBoundsSet);
	UClass* Z_Construct_UClass_UNiagaraValidationRule_FixedGPUBoundsSet_NoRegister()
	{
		return UNiagaraValidationRule_FixedGPUBoundsSet::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraValidationRule_FixedGPUBoundsSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraValidationRule_FixedGPUBoundsSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraValidationRule,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRule_FixedGPUBoundsSet_Statics::Class_MetaDataParams[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** This validation rule ensures that GPU emitters have fixed bounds set. */" },
		{ "DisplayName", "Fixed GPU Bounds Set" },
		{ "IncludePath", "NiagaraValidationRules.h" },
		{ "ModuleRelativePath", "Public/NiagaraValidationRules.h" },
		{ "ToolTip", "This validation rule ensures that GPU emitters have fixed bounds set." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraValidationRule_FixedGPUBoundsSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraValidationRule_FixedGPUBoundsSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraValidationRule_FixedGPUBoundsSet_Statics::ClassParams = {
		&UNiagaraValidationRule_FixedGPUBoundsSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRule_FixedGPUBoundsSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_FixedGPUBoundsSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraValidationRule_FixedGPUBoundsSet()
	{
		if (!Z_Registration_Info_UClass_UNiagaraValidationRule_FixedGPUBoundsSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraValidationRule_FixedGPUBoundsSet.OuterSingleton, Z_Construct_UClass_UNiagaraValidationRule_FixedGPUBoundsSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraValidationRule_FixedGPUBoundsSet.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraValidationRule_FixedGPUBoundsSet>()
	{
		return UNiagaraValidationRule_FixedGPUBoundsSet::StaticClass();
	}
	UNiagaraValidationRule_FixedGPUBoundsSet::UNiagaraValidationRule_FixedGPUBoundsSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraValidationRule_FixedGPUBoundsSet);
	UNiagaraValidationRule_FixedGPUBoundsSet::~UNiagaraValidationRule_FixedGPUBoundsSet() {}
	void UNiagaraValidationRule_BannedRenderers::StaticRegisterNativesUNiagaraValidationRule_BannedRenderers()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraValidationRule_BannedRenderers);
	UClass* Z_Construct_UClass_UNiagaraValidationRule_BannedRenderers_NoRegister()
	{
		return UNiagaraValidationRule_BannedRenderers::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraValidationRule_BannedRenderers_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Platforms_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Platforms;
		static const UECodeGen_Private::FClassPropertyParams NewProp_BannedRenderers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BannedRenderers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BannedRenderers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraValidationRule_BannedRenderers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraValidationRule,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRule_BannedRenderers_Statics::Class_MetaDataParams[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** This validation rule can ban the use of certain renderers on all or a subset of platforms. */" },
		{ "DisplayName", "Banned Renderers" },
		{ "IncludePath", "NiagaraValidationRules.h" },
		{ "ModuleRelativePath", "Public/NiagaraValidationRules.h" },
		{ "ToolTip", "This validation rule can ban the use of certain renderers on all or a subset of platforms." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRule_BannedRenderers_Statics::NewProp_Platforms_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "//Platforms this validation rule will apply to.\n" },
		{ "ModuleRelativePath", "Public/NiagaraValidationRules.h" },
		{ "ToolTip", "Platforms this validation rule will apply to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraValidationRule_BannedRenderers_Statics::NewProp_Platforms = { "Platforms", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraValidationRule_BannedRenderers, Platforms), Z_Construct_UScriptStruct_FNiagaraPlatformSet, METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRule_BannedRenderers_Statics::NewProp_Platforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_BannedRenderers_Statics::NewProp_Platforms_MetaData)) }; // 2116815752
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNiagaraValidationRule_BannedRenderers_Statics::NewProp_BannedRenderers_Inner = { "BannedRenderers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UNiagaraRendererProperties_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRule_BannedRenderers_Statics::NewProp_BannedRenderers_MetaData[] = {
		{ "Category", "Validation" },
		{ "ModuleRelativePath", "Public/NiagaraValidationRules.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraValidationRule_BannedRenderers_Statics::NewProp_BannedRenderers = { "BannedRenderers", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraValidationRule_BannedRenderers, BannedRenderers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRule_BannedRenderers_Statics::NewProp_BannedRenderers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_BannedRenderers_Statics::NewProp_BannedRenderers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraValidationRule_BannedRenderers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraValidationRule_BannedRenderers_Statics::NewProp_Platforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraValidationRule_BannedRenderers_Statics::NewProp_BannedRenderers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraValidationRule_BannedRenderers_Statics::NewProp_BannedRenderers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraValidationRule_BannedRenderers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraValidationRule_BannedRenderers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraValidationRule_BannedRenderers_Statics::ClassParams = {
		&UNiagaraValidationRule_BannedRenderers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraValidationRule_BannedRenderers_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_BannedRenderers_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRule_BannedRenderers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_BannedRenderers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraValidationRule_BannedRenderers()
	{
		if (!Z_Registration_Info_UClass_UNiagaraValidationRule_BannedRenderers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraValidationRule_BannedRenderers.OuterSingleton, Z_Construct_UClass_UNiagaraValidationRule_BannedRenderers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraValidationRule_BannedRenderers.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraValidationRule_BannedRenderers>()
	{
		return UNiagaraValidationRule_BannedRenderers::StaticClass();
	}
	UNiagaraValidationRule_BannedRenderers::UNiagaraValidationRule_BannedRenderers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraValidationRule_BannedRenderers);
	UNiagaraValidationRule_BannedRenderers::~UNiagaraValidationRule_BannedRenderers() {}
	void UNiagaraValidationRule_BannedModules::StaticRegisterNativesUNiagaraValidationRule_BannedModules()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraValidationRule_BannedModules);
	UClass* Z_Construct_UClass_UNiagaraValidationRule_BannedModules_NoRegister()
	{
		return UNiagaraValidationRule_BannedModules::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraValidationRule_BannedModules_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Platforms_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Platforms;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BannedModules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BannedModules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BannedModules;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraValidationRule_BannedModules_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraValidationRule,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRule_BannedModules_Statics::Class_MetaDataParams[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** This validation rule can ban the use of certain modules on all or a subset of platforms. */" },
		{ "DisplayName", "Banned Modules" },
		{ "IncludePath", "NiagaraValidationRules.h" },
		{ "ModuleRelativePath", "Public/NiagaraValidationRules.h" },
		{ "ToolTip", "This validation rule can ban the use of certain modules on all or a subset of platforms." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRule_BannedModules_Statics::NewProp_Platforms_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "//Platforms this validation rule will apply to.\n" },
		{ "ModuleRelativePath", "Public/NiagaraValidationRules.h" },
		{ "ToolTip", "Platforms this validation rule will apply to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraValidationRule_BannedModules_Statics::NewProp_Platforms = { "Platforms", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraValidationRule_BannedModules, Platforms), Z_Construct_UScriptStruct_FNiagaraPlatformSet, METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRule_BannedModules_Statics::NewProp_Platforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_BannedModules_Statics::NewProp_Platforms_MetaData)) }; // 2116815752
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraValidationRule_BannedModules_Statics::NewProp_BannedModules_Inner = { "BannedModules", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRule_BannedModules_Statics::NewProp_BannedModules_MetaData[] = {
		{ "Category", "Validation" },
		{ "ModuleRelativePath", "Public/NiagaraValidationRules.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraValidationRule_BannedModules_Statics::NewProp_BannedModules = { "BannedModules", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraValidationRule_BannedModules, BannedModules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRule_BannedModules_Statics::NewProp_BannedModules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_BannedModules_Statics::NewProp_BannedModules_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraValidationRule_BannedModules_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraValidationRule_BannedModules_Statics::NewProp_Platforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraValidationRule_BannedModules_Statics::NewProp_BannedModules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraValidationRule_BannedModules_Statics::NewProp_BannedModules,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraValidationRule_BannedModules_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraValidationRule_BannedModules>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraValidationRule_BannedModules_Statics::ClassParams = {
		&UNiagaraValidationRule_BannedModules::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraValidationRule_BannedModules_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_BannedModules_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRule_BannedModules_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_BannedModules_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraValidationRule_BannedModules()
	{
		if (!Z_Registration_Info_UClass_UNiagaraValidationRule_BannedModules.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraValidationRule_BannedModules.OuterSingleton, Z_Construct_UClass_UNiagaraValidationRule_BannedModules_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraValidationRule_BannedModules.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraValidationRule_BannedModules>()
	{
		return UNiagaraValidationRule_BannedModules::StaticClass();
	}
	UNiagaraValidationRule_BannedModules::UNiagaraValidationRule_BannedModules(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraValidationRule_BannedModules);
	UNiagaraValidationRule_BannedModules::~UNiagaraValidationRule_BannedModules() {}
	void UNiagaraValidationRule_BannedDataInterfaces::StaticRegisterNativesUNiagaraValidationRule_BannedDataInterfaces()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraValidationRule_BannedDataInterfaces);
	UClass* Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_NoRegister()
	{
		return UNiagaraValidationRule_BannedDataInterfaces::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Severity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Severity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Severity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBanOnGpu_MetaData[];
#endif
		static void NewProp_bBanOnGpu_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBanOnGpu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBanOnCpu_MetaData[];
#endif
		static void NewProp_bBanOnCpu_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBanOnCpu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Platforms_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Platforms;
		static const UECodeGen_Private::FClassPropertyParams NewProp_BannedDataInterfaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BannedDataInterfaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BannedDataInterfaces;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraValidationRule,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::Class_MetaDataParams[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** This validation rule can ban the use of certain datainterfaces on all or a subset of platforms. */" },
		{ "DisplayName", "Banned DataInterfaces" },
		{ "IncludePath", "NiagaraValidationRules.h" },
		{ "ModuleRelativePath", "Public/NiagaraValidationRules.h" },
		{ "ToolTip", "This validation rule can ban the use of certain datainterfaces on all or a subset of platforms." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::NewProp_Severity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::NewProp_Severity_MetaData[] = {
		{ "Category", "Validation" },
		{ "ModuleRelativePath", "Public/NiagaraValidationRules.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::NewProp_Severity = { "Severity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraValidationRule_BannedDataInterfaces, Severity), Z_Construct_UEnum_Niagara_ENiagaraValidationSeverity, METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::NewProp_Severity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::NewProp_Severity_MetaData)) }; // 4193151901
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::NewProp_bBanOnGpu_MetaData[] = {
		{ "Category", "Validation" },
		{ "ModuleRelativePath", "Public/NiagaraValidationRules.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::NewProp_bBanOnGpu_SetBit(void* Obj)
	{
		((UNiagaraValidationRule_BannedDataInterfaces*)Obj)->bBanOnGpu = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::NewProp_bBanOnGpu = { "bBanOnGpu", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraValidationRule_BannedDataInterfaces), &Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::NewProp_bBanOnGpu_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::NewProp_bBanOnGpu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::NewProp_bBanOnGpu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::NewProp_bBanOnCpu_MetaData[] = {
		{ "Category", "Validation" },
		{ "ModuleRelativePath", "Public/NiagaraValidationRules.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::NewProp_bBanOnCpu_SetBit(void* Obj)
	{
		((UNiagaraValidationRule_BannedDataInterfaces*)Obj)->bBanOnCpu = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::NewProp_bBanOnCpu = { "bBanOnCpu", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraValidationRule_BannedDataInterfaces), &Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::NewProp_bBanOnCpu_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::NewProp_bBanOnCpu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::NewProp_bBanOnCpu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::NewProp_Platforms_MetaData[] = {
		{ "Category", "Validation" },
		{ "ModuleRelativePath", "Public/NiagaraValidationRules.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::NewProp_Platforms = { "Platforms", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraValidationRule_BannedDataInterfaces, Platforms), Z_Construct_UScriptStruct_FNiagaraPlatformSet, METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::NewProp_Platforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::NewProp_Platforms_MetaData)) }; // 2116815752
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::NewProp_BannedDataInterfaces_Inner = { "BannedDataInterfaces", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UNiagaraDataInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::NewProp_BannedDataInterfaces_MetaData[] = {
		{ "Category", "Validation" },
		{ "ModuleRelativePath", "Public/NiagaraValidationRules.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::NewProp_BannedDataInterfaces = { "BannedDataInterfaces", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraValidationRule_BannedDataInterfaces, BannedDataInterfaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::NewProp_BannedDataInterfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::NewProp_BannedDataInterfaces_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::NewProp_Severity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::NewProp_Severity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::NewProp_bBanOnGpu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::NewProp_bBanOnCpu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::NewProp_Platforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::NewProp_BannedDataInterfaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::NewProp_BannedDataInterfaces,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraValidationRule_BannedDataInterfaces>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::ClassParams = {
		&UNiagaraValidationRule_BannedDataInterfaces::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces()
	{
		if (!Z_Registration_Info_UClass_UNiagaraValidationRule_BannedDataInterfaces.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraValidationRule_BannedDataInterfaces.OuterSingleton, Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraValidationRule_BannedDataInterfaces.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraValidationRule_BannedDataInterfaces>()
	{
		return UNiagaraValidationRule_BannedDataInterfaces::StaticClass();
	}
	UNiagaraValidationRule_BannedDataInterfaces::UNiagaraValidationRule_BannedDataInterfaces(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraValidationRule_BannedDataInterfaces);
	UNiagaraValidationRule_BannedDataInterfaces::~UNiagaraValidationRule_BannedDataInterfaces() {}
	void UNiagaraValidationRule_InvalidEffectType::StaticRegisterNativesUNiagaraValidationRule_InvalidEffectType()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraValidationRule_InvalidEffectType);
	UClass* Z_Construct_UClass_UNiagaraValidationRule_InvalidEffectType_NoRegister()
	{
		return UNiagaraValidationRule_InvalidEffectType::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraValidationRule_InvalidEffectType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraValidationRule_InvalidEffectType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraValidationRule,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRule_InvalidEffectType_Statics::Class_MetaDataParams[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** This validation rule can marks this effect type as invalid and so must be changed. Forces a choice of correct Effect Type for an System rather than. Leaving as the default. */" },
		{ "DisplayName", "Invalid Effect Type" },
		{ "IncludePath", "NiagaraValidationRules.h" },
		{ "ModuleRelativePath", "Public/NiagaraValidationRules.h" },
		{ "ToolTip", "This validation rule can marks this effect type as invalid and so must be changed. Forces a choice of correct Effect Type for an System rather than. Leaving as the default." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraValidationRule_InvalidEffectType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraValidationRule_InvalidEffectType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraValidationRule_InvalidEffectType_Statics::ClassParams = {
		&UNiagaraValidationRule_InvalidEffectType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRule_InvalidEffectType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_InvalidEffectType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraValidationRule_InvalidEffectType()
	{
		if (!Z_Registration_Info_UClass_UNiagaraValidationRule_InvalidEffectType.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraValidationRule_InvalidEffectType.OuterSingleton, Z_Construct_UClass_UNiagaraValidationRule_InvalidEffectType_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraValidationRule_InvalidEffectType.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraValidationRule_InvalidEffectType>()
	{
		return UNiagaraValidationRule_InvalidEffectType::StaticClass();
	}
	UNiagaraValidationRule_InvalidEffectType::UNiagaraValidationRule_InvalidEffectType(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraValidationRule_InvalidEffectType);
	UNiagaraValidationRule_InvalidEffectType::~UNiagaraValidationRule_InvalidEffectType() {}
	void UNiagaraValidationRule_LWC::StaticRegisterNativesUNiagaraValidationRule_LWC()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraValidationRule_LWC);
	UClass* Z_Construct_UClass_UNiagaraValidationRule_LWC_NoRegister()
	{
		return UNiagaraValidationRule_LWC::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraValidationRule_LWC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraValidationRule_LWC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraValidationRule,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRule_LWC_Statics::Class_MetaDataParams[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** This validation rule checks for various issue with Large World Coordinates. */" },
		{ "DisplayName", "Large World Coordinates" },
		{ "IncludePath", "NiagaraValidationRules.h" },
		{ "ModuleRelativePath", "Public/NiagaraValidationRules.h" },
		{ "ToolTip", "This validation rule checks for various issue with Large World Coordinates." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraValidationRule_LWC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraValidationRule_LWC>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraValidationRule_LWC_Statics::ClassParams = {
		&UNiagaraValidationRule_LWC::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRule_LWC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_LWC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraValidationRule_LWC()
	{
		if (!Z_Registration_Info_UClass_UNiagaraValidationRule_LWC.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraValidationRule_LWC.OuterSingleton, Z_Construct_UClass_UNiagaraValidationRule_LWC_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraValidationRule_LWC.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraValidationRule_LWC>()
	{
		return UNiagaraValidationRule_LWC::StaticClass();
	}
	UNiagaraValidationRule_LWC::UNiagaraValidationRule_LWC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraValidationRule_LWC);
	UNiagaraValidationRule_LWC::~UNiagaraValidationRule_LWC() {}
	void UNiagaraValidationRule_NoOpaqueRenderMaterial::StaticRegisterNativesUNiagaraValidationRule_NoOpaqueRenderMaterial()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraValidationRule_NoOpaqueRenderMaterial);
	UClass* Z_Construct_UClass_UNiagaraValidationRule_NoOpaqueRenderMaterial_NoRegister()
	{
		return UNiagaraValidationRule_NoOpaqueRenderMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraValidationRule_NoOpaqueRenderMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraValidationRule_NoOpaqueRenderMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraValidationRule,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRule_NoOpaqueRenderMaterial_Statics::Class_MetaDataParams[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** This validation rule is used by the collision module to check that renderers don't use any opaque or masked materials when depth buffer collisions are used. */" },
		{ "DisplayName", "Validate GPU Depth Collision Module" },
		{ "IncludePath", "NiagaraValidationRules.h" },
		{ "ModuleRelativePath", "Public/NiagaraValidationRules.h" },
		{ "ToolTip", "This validation rule is used by the collision module to check that renderers don't use any opaque or masked materials when depth buffer collisions are used." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraValidationRule_NoOpaqueRenderMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraValidationRule_NoOpaqueRenderMaterial>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraValidationRule_NoOpaqueRenderMaterial_Statics::ClassParams = {
		&UNiagaraValidationRule_NoOpaqueRenderMaterial::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRule_NoOpaqueRenderMaterial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_NoOpaqueRenderMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraValidationRule_NoOpaqueRenderMaterial()
	{
		if (!Z_Registration_Info_UClass_UNiagaraValidationRule_NoOpaqueRenderMaterial.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraValidationRule_NoOpaqueRenderMaterial.OuterSingleton, Z_Construct_UClass_UNiagaraValidationRule_NoOpaqueRenderMaterial_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraValidationRule_NoOpaqueRenderMaterial.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraValidationRule_NoOpaqueRenderMaterial>()
	{
		return UNiagaraValidationRule_NoOpaqueRenderMaterial::StaticClass();
	}
	UNiagaraValidationRule_NoOpaqueRenderMaterial::UNiagaraValidationRule_NoOpaqueRenderMaterial(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraValidationRule_NoOpaqueRenderMaterial);
	UNiagaraValidationRule_NoOpaqueRenderMaterial::~UNiagaraValidationRule_NoOpaqueRenderMaterial() {}
	void UNiagaraValidationRule_NoFixedDeltaTime::StaticRegisterNativesUNiagaraValidationRule_NoFixedDeltaTime()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraValidationRule_NoFixedDeltaTime);
	UClass* Z_Construct_UClass_UNiagaraValidationRule_NoFixedDeltaTime_NoRegister()
	{
		return UNiagaraValidationRule_NoFixedDeltaTime::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraValidationRule_NoFixedDeltaTime_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraValidationRule_NoFixedDeltaTime_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraValidationRule,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRule_NoFixedDeltaTime_Statics::Class_MetaDataParams[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** This validation rule is used by modules or effect types to warn that they don't support systems with fixed delta time ticks. */" },
		{ "DisplayName", "No Fixed DT Tick Support" },
		{ "IncludePath", "NiagaraValidationRules.h" },
		{ "ModuleRelativePath", "Public/NiagaraValidationRules.h" },
		{ "ToolTip", "This validation rule is used by modules or effect types to warn that they don't support systems with fixed delta time ticks." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraValidationRule_NoFixedDeltaTime_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraValidationRule_NoFixedDeltaTime>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraValidationRule_NoFixedDeltaTime_Statics::ClassParams = {
		&UNiagaraValidationRule_NoFixedDeltaTime::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRule_NoFixedDeltaTime_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_NoFixedDeltaTime_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraValidationRule_NoFixedDeltaTime()
	{
		if (!Z_Registration_Info_UClass_UNiagaraValidationRule_NoFixedDeltaTime.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraValidationRule_NoFixedDeltaTime.OuterSingleton, Z_Construct_UClass_UNiagaraValidationRule_NoFixedDeltaTime_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraValidationRule_NoFixedDeltaTime.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraValidationRule_NoFixedDeltaTime>()
	{
		return UNiagaraValidationRule_NoFixedDeltaTime::StaticClass();
	}
	UNiagaraValidationRule_NoFixedDeltaTime::UNiagaraValidationRule_NoFixedDeltaTime(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraValidationRule_NoFixedDeltaTime);
	UNiagaraValidationRule_NoFixedDeltaTime::~UNiagaraValidationRule_NoFixedDeltaTime() {}
	void UNiagaraValidationRule_SimulationStageBudget::StaticRegisterNativesUNiagaraValidationRule_SimulationStageBudget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraValidationRule_SimulationStageBudget);
	UClass* Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_NoRegister()
	{
		return UNiagaraValidationRule_SimulationStageBudget::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMaxSimulationStagesEnabled_MetaData[];
#endif
		static void NewProp_bMaxSimulationStagesEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaxSimulationStagesEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMaxIterationsPerStageEnabled_MetaData[];
#endif
		static void NewProp_bMaxIterationsPerStageEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaxIterationsPerStageEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMaxTotalIterationsEnabled_MetaData[];
#endif
		static void NewProp_bMaxTotalIterationsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaxTotalIterationsEnabled;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Severity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Severity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Severity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSimulationStages_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSimulationStages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxIterationsPerStage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIterationsPerStage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTotalIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTotalIterations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraValidationRule,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::Class_MetaDataParams[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** This validation rule can be used to enforce a budget on the number of simulation stages and the iterations that may execute. */" },
		{ "DisplayName", "Simulation Stage Budget" },
		{ "IncludePath", "NiagaraValidationRules.h" },
		{ "ModuleRelativePath", "Public/NiagaraValidationRules.h" },
		{ "ToolTip", "This validation rule can be used to enforce a budget on the number of simulation stages and the iterations that may execute." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_bMaxSimulationStagesEnabled_MetaData[] = {
		{ "Category", "Validation" },
		{ "ModuleRelativePath", "Public/NiagaraValidationRules.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_bMaxSimulationStagesEnabled_SetBit(void* Obj)
	{
		((UNiagaraValidationRule_SimulationStageBudget*)Obj)->bMaxSimulationStagesEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_bMaxSimulationStagesEnabled = { "bMaxSimulationStagesEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraValidationRule_SimulationStageBudget), &Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_bMaxSimulationStagesEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_bMaxSimulationStagesEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_bMaxSimulationStagesEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_bMaxIterationsPerStageEnabled_MetaData[] = {
		{ "Category", "Validation" },
		{ "ModuleRelativePath", "Public/NiagaraValidationRules.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_bMaxIterationsPerStageEnabled_SetBit(void* Obj)
	{
		((UNiagaraValidationRule_SimulationStageBudget*)Obj)->bMaxIterationsPerStageEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_bMaxIterationsPerStageEnabled = { "bMaxIterationsPerStageEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraValidationRule_SimulationStageBudget), &Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_bMaxIterationsPerStageEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_bMaxIterationsPerStageEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_bMaxIterationsPerStageEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_bMaxTotalIterationsEnabled_MetaData[] = {
		{ "Category", "Validation" },
		{ "ModuleRelativePath", "Public/NiagaraValidationRules.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_bMaxTotalIterationsEnabled_SetBit(void* Obj)
	{
		((UNiagaraValidationRule_SimulationStageBudget*)Obj)->bMaxTotalIterationsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_bMaxTotalIterationsEnabled = { "bMaxTotalIterationsEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraValidationRule_SimulationStageBudget), &Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_bMaxTotalIterationsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_bMaxTotalIterationsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_bMaxTotalIterationsEnabled_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_Severity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_Severity_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** How do we want to repro the error in the stack */" },
		{ "ModuleRelativePath", "Public/NiagaraValidationRules.h" },
		{ "ToolTip", "How do we want to repro the error in the stack" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_Severity = { "Severity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraValidationRule_SimulationStageBudget, Severity), Z_Construct_UEnum_Niagara_ENiagaraValidationSeverity, METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_Severity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_Severity_MetaData)) }; // 4193151901
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_MaxSimulationStages_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** Maximum number of simulation stages allowed, where 0 means no simulation stages. */" },
		{ "EditCondition", "bMaxSimulationStagesEnabled" },
		{ "ModuleRelativePath", "Public/NiagaraValidationRules.h" },
		{ "ToolTip", "Maximum number of simulation stages allowed, where 0 means no simulation stages." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_MaxSimulationStages = { "MaxSimulationStages", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraValidationRule_SimulationStageBudget, MaxSimulationStages), METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_MaxSimulationStages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_MaxSimulationStages_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_MaxIterationsPerStage_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "/**\n\x09Maximum number of iterations a single stage is allowed to execute.\n\x09Note: Can only check across explicit counts, dynamic bindings will be ignored.\n\x09*/" },
		{ "EditCondition", "bMaxIterationsPerStageEnabled" },
		{ "ModuleRelativePath", "Public/NiagaraValidationRules.h" },
		{ "ToolTip", "Maximum number of iterations a single stage is allowed to execute.\nNote: Can only check across explicit counts, dynamic bindings will be ignored." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_MaxIterationsPerStage = { "MaxIterationsPerStage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraValidationRule_SimulationStageBudget, MaxIterationsPerStage), METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_MaxIterationsPerStage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_MaxIterationsPerStage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_MaxTotalIterations_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "/**\n\x09Maximum total iterations across all the enabled simulation stages.\n\x09Note: Can only check across explicit counts, dynamic bindings will be ignored.\n\x09*/" },
		{ "EditCondition", "bMaxTotalIterationsEnabled" },
		{ "ModuleRelativePath", "Public/NiagaraValidationRules.h" },
		{ "ToolTip", "Maximum total iterations across all the enabled simulation stages.\nNote: Can only check across explicit counts, dynamic bindings will be ignored." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_MaxTotalIterations = { "MaxTotalIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraValidationRule_SimulationStageBudget, MaxTotalIterations), METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_MaxTotalIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_MaxTotalIterations_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_bMaxSimulationStagesEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_bMaxIterationsPerStageEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_bMaxTotalIterationsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_Severity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_Severity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_MaxSimulationStages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_MaxIterationsPerStage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::NewProp_MaxTotalIterations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraValidationRule_SimulationStageBudget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::ClassParams = {
		&UNiagaraValidationRule_SimulationStageBudget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget()
	{
		if (!Z_Registration_Info_UClass_UNiagaraValidationRule_SimulationStageBudget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraValidationRule_SimulationStageBudget.OuterSingleton, Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraValidationRule_SimulationStageBudget.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraValidationRule_SimulationStageBudget>()
	{
		return UNiagaraValidationRule_SimulationStageBudget::StaticClass();
	}
	UNiagaraValidationRule_SimulationStageBudget::UNiagaraValidationRule_SimulationStageBudget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraValidationRule_SimulationStageBudget);
	UNiagaraValidationRule_SimulationStageBudget::~UNiagaraValidationRule_SimulationStageBudget() {}
	void UNiagaraValidationRule_TickDependencyCheck::StaticRegisterNativesUNiagaraValidationRule_TickDependencyCheck()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraValidationRule_TickDependencyCheck);
	UClass* Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_NoRegister()
	{
		return UNiagaraValidationRule_TickDependencyCheck::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Severity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Severity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Severity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCheckActorComponentInterface_MetaData[];
#endif
		static void NewProp_bCheckActorComponentInterface_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckActorComponentInterface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCheckCameraDataInterface_MetaData[];
#endif
		static void NewProp_bCheckCameraDataInterface_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckCameraDataInterface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCheckSkeletalMeshInterface_MetaData[];
#endif
		static void NewProp_bCheckSkeletalMeshInterface_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckSkeletalMeshInterface;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraValidationRule,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::Class_MetaDataParams[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** Validation rule to check that we don't have a tick dependency we don't want.  */" },
		{ "DisplayName", "Tick Dependency Check" },
		{ "IncludePath", "NiagaraValidationRules.h" },
		{ "ModuleRelativePath", "Public/NiagaraValidationRules.h" },
		{ "ToolTip", "Validation rule to check that we don't have a tick dependency we don't want." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::NewProp_Severity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::NewProp_Severity_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** How do we want to repro the error in the stack */" },
		{ "ModuleRelativePath", "Public/NiagaraValidationRules.h" },
		{ "ToolTip", "How do we want to repro the error in the stack" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::NewProp_Severity = { "Severity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraValidationRule_TickDependencyCheck, Severity), Z_Construct_UEnum_Niagara_ENiagaraValidationSeverity, METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::NewProp_Severity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::NewProp_Severity_MetaData)) }; // 4193151901
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::NewProp_bCheckActorComponentInterface_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** Check that the actor component interface isn't adding a tick dependency on the CPU. */" },
		{ "ModuleRelativePath", "Public/NiagaraValidationRules.h" },
		{ "ToolTip", "Check that the actor component interface isn't adding a tick dependency on the CPU." },
	};
#endif
	void Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::NewProp_bCheckActorComponentInterface_SetBit(void* Obj)
	{
		((UNiagaraValidationRule_TickDependencyCheck*)Obj)->bCheckActorComponentInterface = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::NewProp_bCheckActorComponentInterface = { "bCheckActorComponentInterface", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraValidationRule_TickDependencyCheck), &Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::NewProp_bCheckActorComponentInterface_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::NewProp_bCheckActorComponentInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::NewProp_bCheckActorComponentInterface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::NewProp_bCheckCameraDataInterface_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** Check that the camera data interface isn't adding a tick dependency on the CPU. */" },
		{ "ModuleRelativePath", "Public/NiagaraValidationRules.h" },
		{ "ToolTip", "Check that the camera data interface isn't adding a tick dependency on the CPU." },
	};
#endif
	void Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::NewProp_bCheckCameraDataInterface_SetBit(void* Obj)
	{
		((UNiagaraValidationRule_TickDependencyCheck*)Obj)->bCheckCameraDataInterface = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::NewProp_bCheckCameraDataInterface = { "bCheckCameraDataInterface", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraValidationRule_TickDependencyCheck), &Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::NewProp_bCheckCameraDataInterface_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::NewProp_bCheckCameraDataInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::NewProp_bCheckCameraDataInterface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::NewProp_bCheckSkeletalMeshInterface_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** Check that the skeletal mesh interface isn't adding a tick dependency on the CPU. */" },
		{ "ModuleRelativePath", "Public/NiagaraValidationRules.h" },
		{ "ToolTip", "Check that the skeletal mesh interface isn't adding a tick dependency on the CPU." },
	};
#endif
	void Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::NewProp_bCheckSkeletalMeshInterface_SetBit(void* Obj)
	{
		((UNiagaraValidationRule_TickDependencyCheck*)Obj)->bCheckSkeletalMeshInterface = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::NewProp_bCheckSkeletalMeshInterface = { "bCheckSkeletalMeshInterface", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraValidationRule_TickDependencyCheck), &Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::NewProp_bCheckSkeletalMeshInterface_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::NewProp_bCheckSkeletalMeshInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::NewProp_bCheckSkeletalMeshInterface_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::NewProp_Severity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::NewProp_Severity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::NewProp_bCheckActorComponentInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::NewProp_bCheckCameraDataInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::NewProp_bCheckSkeletalMeshInterface,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraValidationRule_TickDependencyCheck>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::ClassParams = {
		&UNiagaraValidationRule_TickDependencyCheck::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck()
	{
		if (!Z_Registration_Info_UClass_UNiagaraValidationRule_TickDependencyCheck.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraValidationRule_TickDependencyCheck.OuterSingleton, Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraValidationRule_TickDependencyCheck.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraValidationRule_TickDependencyCheck>()
	{
		return UNiagaraValidationRule_TickDependencyCheck::StaticClass();
	}
	UNiagaraValidationRule_TickDependencyCheck::UNiagaraValidationRule_TickDependencyCheck(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraValidationRule_TickDependencyCheck);
	UNiagaraValidationRule_TickDependencyCheck::~UNiagaraValidationRule_TickDependencyCheck() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraValidationRules_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraValidationRules_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraValidationRule_NoWarmupTime, UNiagaraValidationRule_NoWarmupTime::StaticClass, TEXT("UNiagaraValidationRule_NoWarmupTime"), &Z_Registration_Info_UClass_UNiagaraValidationRule_NoWarmupTime, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraValidationRule_NoWarmupTime), 2753552077U) },
		{ Z_Construct_UClass_UNiagaraValidationRule_FixedGPUBoundsSet, UNiagaraValidationRule_FixedGPUBoundsSet::StaticClass, TEXT("UNiagaraValidationRule_FixedGPUBoundsSet"), &Z_Registration_Info_UClass_UNiagaraValidationRule_FixedGPUBoundsSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraValidationRule_FixedGPUBoundsSet), 2547930771U) },
		{ Z_Construct_UClass_UNiagaraValidationRule_BannedRenderers, UNiagaraValidationRule_BannedRenderers::StaticClass, TEXT("UNiagaraValidationRule_BannedRenderers"), &Z_Registration_Info_UClass_UNiagaraValidationRule_BannedRenderers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraValidationRule_BannedRenderers), 2218177129U) },
		{ Z_Construct_UClass_UNiagaraValidationRule_BannedModules, UNiagaraValidationRule_BannedModules::StaticClass, TEXT("UNiagaraValidationRule_BannedModules"), &Z_Registration_Info_UClass_UNiagaraValidationRule_BannedModules, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraValidationRule_BannedModules), 2622261211U) },
		{ Z_Construct_UClass_UNiagaraValidationRule_BannedDataInterfaces, UNiagaraValidationRule_BannedDataInterfaces::StaticClass, TEXT("UNiagaraValidationRule_BannedDataInterfaces"), &Z_Registration_Info_UClass_UNiagaraValidationRule_BannedDataInterfaces, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraValidationRule_BannedDataInterfaces), 3966797855U) },
		{ Z_Construct_UClass_UNiagaraValidationRule_InvalidEffectType, UNiagaraValidationRule_InvalidEffectType::StaticClass, TEXT("UNiagaraValidationRule_InvalidEffectType"), &Z_Registration_Info_UClass_UNiagaraValidationRule_InvalidEffectType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraValidationRule_InvalidEffectType), 2676330067U) },
		{ Z_Construct_UClass_UNiagaraValidationRule_LWC, UNiagaraValidationRule_LWC::StaticClass, TEXT("UNiagaraValidationRule_LWC"), &Z_Registration_Info_UClass_UNiagaraValidationRule_LWC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraValidationRule_LWC), 3457522452U) },
		{ Z_Construct_UClass_UNiagaraValidationRule_NoOpaqueRenderMaterial, UNiagaraValidationRule_NoOpaqueRenderMaterial::StaticClass, TEXT("UNiagaraValidationRule_NoOpaqueRenderMaterial"), &Z_Registration_Info_UClass_UNiagaraValidationRule_NoOpaqueRenderMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraValidationRule_NoOpaqueRenderMaterial), 3710684975U) },
		{ Z_Construct_UClass_UNiagaraValidationRule_NoFixedDeltaTime, UNiagaraValidationRule_NoFixedDeltaTime::StaticClass, TEXT("UNiagaraValidationRule_NoFixedDeltaTime"), &Z_Registration_Info_UClass_UNiagaraValidationRule_NoFixedDeltaTime, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraValidationRule_NoFixedDeltaTime), 619939199U) },
		{ Z_Construct_UClass_UNiagaraValidationRule_SimulationStageBudget, UNiagaraValidationRule_SimulationStageBudget::StaticClass, TEXT("UNiagaraValidationRule_SimulationStageBudget"), &Z_Registration_Info_UClass_UNiagaraValidationRule_SimulationStageBudget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraValidationRule_SimulationStageBudget), 2983425567U) },
		{ Z_Construct_UClass_UNiagaraValidationRule_TickDependencyCheck, UNiagaraValidationRule_TickDependencyCheck::StaticClass, TEXT("UNiagaraValidationRule_TickDependencyCheck"), &Z_Registration_Info_UClass_UNiagaraValidationRule_TickDependencyCheck, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraValidationRule_TickDependencyCheck), 3483545024U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraValidationRules_h_1021814278(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraValidationRules_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraValidationRules_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
