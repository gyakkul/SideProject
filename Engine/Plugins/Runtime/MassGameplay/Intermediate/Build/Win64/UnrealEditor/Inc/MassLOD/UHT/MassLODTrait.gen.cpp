// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassLOD/Public/MassLODTrait.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassLOD/Public/MassSimulationLOD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassLODTrait() {}
// Cross Module References
	MASSLOD_API UClass* Z_Construct_UClass_UMassLODCollectorTrait();
	MASSLOD_API UClass* Z_Construct_UClass_UMassLODCollectorTrait_NoRegister();
	MASSLOD_API UClass* Z_Construct_UClass_UMassSimulationLODTrait();
	MASSLOD_API UClass* Z_Construct_UClass_UMassSimulationLODTrait_NoRegister();
	MASSLOD_API UScriptStruct* Z_Construct_UScriptStruct_FMassSimulationLODParameters();
	MASSLOD_API UScriptStruct* Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
	UPackage* Z_Construct_UPackage__Script_MassLOD();
// End Cross Module References
	void UMassLODCollectorTrait::StaticRegisterNativesUMassLODCollectorTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassLODCollectorTrait);
	UClass* Z_Construct_UClass_UMassLODCollectorTrait_NoRegister()
	{
		return UMassLODCollectorTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassLODCollectorTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassLODCollectorTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassLOD,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassLODCollectorTrait_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "LODCollector" },
		{ "IncludePath", "MassLODTrait.h" },
		{ "ModuleRelativePath", "Public/MassLODTrait.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassLODCollectorTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassLODCollectorTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassLODCollectorTrait_Statics::ClassParams = {
		&UMassLODCollectorTrait::StaticClass,
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
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassLODCollectorTrait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassLODCollectorTrait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassLODCollectorTrait()
	{
		if (!Z_Registration_Info_UClass_UMassLODCollectorTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassLODCollectorTrait.OuterSingleton, Z_Construct_UClass_UMassLODCollectorTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassLODCollectorTrait.OuterSingleton;
	}
	template<> MASSLOD_API UClass* StaticClass<UMassLODCollectorTrait>()
	{
		return UMassLODCollectorTrait::StaticClass();
	}
	UMassLODCollectorTrait::UMassLODCollectorTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassLODCollectorTrait);
	UMassLODCollectorTrait::~UMassLODCollectorTrait() {}
	void UMassSimulationLODTrait::StaticRegisterNativesUMassSimulationLODTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassSimulationLODTrait);
	UClass* Z_Construct_UClass_UMassSimulationLODTrait_NoRegister()
	{
		return UMassSimulationLODTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassSimulationLODTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableVariableTicking_MetaData[];
#endif
		static void NewProp_bEnableVariableTicking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableVariableTicking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableTickParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VariableTickParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassSimulationLODTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassLOD,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSimulationLODTrait_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "SimulationLOD" },
		{ "IncludePath", "MassLODTrait.h" },
		{ "ModuleRelativePath", "Public/MassLODTrait.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSimulationLODTrait_Statics::NewProp_Params_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/MassLODTrait.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassSimulationLODTrait_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassSimulationLODTrait, Params), Z_Construct_UScriptStruct_FMassSimulationLODParameters, METADATA_PARAMS(Z_Construct_UClass_UMassSimulationLODTrait_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSimulationLODTrait_Statics::NewProp_Params_MetaData)) }; // 3013244002
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSimulationLODTrait_Statics::NewProp_bEnableVariableTicking_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/MassLODTrait.h" },
	};
#endif
	void Z_Construct_UClass_UMassSimulationLODTrait_Statics::NewProp_bEnableVariableTicking_SetBit(void* Obj)
	{
		((UMassSimulationLODTrait*)Obj)->bEnableVariableTicking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMassSimulationLODTrait_Statics::NewProp_bEnableVariableTicking = { "bEnableVariableTicking", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMassSimulationLODTrait), &Z_Construct_UClass_UMassSimulationLODTrait_Statics::NewProp_bEnableVariableTicking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMassSimulationLODTrait_Statics::NewProp_bEnableVariableTicking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSimulationLODTrait_Statics::NewProp_bEnableVariableTicking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSimulationLODTrait_Statics::NewProp_VariableTickParams_MetaData[] = {
		{ "Category", "Config" },
		{ "EditCondition", "bEnableVariableTicking" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MassLODTrait.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassSimulationLODTrait_Statics::NewProp_VariableTickParams = { "VariableTickParams", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassSimulationLODTrait, VariableTickParams), Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters, METADATA_PARAMS(Z_Construct_UClass_UMassSimulationLODTrait_Statics::NewProp_VariableTickParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSimulationLODTrait_Statics::NewProp_VariableTickParams_MetaData)) }; // 2234997953
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassSimulationLODTrait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassSimulationLODTrait_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassSimulationLODTrait_Statics::NewProp_bEnableVariableTicking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassSimulationLODTrait_Statics::NewProp_VariableTickParams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassSimulationLODTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassSimulationLODTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassSimulationLODTrait_Statics::ClassParams = {
		&UMassSimulationLODTrait::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassSimulationLODTrait_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassSimulationLODTrait_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassSimulationLODTrait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSimulationLODTrait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassSimulationLODTrait()
	{
		if (!Z_Registration_Info_UClass_UMassSimulationLODTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassSimulationLODTrait.OuterSingleton, Z_Construct_UClass_UMassSimulationLODTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassSimulationLODTrait.OuterSingleton;
	}
	template<> MASSLOD_API UClass* StaticClass<UMassSimulationLODTrait>()
	{
		return UMassSimulationLODTrait::StaticClass();
	}
	UMassSimulationLODTrait::UMassSimulationLODTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassSimulationLODTrait);
	UMassSimulationLODTrait::~UMassSimulationLODTrait() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODTrait_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODTrait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassLODCollectorTrait, UMassLODCollectorTrait::StaticClass, TEXT("UMassLODCollectorTrait"), &Z_Registration_Info_UClass_UMassLODCollectorTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassLODCollectorTrait), 309694246U) },
		{ Z_Construct_UClass_UMassSimulationLODTrait, UMassSimulationLODTrait::StaticClass, TEXT("UMassSimulationLODTrait"), &Z_Registration_Info_UClass_UMassSimulationLODTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassSimulationLODTrait), 3288676612U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODTrait_h_2924239071(TEXT("/Script/MassLOD"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODTrait_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
