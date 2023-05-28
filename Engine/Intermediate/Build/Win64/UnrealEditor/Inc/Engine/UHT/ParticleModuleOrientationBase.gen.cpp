// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Orientation/ParticleModuleOrientationBase.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleOrientationBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrientationBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrientationBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleOrientationBase::StaticRegisterNativesUParticleModuleOrientationBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleOrientationBase);
	UClass* Z_Construct_UClass_UParticleModuleOrientationBase_NoRegister()
	{
		return UParticleModuleOrientationBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleOrientationBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleOrientationBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleOrientationBase_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Orientation" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Orientation/ParticleModuleOrientationBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Orientation/ParticleModuleOrientationBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleOrientationBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleOrientationBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleOrientationBase_Statics::ClassParams = {
		&UParticleModuleOrientationBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleOrientationBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleOrientationBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleOrientationBase()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleOrientationBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleOrientationBase.OuterSingleton, Z_Construct_UClass_UParticleModuleOrientationBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleOrientationBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleOrientationBase>()
	{
		return UParticleModuleOrientationBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleOrientationBase);
	UParticleModuleOrientationBase::~UParticleModuleOrientationBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleOrientationBase, UParticleModuleOrientationBase::StaticClass, TEXT("UParticleModuleOrientationBase"), &Z_Registration_Info_UClass_UParticleModuleOrientationBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleOrientationBase), 1560529636U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationBase_h_2942458197(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
