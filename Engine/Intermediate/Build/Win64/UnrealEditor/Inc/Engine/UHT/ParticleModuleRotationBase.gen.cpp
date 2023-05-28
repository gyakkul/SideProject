// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Rotation/ParticleModuleRotationBase.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleRotationBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleRotationBase::StaticRegisterNativesUParticleModuleRotationBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleRotationBase);
	UClass* Z_Construct_UClass_UParticleModuleRotationBase_NoRegister()
	{
		return UParticleModuleRotationBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleRotationBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleRotationBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRotationBase_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Rotation" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Rotation/ParticleModuleRotationBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Rotation/ParticleModuleRotationBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleRotationBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleRotationBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleRotationBase_Statics::ClassParams = {
		&UParticleModuleRotationBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRotationBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRotationBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleRotationBase()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleRotationBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleRotationBase.OuterSingleton, Z_Construct_UClass_UParticleModuleRotationBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleRotationBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleRotationBase>()
	{
		return UParticleModuleRotationBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleRotationBase);
	UParticleModuleRotationBase::~UParticleModuleRotationBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotationBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotationBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleRotationBase, UParticleModuleRotationBase::StaticClass, TEXT("UParticleModuleRotationBase"), &Z_Registration_Info_UClass_UParticleModuleRotationBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleRotationBase), 2837791951U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotationBase_h_642026503(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotationBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleRotationBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
