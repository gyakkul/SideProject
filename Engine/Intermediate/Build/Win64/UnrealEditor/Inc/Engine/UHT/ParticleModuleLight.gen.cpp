// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Light/ParticleModuleLight.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLight() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLight();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLight_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLightBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightingChannels();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleLight::StaticRegisterNativesUParticleModuleLight()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleLight);
	UClass* Z_Construct_UClass_UParticleModuleLight_NoRegister()
	{
		return UParticleModuleLight::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseInverseSquaredFalloff_MetaData[];
#endif
		static void NewProp_bUseInverseSquaredFalloff_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseInverseSquaredFalloff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectsTranslucency_MetaData[];
#endif
		static void NewProp_bAffectsTranslucency_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectsTranslucency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideInverseExposureBlend_MetaData[];
#endif
		static void NewProp_bOverrideInverseExposureBlend_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideInverseExposureBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewLightRadius_MetaData[];
#endif
		static void NewProp_bPreviewLightRadius_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewLightRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnFraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnFraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorScaleOverLife_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorScaleOverLife;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrightnessOverLife_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BrightnessOverLife;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadiusScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RadiusScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightExponent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightExponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InverseExposureBlend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InverseExposureBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightingChannels_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightingChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricScatteringIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricScatteringIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHighQualityLights_MetaData[];
#endif
		static void NewProp_bHighQualityLights_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighQualityLights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShadowCastingLights_MetaData[];
#endif
		static void NewProp_bShadowCastingLights_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShadowCastingLights;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleLightBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLight_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Light" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Light/ParticleModuleLight.h" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bUseInverseSquaredFalloff_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Whether to use physically based inverse squared falloff from the light.  If unchecked, the LightExponent distribution will be used instead. */" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Whether to use physically based inverse squared falloff from the light.  If unchecked, the LightExponent distribution will be used instead." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bUseInverseSquaredFalloff_SetBit(void* Obj)
	{
		((UParticleModuleLight*)Obj)->bUseInverseSquaredFalloff = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bUseInverseSquaredFalloff = { "bUseInverseSquaredFalloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UParticleModuleLight), &Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bUseInverseSquaredFalloff_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bUseInverseSquaredFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bUseInverseSquaredFalloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bAffectsTranslucency_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Whether lights from this module should affect translucency.\n\x09 * Use with caution.  Modules enabling this should only make a few particle lights at most, and the smaller they are, the less they will cost.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Whether lights from this module should affect translucency.\nUse with caution.  Modules enabling this should only make a few particle lights at most, and the smaller they are, the less they will cost." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bAffectsTranslucency_SetBit(void* Obj)
	{
		((UParticleModuleLight*)Obj)->bAffectsTranslucency = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bAffectsTranslucency = { "bAffectsTranslucency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UParticleModuleLight), &Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bAffectsTranslucency_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bAffectsTranslucency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bAffectsTranslucency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bOverrideInverseExposureBlend_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** When enabled we will override the project default setting with our local setting. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "When enabled we will override the project default setting with our local setting." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bOverrideInverseExposureBlend_SetBit(void* Obj)
	{
		((UParticleModuleLight*)Obj)->bOverrideInverseExposureBlend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bOverrideInverseExposureBlend = { "bOverrideInverseExposureBlend", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleLight), &Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bOverrideInverseExposureBlend_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bOverrideInverseExposureBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bOverrideInverseExposureBlend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bPreviewLightRadius_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Will draw wireframe spheres to preview the light radius if enabled.\n\x09 * Note: this is intended for previewing and the value will not be saved, it will always revert to disabled.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Will draw wireframe spheres to preview the light radius if enabled.\nNote: this is intended for previewing and the value will not be saved, it will always revert to disabled." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bPreviewLightRadius_SetBit(void* Obj)
	{
		((UParticleModuleLight*)Obj)->bPreviewLightRadius = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bPreviewLightRadius = { "bPreviewLightRadius", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UParticleModuleLight), &Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bPreviewLightRadius_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bPreviewLightRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bPreviewLightRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_SpawnFraction_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Fraction of particles in this emitter to create lights on. */" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Fraction of particles in this emitter to create lights on." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_SpawnFraction = { "SpawnFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLight, SpawnFraction), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_SpawnFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_SpawnFraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_ColorScaleOverLife_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Scale that is applied to the particle's color to calculate the light's color, and can be setup as a curve over the particle's lifetime. */" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Scale that is applied to the particle's color to calculate the light's color, and can be setup as a curve over the particle's lifetime." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_ColorScaleOverLife = { "ColorScaleOverLife", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLight, ColorScaleOverLife), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_ColorScaleOverLife_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_ColorScaleOverLife_MetaData)) }; // 3056335262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_BrightnessOverLife_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Brightness scale for the light, which can be setup as a curve over the particle's lifetime. */" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Brightness scale for the light, which can be setup as a curve over the particle's lifetime." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_BrightnessOverLife = { "BrightnessOverLife", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLight, BrightnessOverLife), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_BrightnessOverLife_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_BrightnessOverLife_MetaData)) }; // 2827880765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_RadiusScale_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Scales the particle's radius, to calculate the light's radius. */" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Scales the particle's radius, to calculate the light's radius." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_RadiusScale = { "RadiusScale", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLight, RadiusScale), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_RadiusScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_RadiusScale_MetaData)) }; // 2827880765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_LightExponent_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Provides the light's exponent when inverse squared falloff is disabled. */" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Provides the light's exponent when inverse squared falloff is disabled." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_LightExponent = { "LightExponent", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLight, LightExponent), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_LightExponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_LightExponent_MetaData)) }; // 2827880765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_InverseExposureBlend_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09* Blend Factor used to blend between Intensity and Intensity/Exposure.\n\x09* This is useful for gameplay lights that should have constant brighness on screen independent of current exposure.\n\x09* This feature can cause issues with exposure particularly when used on the primary light on a scene, as such it's usage should be limited.\n\x09*/" },
		{ "EditCondition", "bOverrideInverseExposureBlend" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Blend Factor used to blend between Intensity and Intensity/Exposure.\nThis is useful for gameplay lights that should have constant brighness on screen independent of current exposure.\nThis feature can cause issues with exposure particularly when used on the primary light on a scene, as such it's usage should be limited." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_InverseExposureBlend = { "InverseExposureBlend", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLight, InverseExposureBlend), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_InverseExposureBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_InverseExposureBlend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_LightingChannels_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09* Channels that this light should affect.\n\x09* Only affect high quality lights\n\x09* These channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Channels that this light should affect.\nOnly affect high quality lights\nThese channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_LightingChannels = { "LightingChannels", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLight, LightingChannels), Z_Construct_UScriptStruct_FLightingChannels, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_LightingChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_LightingChannels_MetaData)) }; // 829425924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_VolumetricScatteringIntensity_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Intensity of the volumetric scattering from this light.  This scales Intensity and LightColor. */" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Intensity of the volumetric scattering from this light.  This scales Intensity and LightColor." },
		{ "UIMax", "4.0" },
		{ "UIMin", "0.25" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_VolumetricScatteringIntensity = { "VolumetricScatteringIntensity", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLight, VolumetricScatteringIntensity), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_VolumetricScatteringIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_VolumetricScatteringIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bHighQualityLights_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Converts the particle lights into high quality lights as if they came from a PointLightComponent.  High quality lights cost significantly more on both CPU and GPU. */" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Converts the particle lights into high quality lights as if they came from a PointLightComponent.  High quality lights cost significantly more on both CPU and GPU." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bHighQualityLights_SetBit(void* Obj)
	{
		((UParticleModuleLight*)Obj)->bHighQualityLights = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bHighQualityLights = { "bHighQualityLights", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UParticleModuleLight), &Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bHighQualityLights_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bHighQualityLights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bHighQualityLights_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bShadowCastingLights_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Whether to cast shadows from the particle lights.  Requires High Quality Lights to be enabled.\n\x09 * Warning: This can be incredibly expensive on the GPU - use with caution.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Light/ParticleModuleLight.h" },
		{ "ToolTip", "Whether to cast shadows from the particle lights.  Requires High Quality Lights to be enabled.\nWarning: This can be incredibly expensive on the GPU - use with caution." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bShadowCastingLights_SetBit(void* Obj)
	{
		((UParticleModuleLight*)Obj)->bShadowCastingLights = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bShadowCastingLights = { "bShadowCastingLights", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UParticleModuleLight), &Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bShadowCastingLights_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bShadowCastingLights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bShadowCastingLights_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleLight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bUseInverseSquaredFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bAffectsTranslucency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bOverrideInverseExposureBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bPreviewLightRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_SpawnFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_ColorScaleOverLife,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_BrightnessOverLife,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_RadiusScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_LightExponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_InverseExposureBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_LightingChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_VolumetricScatteringIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bHighQualityLights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLight_Statics::NewProp_bShadowCastingLights,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLight>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLight_Statics::ClassParams = {
		&UParticleModuleLight::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleLight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleLight()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleLight.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleLight.OuterSingleton, Z_Construct_UClass_UParticleModuleLight_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleLight.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleLight>()
	{
		return UParticleModuleLight::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLight);
	UParticleModuleLight::~UParticleModuleLight() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLight_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLight_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleLight, UParticleModuleLight::StaticClass, TEXT("UParticleModuleLight"), &Z_Registration_Info_UClass_UParticleModuleLight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleLight), 3678112874U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLight_h_578753875(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Light_ParticleModuleLight_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
