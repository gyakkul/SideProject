// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/RotationRate/ParticleModuleMeshRotationRateOverLife.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleMeshRotationRateOverLife() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRateBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleMeshRotationRateOverLife::StaticRegisterNativesUParticleModuleMeshRotationRateOverLife()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleMeshRotationRateOverLife);
	UClass* Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_NoRegister()
	{
		return UParticleModuleMeshRotationRateOverLife::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScaleRotRate_MetaData[];
#endif
		static void NewProp_bScaleRotRate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleRotRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleRotationRateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Mesh Rotation Rate over Life" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/RotationRate/ParticleModuleMeshRotationRateOverLife.h" },
		{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleMeshRotationRateOverLife.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::NewProp_RotRate_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/**\n\x09 *\x09The rotation rate desired.\n\x09 *\x09The value is retrieved using the RelativeTime of the particle.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleMeshRotationRateOverLife.h" },
		{ "ToolTip", "The rotation rate desired.\nThe value is retrieved using the RelativeTime of the particle." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::NewProp_RotRate = { "RotRate", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleMeshRotationRateOverLife, RotRate), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::NewProp_RotRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::NewProp_RotRate_MetaData)) }; // 3056335262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::NewProp_bScaleRotRate_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/**\n\x09 *\x09If true, scale the current rotation rate by the value retrieved.\n\x09 *\x09Otherwise, set the rotation rate to the value retrieved.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleMeshRotationRateOverLife.h" },
		{ "ToolTip", "If true, scale the current rotation rate by the value retrieved.\nOtherwise, set the rotation rate to the value retrieved." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::NewProp_bScaleRotRate_SetBit(void* Obj)
	{
		((UParticleModuleMeshRotationRateOverLife*)Obj)->bScaleRotRate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::NewProp_bScaleRotRate = { "bScaleRotRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleMeshRotationRateOverLife), &Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::NewProp_bScaleRotRate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::NewProp_bScaleRotRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::NewProp_bScaleRotRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::NewProp_RotRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::NewProp_bScaleRotRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleMeshRotationRateOverLife>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::ClassParams = {
		&UParticleModuleMeshRotationRateOverLife::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleMeshRotationRateOverLife.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleMeshRotationRateOverLife.OuterSingleton, Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleMeshRotationRateOverLife.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleMeshRotationRateOverLife>()
	{
		return UParticleModuleMeshRotationRateOverLife::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleMeshRotationRateOverLife);
	UParticleModuleMeshRotationRateOverLife::~UParticleModuleMeshRotationRateOverLife() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleMeshRotationRateOverLife_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleMeshRotationRateOverLife_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleMeshRotationRateOverLife, UParticleModuleMeshRotationRateOverLife::StaticClass, TEXT("UParticleModuleMeshRotationRateOverLife"), &Z_Registration_Info_UClass_UParticleModuleMeshRotationRateOverLife, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleMeshRotationRateOverLife), 2214111233U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleMeshRotationRateOverLife_h_3217931941(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleMeshRotationRateOverLife_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_RotationRate_ParticleModuleMeshRotationRateOverLife_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
