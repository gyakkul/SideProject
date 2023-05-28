// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Color/ParticleModuleColorOverLife.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleColorOverLife() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColorBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColorOverLife();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColorOverLife_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleColorOverLife::StaticRegisterNativesUParticleModuleColorOverLife()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleColorOverLife);
	UClass* Z_Construct_UClass_UParticleModuleColorOverLife_NoRegister()
	{
		return UParticleModuleColorOverLife::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleColorOverLife_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorOverLife_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorOverLife;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaOverLife_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaOverLife;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClampAlpha_MetaData[];
#endif
		static void NewProp_bClampAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampAlpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleColorOverLife_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleColorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleColorOverLife_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Color Over Life" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Color/ParticleModuleColorOverLife.h" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColorOverLife.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_ColorOverLife_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** The color to apply to the particle, as a function of the particle RelativeTime. */" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColorOverLife.h" },
		{ "ToolTip", "The color to apply to the particle, as a function of the particle RelativeTime." },
		{ "TreatAsColor", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_ColorOverLife = { "ColorOverLife", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleColorOverLife, ColorOverLife), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_ColorOverLife_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_ColorOverLife_MetaData)) }; // 3056335262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_AlphaOverLife_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** The alpha to apply to the particle, as a function of the particle RelativeTime. */" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColorOverLife.h" },
		{ "ToolTip", "The alpha to apply to the particle, as a function of the particle RelativeTime." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_AlphaOverLife = { "AlphaOverLife", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleColorOverLife, AlphaOverLife), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_AlphaOverLife_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_AlphaOverLife_MetaData)) }; // 2827880765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_bClampAlpha_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** If true, the alpha value will be clamped to the [0..1] range. */" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColorOverLife.h" },
		{ "ToolTip", "If true, the alpha value will be clamped to the [0..1] range." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_bClampAlpha_SetBit(void* Obj)
	{
		((UParticleModuleColorOverLife*)Obj)->bClampAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_bClampAlpha = { "bClampAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleColorOverLife), &Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_bClampAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_bClampAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_bClampAlpha_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleColorOverLife_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_ColorOverLife,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_AlphaOverLife,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_bClampAlpha,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleColorOverLife_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleColorOverLife>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleColorOverLife_Statics::ClassParams = {
		&UParticleModuleColorOverLife::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleColorOverLife_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorOverLife_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleColorOverLife_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorOverLife_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleColorOverLife()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleColorOverLife.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleColorOverLife.OuterSingleton, Z_Construct_UClass_UParticleModuleColorOverLife_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleColorOverLife.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleColorOverLife>()
	{
		return UParticleModuleColorOverLife::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleColorOverLife);
	UParticleModuleColorOverLife::~UParticleModuleColorOverLife() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColorOverLife_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColorOverLife_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleColorOverLife, UParticleModuleColorOverLife::StaticClass, TEXT("UParticleModuleColorOverLife"), &Z_Registration_Info_UClass_UParticleModuleColorOverLife, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleColorOverLife), 2973103241U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColorOverLife_h_1377992108(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColorOverLife_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColorOverLife_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
