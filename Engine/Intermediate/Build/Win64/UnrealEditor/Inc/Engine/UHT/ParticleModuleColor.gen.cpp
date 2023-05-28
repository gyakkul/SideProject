// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Color/ParticleModuleColor.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleColor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColor();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColorBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleColor::StaticRegisterNativesUParticleModuleColor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleColor);
	UClass* Z_Construct_UClass_UParticleModuleColor_NoRegister()
	{
		return UParticleModuleColor::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleColor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClampAlpha_MetaData[];
#endif
		static void NewProp_bClampAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampAlpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleColor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleColorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleColor_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Initial Color" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Color/ParticleModuleColor.h" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_StartColor_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Initial color for a particle as a function of Emitter time. */" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColor.h" },
		{ "ToolTip", "Initial color for a particle as a function of Emitter time." },
		{ "TreatAsColor", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_StartColor = { "StartColor", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleColor, StartColor), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_StartColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_StartColor_MetaData)) }; // 3056335262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_StartAlpha_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Initial alpha for a particle as a function of Emitter time. */" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColor.h" },
		{ "ToolTip", "Initial alpha for a particle as a function of Emitter time." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_StartAlpha = { "StartAlpha", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleColor, StartAlpha), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_StartAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_StartAlpha_MetaData)) }; // 2827880765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_bClampAlpha_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** If true, the alpha value will be clamped to the [0..1] range. */" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColor.h" },
		{ "ToolTip", "If true, the alpha value will be clamped to the [0..1] range." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_bClampAlpha_SetBit(void* Obj)
	{
		((UParticleModuleColor*)Obj)->bClampAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_bClampAlpha = { "bClampAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleColor), &Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_bClampAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_bClampAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_bClampAlpha_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_StartColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_StartAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_bClampAlpha,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleColor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleColor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleColor_Statics::ClassParams = {
		&UParticleModuleColor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleColor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColor_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleColor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleColor()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleColor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleColor.OuterSingleton, Z_Construct_UClass_UParticleModuleColor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleColor.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleColor>()
	{
		return UParticleModuleColor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleColor);
	UParticleModuleColor::~UParticleModuleColor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleColor, UParticleModuleColor::StaticClass, TEXT("UParticleModuleColor"), &Z_Registration_Info_UClass_UParticleModuleColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleColor), 3500233310U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColor_h_778651864(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Color_ParticleModuleColor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
