// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/VectorField/ParticleModuleVectorFieldBase.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVectorFieldBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleVectorFieldBase::StaticRegisterNativesUParticleModuleVectorFieldBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleVectorFieldBase);
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldBase_NoRegister()
	{
		return UParticleModuleVectorFieldBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleVectorFieldBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleVectorFieldBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldBase_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Vector Field" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/VectorField/ParticleModuleVectorFieldBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleVectorFieldBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleVectorFieldBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleVectorFieldBase_Statics::ClassParams = {
		&UParticleModuleVectorFieldBase::StaticClass,
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
		0x000010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldBase()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleVectorFieldBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleVectorFieldBase.OuterSingleton, Z_Construct_UClass_UParticleModuleVectorFieldBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleVectorFieldBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleVectorFieldBase>()
	{
		return UParticleModuleVectorFieldBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVectorFieldBase);
	UParticleModuleVectorFieldBase::~UParticleModuleVectorFieldBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleVectorFieldBase, UParticleModuleVectorFieldBase::StaticClass, TEXT("UParticleModuleVectorFieldBase"), &Z_Registration_Info_UClass_UParticleModuleVectorFieldBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleVectorFieldBase), 1883150189U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldBase_h_658077786(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
