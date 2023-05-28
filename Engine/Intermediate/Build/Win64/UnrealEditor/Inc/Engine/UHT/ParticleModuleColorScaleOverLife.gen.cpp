// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Color/ParticleModuleColorScaleOverLife.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleColorScaleOverLife() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColorBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColorScaleOverLife();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColorScaleOverLife_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleColorScaleOverLife::StaticRegisterNativesUParticleModuleColorScaleOverLife()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleColorScaleOverLife);
	UClass* Z_Construct_UClass_UParticleModuleColorScaleOverLife_NoRegister()
	{
		return UParticleModuleColorScaleOverLife::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorScaleOverLife_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorScaleOverLife;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleOverLife_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleOverLife;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEmitterTime_MetaData[];
#endif
		static void NewProp_bEmitterTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmitterTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleColorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Scale Color / Life" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Color/ParticleModuleColorScaleOverLife.h" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColorScaleOverLife.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_ColorScaleOverLife_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** The scale factor for the color.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColorScaleOverLife.h" },
		{ "ToolTip", "The scale factor for the color." },
		{ "TreatAsColor", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_ColorScaleOverLife = { "ColorScaleOverLife", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleColorScaleOverLife, ColorScaleOverLife), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_ColorScaleOverLife_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_ColorScaleOverLife_MetaData)) }; // 3056335262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_AlphaScaleOverLife_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** The scale factor for the alpha.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColorScaleOverLife.h" },
		{ "ToolTip", "The scale factor for the alpha." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_AlphaScaleOverLife = { "AlphaScaleOverLife", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleColorScaleOverLife, AlphaScaleOverLife), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_AlphaScaleOverLife_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_AlphaScaleOverLife_MetaData)) }; // 2827880765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_bEmitterTime_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Whether it is EmitterTime or ParticleTime related.\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColorScaleOverLife.h" },
		{ "ToolTip", "Whether it is EmitterTime or ParticleTime related." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_bEmitterTime_SetBit(void* Obj)
	{
		((UParticleModuleColorScaleOverLife*)Obj)->bEmitterTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_bEmitterTime = { "bEmitterTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleColorScaleOverLife), &Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_bEmitterTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_bEmitterTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_bEmitterTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_ColorScaleOverLife,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_AlphaScaleOverLife,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_bEmitterTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleColorScaleOverLife>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::ClassParams = {
		&UParticleModuleColorScaleOverLife::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleColorScaleOverLife()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleColorScaleOverLife.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleColorScaleOverLife.OuterSingleton, Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleColorScaleOverLife.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleColorScaleOverLife>()
	{
		return UParticleModuleColorScaleOverLife::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleColorScaleOverLife);
	UParticleModuleColorScaleOverLife::~UParticleModuleColorScaleOverLife() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColorScaleOverLife_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColorScaleOverLife_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleColorScaleOverLife, UParticleModuleColorScaleOverLife::StaticClass, TEXT("UParticleModuleColorScaleOverLife"), &Z_Registration_Info_UClass_UParticleModuleColorScaleOverLife, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleColorScaleOverLife), 3982420112U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColorScaleOverLife_h_2235487387(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColorScaleOverLife_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColorScaleOverLife_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
