// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Camera/ParticleModuleCameraBase.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleCameraBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCameraBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCameraBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleCameraBase::StaticRegisterNativesUParticleModuleCameraBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleCameraBase);
	UClass* Z_Construct_UClass_UParticleModuleCameraBase_NoRegister()
	{
		return UParticleModuleCameraBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleCameraBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleCameraBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCameraBase_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Camera" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Camera/ParticleModuleCameraBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Camera/ParticleModuleCameraBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleCameraBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleCameraBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleCameraBase_Statics::ClassParams = {
		&UParticleModuleCameraBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCameraBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCameraBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleCameraBase()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleCameraBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleCameraBase.OuterSingleton, Z_Construct_UClass_UParticleModuleCameraBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleCameraBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleCameraBase>()
	{
		return UParticleModuleCameraBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleCameraBase);
	UParticleModuleCameraBase::~UParticleModuleCameraBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleCameraBase, UParticleModuleCameraBase::StaticClass, TEXT("UParticleModuleCameraBase"), &Z_Registration_Info_UClass_UParticleModuleCameraBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleCameraBase), 549760441U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraBase_h_649100377(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
