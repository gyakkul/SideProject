// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassSimulation/Public/MassSimulationSubsystem.h"
#include "MassProcessingTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassSimulationSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassRuntimePipeline();
	MASSSIMULATION_API UClass* Z_Construct_UClass_UMassSimulationSubsystem();
	MASSSIMULATION_API UClass* Z_Construct_UClass_UMassSimulationSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassSimulation();
// End Cross Module References
	void UMassSimulationSubsystem::StaticRegisterNativesUMassSimulationSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassSimulationSubsystem);
	UClass* Z_Construct_UClass_UMassSimulationSubsystem_NoRegister()
	{
		return UMassSimulationSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMassSimulationSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimePipeline_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimePipeline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassSimulationSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MassSimulation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSimulationSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassSimulationSubsystem.h" },
		{ "ModuleRelativePath", "Public/MassSimulationSubsystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSimulationSubsystem_Statics::NewProp_RuntimePipeline_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassSimulationSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassSimulationSubsystem_Statics::NewProp_RuntimePipeline = { "RuntimePipeline", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassSimulationSubsystem, RuntimePipeline), Z_Construct_UScriptStruct_FMassRuntimePipeline, METADATA_PARAMS(Z_Construct_UClass_UMassSimulationSubsystem_Statics::NewProp_RuntimePipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSimulationSubsystem_Statics::NewProp_RuntimePipeline_MetaData)) }; // 113845191
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassSimulationSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassSimulationSubsystem_Statics::NewProp_RuntimePipeline,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassSimulationSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassSimulationSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassSimulationSubsystem_Statics::ClassParams = {
		&UMassSimulationSubsystem::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassSimulationSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassSimulationSubsystem_Statics::PropPointers),
		0,
		0x001000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UMassSimulationSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSimulationSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassSimulationSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMassSimulationSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassSimulationSubsystem.OuterSingleton, Z_Construct_UClass_UMassSimulationSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassSimulationSubsystem.OuterSingleton;
	}
	template<> MASSSIMULATION_API UClass* StaticClass<UMassSimulationSubsystem>()
	{
		return UMassSimulationSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassSimulationSubsystem);
	UMassSimulationSubsystem::~UMassSimulationSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassSimulationSubsystem, UMassSimulationSubsystem::StaticClass, TEXT("UMassSimulationSubsystem"), &Z_Registration_Info_UClass_UMassSimulationSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassSimulationSubsystem), 4276441892U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h_2543213755(TEXT("/Script/MassSimulation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
