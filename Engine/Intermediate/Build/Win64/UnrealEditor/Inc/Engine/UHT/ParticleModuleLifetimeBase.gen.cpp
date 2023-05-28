// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Lifetime/ParticleModuleLifetimeBase.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLifetimeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLifetimeBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLifetimeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleLifetimeBase::StaticRegisterNativesUParticleModuleLifetimeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleLifetimeBase);
	UClass* Z_Construct_UClass_UParticleModuleLifetimeBase_NoRegister()
	{
		return UParticleModuleLifetimeBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleLifetimeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleLifetimeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLifetimeBase_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Lifetime" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Lifetime/ParticleModuleLifetimeBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Lifetime/ParticleModuleLifetimeBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleLifetimeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLifetimeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLifetimeBase_Statics::ClassParams = {
		&UParticleModuleLifetimeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLifetimeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLifetimeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleLifetimeBase()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleLifetimeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleLifetimeBase.OuterSingleton, Z_Construct_UClass_UParticleModuleLifetimeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleLifetimeBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleLifetimeBase>()
	{
		return UParticleModuleLifetimeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLifetimeBase);
	UParticleModuleLifetimeBase::~UParticleModuleLifetimeBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Lifetime_ParticleModuleLifetimeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Lifetime_ParticleModuleLifetimeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleLifetimeBase, UParticleModuleLifetimeBase::StaticClass, TEXT("UParticleModuleLifetimeBase"), &Z_Registration_Info_UClass_UParticleModuleLifetimeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleLifetimeBase), 3366415702U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Lifetime_ParticleModuleLifetimeBase_h_2982913329(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Lifetime_ParticleModuleLifetimeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Lifetime_ParticleModuleLifetimeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
