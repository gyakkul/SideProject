// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationBase.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleLocationBase::StaticRegisterNativesUParticleModuleLocationBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleLocationBase);
	UClass* Z_Construct_UClass_UParticleModuleLocationBase_NoRegister()
	{
		return UParticleModuleLocationBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleLocationBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleLocationBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationBase_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Location" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Location/ParticleModuleLocationBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleLocationBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLocationBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLocationBase_Statics::ClassParams = {
		&UParticleModuleLocationBase::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleLocationBase()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleLocationBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleLocationBase.OuterSingleton, Z_Construct_UClass_UParticleModuleLocationBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleLocationBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleLocationBase>()
	{
		return UParticleModuleLocationBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationBase);
	UParticleModuleLocationBase::~UParticleModuleLocationBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleLocationBase, UParticleModuleLocationBase::StaticClass, TEXT("UParticleModuleLocationBase"), &Z_Registration_Info_UClass_UParticleModuleLocationBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleLocationBase), 3595434987U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBase_h_322983763(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
