// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Velocity/ParticleModuleVelocity_Seeded.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVelocity_Seeded() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocity();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocity_Seeded();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocity_Seeded_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleRandomSeedInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleVelocity_Seeded::StaticRegisterNativesUParticleModuleVelocity_Seeded()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleVelocity_Seeded);
	UClass* Z_Construct_UClass_UParticleModuleVelocity_Seeded_NoRegister()
	{
		return UParticleModuleVelocity_Seeded::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleVelocity_Seeded_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeedInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RandomSeedInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleVelocity_Seeded_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleVelocity,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVelocity_Seeded_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Initial Velocity (Seed)" },
		{ "HideCategories", "Object Object Object Object" },
		{ "IncludePath", "Particles/Velocity/ParticleModuleVelocity_Seeded.h" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocity_Seeded.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVelocity_Seeded_Statics::NewProp_RandomSeedInfo_MetaData[] = {
		{ "Category", "RandomSeed" },
		{ "Comment", "/** The random seed(s) to use for looking up values in StartLocation */" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocity_Seeded.h" },
		{ "ToolTip", "The random seed(s) to use for looking up values in StartLocation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVelocity_Seeded_Statics::NewProp_RandomSeedInfo = { "RandomSeedInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleVelocity_Seeded, RandomSeedInfo), Z_Construct_UScriptStruct_FParticleRandomSeedInfo, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVelocity_Seeded_Statics::NewProp_RandomSeedInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocity_Seeded_Statics::NewProp_RandomSeedInfo_MetaData)) }; // 2626427191
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleVelocity_Seeded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVelocity_Seeded_Statics::NewProp_RandomSeedInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleVelocity_Seeded_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleVelocity_Seeded>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleVelocity_Seeded_Statics::ClassParams = {
		&UParticleModuleVelocity_Seeded::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleVelocity_Seeded_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocity_Seeded_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVelocity_Seeded_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocity_Seeded_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleVelocity_Seeded()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleVelocity_Seeded.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleVelocity_Seeded.OuterSingleton, Z_Construct_UClass_UParticleModuleVelocity_Seeded_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleVelocity_Seeded.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleVelocity_Seeded>()
	{
		return UParticleModuleVelocity_Seeded::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVelocity_Seeded);
	UParticleModuleVelocity_Seeded::~UParticleModuleVelocity_Seeded() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocity_Seeded_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocity_Seeded_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleVelocity_Seeded, UParticleModuleVelocity_Seeded::StaticClass, TEXT("UParticleModuleVelocity_Seeded"), &Z_Registration_Info_UClass_UParticleModuleVelocity_Seeded, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleVelocity_Seeded), 2289647196U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocity_Seeded_h_3031475734(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocity_Seeded_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocity_Seeded_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
