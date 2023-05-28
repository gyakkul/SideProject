// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleEventManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleEventManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AParticleEventManager();
	ENGINE_API UClass* Z_Construct_UClass_AParticleEventManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void AParticleEventManager::StaticRegisterNativesAParticleEventManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AParticleEventManager);
	UClass* Z_Construct_UClass_AParticleEventManager_NoRegister()
	{
		return AParticleEventManager::StaticClass();
	}
	struct Z_Construct_UClass_AParticleEventManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AParticleEventManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticleEventManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Particles/ParticleEventManager.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEventManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AParticleEventManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParticleEventManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AParticleEventManager_Statics::ClassParams = {
		&AParticleEventManager::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AParticleEventManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AParticleEventManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AParticleEventManager()
	{
		if (!Z_Registration_Info_UClass_AParticleEventManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AParticleEventManager.OuterSingleton, Z_Construct_UClass_AParticleEventManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AParticleEventManager.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<AParticleEventManager>()
	{
		return AParticleEventManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AParticleEventManager);
	AParticleEventManager::~AParticleEventManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEventManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEventManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AParticleEventManager, AParticleEventManager::StaticClass, TEXT("AParticleEventManager"), &Z_Registration_Info_UClass_AParticleEventManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AParticleEventManager), 657733862U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEventManager_h_3831522400(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEventManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEventManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
