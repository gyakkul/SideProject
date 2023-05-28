// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/RotationRate/ParticleModuleRotationRateBase.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleRotationRateBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRateBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRateBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleRotationRateBase::StaticRegisterNativesUParticleModuleRotationRateBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleRotationRateBase);
	UClass* Z_Construct_UClass_UParticleModuleRotationRateBase_NoRegister()
	{
		return UParticleModuleRotationRateBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleRotationRateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleRotationRateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRotationRateBase_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Rotation Rate" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/RotationRate/ParticleModuleRotationRateBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleRotationRateBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleRotationRateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleRotationRateBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleRotationRateBase_Statics::ClassParams = {
		&UParticleModuleRotationRateBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRotationRateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRotationRateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleRotationRateBase()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleRotationRateBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleRotationRateBase.OuterSingleton, Z_Construct_UClass_UParticleModuleRotationRateBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleRotationRateBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleRotationRateBase>()
	{
		return UParticleModuleRotationRateBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleRotationRateBase);
	UParticleModuleRotationRateBase::~UParticleModuleRotationRateBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleRotationRateBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleRotationRateBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleRotationRateBase, UParticleModuleRotationRateBase::StaticClass, TEXT("UParticleModuleRotationRateBase"), &Z_Registration_Info_UClass_UParticleModuleRotationRateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleRotationRateBase), 2079672207U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleRotationRateBase_h_2873796140(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleRotationRateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleRotationRateBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
