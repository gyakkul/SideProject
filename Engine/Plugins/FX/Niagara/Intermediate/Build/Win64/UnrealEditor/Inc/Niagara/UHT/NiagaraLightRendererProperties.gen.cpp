// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraLightRendererProperties.h"
#include "../Public/NiagaraCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraLightRendererProperties() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraLightRendererProperties();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraLightRendererProperties_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRendererProperties();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraLightRendererProperties::StaticRegisterNativesUNiagaraLightRendererProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraLightRendererProperties);
	UClass* Z_Construct_UClass_UNiagaraLightRendererProperties_NoRegister()
	{
		return UNiagaraLightRendererProperties::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraLightRendererProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceMode;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlphaScalesBrightness_MetaData[];
#endif
		static void NewProp_bAlphaScalesBrightness_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlphaScalesBrightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideInverseExposureBlend_MetaData[];
#endif
		static void NewProp_bOverrideInverseExposureBlend_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideInverseExposureBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadiusScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RadiusScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultExponent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultExponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorAdd_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorAdd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InverseExposureBlend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InverseExposureBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererVisibility_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RendererVisibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightRenderingEnabledBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightRenderingEnabledBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightExponentBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightExponentBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositionBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadiusBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RadiusBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricScatteringBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VolumetricScatteringBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererVisibilityTagBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RendererVisibilityTagBinding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraRendererProperties,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Light Renderer" },
		{ "IncludePath", "NiagaraLightRendererProperties.h" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_SourceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_SourceMode_MetaData[] = {
		{ "Category", "Light Rendering" },
		{ "Comment", "/** Whether or not to draw a single element for the Emitter or to draw the particles.*/" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "Whether or not to draw a single element for the Emitter or to draw the particles." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_SourceMode = { "SourceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraLightRendererProperties, SourceMode), Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_SourceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_SourceMode_MetaData)) }; // 919437016
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bUseInverseSquaredFalloff_MetaData[] = {
		{ "Category", "Light Rendering" },
		{ "Comment", "/** Whether to use physically based inverse squared falloff from the light.  If unchecked, the value from the LightExponent binding will be used instead. */" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "Whether to use physically based inverse squared falloff from the light.  If unchecked, the value from the LightExponent binding will be used instead." },
	};
#endif
	void Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bUseInverseSquaredFalloff_SetBit(void* Obj)
	{
		((UNiagaraLightRendererProperties*)Obj)->bUseInverseSquaredFalloff = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bUseInverseSquaredFalloff = { "bUseInverseSquaredFalloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraLightRendererProperties), &Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bUseInverseSquaredFalloff_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bUseInverseSquaredFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bUseInverseSquaredFalloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bAffectsTranslucency_MetaData[] = {
		{ "Category", "Light Rendering" },
		{ "Comment", "/**\n\x09 * Whether lights from this renderer should affect translucency.\n\x09 * Use with caution - if enabled, create only a few particle lights at most, and the smaller they are, the less they will cost.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "Whether lights from this renderer should affect translucency.\nUse with caution - if enabled, create only a few particle lights at most, and the smaller they are, the less they will cost." },
	};
#endif
	void Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bAffectsTranslucency_SetBit(void* Obj)
	{
		((UNiagaraLightRendererProperties*)Obj)->bAffectsTranslucency = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bAffectsTranslucency = { "bAffectsTranslucency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraLightRendererProperties), &Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bAffectsTranslucency_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bAffectsTranslucency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bAffectsTranslucency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bAlphaScalesBrightness_MetaData[] = {
		{ "Category", "Light Rendering" },
		{ "Comment", "/** When checked, will treat the alpha value of the particle's color as a multiplier of the light's brightness. */" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "When checked, will treat the alpha value of the particle's color as a multiplier of the light's brightness." },
	};
#endif
	void Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bAlphaScalesBrightness_SetBit(void* Obj)
	{
		((UNiagaraLightRendererProperties*)Obj)->bAlphaScalesBrightness = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bAlphaScalesBrightness = { "bAlphaScalesBrightness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraLightRendererProperties), &Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bAlphaScalesBrightness_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bAlphaScalesBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bAlphaScalesBrightness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bOverrideInverseExposureBlend_MetaData[] = {
		{ "Category", "Light Rendering" },
		{ "Comment", "/** When enabled we will override the project default setting with our local setting. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "When enabled we will override the project default setting with our local setting." },
	};
#endif
	void Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bOverrideInverseExposureBlend_SetBit(void* Obj)
	{
		((UNiagaraLightRendererProperties*)Obj)->bOverrideInverseExposureBlend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bOverrideInverseExposureBlend = { "bOverrideInverseExposureBlend", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraLightRendererProperties), &Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bOverrideInverseExposureBlend_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bOverrideInverseExposureBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bOverrideInverseExposureBlend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RadiusScale_MetaData[] = {
		{ "Category", "Light Rendering" },
		{ "ClampMin", "0" },
		{ "Comment", "/** A factor used to scale each particle light radius */" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "A factor used to scale each particle light radius" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RadiusScale = { "RadiusScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraLightRendererProperties, RadiusScale), METADATA_PARAMS(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RadiusScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RadiusScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_DefaultExponent_MetaData[] = {
		{ "Category", "Light Rendering" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The exponent to use for all lights if no exponent binding was found */" },
		{ "EditCondition", "!bUseInverseSquaredFalloff" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "The exponent to use for all lights if no exponent binding was found" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_DefaultExponent = { "DefaultExponent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraLightRendererProperties, DefaultExponent), METADATA_PARAMS(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_DefaultExponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_DefaultExponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_ColorAdd_MetaData[] = {
		{ "Category", "Light Rendering" },
		{ "Comment", "/** A static color shift applied to each rendered light */" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "A static color shift applied to each rendered light" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_ColorAdd = { "ColorAdd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraLightRendererProperties, ColorAdd), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_ColorAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_ColorAdd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_InverseExposureBlend_MetaData[] = {
		{ "Category", "Light Rendering" },
		{ "Comment", "/**\n\x09* Blend Factor used to blend between Intensity and Intensity/Exposure.\n\x09* This is useful for gameplay lights that should have constant brighness on screen independent of current exposure.\n\x09* This feature can cause issues with exposure particularly when used on the primary light on a scene, as such it's usage should be limited.\n\x09*/" },
		{ "EditCondition", "bOverrideInverseExposureBlend" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "Blend Factor used to blend between Intensity and Intensity/Exposure.\nThis is useful for gameplay lights that should have constant brighness on screen independent of current exposure.\nThis feature can cause issues with exposure particularly when used on the primary light on a scene, as such it's usage should be limited." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_InverseExposureBlend = { "InverseExposureBlend", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraLightRendererProperties, InverseExposureBlend), METADATA_PARAMS(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_InverseExposureBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_InverseExposureBlend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RendererVisibility_MetaData[] = {
		{ "Category", "Light Rendering" },
		{ "Comment", "/** If a render visibility tag is present, particles whose tag matches this value will be visible in this renderer. */" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "If a render visibility tag is present, particles whose tag matches this value will be visible in this renderer." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RendererVisibility = { "RendererVisibility", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraLightRendererProperties, RendererVisibility), METADATA_PARAMS(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RendererVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RendererVisibility_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_LightRenderingEnabledBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use to check if light rendering should be enabled for a particle? This can be used to control the spawn-rate on a per-particle basis. */" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use to check if light rendering should be enabled for a particle? This can be used to control the spawn-rate on a per-particle basis." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_LightRenderingEnabledBinding = { "LightRenderingEnabledBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraLightRendererProperties, LightRenderingEnabledBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_LightRenderingEnabledBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_LightRenderingEnabledBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_LightExponentBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for the light's exponent when inverse squared falloff is disabled? */" },
		{ "EditCondition", "!bUseInverseSquaredFalloff" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for the light's exponent when inverse squared falloff is disabled?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_LightExponentBinding = { "LightExponentBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraLightRendererProperties, LightExponentBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_LightExponentBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_LightExponentBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_PositionBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for position when generating lights?*/" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for position when generating lights?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_PositionBinding = { "PositionBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraLightRendererProperties, PositionBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_PositionBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_PositionBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_ColorBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for light color when generating lights?*/" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for light color when generating lights?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_ColorBinding = { "ColorBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraLightRendererProperties, ColorBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_ColorBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_ColorBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RadiusBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for light radius when generating lights?*/" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for light radius when generating lights?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RadiusBinding = { "RadiusBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraLightRendererProperties, RadiusBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RadiusBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RadiusBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_VolumetricScatteringBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for the intensity of the volumetric scattering from this light? This scales the light's intensity and color. */" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for the intensity of the volumetric scattering from this light? This scales the light's intensity and color." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_VolumetricScatteringBinding = { "VolumetricScatteringBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraLightRendererProperties, VolumetricScatteringBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_VolumetricScatteringBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_VolumetricScatteringBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RendererVisibilityTagBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for the renderer visibility tag? */" },
		{ "ModuleRelativePath", "Public/NiagaraLightRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for the renderer visibility tag?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RendererVisibilityTagBinding = { "RendererVisibilityTagBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraLightRendererProperties, RendererVisibilityTagBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RendererVisibilityTagBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RendererVisibilityTagBinding_MetaData)) }; // 2514448469
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_SourceMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_SourceMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bUseInverseSquaredFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bAffectsTranslucency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bAlphaScalesBrightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_bOverrideInverseExposureBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RadiusScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_DefaultExponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_ColorAdd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_InverseExposureBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RendererVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_LightRenderingEnabledBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_LightExponentBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_PositionBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_ColorBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RadiusBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_VolumetricScatteringBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::NewProp_RendererVisibilityTagBinding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraLightRendererProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::ClassParams = {
		&UNiagaraLightRendererProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraLightRendererProperties()
	{
		if (!Z_Registration_Info_UClass_UNiagaraLightRendererProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraLightRendererProperties.OuterSingleton, Z_Construct_UClass_UNiagaraLightRendererProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraLightRendererProperties.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraLightRendererProperties>()
	{
		return UNiagaraLightRendererProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraLightRendererProperties);
	UNiagaraLightRendererProperties::~UNiagaraLightRendererProperties() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraLightRendererProperties_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraLightRendererProperties_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraLightRendererProperties, UNiagaraLightRendererProperties::StaticClass, TEXT("UNiagaraLightRendererProperties"), &Z_Registration_Info_UClass_UNiagaraLightRendererProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraLightRendererProperties), 1614133560U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraLightRendererProperties_h_2856780174(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraLightRendererProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraLightRendererProperties_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
