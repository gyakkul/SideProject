// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Trail/ParticleModuleTrailBase.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleTrailBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTrailBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTrailBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleTrailBase::StaticRegisterNativesUParticleModuleTrailBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleTrailBase);
	UClass* Z_Construct_UClass_UParticleModuleTrailBase_NoRegister()
	{
		return UParticleModuleTrailBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleTrailBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleTrailBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTrailBase_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Trail" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Trail/ParticleModuleTrailBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleTrailBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleTrailBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleTrailBase_Statics::ClassParams = {
		&UParticleModuleTrailBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTrailBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTrailBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleTrailBase()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleTrailBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleTrailBase.OuterSingleton, Z_Construct_UClass_UParticleModuleTrailBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleTrailBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleTrailBase>()
	{
		return UParticleModuleTrailBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleTrailBase);
	UParticleModuleTrailBase::~UParticleModuleTrailBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleTrailBase, UParticleModuleTrailBase::StaticClass, TEXT("UParticleModuleTrailBase"), &Z_Registration_Info_UClass_UParticleModuleTrailBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleTrailBase), 1091615225U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailBase_h_1847141400(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
