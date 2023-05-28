// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Avoidance/MassAvoidanceTrait.h"
#include "Avoidance/MassAvoidanceFragments.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassAvoidanceTrait() {}
// Cross Module References
	MASSNAVIGATION_API UClass* Z_Construct_UClass_UMassObstacleAvoidanceTrait();
	MASSNAVIGATION_API UClass* Z_Construct_UClass_UMassObstacleAvoidanceTrait_NoRegister();
	MASSNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters();
	MASSNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
	UPackage* Z_Construct_UPackage__Script_MassNavigation();
// End Cross Module References
	void UMassObstacleAvoidanceTrait::StaticRegisterNativesUMassObstacleAvoidanceTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassObstacleAvoidanceTrait);
	UClass* Z_Construct_UClass_UMassObstacleAvoidanceTrait_NoRegister()
	{
		return UMassObstacleAvoidanceTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassObstacleAvoidanceTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovingParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovingParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandingParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StandingParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassObstacleAvoidanceTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassNavigation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassObstacleAvoidanceTrait_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Avoidance" },
		{ "IncludePath", "Avoidance/MassAvoidanceTrait.h" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceTrait.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassObstacleAvoidanceTrait_Statics::NewProp_MovingParameters_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceTrait.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassObstacleAvoidanceTrait_Statics::NewProp_MovingParameters = { "MovingParameters", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassObstacleAvoidanceTrait, MovingParameters), Z_Construct_UScriptStruct_FMassMovingAvoidanceParameters, METADATA_PARAMS(Z_Construct_UClass_UMassObstacleAvoidanceTrait_Statics::NewProp_MovingParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassObstacleAvoidanceTrait_Statics::NewProp_MovingParameters_MetaData)) }; // 2416075870
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassObstacleAvoidanceTrait_Statics::NewProp_StandingParameters_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceTrait.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassObstacleAvoidanceTrait_Statics::NewProp_StandingParameters = { "StandingParameters", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassObstacleAvoidanceTrait, StandingParameters), Z_Construct_UScriptStruct_FMassStandingAvoidanceParameters, METADATA_PARAMS(Z_Construct_UClass_UMassObstacleAvoidanceTrait_Statics::NewProp_StandingParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassObstacleAvoidanceTrait_Statics::NewProp_StandingParameters_MetaData)) }; // 212539898
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassObstacleAvoidanceTrait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassObstacleAvoidanceTrait_Statics::NewProp_MovingParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassObstacleAvoidanceTrait_Statics::NewProp_StandingParameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassObstacleAvoidanceTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassObstacleAvoidanceTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassObstacleAvoidanceTrait_Statics::ClassParams = {
		&UMassObstacleAvoidanceTrait::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassObstacleAvoidanceTrait_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassObstacleAvoidanceTrait_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassObstacleAvoidanceTrait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassObstacleAvoidanceTrait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassObstacleAvoidanceTrait()
	{
		if (!Z_Registration_Info_UClass_UMassObstacleAvoidanceTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassObstacleAvoidanceTrait.OuterSingleton, Z_Construct_UClass_UMassObstacleAvoidanceTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassObstacleAvoidanceTrait.OuterSingleton;
	}
	template<> MASSNAVIGATION_API UClass* StaticClass<UMassObstacleAvoidanceTrait>()
	{
		return UMassObstacleAvoidanceTrait::StaticClass();
	}
	UMassObstacleAvoidanceTrait::UMassObstacleAvoidanceTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassObstacleAvoidanceTrait);
	UMassObstacleAvoidanceTrait::~UMassObstacleAvoidanceTrait() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Avoidance_MassAvoidanceTrait_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Avoidance_MassAvoidanceTrait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassObstacleAvoidanceTrait, UMassObstacleAvoidanceTrait::StaticClass, TEXT("UMassObstacleAvoidanceTrait"), &Z_Registration_Info_UClass_UMassObstacleAvoidanceTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassObstacleAvoidanceTrait), 2516691359U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Avoidance_MassAvoidanceTrait_h_2049833526(TEXT("/Script/MassNavigation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Avoidance_MassAvoidanceTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Avoidance_MassAvoidanceTrait_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
