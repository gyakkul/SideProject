// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Material/ParticleModuleMaterialBase.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleMaterialBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMaterialBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMaterialBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleMaterialBase::StaticRegisterNativesUParticleModuleMaterialBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleMaterialBase);
	UClass* Z_Construct_UClass_UParticleModuleMaterialBase_NoRegister()
	{
		return UParticleModuleMaterialBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleMaterialBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleMaterialBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleMaterialBase_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Material" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Material/ParticleModuleMaterialBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Material/ParticleModuleMaterialBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleMaterialBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleMaterialBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleMaterialBase_Statics::ClassParams = {
		&UParticleModuleMaterialBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleMaterialBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMaterialBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleMaterialBase()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleMaterialBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleMaterialBase.OuterSingleton, Z_Construct_UClass_UParticleModuleMaterialBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleMaterialBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleMaterialBase>()
	{
		return UParticleModuleMaterialBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleMaterialBase);
	UParticleModuleMaterialBase::~UParticleModuleMaterialBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Material_ParticleModuleMaterialBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Material_ParticleModuleMaterialBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleMaterialBase, UParticleModuleMaterialBase::StaticClass, TEXT("UParticleModuleMaterialBase"), &Z_Registration_Info_UClass_UParticleModuleMaterialBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleMaterialBase), 3712915393U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Material_ParticleModuleMaterialBase_h_56234511(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Material_ParticleModuleMaterialBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Material_ParticleModuleMaterialBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
