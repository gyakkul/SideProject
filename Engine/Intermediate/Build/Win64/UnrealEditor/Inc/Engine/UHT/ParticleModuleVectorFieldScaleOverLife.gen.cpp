// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/VectorField/ParticleModuleVectorFieldScaleOverLife.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVectorFieldScaleOverLife() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleVectorFieldScaleOverLife::StaticRegisterNativesUParticleModuleVectorFieldScaleOverLife()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleVectorFieldScaleOverLife);
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_NoRegister()
	{
		return UParticleModuleVectorFieldScaleOverLife::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorFieldScaleOverLife_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VectorFieldScaleOverLife;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorFieldScaleOverLifeRaw_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorFieldScaleOverLifeRaw;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleVectorFieldBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "VF Scale/Life" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/VectorField/ParticleModuleVectorFieldScaleOverLife.h" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldScaleOverLife.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::NewProp_VectorFieldScaleOverLife_MetaData[] = {
		{ "Comment", "/** Per-particle vector field scale. Evaluated using particle relative time. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldScaleOverLife.h" },
		{ "ToolTip", "Per-particle vector field scale. Evaluated using particle relative time." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::NewProp_VectorFieldScaleOverLife = { "VectorFieldScaleOverLife", nullptr, (EPropertyFlags)0x0014000020080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldScaleOverLife, VectorFieldScaleOverLife_DEPRECATED), Z_Construct_UClass_UDistributionFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::NewProp_VectorFieldScaleOverLife_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::NewProp_VectorFieldScaleOverLife_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::NewProp_VectorFieldScaleOverLifeRaw_MetaData[] = {
		{ "Category", "VectorField" },
		{ "Comment", "/** Per-particle vector field scale. Evaluated using particle relative time. */" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldScaleOverLife.h" },
		{ "ToolTip", "Per-particle vector field scale. Evaluated using particle relative time." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::NewProp_VectorFieldScaleOverLifeRaw = { "VectorFieldScaleOverLifeRaw", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldScaleOverLife, VectorFieldScaleOverLifeRaw), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::NewProp_VectorFieldScaleOverLifeRaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::NewProp_VectorFieldScaleOverLifeRaw_MetaData)) }; // 2827880765
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::NewProp_VectorFieldScaleOverLife,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::NewProp_VectorFieldScaleOverLifeRaw,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleVectorFieldScaleOverLife>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::ClassParams = {
		&UParticleModuleVectorFieldScaleOverLife::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleVectorFieldScaleOverLife.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleVectorFieldScaleOverLife.OuterSingleton, Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleVectorFieldScaleOverLife.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleVectorFieldScaleOverLife>()
	{
		return UParticleModuleVectorFieldScaleOverLife::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVectorFieldScaleOverLife);
	UParticleModuleVectorFieldScaleOverLife::~UParticleModuleVectorFieldScaleOverLife() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldScaleOverLife_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldScaleOverLife_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife, UParticleModuleVectorFieldScaleOverLife::StaticClass, TEXT("UParticleModuleVectorFieldScaleOverLife"), &Z_Registration_Info_UClass_UParticleModuleVectorFieldScaleOverLife, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleVectorFieldScaleOverLife), 1474384598U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldScaleOverLife_h_2248904437(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldScaleOverLife_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldScaleOverLife_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
