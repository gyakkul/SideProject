// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Kill/ParticleModuleKillBase.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleKillBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleKillBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleKillBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleKillBase::StaticRegisterNativesUParticleModuleKillBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleKillBase);
	UClass* Z_Construct_UClass_UParticleModuleKillBase_NoRegister()
	{
		return UParticleModuleKillBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleKillBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleKillBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleKillBase_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Kill" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Kill/ParticleModuleKillBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleKillBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleKillBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleKillBase_Statics::ClassParams = {
		&UParticleModuleKillBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleKillBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleKillBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleKillBase()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleKillBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleKillBase.OuterSingleton, Z_Construct_UClass_UParticleModuleKillBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleKillBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleKillBase>()
	{
		return UParticleModuleKillBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleKillBase);
	UParticleModuleKillBase::~UParticleModuleKillBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleKillBase, UParticleModuleKillBase::StaticClass, TEXT("UParticleModuleKillBase"), &Z_Registration_Info_UClass_UParticleModuleKillBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleKillBase), 3139137655U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBase_h_1528655102(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
