// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/RotationRate/ParticleModuleMeshRotationRate.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleMeshRotationRate() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshRotationRate();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshRotationRate_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRateBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleMeshRotationRate::StaticRegisterNativesUParticleModuleMeshRotationRate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleMeshRotationRate);
	UClass* Z_Construct_UClass_UParticleModuleMeshRotationRate_NoRegister()
	{
		return UParticleModuleMeshRotationRate::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartRotationRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartRotationRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleRotationRateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Init Mesh Rotation Rate" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/RotationRate/ParticleModuleMeshRotationRate.h" },
		{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleMeshRotationRate.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::NewProp_StartRotationRate_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/**\n\x09 *\x09Initial rotation rate, in rotations per second.\n\x09 *\x09The value is retrieved using the EmitterTime.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleMeshRotationRate.h" },
		{ "ToolTip", "Initial rotation rate, in rotations per second.\nThe value is retrieved using the EmitterTime." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::NewProp_StartRotationRate = { "StartRotationRate", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleMeshRotationRate, StartRotationRate), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::NewProp_StartRotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::NewProp_StartRotationRate_MetaData)) }; // 3056335262
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::NewProp_StartRotationRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleMeshRotationRate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::ClassParams = {
		&UParticleModuleMeshRotationRate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleMeshRotationRate()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleMeshRotationRate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleMeshRotationRate.OuterSingleton, Z_Construct_UClass_UParticleModuleMeshRotationRate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleMeshRotationRate.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleMeshRotationRate>()
	{
		return UParticleModuleMeshRotationRate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleMeshRotationRate);
	UParticleModuleMeshRotationRate::~UParticleModuleMeshRotationRate() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleMeshRotationRate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleMeshRotationRate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleMeshRotationRate, UParticleModuleMeshRotationRate::StaticClass, TEXT("UParticleModuleMeshRotationRate"), &Z_Registration_Info_UClass_UParticleModuleMeshRotationRate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleMeshRotationRate), 898078053U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleMeshRotationRate_h_930914763(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleMeshRotationRate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleMeshRotationRate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
