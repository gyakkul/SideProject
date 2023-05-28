// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Size/ParticleModuleSizeBase.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSizeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleSizeBase::StaticRegisterNativesUParticleModuleSizeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleSizeBase);
	UClass* Z_Construct_UClass_UParticleModuleSizeBase_NoRegister()
	{
		return UParticleModuleSizeBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleSizeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleSizeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSizeBase_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Size" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Size/ParticleModuleSizeBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleSizeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleSizeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleSizeBase_Statics::ClassParams = {
		&UParticleModuleSizeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSizeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleSizeBase()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleSizeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleSizeBase.OuterSingleton, Z_Construct_UClass_UParticleModuleSizeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleSizeBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleSizeBase>()
	{
		return UParticleModuleSizeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSizeBase);
	UParticleModuleSizeBase::~UParticleModuleSizeBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleSizeBase, UParticleModuleSizeBase::StaticClass, TEXT("UParticleModuleSizeBase"), &Z_Registration_Info_UClass_UParticleModuleSizeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleSizeBase), 786861464U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeBase_h_1292687954(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
