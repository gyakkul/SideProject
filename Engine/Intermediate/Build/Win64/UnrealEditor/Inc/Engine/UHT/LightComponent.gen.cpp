// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/LightComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ULightComponent();
	ENGINE_API UClass* Z_Construct_UClass_ULightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULightComponentBase();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureLightProfile_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightingChannels();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrecomputedLightInstanceData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSceneComponentInstanceData();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(ULightComponent::execSetLightingChannels)
	{
		P_GET_UBOOL(Z_Param_bChannel0);
		P_GET_UBOOL(Z_Param_bChannel1);
		P_GET_UBOOL(Z_Param_bChannel2);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightingChannels(Z_Param_bChannel0,Z_Param_bChannel1,Z_Param_bChannel2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponent::execSetForceCachedShadowsForMovablePrimitives)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetForceCachedShadowsForMovablePrimitives(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponent::execSetSpecularScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpecularScale(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponent::execSetShadowSlopeBias)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShadowSlopeBias(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponent::execSetShadowBias)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShadowBias(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponent::execSetIESBrightnessScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIESBrightnessScale(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponent::execSetUseIESBrightness)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseIESBrightness(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponent::execSetIESTexture)
	{
		P_GET_OBJECT(UTextureLightProfile,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIESTexture(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponent::execSetBloomTint)
	{
		P_GET_STRUCT(FColor,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBloomTint(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponent::execSetBloomMaxBrightness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBloomMaxBrightness(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponent::execSetBloomThreshold)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBloomThreshold(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponent::execSetBloomScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBloomScale(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponent::execSetEnableLightShaftBloom)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableLightShaftBloom(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponent::execSetTransmission)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTransmission(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponent::execSetAffectTranslucentLighting)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAffectTranslucentLighting(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponent::execSetAffectDynamicIndirectLighting)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAffectDynamicIndirectLighting(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponent::execSetLightFunctionDisabledBrightness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightFunctionDisabledBrightness(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponent::execSetLightFunctionFadeDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewLightFunctionFadeDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightFunctionFadeDistance(Z_Param_NewLightFunctionFadeDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponent::execSetLightFunctionScale)
	{
		P_GET_STRUCT(FVector,Z_Param_NewLightFunctionScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightFunctionScale(Z_Param_NewLightFunctionScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponent::execSetLightFunctionMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewLightFunctionMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightFunctionMaterial(Z_Param_NewLightFunctionMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponent::execSetUseTemperature)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseTemperature(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponent::execSetTemperature)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewTemperature);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTemperature(Z_Param_NewTemperature);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponent::execSetLightFColor)
	{
		P_GET_STRUCT(FColor,Z_Param_NewLightColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightFColor(Z_Param_NewLightColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponent::execSetLightColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_NewLightColor);
		P_GET_UBOOL(Z_Param_bSRGB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightColor(Z_Param_NewLightColor,Z_Param_bSRGB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponent::execSetVolumetricScatteringIntensity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewIntensity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolumetricScatteringIntensity(Z_Param_NewIntensity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponent::execSetIndirectLightingIntensity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewIntensity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIndirectLightingIntensity(Z_Param_NewIntensity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponent::execSetIntensity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewIntensity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIntensity(Z_Param_NewIntensity);
		P_NATIVE_END;
	}
	void ULightComponent::StaticRegisterNativesULightComponent()
	{
		UClass* Class = ULightComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAffectDynamicIndirectLighting", &ULightComponent::execSetAffectDynamicIndirectLighting },
			{ "SetAffectTranslucentLighting", &ULightComponent::execSetAffectTranslucentLighting },
			{ "SetBloomMaxBrightness", &ULightComponent::execSetBloomMaxBrightness },
			{ "SetBloomScale", &ULightComponent::execSetBloomScale },
			{ "SetBloomThreshold", &ULightComponent::execSetBloomThreshold },
			{ "SetBloomTint", &ULightComponent::execSetBloomTint },
			{ "SetEnableLightShaftBloom", &ULightComponent::execSetEnableLightShaftBloom },
			{ "SetForceCachedShadowsForMovablePrimitives", &ULightComponent::execSetForceCachedShadowsForMovablePrimitives },
			{ "SetIESBrightnessScale", &ULightComponent::execSetIESBrightnessScale },
			{ "SetIESTexture", &ULightComponent::execSetIESTexture },
			{ "SetIndirectLightingIntensity", &ULightComponent::execSetIndirectLightingIntensity },
			{ "SetIntensity", &ULightComponent::execSetIntensity },
			{ "SetLightColor", &ULightComponent::execSetLightColor },
			{ "SetLightFColor", &ULightComponent::execSetLightFColor },
			{ "SetLightFunctionDisabledBrightness", &ULightComponent::execSetLightFunctionDisabledBrightness },
			{ "SetLightFunctionFadeDistance", &ULightComponent::execSetLightFunctionFadeDistance },
			{ "SetLightFunctionMaterial", &ULightComponent::execSetLightFunctionMaterial },
			{ "SetLightFunctionScale", &ULightComponent::execSetLightFunctionScale },
			{ "SetLightingChannels", &ULightComponent::execSetLightingChannels },
			{ "SetShadowBias", &ULightComponent::execSetShadowBias },
			{ "SetShadowSlopeBias", &ULightComponent::execSetShadowSlopeBias },
			{ "SetSpecularScale", &ULightComponent::execSetSpecularScale },
			{ "SetTemperature", &ULightComponent::execSetTemperature },
			{ "SetTransmission", &ULightComponent::execSetTransmission },
			{ "SetUseIESBrightness", &ULightComponent::execSetUseIESBrightness },
			{ "SetUseTemperature", &ULightComponent::execSetUseTemperature },
			{ "SetVolumetricScatteringIntensity", &ULightComponent::execSetVolumetricScatteringIntensity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting_Statics
	{
		struct LightComponent_eventSetAffectDynamicIndirectLighting_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((LightComponent_eventSetAffectDynamicIndirectLighting_Parms*)Obj)->bNewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LightComponent_eventSetAffectDynamicIndirectLighting_Parms), &Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetAffectDynamicIndirectLighting", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting_Statics::LightComponent_eventSetAffectDynamicIndirectLighting_Parms), Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics
	{
		struct LightComponent_eventSetAffectTranslucentLighting_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((LightComponent_eventSetAffectTranslucentLighting_Parms*)Obj)->bNewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LightComponent_eventSetAffectTranslucentLighting_Parms), &Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetAffectTranslucentLighting", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::LightComponent_eventSetAffectTranslucentLighting_Parms), Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetBloomMaxBrightness_Statics
	{
		struct LightComponent_eventSetBloomMaxBrightness_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetBloomMaxBrightness_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LightComponent_eventSetBloomMaxBrightness_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetBloomMaxBrightness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetBloomMaxBrightness_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetBloomMaxBrightness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetBloomMaxBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetBloomMaxBrightness", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponent_SetBloomMaxBrightness_Statics::LightComponent_eventSetBloomMaxBrightness_Parms), Z_Construct_UFunction_ULightComponent_SetBloomMaxBrightness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetBloomMaxBrightness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetBloomMaxBrightness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetBloomMaxBrightness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetBloomMaxBrightness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetBloomMaxBrightness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics
	{
		struct LightComponent_eventSetBloomScale_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LightComponent_eventSetBloomScale_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetBloomScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics::LightComponent_eventSetBloomScale_Parms), Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetBloomScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics
	{
		struct LightComponent_eventSetBloomThreshold_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LightComponent_eventSetBloomThreshold_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetBloomThreshold", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics::LightComponent_eventSetBloomThreshold_Parms), Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetBloomThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics
	{
		struct LightComponent_eventSetBloomTint_Parms
		{
			FColor NewValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LightComponent_eventSetBloomTint_Parms, NewValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetBloomTint", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics::LightComponent_eventSetBloomTint_Parms), Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetBloomTint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics
	{
		struct LightComponent_eventSetEnableLightShaftBloom_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((LightComponent_eventSetEnableLightShaftBloom_Parms*)Obj)->bNewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LightComponent_eventSetEnableLightShaftBloom_Parms), &Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetEnableLightShaftBloom", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::LightComponent_eventSetEnableLightShaftBloom_Parms), Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics
	{
		struct LightComponent_eventSetForceCachedShadowsForMovablePrimitives_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((LightComponent_eventSetForceCachedShadowsForMovablePrimitives_Parms*)Obj)->bNewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LightComponent_eventSetForceCachedShadowsForMovablePrimitives_Parms), &Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetForceCachedShadowsForMovablePrimitives", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::LightComponent_eventSetForceCachedShadowsForMovablePrimitives_Parms), Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetIESBrightnessScale_Statics
	{
		struct LightComponent_eventSetIESBrightnessScale_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetIESBrightnessScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LightComponent_eventSetIESBrightnessScale_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetIESBrightnessScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetIESBrightnessScale_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetIESBrightnessScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "DisplayName", "Set IES Intensity Scale" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetIESBrightnessScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetIESBrightnessScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponent_SetIESBrightnessScale_Statics::LightComponent_eventSetIESBrightnessScale_Parms), Z_Construct_UFunction_ULightComponent_SetIESBrightnessScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetIESBrightnessScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetIESBrightnessScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetIESBrightnessScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetIESBrightnessScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetIESBrightnessScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics
	{
		struct LightComponent_eventSetIESTexture_Parms
		{
			UTextureLightProfile* NewValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LightComponent_eventSetIESTexture_Parms, NewValue), Z_Construct_UClass_UTextureLightProfile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "DisplayName", "Set IES Texture" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetIESTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics::LightComponent_eventSetIESTexture_Parms), Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetIESTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics
	{
		struct LightComponent_eventSetIndirectLightingIntensity_Parms
		{
			float NewIntensity;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewIntensity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics::NewProp_NewIntensity = { "NewIntensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LightComponent_eventSetIndirectLightingIntensity_Parms, NewIntensity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics::NewProp_NewIntensity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetIndirectLightingIntensity", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics::LightComponent_eventSetIndirectLightingIntensity_Parms), Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetIntensity_Statics
	{
		struct LightComponent_eventSetIntensity_Parms
		{
			float NewIntensity;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewIntensity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetIntensity_Statics::NewProp_NewIntensity = { "NewIntensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LightComponent_eventSetIntensity_Parms, NewIntensity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetIntensity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetIntensity_Statics::NewProp_NewIntensity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetIntensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "Comment", "/** Set intensity of the light */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Set intensity of the light" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetIntensity", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponent_SetIntensity_Statics::LightComponent_eventSetIntensity_Parms), Z_Construct_UFunction_ULightComponent_SetIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetIntensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetLightColor_Statics
	{
		struct LightComponent_eventSetLightColor_Parms
		{
			FLinearColor NewLightColor;
			bool bSRGB;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewLightColor;
		static void NewProp_bSRGB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSRGB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::NewProp_NewLightColor = { "NewLightColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LightComponent_eventSetLightColor_Parms, NewLightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::NewProp_bSRGB_SetBit(void* Obj)
	{
		((LightComponent_eventSetLightColor_Parms*)Obj)->bSRGB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::NewProp_bSRGB = { "bSRGB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LightComponent_eventSetLightColor_Parms), &Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::NewProp_bSRGB_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::NewProp_NewLightColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::NewProp_bSRGB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "Comment", "/** Set color of the light */" },
		{ "CPP_Default_bSRGB", "true" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Set color of the light" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetLightColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::LightComponent_eventSetLightColor_Parms), Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetLightColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetLightFColor_Statics
	{
		struct LightComponent_eventSetLightFColor_Parms
		{
			FColor NewLightColor;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewLightColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULightComponent_SetLightFColor_Statics::NewProp_NewLightColor = { "NewLightColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LightComponent_eventSetLightFColor_Parms, NewLightColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetLightFColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetLightFColor_Statics::NewProp_NewLightColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetLightFColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "Comment", "/** Set color of the light */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Set color of the light" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetLightFColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetLightFColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponent_SetLightFColor_Statics::LightComponent_eventSetLightFColor_Parms), Z_Construct_UFunction_ULightComponent_SetLightFColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightFColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetLightFColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightFColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetLightFColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetLightFColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics
	{
		struct LightComponent_eventSetLightFunctionDisabledBrightness_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LightComponent_eventSetLightFunctionDisabledBrightness_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetLightFunctionDisabledBrightness", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics::LightComponent_eventSetLightFunctionDisabledBrightness_Parms), Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics
	{
		struct LightComponent_eventSetLightFunctionFadeDistance_Parms
		{
			float NewLightFunctionFadeDistance;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLightFunctionFadeDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics::NewProp_NewLightFunctionFadeDistance = { "NewLightFunctionFadeDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LightComponent_eventSetLightFunctionFadeDistance_Parms, NewLightFunctionFadeDistance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics::NewProp_NewLightFunctionFadeDistance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetLightFunctionFadeDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics::LightComponent_eventSetLightFunctionFadeDistance_Parms), Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics
	{
		struct LightComponent_eventSetLightFunctionMaterial_Parms
		{
			UMaterialInterface* NewLightFunctionMaterial;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewLightFunctionMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics::NewProp_NewLightFunctionMaterial = { "NewLightFunctionMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LightComponent_eventSetLightFunctionMaterial_Parms, NewLightFunctionMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics::NewProp_NewLightFunctionMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetLightFunctionMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics::LightComponent_eventSetLightFunctionMaterial_Parms), Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics
	{
		struct LightComponent_eventSetLightFunctionScale_Parms
		{
			FVector NewLightFunctionScale;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewLightFunctionScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics::NewProp_NewLightFunctionScale = { "NewLightFunctionScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LightComponent_eventSetLightFunctionScale_Parms, NewLightFunctionScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics::NewProp_NewLightFunctionScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetLightFunctionScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics::LightComponent_eventSetLightFunctionScale_Parms), Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetLightFunctionScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics
	{
		struct LightComponent_eventSetLightingChannels_Parms
		{
			bool bChannel0;
			bool bChannel1;
			bool bChannel2;
		};
		static void NewProp_bChannel0_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bChannel0;
		static void NewProp_bChannel1_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bChannel1;
		static void NewProp_bChannel2_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bChannel2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::NewProp_bChannel0_SetBit(void* Obj)
	{
		((LightComponent_eventSetLightingChannels_Parms*)Obj)->bChannel0 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::NewProp_bChannel0 = { "bChannel0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LightComponent_eventSetLightingChannels_Parms), &Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::NewProp_bChannel0_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::NewProp_bChannel1_SetBit(void* Obj)
	{
		((LightComponent_eventSetLightingChannels_Parms*)Obj)->bChannel1 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::NewProp_bChannel1 = { "bChannel1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LightComponent_eventSetLightingChannels_Parms), &Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::NewProp_bChannel1_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::NewProp_bChannel2_SetBit(void* Obj)
	{
		((LightComponent_eventSetLightingChannels_Parms*)Obj)->bChannel2 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::NewProp_bChannel2 = { "bChannel2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LightComponent_eventSetLightingChannels_Parms), &Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::NewProp_bChannel2_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::NewProp_bChannel0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::NewProp_bChannel1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::NewProp_bChannel2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetLightingChannels", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::LightComponent_eventSetLightingChannels_Parms), Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetLightingChannels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics
	{
		struct LightComponent_eventSetShadowBias_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LightComponent_eventSetShadowBias_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetShadowBias", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics::LightComponent_eventSetShadowBias_Parms), Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetShadowBias()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetShadowSlopeBias_Statics
	{
		struct LightComponent_eventSetShadowSlopeBias_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetShadowSlopeBias_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LightComponent_eventSetShadowSlopeBias_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetShadowSlopeBias_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetShadowSlopeBias_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetShadowSlopeBias_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetShadowSlopeBias_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetShadowSlopeBias", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponent_SetShadowSlopeBias_Statics::LightComponent_eventSetShadowSlopeBias_Parms), Z_Construct_UFunction_ULightComponent_SetShadowSlopeBias_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetShadowSlopeBias_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetShadowSlopeBias_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetShadowSlopeBias_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetShadowSlopeBias()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetShadowSlopeBias_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetSpecularScale_Statics
	{
		struct LightComponent_eventSetSpecularScale_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetSpecularScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LightComponent_eventSetSpecularScale_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetSpecularScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetSpecularScale_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetSpecularScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetSpecularScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetSpecularScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponent_SetSpecularScale_Statics::LightComponent_eventSetSpecularScale_Parms), Z_Construct_UFunction_ULightComponent_SetSpecularScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetSpecularScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetSpecularScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetSpecularScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetSpecularScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetSpecularScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetTemperature_Statics
	{
		struct LightComponent_eventSetTemperature_Parms
		{
			float NewTemperature;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewTemperature;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetTemperature_Statics::NewProp_NewTemperature = { "NewTemperature", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LightComponent_eventSetTemperature_Parms, NewTemperature), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetTemperature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetTemperature_Statics::NewProp_NewTemperature,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetTemperature_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetTemperature", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponent_SetTemperature_Statics::LightComponent_eventSetTemperature_Parms), Z_Construct_UFunction_ULightComponent_SetTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetTemperature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetTemperature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetTemperature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetTemperature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetTemperature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetTransmission_Statics
	{
		struct LightComponent_eventSetTransmission_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((LightComponent_eventSetTransmission_Parms*)Obj)->bNewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LightComponent_eventSetTransmission_Parms), &Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetTransmission", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::LightComponent_eventSetTransmission_Parms), Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetTransmission()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetUseIESBrightness_Statics
	{
		struct LightComponent_eventSetUseIESBrightness_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULightComponent_SetUseIESBrightness_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((LightComponent_eventSetUseIESBrightness_Parms*)Obj)->bNewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponent_SetUseIESBrightness_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LightComponent_eventSetUseIESBrightness_Parms), &Z_Construct_UFunction_ULightComponent_SetUseIESBrightness_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetUseIESBrightness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetUseIESBrightness_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetUseIESBrightness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "DisplayName", "Set Use IES Intensity" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetUseIESBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetUseIESBrightness", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponent_SetUseIESBrightness_Statics::LightComponent_eventSetUseIESBrightness_Parms), Z_Construct_UFunction_ULightComponent_SetUseIESBrightness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetUseIESBrightness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetUseIESBrightness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetUseIESBrightness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetUseIESBrightness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetUseIESBrightness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetUseTemperature_Statics
	{
		struct LightComponent_eventSetUseTemperature_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULightComponent_SetUseTemperature_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((LightComponent_eventSetUseTemperature_Parms*)Obj)->bNewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponent_SetUseTemperature_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LightComponent_eventSetUseTemperature_Parms), &Z_Construct_UFunction_ULightComponent_SetUseTemperature_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetUseTemperature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetUseTemperature_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetUseTemperature_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetUseTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetUseTemperature", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponent_SetUseTemperature_Statics::LightComponent_eventSetUseTemperature_Parms), Z_Construct_UFunction_ULightComponent_SetUseTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetUseTemperature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetUseTemperature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetUseTemperature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetUseTemperature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetUseTemperature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics
	{
		struct LightComponent_eventSetVolumetricScatteringIntensity_Parms
		{
			float NewIntensity;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewIntensity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics::NewProp_NewIntensity = { "NewIntensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LightComponent_eventSetVolumetricScatteringIntensity_Parms, NewIntensity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics::NewProp_NewIntensity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetVolumetricScatteringIntensity", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics::LightComponent_eventSetVolumetricScatteringIntensity_Parms), Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULightComponent);
	UClass* Z_Construct_UClass_ULightComponent_NoRegister()
	{
		return ULightComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULightComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDrawDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDrawDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceFadeRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceFadeRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseTemperature_MetaData[];
#endif
		static void NewProp_bUseTemperature_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTemperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowMapChannel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ShadowMapChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinRoughness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRoughness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecularScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpecularScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowResolutionScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowResolutionScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowSlopeBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowSlopeBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowSharpen_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowSharpen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContactShadowLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ContactShadowLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContactShadowLengthInWS_MetaData[];
#endif
		static void NewProp_ContactShadowLengthInWS_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ContactShadowLengthInWS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContactShadowCastingIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ContactShadowCastingIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContactShadowNonCastingIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ContactShadowNonCastingIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InverseSquaredFalloff_MetaData[];
#endif
		static void NewProp_InverseSquaredFalloff_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InverseSquaredFalloff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CastTranslucentShadows_MetaData[];
#endif
		static void NewProp_CastTranslucentShadows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CastTranslucentShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadowsFromCinematicObjectsOnly_MetaData[];
#endif
		static void NewProp_bCastShadowsFromCinematicObjectsOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadowsFromCinematicObjectsOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectDynamicIndirectLighting_MetaData[];
#endif
		static void NewProp_bAffectDynamicIndirectLighting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectDynamicIndirectLighting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceCachedShadowsForMovablePrimitives_MetaData[];
#endif
		static void NewProp_bForceCachedShadowsForMovablePrimitives_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceCachedShadowsForMovablePrimitives;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightingChannels_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightingChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightFunctionMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LightFunctionMaterial;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StashedLightFunctionMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StashedLightFunctionMaterial;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightFunctionScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightFunctionScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IESTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IESTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseIESBrightness_MetaData[];
#endif
		static void NewProp_bUseIESBrightness_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseIESBrightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IESBrightnessScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IESBrightnessScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightFunctionFadeDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightFunctionFadeDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisabledBrightness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DisabledBrightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLightShaftBloom_MetaData[];
#endif
		static void NewProp_bEnableLightShaftBloom_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLightShaftBloom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BloomScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BloomScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BloomThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BloomThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BloomMaxBrightness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BloomMaxBrightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BloomTint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BloomTint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseRayTracedDistanceFieldShadows_MetaData[];
#endif
		static void NewProp_bUseRayTracedDistanceFieldShadows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRayTracedDistanceFieldShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayStartOffsetDepthScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RayStartOffsetDepthScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULightComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULightComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting, "SetAffectDynamicIndirectLighting" }, // 2118564724
		{ &Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting, "SetAffectTranslucentLighting" }, // 2678541882
		{ &Z_Construct_UFunction_ULightComponent_SetBloomMaxBrightness, "SetBloomMaxBrightness" }, // 1763320438
		{ &Z_Construct_UFunction_ULightComponent_SetBloomScale, "SetBloomScale" }, // 511104666
		{ &Z_Construct_UFunction_ULightComponent_SetBloomThreshold, "SetBloomThreshold" }, // 2276519857
		{ &Z_Construct_UFunction_ULightComponent_SetBloomTint, "SetBloomTint" }, // 3861314476
		{ &Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom, "SetEnableLightShaftBloom" }, // 1766583263
		{ &Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives, "SetForceCachedShadowsForMovablePrimitives" }, // 387281035
		{ &Z_Construct_UFunction_ULightComponent_SetIESBrightnessScale, "SetIESBrightnessScale" }, // 2667649837
		{ &Z_Construct_UFunction_ULightComponent_SetIESTexture, "SetIESTexture" }, // 3690348274
		{ &Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity, "SetIndirectLightingIntensity" }, // 493284889
		{ &Z_Construct_UFunction_ULightComponent_SetIntensity, "SetIntensity" }, // 3313581935
		{ &Z_Construct_UFunction_ULightComponent_SetLightColor, "SetLightColor" }, // 75346043
		{ &Z_Construct_UFunction_ULightComponent_SetLightFColor, "SetLightFColor" }, // 4111874349
		{ &Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness, "SetLightFunctionDisabledBrightness" }, // 1058335064
		{ &Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance, "SetLightFunctionFadeDistance" }, // 4292030171
		{ &Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial, "SetLightFunctionMaterial" }, // 2243811623
		{ &Z_Construct_UFunction_ULightComponent_SetLightFunctionScale, "SetLightFunctionScale" }, // 1710128092
		{ &Z_Construct_UFunction_ULightComponent_SetLightingChannels, "SetLightingChannels" }, // 3988875285
		{ &Z_Construct_UFunction_ULightComponent_SetShadowBias, "SetShadowBias" }, // 4201724354
		{ &Z_Construct_UFunction_ULightComponent_SetShadowSlopeBias, "SetShadowSlopeBias" }, // 1788252147
		{ &Z_Construct_UFunction_ULightComponent_SetSpecularScale, "SetSpecularScale" }, // 1758886954
		{ &Z_Construct_UFunction_ULightComponent_SetTemperature, "SetTemperature" }, // 95215912
		{ &Z_Construct_UFunction_ULightComponent_SetTransmission, "SetTransmission" }, // 3572943126
		{ &Z_Construct_UFunction_ULightComponent_SetUseIESBrightness, "SetUseIESBrightness" }, // 393645291
		{ &Z_Construct_UFunction_ULightComponent_SetUseTemperature, "SetUseTemperature" }, // 3696322001
		{ &Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity, "SetVolumetricScatteringIntensity" }, // 2119073399
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger Activation Components|Activation Physics Trigger Activation Components|Activation Physics Trigger PhysicsVolume" },
		{ "IncludePath", "Components/LightComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_Temperature_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09* Color temperature in Kelvin of the blackbody illuminant.\n\x09* White (D65) is 6500K.\n\x09*/" },
		{ "DisplayAfter", "bUseTemperature" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ShouldShowInViewport", "TRUE" },
		{ "ToolTip", "Color temperature in Kelvin of the blackbody illuminant.\nWhite (D65) is 6500K." },
		{ "UIMax", "12000.0" },
		{ "UIMin", "1700.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponent, Temperature), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_Temperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_Temperature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_MaxDrawDistance_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_MaxDrawDistance = { "MaxDrawDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponent, MaxDrawDistance), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_MaxDrawDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_MaxDrawDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_MaxDistanceFadeRange_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_MaxDistanceFadeRange = { "MaxDistanceFadeRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponent, MaxDistanceFadeRange), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_MaxDistanceFadeRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_MaxDistanceFadeRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseTemperature_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** false: use white (D65) as illuminant. */" },
		{ "DisplayName", "Use Temperature" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ShouldShowInViewport", "TRUE" },
		{ "ToolTip", "false: use white (D65) as illuminant." },
	};
#endif
	void Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseTemperature_SetBit(void* Obj)
	{
		((ULightComponent*)Obj)->bUseTemperature = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseTemperature = { "bUseTemperature", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULightComponent), &Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseTemperature_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseTemperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseTemperature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowMapChannel_MetaData[] = {
		{ "Comment", "/** \n\x09 * Legacy shadowmap channel from the lighting build, now stored in FLightComponentMapBuildData.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Legacy shadowmap channel from the lighting build, now stored in FLightComponentMapBuildData." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowMapChannel = { "ShadowMapChannel", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponent, ShadowMapChannel_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowMapChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowMapChannel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_MinRoughness_MetaData[] = {
		{ "Comment", "/** Min roughness effective for this light. Used for softening specular highlights. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Min roughness effective for this light. Used for softening specular highlights." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_MinRoughness = { "MinRoughness", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponent, MinRoughness_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_MinRoughness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_MinRoughness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_SpecularScale_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Multiplier on specular highlights. Use only with great care! Any value besides 1 is not physical!\n\x09 * Can be used to artistically remove highlights mimicking polarizing filters or photo touch up.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Multiplier on specular highlights. Use only with great care! Any value besides 1 is not physical!\nCan be used to artistically remove highlights mimicking polarizing filters or photo touch up." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_SpecularScale = { "SpecularScale", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponent, SpecularScale), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_SpecularScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_SpecularScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowResolutionScale_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Scales the resolution of shadowmaps used to shadow this light.  By default shadowmap resolution is chosen based on screen size of the caster. \n\x09 * Note: shadowmap resolution is still clamped by 'r.Shadow.MaxResolution'\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Scales the resolution of shadowmaps used to shadow this light.  By default shadowmap resolution is chosen based on screen size of the caster.\nNote: shadowmap resolution is still clamped by 'r.Shadow.MaxResolution'" },
		{ "UIMax", "8" },
		{ "UIMin", ".125" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowResolutionScale = { "ShadowResolutionScale", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponent, ShadowResolutionScale), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowResolutionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowResolutionScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowBias_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Controls how accurate self shadowing of whole scene shadows from this light are.  \n\x09 * At 0, shadows will start at the their caster surface, but there will be many self shadowing artifacts.\n\x09 * larger values, shadows will start further from their caster, and there won't be self shadowing artifacts but object might appear to fly.\n\x09 * around 0.5 seems to be a good tradeoff. This also affects the soft transition of shadows\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Controls how accurate self shadowing of whole scene shadows from this light are.\nAt 0, shadows will start at the their caster surface, but there will be many self shadowing artifacts.\nlarger values, shadows will start further from their caster, and there won't be self shadowing artifacts but object might appear to fly.\naround 0.5 seems to be a good tradeoff. This also affects the soft transition of shadows" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowBias = { "ShadowBias", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponent, ShadowBias), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowSlopeBias_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09 * Controls how accurate self shadowing of whole scene shadows from this light are. This works in addition to shadow bias, by increasing the \n\x09 * amount of bias depending on the slope of a surface.\n\x09 * At 0, shadows will start at the their caster surface, but there will be many self shadowing artifacts.\n\x09 * larger values, shadows will start further from their caster, and there won't be self shadowing artifacts but object might appear to fly.\n\x09 * around 0.5 seems to be a good tradeoff. This also affects the soft transition of shadows\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Controls how accurate self shadowing of whole scene shadows from this light are. This works in addition to shadow bias, by increasing the\namount of bias depending on the slope of a surface.\nAt 0, shadows will start at the their caster surface, but there will be many self shadowing artifacts.\nlarger values, shadows will start further from their caster, and there won't be self shadowing artifacts but object might appear to fly.\naround 0.5 seems to be a good tradeoff. This also affects the soft transition of shadows" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowSlopeBias = { "ShadowSlopeBias", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponent, ShadowSlopeBias), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowSlopeBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowSlopeBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowSharpen_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Amount to sharpen shadow filtering */" },
		{ "DisplayName", "Shadow Filter Sharpen" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Amount to sharpen shadow filtering" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowSharpen = { "ShadowSharpen", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponent, ShadowSharpen), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowSharpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowSharpen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowLength_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Length of screen space ray trace for sharp contact shadows. Zero is disabled. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Length of screen space ray trace for sharp contact shadows. Zero is disabled." },
		{ "UIMax", "0.1" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowLength = { "ContactShadowLength", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponent, ContactShadowLength), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowLengthInWS_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Where Length of screen space ray trace for sharp contact shadows is in world space units or in screen space units. */" },
		{ "DisplayName", "Contact Shadow Length In World Space Units" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Where Length of screen space ray trace for sharp contact shadows is in world space units or in screen space units." },
	};
#endif
	void Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowLengthInWS_SetBit(void* Obj)
	{
		((ULightComponent*)Obj)->ContactShadowLengthInWS = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowLengthInWS = { "ContactShadowLengthInWS", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULightComponent), &Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowLengthInWS_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowLengthInWS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowLengthInWS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowCastingIntensity_MetaData[] = {
		{ "Category", "Light" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Intensity of the shadows cast by primitives with \"cast contact shadow\" enabled. 0 = no shadow, 1 (default) = fully shadowed. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Intensity of the shadows cast by primitives with \"cast contact shadow\" enabled. 0 = no shadow, 1 (default) = fully shadowed." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowCastingIntensity = { "ContactShadowCastingIntensity", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponent, ContactShadowCastingIntensity), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowCastingIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowCastingIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowNonCastingIntensity_MetaData[] = {
		{ "Category", "Light" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Intensity of the shadows cast by primitives with \"cast contact shadow\" disabled. 0 (default) = no shadow, 1 = fully shadowed. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Intensity of the shadows cast by primitives with \"cast contact shadow\" disabled. 0 (default) = no shadow, 1 = fully shadowed." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowNonCastingIntensity = { "ContactShadowNonCastingIntensity", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponent, ContactShadowNonCastingIntensity), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowNonCastingIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowNonCastingIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_InverseSquaredFalloff_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULightComponent_Statics::NewProp_InverseSquaredFalloff_SetBit(void* Obj)
	{
		((ULightComponent*)Obj)->InverseSquaredFalloff_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_InverseSquaredFalloff = { "InverseSquaredFalloff", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULightComponent), &Z_Construct_UClass_ULightComponent_Statics::NewProp_InverseSquaredFalloff_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_InverseSquaredFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_InverseSquaredFalloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_CastTranslucentShadows_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Whether the light is allowed to cast dynamic shadows from translucency. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Whether the light is allowed to cast dynamic shadows from translucency." },
	};
#endif
	void Z_Construct_UClass_ULightComponent_Statics::NewProp_CastTranslucentShadows_SetBit(void* Obj)
	{
		((ULightComponent*)Obj)->CastTranslucentShadows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_CastTranslucentShadows = { "CastTranslucentShadows", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULightComponent), &Z_Construct_UClass_ULightComponent_Statics::NewProp_CastTranslucentShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_CastTranslucentShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_CastTranslucentShadows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_bCastShadowsFromCinematicObjectsOnly_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Whether the light should only cast shadows from components marked as bCastCinematicShadows. \n\x09 * This is useful for setting up cinematic Movable spotlights aimed at characters and avoiding the shadow depth rendering costs of the background.\n\x09 * Note: this only works with dynamic shadow maps, not with static shadowing or Ray Traced Distance Field shadows.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Whether the light should only cast shadows from components marked as bCastCinematicShadows.\nThis is useful for setting up cinematic Movable spotlights aimed at characters and avoiding the shadow depth rendering costs of the background.\nNote: this only works with dynamic shadow maps, not with static shadowing or Ray Traced Distance Field shadows." },
	};
#endif
	void Z_Construct_UClass_ULightComponent_Statics::NewProp_bCastShadowsFromCinematicObjectsOnly_SetBit(void* Obj)
	{
		((ULightComponent*)Obj)->bCastShadowsFromCinematicObjectsOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_bCastShadowsFromCinematicObjectsOnly = { "bCastShadowsFromCinematicObjectsOnly", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULightComponent), &Z_Construct_UClass_ULightComponent_Statics::NewProp_bCastShadowsFromCinematicObjectsOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_bCastShadowsFromCinematicObjectsOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_bCastShadowsFromCinematicObjectsOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_bAffectDynamicIndirectLighting_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09 * Whether the light should be injected into the Light Propagation Volume\n\x09 **/" },
		{ "DisplayName", "Dynamic Indirect Lighting" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Whether the light should be injected into the Light Propagation Volume" },
	};
#endif
	void Z_Construct_UClass_ULightComponent_Statics::NewProp_bAffectDynamicIndirectLighting_SetBit(void* Obj)
	{
		((ULightComponent*)Obj)->bAffectDynamicIndirectLighting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_bAffectDynamicIndirectLighting = { "bAffectDynamicIndirectLighting", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULightComponent), &Z_Construct_UClass_ULightComponent_Statics::NewProp_bAffectDynamicIndirectLighting_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_bAffectDynamicIndirectLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_bAffectDynamicIndirectLighting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_bForceCachedShadowsForMovablePrimitives_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09* Enables cached shadows for movable primitives for this light even if r.shadow.cachedshadowscastfrommovableprimitives is 0\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Enables cached shadows for movable primitives for this light even if r.shadow.cachedshadowscastfrommovableprimitives is 0" },
	};
#endif
	void Z_Construct_UClass_ULightComponent_Statics::NewProp_bForceCachedShadowsForMovablePrimitives_SetBit(void* Obj)
	{
		((ULightComponent*)Obj)->bForceCachedShadowsForMovablePrimitives = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_bForceCachedShadowsForMovablePrimitives = { "bForceCachedShadowsForMovablePrimitives", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULightComponent), &Z_Construct_UClass_ULightComponent_Statics::NewProp_bForceCachedShadowsForMovablePrimitives_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_bForceCachedShadowsForMovablePrimitives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_bForceCachedShadowsForMovablePrimitives_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_LightingChannels_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Channels that this light should affect.  \n\x09 * These channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Channels that this light should affect.\nThese channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_LightingChannels = { "LightingChannels", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponent, LightingChannels), Z_Construct_UScriptStruct_FLightingChannels, METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_LightingChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_LightingChannels_MetaData)) }; // 829425924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionMaterial_MetaData[] = {
		{ "Category", "LightFunction" },
		{ "Comment", "/** \n\x09 * The light function material to be applied to this light.\n\x09 * Note that only non-lightmapped lights (UseDirectLightMap=False) can have a light function. \n\x09 * Light functions are supported within VolumetricFog, but only for Directional, Point and Spot lights. Rect lights are not supported.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "The light function material to be applied to this light.\nNote that only non-lightmapped lights (UseDirectLightMap=False) can have a light function.\nLight functions are supported within VolumetricFog, but only for Directional, Point and Spot lights. Rect lights are not supported." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionMaterial = { "LightFunctionMaterial", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponent, LightFunctionMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionMaterial_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_StashedLightFunctionMaterial_MetaData[] = {
		{ "Comment", "/** When clearing the light func, e.g. because the light is made static, this field remembers the last value */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "When clearing the light func, e.g. because the light is made static, this field remembers the last value" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_StashedLightFunctionMaterial = { "StashedLightFunctionMaterial", nullptr, (EPropertyFlags)0x0014000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponent, StashedLightFunctionMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_StashedLightFunctionMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_StashedLightFunctionMaterial_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionScale_MetaData[] = {
		{ "AllowPreserveRatio", "true" },
		{ "Category", "LightFunction" },
		{ "Comment", "/** Scales the light function projection.  X and Y scale in the directions perpendicular to the light's direction, Z scales along the light direction. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Scales the light function projection.  X and Y scale in the directions perpendicular to the light's direction, Z scales along the light direction." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionScale = { "LightFunctionScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponent, LightFunctionScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_IESTexture_MetaData[] = {
		{ "Category", "LightProfiles" },
		{ "Comment", "/** IES texture (light profiles from real world measured data) */" },
		{ "DisplayName", "IES Texture" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "IES texture (light profiles from real world measured data)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_IESTexture = { "IESTexture", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponent, IESTexture), Z_Construct_UClass_UTextureLightProfile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_IESTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_IESTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseIESBrightness_MetaData[] = {
		{ "Category", "LightProfiles" },
		{ "Comment", "/** true: take light brightness from IES profile, false: use the light brightness - the maximum light in one direction is used to define no masking. Use with InverseSquareFalloff. Will be disabled if a valid IES profile texture is not supplied. */" },
		{ "DisplayName", "Use IES Intensity" },
		{ "EditCondition", "IESTexture!=nullptr" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "true: take light brightness from IES profile, false: use the light brightness - the maximum light in one direction is used to define no masking. Use with InverseSquareFalloff. Will be disabled if a valid IES profile texture is not supplied." },
	};
#endif
	void Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseIESBrightness_SetBit(void* Obj)
	{
		((ULightComponent*)Obj)->bUseIESBrightness = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseIESBrightness = { "bUseIESBrightness", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULightComponent), &Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseIESBrightness_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseIESBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseIESBrightness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_IESBrightnessScale_MetaData[] = {
		{ "Category", "LightProfiles" },
		{ "Comment", "/** Global scale for IES brightness contribution. Only available when \"Use IES Brightness\" is selected, and a valid IES profile texture is set */" },
		{ "DisplayName", "IES Intensity Scale" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Global scale for IES brightness contribution. Only available when \"Use IES Brightness\" is selected, and a valid IES profile texture is set" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_IESBrightnessScale = { "IESBrightnessScale", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponent, IESBrightnessScale), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_IESBrightnessScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_IESBrightnessScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionFadeDistance_MetaData[] = {
		{ "Category", "LightFunction" },
		{ "Comment", "/** \n\x09 * Distance at which the light function should be completely faded to DisabledBrightness.  \n\x09 * This is useful for hiding aliasing from light functions applied in the distance.\n\x09 */" },
		{ "DisplayName", "Fade Distance" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Distance at which the light function should be completely faded to DisabledBrightness.\nThis is useful for hiding aliasing from light functions applied in the distance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionFadeDistance = { "LightFunctionFadeDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponent, LightFunctionFadeDistance), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionFadeDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionFadeDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_DisabledBrightness_MetaData[] = {
		{ "Category", "LightFunction" },
		{ "Comment", "/** \n\x09 * Brightness factor applied to the light when the light function is specified but disabled, for example in scene captures that use SceneCapView_LitNoShadows. \n\x09 * This should be set to the average brightness of the light function material's emissive input, which should be between 0 and 1.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Brightness factor applied to the light when the light function is specified but disabled, for example in scene captures that use SceneCapView_LitNoShadows.\nThis should be set to the average brightness of the light function material's emissive input, which should be between 0 and 1." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_DisabledBrightness = { "DisabledBrightness", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponent, DisabledBrightness), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_DisabledBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_DisabledBrightness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_bEnableLightShaftBloom_MetaData[] = {
		{ "Category", "LightShafts" },
		{ "Comment", "/** \n\x09 * Whether to render light shaft bloom from this light. \n\x09 * For directional lights, the color around the light direction will be blurred radially and added back to the scene.\n\x09 * for point lights, the color on pixels closer than the light's SourceRadius will be blurred radially and added back to the scene.\n\x09 */" },
		{ "DisplayName", "Light Shaft Bloom" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Whether to render light shaft bloom from this light.\nFor directional lights, the color around the light direction will be blurred radially and added back to the scene.\nfor point lights, the color on pixels closer than the light's SourceRadius will be blurred radially and added back to the scene." },
	};
#endif
	void Z_Construct_UClass_ULightComponent_Statics::NewProp_bEnableLightShaftBloom_SetBit(void* Obj)
	{
		((ULightComponent*)Obj)->bEnableLightShaftBloom = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_bEnableLightShaftBloom = { "bEnableLightShaftBloom", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULightComponent), &Z_Construct_UClass_ULightComponent_Statics::NewProp_bEnableLightShaftBloom_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_bEnableLightShaftBloom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_bEnableLightShaftBloom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomScale_MetaData[] = {
		{ "Category", "LightShafts" },
		{ "Comment", "/** Scales the additive color. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Scales the additive color." },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomScale = { "BloomScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponent, BloomScale), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomThreshold_MetaData[] = {
		{ "Category", "LightShafts" },
		{ "Comment", "/** Scene color must be larger than this to create bloom in the light shafts. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Scene color must be larger than this to create bloom in the light shafts." },
		{ "UIMax", "4" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomThreshold = { "BloomThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponent, BloomThreshold), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomMaxBrightness_MetaData[] = {
		{ "Category", "LightShafts" },
		{ "Comment", "/** After exposure is applied, scene color brightness larger than BloomMaxBrightness will be rescaled down to BloomMaxBrightness. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "SliderExponent", "20.000000" },
		{ "ToolTip", "After exposure is applied, scene color brightness larger than BloomMaxBrightness will be rescaled down to BloomMaxBrightness." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomMaxBrightness = { "BloomMaxBrightness", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponent, BloomMaxBrightness), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomMaxBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomMaxBrightness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomTint_MetaData[] = {
		{ "Category", "LightShafts" },
		{ "Comment", "/** Multiplies against scene color to create the bloom color. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Multiplies against scene color to create the bloom color." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomTint = { "BloomTint", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponent, BloomTint), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomTint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseRayTracedDistanceFieldShadows_MetaData[] = {
		{ "Category", "DistanceFieldShadows" },
		{ "Comment", "/** \n\x09 * Whether to use ray traced distance field area shadows.  The project setting bGenerateMeshDistanceFields must be enabled for this to have effect.\n\x09 * Distance field shadows support area lights so they create soft shadows with sharp contacts.  \n\x09 * They have less aliasing artifacts than standard shadowmaps, but inherit all the limitations of distance field representations (only uniform scale, no deformation).\n\x09 * These shadows have a low per-object cost (and don't depend on triangle count) so they are effective for distant shadows from a dynamic sun.\n\x09 */" },
		{ "DisplayName", "Distance Field Shadows" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Whether to use ray traced distance field area shadows.  The project setting bGenerateMeshDistanceFields must be enabled for this to have effect.\nDistance field shadows support area lights so they create soft shadows with sharp contacts.\nThey have less aliasing artifacts than standard shadowmaps, but inherit all the limitations of distance field representations (only uniform scale, no deformation).\nThese shadows have a low per-object cost (and don't depend on triangle count) so they are effective for distant shadows from a dynamic sun." },
	};
#endif
	void Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseRayTracedDistanceFieldShadows_SetBit(void* Obj)
	{
		((ULightComponent*)Obj)->bUseRayTracedDistanceFieldShadows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseRayTracedDistanceFieldShadows = { "bUseRayTracedDistanceFieldShadows", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULightComponent), &Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseRayTracedDistanceFieldShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseRayTracedDistanceFieldShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseRayTracedDistanceFieldShadows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_RayStartOffsetDepthScale_MetaData[] = {
		{ "Category", "DistanceFieldShadows" },
		{ "Comment", "/** \n\x09 * Controls how large of an offset ray traced shadows have from the receiving surface as the camera gets further away.  \n\x09 * This can be useful to hide self-shadowing artifacts from low resolution distance fields on huge static meshes.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Controls how large of an offset ray traced shadows have from the receiving surface as the camera gets further away.\nThis can be useful to hide self-shadowing artifacts from low resolution distance fields on huge static meshes." },
		{ "UIMax", ".1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_RayStartOffsetDepthScale = { "RayStartOffsetDepthScale", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponent, RayStartOffsetDepthScale), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_RayStartOffsetDepthScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_RayStartOffsetDepthScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_Temperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_MaxDrawDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_MaxDistanceFadeRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseTemperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowMapChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_MinRoughness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_SpecularScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowResolutionScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowSlopeBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowSharpen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowLengthInWS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowCastingIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowNonCastingIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_InverseSquaredFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_CastTranslucentShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_bCastShadowsFromCinematicObjectsOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_bAffectDynamicIndirectLighting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_bForceCachedShadowsForMovablePrimitives,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_LightingChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionMaterial,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_StashedLightFunctionMaterial,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_IESTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseIESBrightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_IESBrightnessScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionFadeDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_DisabledBrightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_bEnableLightShaftBloom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomMaxBrightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomTint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseRayTracedDistanceFieldShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_RayStartOffsetDepthScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULightComponent_Statics::ClassParams = {
		&ULightComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULightComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightComponent()
	{
		if (!Z_Registration_Info_UClass_ULightComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULightComponent.OuterSingleton, Z_Construct_UClass_ULightComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULightComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ULightComponent>()
	{
		return ULightComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightComponent);
	ULightComponent::~ULightComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULightComponent)

static_assert(std::is_polymorphic<FPrecomputedLightInstanceData>() == std::is_polymorphic<FSceneComponentInstanceData>(), "USTRUCT FPrecomputedLightInstanceData cannot be polymorphic unless super FSceneComponentInstanceData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PrecomputedLightInstanceData;
class UScriptStruct* FPrecomputedLightInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PrecomputedLightInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PrecomputedLightInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPrecomputedLightInstanceData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PrecomputedLightInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_PrecomputedLightInstanceData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPrecomputedLightInstanceData>()
{
	return FPrecomputedLightInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewShadowMapChannel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PreviewShadowMapChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Used to store lightmap data during RerunConstructionScripts */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Used to store lightmap data during RerunConstructionScripts" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPrecomputedLightInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPrecomputedLightInstanceData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::NewProp_LightGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::NewProp_LightGuid = { "LightGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPrecomputedLightInstanceData, LightGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::NewProp_LightGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::NewProp_LightGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::NewProp_PreviewShadowMapChannel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::NewProp_PreviewShadowMapChannel = { "PreviewShadowMapChannel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPrecomputedLightInstanceData, PreviewShadowMapChannel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::NewProp_PreviewShadowMapChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::NewProp_PreviewShadowMapChannel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::NewProp_LightGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::NewProp_PreviewShadowMapChannel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FSceneComponentInstanceData,
		&NewStructOps,
		"PrecomputedLightInstanceData",
		sizeof(FPrecomputedLightInstanceData),
		alignof(FPrecomputedLightInstanceData),
		Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPrecomputedLightInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_PrecomputedLightInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PrecomputedLightInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PrecomputedLightInstanceData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_Statics::ScriptStructInfo[] = {
		{ FPrecomputedLightInstanceData::StaticStruct, Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::NewStructOps, TEXT("PrecomputedLightInstanceData"), &Z_Registration_Info_UScriptStruct_PrecomputedLightInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPrecomputedLightInstanceData), 759558322U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULightComponent, ULightComponent::StaticClass, TEXT("ULightComponent"), &Z_Registration_Info_UClass_ULightComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULightComponent), 948156137U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_2480218608(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
