// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleTypeDataBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleTypeDataBase::StaticRegisterNativesUParticleModuleTypeDataBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleTypeDataBase);
	UClass* Z_Construct_UClass_UParticleModuleTypeDataBase_NoRegister()
	{
		return UParticleModuleTypeDataBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleTypeDataBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleTypeDataBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/TypeData/ParticleModuleTypeDataBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleTypeDataBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleTypeDataBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleTypeDataBase_Statics::ClassParams = {
		&UParticleModuleTypeDataBase::StaticClass,
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
		0x000810A1u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleTypeDataBase()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleTypeDataBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleTypeDataBase.OuterSingleton, Z_Construct_UClass_UParticleModuleTypeDataBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleTypeDataBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleTypeDataBase>()
	{
		return UParticleModuleTypeDataBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleTypeDataBase);
	UParticleModuleTypeDataBase::~UParticleModuleTypeDataBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleTypeDataBase, UParticleModuleTypeDataBase::StaticClass, TEXT("UParticleModuleTypeDataBase"), &Z_Registration_Info_UClass_UParticleModuleTypeDataBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleTypeDataBase), 3210065200U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBase_h_274377841(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
