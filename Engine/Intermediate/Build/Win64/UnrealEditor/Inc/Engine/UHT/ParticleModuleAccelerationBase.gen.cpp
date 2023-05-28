// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Acceleration/ParticleModuleAccelerationBase.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAccelerationBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleAccelerationBase::StaticRegisterNativesUParticleModuleAccelerationBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleAccelerationBase);
	UClass* Z_Construct_UClass_UParticleModuleAccelerationBase_NoRegister()
	{
		return UParticleModuleAccelerationBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleAccelerationBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysInWorldSpace_MetaData[];
#endif
		static void NewProp_bAlwaysInWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysInWorldSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Acceleration" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Acceleration/ParticleModuleAccelerationBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::NewProp_bAlwaysInWorldSpace_MetaData[] = {
		{ "Category", "Acceleration" },
		{ "Comment", "/**\n\x09 *\x09If true, then treat the acceleration as world-space\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationBase.h" },
		{ "ToolTip", "If true, then treat the acceleration as world-space" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::NewProp_bAlwaysInWorldSpace_SetBit(void* Obj)
	{
		((UParticleModuleAccelerationBase*)Obj)->bAlwaysInWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::NewProp_bAlwaysInWorldSpace = { "bAlwaysInWorldSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleAccelerationBase), &Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::NewProp_bAlwaysInWorldSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::NewProp_bAlwaysInWorldSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::NewProp_bAlwaysInWorldSpace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::NewProp_bAlwaysInWorldSpace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleAccelerationBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::ClassParams = {
		&UParticleModuleAccelerationBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::PropPointers),
		0,
		0x000010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleAccelerationBase()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleAccelerationBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleAccelerationBase.OuterSingleton, Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleAccelerationBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleAccelerationBase>()
	{
		return UParticleModuleAccelerationBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAccelerationBase);
	UParticleModuleAccelerationBase::~UParticleModuleAccelerationBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleAccelerationBase, UParticleModuleAccelerationBase::StaticClass, TEXT("UParticleModuleAccelerationBase"), &Z_Registration_Info_UClass_UParticleModuleAccelerationBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleAccelerationBase), 1010423924U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_3430691978(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
