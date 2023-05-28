// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steering/MassSteeringTrait.h"
#include "Steering/MassSteeringFragments.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassSteeringTrait() {}
// Cross Module References
	MASSNAVIGATION_API UClass* Z_Construct_UClass_UMassSteeringTrait();
	MASSNAVIGATION_API UClass* Z_Construct_UClass_UMassSteeringTrait_NoRegister();
	MASSNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassMovingSteeringParameters();
	MASSNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassStandingSteeringParameters();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
	UPackage* Z_Construct_UPackage__Script_MassNavigation();
// End Cross Module References
	void UMassSteeringTrait::StaticRegisterNativesUMassSteeringTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassSteeringTrait);
	UClass* Z_Construct_UClass_UMassSteeringTrait_NoRegister()
	{
		return UMassSteeringTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassSteeringTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovingSteering_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovingSteering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandingSteering_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StandingSteering;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassSteeringTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassNavigation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSteeringTrait_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Steering" },
		{ "IncludePath", "Steering/MassSteeringTrait.h" },
		{ "ModuleRelativePath", "Public/Steering/MassSteeringTrait.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSteeringTrait_Statics::NewProp_MovingSteering_MetaData[] = {
		{ "Category", "Steering" },
		{ "EditInline", "" },
		{ "ModuleRelativePath", "Public/Steering/MassSteeringTrait.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassSteeringTrait_Statics::NewProp_MovingSteering = { "MovingSteering", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassSteeringTrait, MovingSteering), Z_Construct_UScriptStruct_FMassMovingSteeringParameters, METADATA_PARAMS(Z_Construct_UClass_UMassSteeringTrait_Statics::NewProp_MovingSteering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSteeringTrait_Statics::NewProp_MovingSteering_MetaData)) }; // 3580735477
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSteeringTrait_Statics::NewProp_StandingSteering_MetaData[] = {
		{ "Category", "Steering" },
		{ "EditInline", "" },
		{ "ModuleRelativePath", "Public/Steering/MassSteeringTrait.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassSteeringTrait_Statics::NewProp_StandingSteering = { "StandingSteering", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassSteeringTrait, StandingSteering), Z_Construct_UScriptStruct_FMassStandingSteeringParameters, METADATA_PARAMS(Z_Construct_UClass_UMassSteeringTrait_Statics::NewProp_StandingSteering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSteeringTrait_Statics::NewProp_StandingSteering_MetaData)) }; // 2807615447
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassSteeringTrait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassSteeringTrait_Statics::NewProp_MovingSteering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassSteeringTrait_Statics::NewProp_StandingSteering,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassSteeringTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassSteeringTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassSteeringTrait_Statics::ClassParams = {
		&UMassSteeringTrait::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassSteeringTrait_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassSteeringTrait_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassSteeringTrait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSteeringTrait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassSteeringTrait()
	{
		if (!Z_Registration_Info_UClass_UMassSteeringTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassSteeringTrait.OuterSingleton, Z_Construct_UClass_UMassSteeringTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassSteeringTrait.OuterSingleton;
	}
	template<> MASSNAVIGATION_API UClass* StaticClass<UMassSteeringTrait>()
	{
		return UMassSteeringTrait::StaticClass();
	}
	UMassSteeringTrait::UMassSteeringTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassSteeringTrait);
	UMassSteeringTrait::~UMassSteeringTrait() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringTrait_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringTrait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassSteeringTrait, UMassSteeringTrait::StaticClass, TEXT("UMassSteeringTrait"), &Z_Registration_Info_UClass_UMassSteeringTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassSteeringTrait), 3033452115U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringTrait_h_2602854685(TEXT("/Script/MassNavigation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringTrait_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
