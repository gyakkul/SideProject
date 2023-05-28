// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Velocity/ParticleModuleVelocity.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVelocity() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocity();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocity_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleVelocity::StaticRegisterNativesUParticleModuleVelocity()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleVelocity);
	UClass* Z_Construct_UClass_UParticleModuleVelocity_NoRegister()
	{
		return UParticleModuleVelocity::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleVelocity_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartVelocityRadial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartVelocityRadial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleVelocity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleVelocityBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVelocity_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Initial Velocity" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Velocity/ParticleModuleVelocity.h" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocity.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVelocity_Statics::NewProp_StartVelocity_MetaData[] = {
		{ "Category", "Velocity" },
		{ "Comment", "/** \n\x09 *\x09The velocity to apply to a particle when it is spawned.\n\x09 *\x09Value is retrieved using the EmitterTime of the emitter.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocity.h" },
		{ "ToolTip", "The velocity to apply to a particle when it is spawned.\nValue is retrieved using the EmitterTime of the emitter." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVelocity_Statics::NewProp_StartVelocity = { "StartVelocity", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleVelocity, StartVelocity), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVelocity_Statics::NewProp_StartVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocity_Statics::NewProp_StartVelocity_MetaData)) }; // 3056335262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVelocity_Statics::NewProp_StartVelocityRadial_MetaData[] = {
		{ "Category", "Velocity" },
		{ "Comment", "/** \n\x09 *\x09The velocity to apply to a particle along its radial direction.\n\x09 *\x09""Direction is determined by subtracting the location of the emitter from the particle location at spawn.\n\x09 *\x09Value is retrieved using the EmitterTime of the emitter.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocity.h" },
		{ "ToolTip", "The velocity to apply to a particle along its radial direction.\nDirection is determined by subtracting the location of the emitter from the particle location at spawn.\nValue is retrieved using the EmitterTime of the emitter." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVelocity_Statics::NewProp_StartVelocityRadial = { "StartVelocityRadial", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleVelocity, StartVelocityRadial), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVelocity_Statics::NewProp_StartVelocityRadial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocity_Statics::NewProp_StartVelocityRadial_MetaData)) }; // 2827880765
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVelocity_Statics::NewProp_StartVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVelocity_Statics::NewProp_StartVelocityRadial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleVelocity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleVelocity>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleVelocity_Statics::ClassParams = {
		&UParticleModuleVelocity::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleVelocity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocity_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVelocity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleVelocity()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleVelocity.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleVelocity.OuterSingleton, Z_Construct_UClass_UParticleModuleVelocity_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleVelocity.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleVelocity>()
	{
		return UParticleModuleVelocity::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVelocity);
	UParticleModuleVelocity::~UParticleModuleVelocity() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocity_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocity_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleVelocity, UParticleModuleVelocity::StaticClass, TEXT("UParticleModuleVelocity"), &Z_Registration_Info_UClass_UParticleModuleVelocity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleVelocity), 3925555316U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocity_h_1072267587(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocity_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
