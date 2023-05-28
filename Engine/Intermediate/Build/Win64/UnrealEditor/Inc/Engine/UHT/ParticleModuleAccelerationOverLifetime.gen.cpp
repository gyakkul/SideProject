// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Acceleration/ParticleModuleAccelerationOverLifetime.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAccelerationOverLifetime() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationOverLifetime();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleAccelerationOverLifetime::StaticRegisterNativesUParticleModuleAccelerationOverLifetime()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleAccelerationOverLifetime);
	UClass* Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_NoRegister()
	{
		return UParticleModuleAccelerationOverLifetime::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccelOverLife_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccelOverLife;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleAccelerationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Acceleration/Life" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Acceleration/ParticleModuleAccelerationOverLifetime.h" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationOverLifetime.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::NewProp_AccelOverLife_MetaData[] = {
		{ "Category", "Acceleration" },
		{ "Comment", "/** \n\x09 *\x09The acceleration of the particle over its lifetime.\n\x09 *\x09Value is obtained using the RelativeTime of the partice.\n\x09 *\x09The current and base velocity values of the particle \n\x09 *\x09""are then updated using the formula \n\x09 *\x09\x09velocity += acceleration* DeltaTime\n\x09 *\x09where DeltaTime is the time passed since the last frame.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationOverLifetime.h" },
		{ "ToolTip", "The acceleration of the particle over its lifetime.\nValue is obtained using the RelativeTime of the partice.\nThe current and base velocity values of the particle\nare then updated using the formula\n        velocity += acceleration* DeltaTime\nwhere DeltaTime is the time passed since the last frame." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::NewProp_AccelOverLife = { "AccelOverLife", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleAccelerationOverLifetime, AccelOverLife), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::NewProp_AccelOverLife_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::NewProp_AccelOverLife_MetaData)) }; // 3056335262
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::NewProp_AccelOverLife,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleAccelerationOverLifetime>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::ClassParams = {
		&UParticleModuleAccelerationOverLifetime::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleAccelerationOverLifetime()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleAccelerationOverLifetime.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleAccelerationOverLifetime.OuterSingleton, Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleAccelerationOverLifetime.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleAccelerationOverLifetime>()
	{
		return UParticleModuleAccelerationOverLifetime::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAccelerationOverLifetime);
	UParticleModuleAccelerationOverLifetime::~UParticleModuleAccelerationOverLifetime() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationOverLifetime_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationOverLifetime_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleAccelerationOverLifetime, UParticleModuleAccelerationOverLifetime::StaticClass, TEXT("UParticleModuleAccelerationOverLifetime"), &Z_Registration_Info_UClass_UParticleModuleAccelerationOverLifetime, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleAccelerationOverLifetime), 1156371444U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationOverLifetime_h_1492211674(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationOverLifetime_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationOverLifetime_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
