// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleOrbitBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrbitBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrbitBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleOrbitBase::StaticRegisterNativesUParticleModuleOrbitBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleOrbitBase);
	UClass* Z_Construct_UClass_UParticleModuleOrbitBase_NoRegister()
	{
		return UParticleModuleOrbitBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleOrbitBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseEmitterTime_MetaData[];
#endif
		static void NewProp_bUseEmitterTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseEmitterTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleOrbitBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleOrbitBase_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Orbit" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Orbit/ParticleModuleOrbitBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbitBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleOrbitBase_Statics::NewProp_bUseEmitterTime_MetaData[] = {
		{ "Category", "Orbit" },
		{ "Comment", "/** \n\x09 *\x09If true, distribution values will be retrieved using the EmitterTime.\n\x09 *\x09If false (default), they will be retrieved using the Particle.RelativeTime.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbitBase.h" },
		{ "ToolTip", "If true, distribution values will be retrieved using the EmitterTime.\nIf false (default), they will be retrieved using the Particle.RelativeTime." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleOrbitBase_Statics::NewProp_bUseEmitterTime_SetBit(void* Obj)
	{
		((UParticleModuleOrbitBase*)Obj)->bUseEmitterTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleOrbitBase_Statics::NewProp_bUseEmitterTime = { "bUseEmitterTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleOrbitBase), &Z_Construct_UClass_UParticleModuleOrbitBase_Statics::NewProp_bUseEmitterTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleOrbitBase_Statics::NewProp_bUseEmitterTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleOrbitBase_Statics::NewProp_bUseEmitterTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleOrbitBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleOrbitBase_Statics::NewProp_bUseEmitterTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleOrbitBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleOrbitBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleOrbitBase_Statics::ClassParams = {
		&UParticleModuleOrbitBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleOrbitBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleOrbitBase_Statics::PropPointers),
		0,
		0x000010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleOrbitBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleOrbitBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleOrbitBase()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleOrbitBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleOrbitBase.OuterSingleton, Z_Construct_UClass_UParticleModuleOrbitBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleOrbitBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleOrbitBase>()
	{
		return UParticleModuleOrbitBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleOrbitBase);
	UParticleModuleOrbitBase::~UParticleModuleOrbitBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbitBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbitBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleOrbitBase, UParticleModuleOrbitBase::StaticClass, TEXT("UParticleModuleOrbitBase"), &Z_Registration_Info_UClass_UParticleModuleOrbitBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleOrbitBase), 3244499869U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbitBase_h_2885195722(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbitBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbitBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
