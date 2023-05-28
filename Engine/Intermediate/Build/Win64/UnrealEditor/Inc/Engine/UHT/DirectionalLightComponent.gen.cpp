// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/DirectionalLightComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectionalLightComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UDirectionalLightComponent();
	ENGINE_API UClass* Z_Construct_UClass_UDirectionalLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULightComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassDirectionalLightSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UDirectionalLightComponent::execSetForwardShadingPriority)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetForwardShadingPriority(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectionalLightComponent::execSetAtmosphereSunLightIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAtmosphereSunLightIndex(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectionalLightComponent::execSetAtmosphereSunLight)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAtmosphereSunLight(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectionalLightComponent::execSetShadowAmount)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShadowAmount(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectionalLightComponent::execSetShadowSourceAngleFactor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShadowSourceAngleFactor(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectionalLightComponent::execSetLightSourceSoftAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightSourceSoftAngle(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectionalLightComponent::execSetLightSourceAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightSourceAngle(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectionalLightComponent::execSetLightShaftOverrideDirection)
	{
		P_GET_STRUCT(FVector,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightShaftOverrideDirection(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectionalLightComponent::execSetOcclusionDepthRange)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOcclusionDepthRange(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectionalLightComponent::execSetOcclusionMaskDarkness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOcclusionMaskDarkness(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectionalLightComponent::execSetEnableLightShaftOcclusion)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableLightShaftOcclusion(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectionalLightComponent::execSetShadowCascadeBiasDistribution)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShadowCascadeBiasDistribution(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectionalLightComponent::execSetShadowDistanceFadeoutFraction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShadowDistanceFadeoutFraction(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectionalLightComponent::execSetCascadeTransitionFraction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCascadeTransitionFraction(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectionalLightComponent::execSetCascadeDistributionExponent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCascadeDistributionExponent(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectionalLightComponent::execSetDynamicShadowCascades)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDynamicShadowCascades(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectionalLightComponent::execSetDynamicShadowDistanceStationaryLight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDynamicShadowDistanceStationaryLight(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectionalLightComponent::execSetDynamicShadowDistanceMovableLight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDynamicShadowDistanceMovableLight(Z_Param_NewValue);
		P_NATIVE_END;
	}
	void UDirectionalLightComponent::StaticRegisterNativesUDirectionalLightComponent()
	{
		UClass* Class = UDirectionalLightComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAtmosphereSunLight", &UDirectionalLightComponent::execSetAtmosphereSunLight },
			{ "SetAtmosphereSunLightIndex", &UDirectionalLightComponent::execSetAtmosphereSunLightIndex },
			{ "SetCascadeDistributionExponent", &UDirectionalLightComponent::execSetCascadeDistributionExponent },
			{ "SetCascadeTransitionFraction", &UDirectionalLightComponent::execSetCascadeTransitionFraction },
			{ "SetDynamicShadowCascades", &UDirectionalLightComponent::execSetDynamicShadowCascades },
			{ "SetDynamicShadowDistanceMovableLight", &UDirectionalLightComponent::execSetDynamicShadowDistanceMovableLight },
			{ "SetDynamicShadowDistanceStationaryLight", &UDirectionalLightComponent::execSetDynamicShadowDistanceStationaryLight },
			{ "SetEnableLightShaftOcclusion", &UDirectionalLightComponent::execSetEnableLightShaftOcclusion },
			{ "SetForwardShadingPriority", &UDirectionalLightComponent::execSetForwardShadingPriority },
			{ "SetLightShaftOverrideDirection", &UDirectionalLightComponent::execSetLightShaftOverrideDirection },
			{ "SetLightSourceAngle", &UDirectionalLightComponent::execSetLightSourceAngle },
			{ "SetLightSourceSoftAngle", &UDirectionalLightComponent::execSetLightSourceSoftAngle },
			{ "SetOcclusionDepthRange", &UDirectionalLightComponent::execSetOcclusionDepthRange },
			{ "SetOcclusionMaskDarkness", &UDirectionalLightComponent::execSetOcclusionMaskDarkness },
			{ "SetShadowAmount", &UDirectionalLightComponent::execSetShadowAmount },
			{ "SetShadowCascadeBiasDistribution", &UDirectionalLightComponent::execSetShadowCascadeBiasDistribution },
			{ "SetShadowDistanceFadeoutFraction", &UDirectionalLightComponent::execSetShadowDistanceFadeoutFraction },
			{ "SetShadowSourceAngleFactor", &UDirectionalLightComponent::execSetShadowSourceAngleFactor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLight_Statics
	{
		struct DirectionalLightComponent_eventSetAtmosphereSunLight_Parms
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
	void Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLight_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((DirectionalLightComponent_eventSetAtmosphereSunLight_Parms*)Obj)->bNewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLight_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DirectionalLightComponent_eventSetAtmosphereSunLight_Parms), &Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLight_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLight_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetAtmosphereSunLight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLight_Statics::DirectionalLightComponent_eventSetAtmosphereSunLight_Parms), Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLightIndex_Statics
	{
		struct DirectionalLightComponent_eventSetAtmosphereSunLightIndex_Parms
		{
			int32 NewValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLightIndex_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DirectionalLightComponent_eventSetAtmosphereSunLightIndex_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLightIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLightIndex_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLightIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLightIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetAtmosphereSunLightIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLightIndex_Statics::DirectionalLightComponent_eventSetAtmosphereSunLightIndex_Parms), Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLightIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLightIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLightIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLightIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLightIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLightIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics
	{
		struct DirectionalLightComponent_eventSetCascadeDistributionExponent_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DirectionalLightComponent_eventSetCascadeDistributionExponent_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetCascadeDistributionExponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics::DirectionalLightComponent_eventSetCascadeDistributionExponent_Parms), Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics
	{
		struct DirectionalLightComponent_eventSetCascadeTransitionFraction_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DirectionalLightComponent_eventSetCascadeTransitionFraction_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetCascadeTransitionFraction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics::DirectionalLightComponent_eventSetCascadeTransitionFraction_Parms), Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics
	{
		struct DirectionalLightComponent_eventSetDynamicShadowCascades_Parms
		{
			int32 NewValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DirectionalLightComponent_eventSetDynamicShadowCascades_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetDynamicShadowCascades", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics::DirectionalLightComponent_eventSetDynamicShadowCascades_Parms), Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics
	{
		struct DirectionalLightComponent_eventSetDynamicShadowDistanceMovableLight_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DirectionalLightComponent_eventSetDynamicShadowDistanceMovableLight_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetDynamicShadowDistanceMovableLight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics::DirectionalLightComponent_eventSetDynamicShadowDistanceMovableLight_Parms), Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics
	{
		struct DirectionalLightComponent_eventSetDynamicShadowDistanceStationaryLight_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DirectionalLightComponent_eventSetDynamicShadowDistanceStationaryLight_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetDynamicShadowDistanceStationaryLight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics::DirectionalLightComponent_eventSetDynamicShadowDistanceStationaryLight_Parms), Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics
	{
		struct DirectionalLightComponent_eventSetEnableLightShaftOcclusion_Parms
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
	void Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((DirectionalLightComponent_eventSetEnableLightShaftOcclusion_Parms*)Obj)->bNewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DirectionalLightComponent_eventSetEnableLightShaftOcclusion_Parms), &Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetEnableLightShaftOcclusion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::DirectionalLightComponent_eventSetEnableLightShaftOcclusion_Parms), Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectionalLightComponent_SetForwardShadingPriority_Statics
	{
		struct DirectionalLightComponent_eventSetForwardShadingPriority_Parms
		{
			int32 NewValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetForwardShadingPriority_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DirectionalLightComponent_eventSetForwardShadingPriority_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetForwardShadingPriority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetForwardShadingPriority_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalLightComponent_SetForwardShadingPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetForwardShadingPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetForwardShadingPriority", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetForwardShadingPriority_Statics::DirectionalLightComponent_eventSetForwardShadingPriority_Parms), Z_Construct_UFunction_UDirectionalLightComponent_SetForwardShadingPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetForwardShadingPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectionalLightComponent_SetForwardShadingPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetForwardShadingPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetForwardShadingPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetForwardShadingPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics
	{
		struct DirectionalLightComponent_eventSetLightShaftOverrideDirection_Parms
		{
			FVector NewValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DirectionalLightComponent_eventSetLightShaftOverrideDirection_Parms, NewValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetLightShaftOverrideDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics::DirectionalLightComponent_eventSetLightShaftOverrideDirection_Parms), Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceAngle_Statics
	{
		struct DirectionalLightComponent_eventSetLightSourceAngle_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceAngle_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DirectionalLightComponent_eventSetLightSourceAngle_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceAngle_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetLightSourceAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceAngle_Statics::DirectionalLightComponent_eventSetLightSourceAngle_Parms), Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceSoftAngle_Statics
	{
		struct DirectionalLightComponent_eventSetLightSourceSoftAngle_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceSoftAngle_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DirectionalLightComponent_eventSetLightSourceSoftAngle_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceSoftAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceSoftAngle_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceSoftAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceSoftAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetLightSourceSoftAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceSoftAngle_Statics::DirectionalLightComponent_eventSetLightSourceSoftAngle_Parms), Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceSoftAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceSoftAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceSoftAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceSoftAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceSoftAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceSoftAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionDepthRange_Statics
	{
		struct DirectionalLightComponent_eventSetOcclusionDepthRange_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionDepthRange_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DirectionalLightComponent_eventSetOcclusionDepthRange_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionDepthRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionDepthRange_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionDepthRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionDepthRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetOcclusionDepthRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionDepthRange_Statics::DirectionalLightComponent_eventSetOcclusionDepthRange_Parms), Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionDepthRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionDepthRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionDepthRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionDepthRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionDepthRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionDepthRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics
	{
		struct DirectionalLightComponent_eventSetOcclusionMaskDarkness_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DirectionalLightComponent_eventSetOcclusionMaskDarkness_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetOcclusionMaskDarkness", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics::DirectionalLightComponent_eventSetOcclusionMaskDarkness_Parms), Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectionalLightComponent_SetShadowAmount_Statics
	{
		struct DirectionalLightComponent_eventSetShadowAmount_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetShadowAmount_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DirectionalLightComponent_eventSetShadowAmount_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetShadowAmount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetShadowAmount_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalLightComponent_SetShadowAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetShadowAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetShadowAmount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowAmount_Statics::DirectionalLightComponent_eventSetShadowAmount_Parms), Z_Construct_UFunction_UDirectionalLightComponent_SetShadowAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowAmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetShadowAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetShadowAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectionalLightComponent_SetShadowCascadeBiasDistribution_Statics
	{
		struct DirectionalLightComponent_eventSetShadowCascadeBiasDistribution_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetShadowCascadeBiasDistribution_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DirectionalLightComponent_eventSetShadowCascadeBiasDistribution_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetShadowCascadeBiasDistribution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetShadowCascadeBiasDistribution_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalLightComponent_SetShadowCascadeBiasDistribution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetShadowCascadeBiasDistribution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetShadowCascadeBiasDistribution", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowCascadeBiasDistribution_Statics::DirectionalLightComponent_eventSetShadowCascadeBiasDistribution_Parms), Z_Construct_UFunction_UDirectionalLightComponent_SetShadowCascadeBiasDistribution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowCascadeBiasDistribution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowCascadeBiasDistribution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowCascadeBiasDistribution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetShadowCascadeBiasDistribution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetShadowCascadeBiasDistribution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics
	{
		struct DirectionalLightComponent_eventSetShadowDistanceFadeoutFraction_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DirectionalLightComponent_eventSetShadowDistanceFadeoutFraction_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetShadowDistanceFadeoutFraction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics::DirectionalLightComponent_eventSetShadowDistanceFadeoutFraction_Parms), Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectionalLightComponent_SetShadowSourceAngleFactor_Statics
	{
		struct DirectionalLightComponent_eventSetShadowSourceAngleFactor_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetShadowSourceAngleFactor_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DirectionalLightComponent_eventSetShadowSourceAngleFactor_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetShadowSourceAngleFactor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetShadowSourceAngleFactor_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalLightComponent_SetShadowSourceAngleFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetShadowSourceAngleFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetShadowSourceAngleFactor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowSourceAngleFactor_Statics::DirectionalLightComponent_eventSetShadowSourceAngleFactor_Parms), Z_Construct_UFunction_UDirectionalLightComponent_SetShadowSourceAngleFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowSourceAngleFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowSourceAngleFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowSourceAngleFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetShadowSourceAngleFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetShadowSourceAngleFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDirectionalLightComponent);
	UClass* Z_Construct_UClass_UDirectionalLightComponent_NoRegister()
	{
		return UDirectionalLightComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDirectionalLightComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowCascadeBiasDistribution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowCascadeBiasDistribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLightShaftOcclusion_MetaData[];
#endif
		static void NewProp_bEnableLightShaftOcclusion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLightShaftOcclusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionMaskDarkness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionMaskDarkness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionDepthRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionDepthRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightShaftOverrideDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightShaftOverrideDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WholeSceneDynamicShadowRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WholeSceneDynamicShadowRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicShadowDistanceMovableLight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DynamicShadowDistanceMovableLight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicShadowDistanceStationaryLight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DynamicShadowDistanceStationaryLight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicShadowCascades_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DynamicShadowCascades;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CascadeDistributionExponent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CascadeDistributionExponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CascadeTransitionFraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CascadeTransitionFraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowDistanceFadeoutFraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowDistanceFadeoutFraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseInsetShadowsForMovableObjects_MetaData[];
#endif
		static void NewProp_bUseInsetShadowsForMovableObjects_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseInsetShadowsForMovableObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FarShadowCascadeCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FarShadowCascadeCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FarShadowDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FarShadowDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldShadowDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldShadowDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardShadingPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ForwardShadingPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightSourceAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightSourceAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightSourceSoftAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightSourceSoftAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowSourceAngleFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowSourceAngleFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsedAsAtmosphereSunLight_MetaData[];
#endif
		static void NewProp_bUsedAsAtmosphereSunLight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedAsAtmosphereSunLight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAtmosphereSunLight_MetaData[];
#endif
		static void NewProp_bAtmosphereSunLight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAtmosphereSunLight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtmosphereSunLightIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AtmosphereSunLightIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtmosphereSunDiskColorScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AtmosphereSunDiskColorScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPerPixelAtmosphereTransmittance_MetaData[];
#endif
		static void NewProp_bPerPixelAtmosphereTransmittance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPerPixelAtmosphereTransmittance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadowsOnClouds_MetaData[];
#endif
		static void NewProp_bCastShadowsOnClouds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadowsOnClouds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadowsOnAtmosphere_MetaData[];
#endif
		static void NewProp_bCastShadowsOnAtmosphere_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadowsOnAtmosphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastCloudShadows_MetaData[];
#endif
		static void NewProp_bCastCloudShadows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastCloudShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudShadowStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudShadowStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudShadowOnAtmosphereStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudShadowOnAtmosphereStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudShadowOnSurfaceStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudShadowOnSurfaceStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudShadowDepthBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudShadowDepthBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudShadowExtent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudShadowExtent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudShadowMapResolutionScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudShadowMapResolutionScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudShadowRaySampleCountScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudShadowRaySampleCountScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudScatteredLuminanceScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CloudScatteredLuminanceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightmassSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightmassSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastModulatedShadows_MetaData[];
#endif
		static void NewProp_bCastModulatedShadows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastModulatedShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModulatedShadowColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModulatedShadowColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDirectionalLightComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULightComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDirectionalLightComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLight, "SetAtmosphereSunLight" }, // 2651788072
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLightIndex, "SetAtmosphereSunLightIndex" }, // 2948869664
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent, "SetCascadeDistributionExponent" }, // 2541407378
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction, "SetCascadeTransitionFraction" }, // 3170685298
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades, "SetDynamicShadowCascades" }, // 1704998270
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight, "SetDynamicShadowDistanceMovableLight" }, // 304478692
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight, "SetDynamicShadowDistanceStationaryLight" }, // 1031255997
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion, "SetEnableLightShaftOcclusion" }, // 3857929839
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetForwardShadingPriority, "SetForwardShadingPriority" }, // 2101907622
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection, "SetLightShaftOverrideDirection" }, // 369291386
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceAngle, "SetLightSourceAngle" }, // 2497052018
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceSoftAngle, "SetLightSourceSoftAngle" }, // 2915004914
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionDepthRange, "SetOcclusionDepthRange" }, // 1955053186
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness, "SetOcclusionMaskDarkness" }, // 1542522885
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetShadowAmount, "SetShadowAmount" }, // 2693127427
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetShadowCascadeBiasDistribution, "SetShadowCascadeBiasDistribution" }, // 2214766073
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction, "SetShadowDistanceFadeoutFraction" }, // 3684625627
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetShadowSourceAngleFactor, "SetShadowSourceAngleFactor" }, // 4087605760
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Lights" },
		{ "Comment", "/**\n * A light component that has parallel rays. Will provide a uniform lighting across any affected surface (eg. The Sun). This will affect all objects in the defined light-mass importance volume.\n */" },
		{ "HideCategories", "Object LightProfiles Trigger Activation Components|Activation Physics Trigger Activation Components|Activation Physics Trigger PhysicsVolume" },
		{ "IncludePath", "Components/DirectionalLightComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "A light component that has parallel rays. Will provide a uniform lighting across any affected surface (eg. The Sun). This will affect all objects in the defined light-mass importance volume." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ShadowCascadeBiasDistribution_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09* Controls the depth bias scaling across cascades. This allows to mitigage the shadow acne difference on shadow cascades transition.\n\x09* A value of 1 scales shadow bias based on each cascade size (Default).\n\x09* A value of 0 scales shadow bias uniformly accross all cacascade.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Controls the depth bias scaling across cascades. This allows to mitigage the shadow acne difference on shadow cascades transition.\nA value of 1 scales shadow bias based on each cascade size (Default).\nA value of 0 scales shadow bias uniformly accross all cacascade." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ShadowCascadeBiasDistribution = { "ShadowCascadeBiasDistribution", nullptr, (EPropertyFlags)0x0010040200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, ShadowCascadeBiasDistribution), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ShadowCascadeBiasDistribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ShadowCascadeBiasDistribution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bEnableLightShaftOcclusion_MetaData[] = {
		{ "Category", "LightShafts" },
		{ "Comment", "/** Whether to occlude fog and atmosphere inscattering with screenspace blurred occlusion from this light. */" },
		{ "DisplayName", "Light Shaft Occlusion" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Whether to occlude fog and atmosphere inscattering with screenspace blurred occlusion from this light." },
	};
#endif
	void Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bEnableLightShaftOcclusion_SetBit(void* Obj)
	{
		((UDirectionalLightComponent*)Obj)->bEnableLightShaftOcclusion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bEnableLightShaftOcclusion = { "bEnableLightShaftOcclusion", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDirectionalLightComponent), &Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bEnableLightShaftOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bEnableLightShaftOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bEnableLightShaftOcclusion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_OcclusionMaskDarkness_MetaData[] = {
		{ "Category", "LightShafts" },
		{ "Comment", "/** \n\x09 * Controls how dark the occlusion masking is, a value of 1 results in no darkening term.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Controls how dark the occlusion masking is, a value of 1 results in no darkening term." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_OcclusionMaskDarkness = { "OcclusionMaskDarkness", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, OcclusionMaskDarkness), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_OcclusionMaskDarkness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_OcclusionMaskDarkness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_OcclusionDepthRange_MetaData[] = {
		{ "Category", "LightShafts" },
		{ "Comment", "/** Everything closer to the camera than this distance will occlude light shafts. */" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Everything closer to the camera than this distance will occlude light shafts." },
		{ "UIMax", "500000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_OcclusionDepthRange = { "OcclusionDepthRange", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, OcclusionDepthRange), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_OcclusionDepthRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_OcclusionDepthRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightShaftOverrideDirection_MetaData[] = {
		{ "Category", "LightShafts" },
		{ "Comment", "/** \n\x09 * Can be used to make light shafts come from somewhere other than the light's actual direction. \n\x09 * This will only be used when non-zero.  It does not have to be normalized.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Can be used to make light shafts come from somewhere other than the light's actual direction.\nThis will only be used when non-zero.  It does not have to be normalized." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightShaftOverrideDirection = { "LightShaftOverrideDirection", nullptr, (EPropertyFlags)0x0010040200000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, LightShaftOverrideDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightShaftOverrideDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightShaftOverrideDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_WholeSceneDynamicShadowRadius_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_WholeSceneDynamicShadowRadius = { "WholeSceneDynamicShadowRadius", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, WholeSceneDynamicShadowRadius_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_WholeSceneDynamicShadowRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_WholeSceneDynamicShadowRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowDistanceMovableLight_MetaData[] = {
		{ "Category", "CascadedShadowMaps" },
		{ "Comment", "/** \n\x09 * How far Cascaded Shadow Map dynamic shadows will cover for a movable light, measured from the camera.\n\x09 * A value of 0 disables the dynamic shadow.\n\x09 */" },
		{ "DisplayName", "Dynamic Shadow Distance MovableLight" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "How far Cascaded Shadow Map dynamic shadows will cover for a movable light, measured from the camera.\nA value of 0 disables the dynamic shadow." },
		{ "UIMax", "20000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowDistanceMovableLight = { "DynamicShadowDistanceMovableLight", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, DynamicShadowDistanceMovableLight), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowDistanceMovableLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowDistanceMovableLight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowDistanceStationaryLight_MetaData[] = {
		{ "Category", "CascadedShadowMaps" },
		{ "Comment", "/** \n\x09 * How far Cascaded Shadow Map dynamic shadows will cover for a stationary light, measured from the camera.\n\x09 * A value of 0 disables the dynamic shadow.\n\x09 */" },
		{ "DisplayName", "Dynamic Shadow Distance StationaryLight" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "How far Cascaded Shadow Map dynamic shadows will cover for a stationary light, measured from the camera.\nA value of 0 disables the dynamic shadow." },
		{ "UIMax", "20000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowDistanceStationaryLight = { "DynamicShadowDistanceStationaryLight", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, DynamicShadowDistanceStationaryLight), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowDistanceStationaryLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowDistanceStationaryLight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowCascades_MetaData[] = {
		{ "Category", "CascadedShadowMaps" },
		{ "Comment", "/** \n\x09 * Number of cascades to split the view frustum into for the whole scene dynamic shadow.  \n\x09 * More cascades result in better shadow resolution, but adds significant rendering cost.\n\x09 */" },
		{ "DisplayName", "Num Dynamic Shadow Cascades" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Number of cascades to split the view frustum into for the whole scene dynamic shadow.\nMore cascades result in better shadow resolution, but adds significant rendering cost." },
		{ "UIMax", "4" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowCascades = { "DynamicShadowCascades", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, DynamicShadowCascades), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowCascades_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowCascades_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CascadeDistributionExponent_MetaData[] = {
		{ "Category", "CascadedShadowMaps" },
		{ "Comment", "/** \n\x09 * Controls whether the cascades are distributed closer to the camera (larger exponent) or further from the camera (smaller exponent).\n\x09 * An exponent of 1 means that cascade transitions will happen at a distance proportional to their resolution.\n\x09 */" },
		{ "DisplayName", "Distribution Exponent" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Controls whether the cascades are distributed closer to the camera (larger exponent) or further from the camera (smaller exponent).\nAn exponent of 1 means that cascade transitions will happen at a distance proportional to their resolution." },
		{ "UIMax", "4" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CascadeDistributionExponent = { "CascadeDistributionExponent", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, CascadeDistributionExponent), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CascadeDistributionExponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CascadeDistributionExponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CascadeTransitionFraction_MetaData[] = {
		{ "Category", "CascadedShadowMaps" },
		{ "Comment", "/** \n\x09 * Proportion of the fade region between cascades.\n\x09 * Pixels within the fade region of two cascades have their shadows blended to avoid hard transitions between quality levels.\n\x09 * A value of zero eliminates the fade region, creating hard transitions.\n\x09 * Higher values increase the size of the fade region, creating a more gradual transition between cascades.\n\x09 * The value is expressed as a percentage proportion (i.e. 0.1 = 10% overlap).\n\x09 * Ideal values are the smallest possible which still hide the transition.\n\x09 * An increased fade region size causes an increase in shadow rendering cost.\n\x09 */" },
		{ "DisplayName", "Transition Fraction" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Proportion of the fade region between cascades.\nPixels within the fade region of two cascades have their shadows blended to avoid hard transitions between quality levels.\nA value of zero eliminates the fade region, creating hard transitions.\nHigher values increase the size of the fade region, creating a more gradual transition between cascades.\nThe value is expressed as a percentage proportion (i.e. 0.1 = 10% overlap).\nIdeal values are the smallest possible which still hide the transition.\nAn increased fade region size causes an increase in shadow rendering cost." },
		{ "UIMax", "0.3" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CascadeTransitionFraction = { "CascadeTransitionFraction", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, CascadeTransitionFraction), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CascadeTransitionFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CascadeTransitionFraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ShadowDistanceFadeoutFraction_MetaData[] = {
		{ "Category", "CascadedShadowMaps" },
		{ "Comment", "/** \n\x09 * Controls the size of the fade out region at the far extent of the dynamic shadow's influence.  \n\x09 * This is specified as a fraction of DynamicShadowDistance. \n\x09 */" },
		{ "DisplayName", "Distance Fadeout Fraction" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Controls the size of the fade out region at the far extent of the dynamic shadow's influence.\nThis is specified as a fraction of DynamicShadowDistance." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ShadowDistanceFadeoutFraction = { "ShadowDistanceFadeoutFraction", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, ShadowDistanceFadeoutFraction), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ShadowDistanceFadeoutFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ShadowDistanceFadeoutFraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUseInsetShadowsForMovableObjects_MetaData[] = {
		{ "Category", "CascadedShadowMaps" },
		{ "Comment", "/** \n\x09 * Stationary lights only: Whether to use per-object inset shadows for movable components, even though cascaded shadow maps are enabled.\n\x09 * This allows dynamic objects to have a shadow even when they are outside of the cascaded shadow map, which is important when DynamicShadowDistanceStationaryLight is small.\n\x09 * If DynamicShadowDistanceStationaryLight is large (currently > 8000), this will be forced off.\n\x09 * Disabling this can reduce shadowing cost significantly with many movable objects.\n\x09 */" },
		{ "DisplayName", "Inset Shadows For Movable Objects" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Stationary lights only: Whether to use per-object inset shadows for movable components, even though cascaded shadow maps are enabled.\nThis allows dynamic objects to have a shadow even when they are outside of the cascaded shadow map, which is important when DynamicShadowDistanceStationaryLight is small.\nIf DynamicShadowDistanceStationaryLight is large (currently > 8000), this will be forced off.\nDisabling this can reduce shadowing cost significantly with many movable objects." },
	};
#endif
	void Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUseInsetShadowsForMovableObjects_SetBit(void* Obj)
	{
		((UDirectionalLightComponent*)Obj)->bUseInsetShadowsForMovableObjects = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUseInsetShadowsForMovableObjects = { "bUseInsetShadowsForMovableObjects", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDirectionalLightComponent), &Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUseInsetShadowsForMovableObjects_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUseInsetShadowsForMovableObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUseInsetShadowsForMovableObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_FarShadowCascadeCount_MetaData[] = {
		{ "Category", "CascadedShadowMaps" },
		{ "Comment", "/** 0: no DistantShadowCascades, otherwise the count of cascades between WholeSceneDynamicShadowRadius and DistantShadowDistance that are covered by distant shadow cascades. */" },
		{ "DisplayName", "Far Shadow Cascade Count" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "0: no DistantShadowCascades, otherwise the count of cascades between WholeSceneDynamicShadowRadius and DistantShadowDistance that are covered by distant shadow cascades." },
		{ "UIMax", "4" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_FarShadowCascadeCount = { "FarShadowCascadeCount", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, FarShadowCascadeCount), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_FarShadowCascadeCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_FarShadowCascadeCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_FarShadowDistance_MetaData[] = {
		{ "Category", "CascadedShadowMaps" },
		{ "Comment", "/** \n\x09 * Distance at which the far shadow cascade should end.  Far shadows will cover the range between 'Dynamic Shadow Distance' and this distance. \n\x09 */" },
		{ "DisplayName", "Far Shadow Distance" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Distance at which the far shadow cascade should end.  Far shadows will cover the range between 'Dynamic Shadow Distance' and this distance." },
		{ "UIMax", "800000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_FarShadowDistance = { "FarShadowDistance", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, FarShadowDistance), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_FarShadowDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_FarShadowDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DistanceFieldShadowDistance_MetaData[] = {
		{ "Category", "DistanceFieldShadows" },
		{ "Comment", "/** \n\x09 * Distance at which the ray traced shadow cascade should end.  Distance field shadows will cover the range between 'Dynamic Shadow Distance' this distance. \n\x09 */" },
		{ "DisplayName", "DistanceField Shadow Distance" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Distance at which the ray traced shadow cascade should end.  Distance field shadows will cover the range between 'Dynamic Shadow Distance' this distance." },
		{ "UIMax", "100000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DistanceFieldShadowDistance = { "DistanceFieldShadowDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, DistanceFieldShadowDistance), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DistanceFieldShadowDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DistanceFieldShadowDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ForwardShadingPriority_MetaData[] = {
		{ "Category", "Light" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Forward lighting priority for the single directional light that will be used for forward shading, translucent, single layer water and volumetric fog.\n\x09 * When two lights have equal priorities, the selection will be based on their overall brightness as a fallback.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Forward lighting priority for the single directional light that will be used for forward shading, translucent, single layer water and volumetric fog.\nWhen two lights have equal priorities, the selection will be based on their overall brightness as a fallback." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ForwardShadingPriority = { "ForwardShadingPriority", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, ForwardShadingPriority), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ForwardShadingPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ForwardShadingPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightSourceAngle_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Angle subtended by light source in degrees (also known as angular diameter).\n\x09 * Defaults to 0.5357 which is the angle for our sun.\n\x09 */" },
		{ "DisplayName", "Source Angle" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Angle subtended by light source in degrees (also known as angular diameter).\nDefaults to 0.5357 which is the angle for our sun." },
		{ "UIMax", "5" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightSourceAngle = { "LightSourceAngle", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, LightSourceAngle), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightSourceAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightSourceAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightSourceSoftAngle_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Angle subtended by soft light source in degrees.\n\x09 */" },
		{ "DisplayName", "Source Soft Angle" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Angle subtended by soft light source in degrees." },
		{ "UIMax", "5" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightSourceSoftAngle = { "LightSourceSoftAngle", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, LightSourceSoftAngle), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightSourceSoftAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightSourceSoftAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ShadowSourceAngleFactor_MetaData[] = {
		{ "Category", "RayTracing" },
		{ "Comment", "/**\n\x09 * Shadow source angle factor, relative to the light source angle.\n\x09 * Defaults to 1.0 to coincide with light source angle.\n\x09 */" },
		{ "DisplayName", "Shadow Source Angle Factor" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Shadow source angle factor, relative to the light source angle.\nDefaults to 1.0 to coincide with light source angle." },
		{ "UIMax", "5" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ShadowSourceAngleFactor = { "ShadowSourceAngleFactor", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, ShadowSourceAngleFactor), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ShadowSourceAngleFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ShadowSourceAngleFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_TraceDistance_MetaData[] = {
		{ "Category", "DistanceFieldShadows" },
		{ "Comment", "/** Determines how far shadows can be cast, in world units.  Larger values increase the shadowing cost. */" },
		{ "DisplayName", "DistanceField Trace Distance" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Determines how far shadows can be cast, in world units.  Larger values increase the shadowing cost." },
		{ "UIMax", "100000" },
		{ "UIMin", "1000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, TraceDistance), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_TraceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_TraceDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUsedAsAtmosphereSunLight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUsedAsAtmosphereSunLight_SetBit(void* Obj)
	{
		((UDirectionalLightComponent*)Obj)->bUsedAsAtmosphereSunLight_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUsedAsAtmosphereSunLight = { "bUsedAsAtmosphereSunLight", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDirectionalLightComponent), &Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUsedAsAtmosphereSunLight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUsedAsAtmosphereSunLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUsedAsAtmosphereSunLight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bAtmosphereSunLight_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "Comment", "/**\n\x09 * Whether the directional light can interact with the atmosphere, cloud and generate a visual disk. All of which compose the visual sky.\n\x09 */" },
		{ "DisplayName", "Atmosphere Sun Light" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ShouldShowInViewport", "TRUE" },
		{ "ToolTip", "Whether the directional light can interact with the atmosphere, cloud and generate a visual disk. All of which compose the visual sky." },
	};
#endif
	void Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bAtmosphereSunLight_SetBit(void* Obj)
	{
		((UDirectionalLightComponent*)Obj)->bAtmosphereSunLight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bAtmosphereSunLight = { "bAtmosphereSunLight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDirectionalLightComponent), &Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bAtmosphereSunLight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bAtmosphereSunLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bAtmosphereSunLight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_AtmosphereSunLightIndex_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Two atmosphere lights are supported. For instance: a sun and a moon, or two suns.\n\x09 */" },
		{ "DisplayName", "Atmosphere Sun Light Index" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Two atmosphere lights are supported. For instance: a sun and a moon, or two suns." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_AtmosphereSunLightIndex = { "AtmosphereSunLightIndex", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, AtmosphereSunLightIndex), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_AtmosphereSunLightIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_AtmosphereSunLightIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_AtmosphereSunDiskColorScale_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "Comment", "/**\n\x09 * A color multiplied with the sun disk luminance.\n\x09 */" },
		{ "DisplayName", "Atmosphere Sun Disk Color Scale" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "A color multiplied with the sun disk luminance." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_AtmosphereSunDiskColorScale = { "AtmosphereSunDiskColorScale", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, AtmosphereSunDiskColorScale), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_AtmosphereSunDiskColorScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_AtmosphereSunDiskColorScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bPerPixelAtmosphereTransmittance_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "Comment", "/**\n\x09 * Whether to apply atmosphere transmittance per pixel on opaque meshes, instead of using the light global transmittance. Note: VolumetricCloud per pixel transmittance option is selectable on the VolumetricCloud component itself.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Whether to apply atmosphere transmittance per pixel on opaque meshes, instead of using the light global transmittance. Note: VolumetricCloud per pixel transmittance option is selectable on the VolumetricCloud component itself." },
	};
#endif
	void Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bPerPixelAtmosphereTransmittance_SetBit(void* Obj)
	{
		((UDirectionalLightComponent*)Obj)->bPerPixelAtmosphereTransmittance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bPerPixelAtmosphereTransmittance = { "bPerPixelAtmosphereTransmittance", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDirectionalLightComponent), &Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bPerPixelAtmosphereTransmittance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bPerPixelAtmosphereTransmittance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bPerPixelAtmosphereTransmittance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastShadowsOnClouds_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "Comment", "/**\n\x09 * Whether the light should cast any shadows from opaque meshes onto clouds. This is disabled for AtmosphereLight1.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Whether the light should cast any shadows from opaque meshes onto clouds. This is disabled for AtmosphereLight1." },
	};
#endif
	void Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastShadowsOnClouds_SetBit(void* Obj)
	{
		((UDirectionalLightComponent*)Obj)->bCastShadowsOnClouds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastShadowsOnClouds = { "bCastShadowsOnClouds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDirectionalLightComponent), &Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastShadowsOnClouds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastShadowsOnClouds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastShadowsOnClouds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastShadowsOnAtmosphere_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "Comment", "/**\n\x09 * Whether the light should cast any shadows from opaque meshes onto the atmosphere.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Whether the light should cast any shadows from opaque meshes onto the atmosphere." },
	};
#endif
	void Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastShadowsOnAtmosphere_SetBit(void* Obj)
	{
		((UDirectionalLightComponent*)Obj)->bCastShadowsOnAtmosphere = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastShadowsOnAtmosphere = { "bCastShadowsOnAtmosphere", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDirectionalLightComponent), &Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastShadowsOnAtmosphere_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastShadowsOnAtmosphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastShadowsOnAtmosphere_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastCloudShadows_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "Comment", "/**\n\x09 * Whether the light should cast any shadows from clouds onto the atmosphere and other scene elements.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Whether the light should cast any shadows from clouds onto the atmosphere and other scene elements." },
	};
#endif
	void Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastCloudShadows_SetBit(void* Obj)
	{
		((UDirectionalLightComponent*)Obj)->bCastCloudShadows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastCloudShadows = { "bCastCloudShadows", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDirectionalLightComponent), &Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastCloudShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastCloudShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastCloudShadows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowStrength_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The overall strength of the cloud shadow, higher value will block more light.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "SliderExponent", "1.000000" },
		{ "ToolTip", "The overall strength of the cloud shadow, higher value will block more light." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowStrength = { "CloudShadowStrength", nullptr, (EPropertyFlags)0x0010040200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, CloudShadowStrength), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowOnAtmosphereStrength_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The strength of the shadow on atmosphere. Disabled when 0.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "SliderExponent", "1.000000" },
		{ "ToolTip", "The strength of the shadow on atmosphere. Disabled when 0." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowOnAtmosphereStrength = { "CloudShadowOnAtmosphereStrength", nullptr, (EPropertyFlags)0x0010040200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, CloudShadowOnAtmosphereStrength), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowOnAtmosphereStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowOnAtmosphereStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowOnSurfaceStrength_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The strength of the shadow on opaque and transparent meshes. Disabled when 0.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "SliderExponent", "1.000000" },
		{ "ToolTip", "The strength of the shadow on opaque and transparent meshes. Disabled when 0." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowOnSurfaceStrength = { "CloudShadowOnSurfaceStrength", nullptr, (EPropertyFlags)0x0010040200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, CloudShadowOnSurfaceStrength), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowOnSurfaceStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowOnSurfaceStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowDepthBias_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "Comment", "/**\n\x09 * The bias applied to the shadow front depth of the volumetric cloud shadow map.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "The bias applied to the shadow front depth of the volumetric cloud shadow map." },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowDepthBias = { "CloudShadowDepthBias", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, CloudShadowDepthBias), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowDepthBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowDepthBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowExtent_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09 * The world space radius of the cloud shadow map around the camera in kilometers.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "The world space radius of the cloud shadow map around the camera in kilometers." },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowExtent = { "CloudShadowExtent", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, CloudShadowExtent), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowExtent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowMapResolutionScale_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "ClampMin", "0.25" },
		{ "Comment", "/**\n\x09 * Scale the cloud shadow map resolution, base resolution is 512. The resolution is still clamped to 'r.VolumetricCloud.ShadowMap.MaxResolution'.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "SliderExponent", "1.000000" },
		{ "ToolTip", "Scale the cloud shadow map resolution, base resolution is 512. The resolution is still clamped to 'r.VolumetricCloud.ShadowMap.MaxResolution'." },
		{ "UIMax", "8" },
		{ "UIMin", "0.25" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowMapResolutionScale = { "CloudShadowMapResolutionScale", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, CloudShadowMapResolutionScale), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowMapResolutionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowMapResolutionScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowRaySampleCountScale_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "ClampMin", "0.25" },
		{ "Comment", "/**\n\x09 * Scale the shadow map tracing sample count.\n\x09 * The sample count resolution is still clamped according to scalability setting to 'r.VolumetricCloud.ShadowMap.RaySampleMaxCount'.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "SliderExponent", "1.000000" },
		{ "ToolTip", "Scale the shadow map tracing sample count.\nThe sample count resolution is still clamped according to scalability setting to 'r.VolumetricCloud.ShadowMap.RaySampleMaxCount'." },
		{ "UIMax", "8" },
		{ "UIMin", "0.25" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowRaySampleCountScale = { "CloudShadowRaySampleCountScale", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, CloudShadowRaySampleCountScale), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowRaySampleCountScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowRaySampleCountScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudScatteredLuminanceScale_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "Comment", "/**\n\x09 * Scales the lights contribution when scattered in cloud participating media. This can help counter balance the fact that our multiple scattering solution is only an approximation.\n\x09 */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Scales the lights contribution when scattered in cloud participating media. This can help counter balance the fact that our multiple scattering solution is only an approximation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudScatteredLuminanceScale = { "CloudScatteredLuminanceScale", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, CloudScatteredLuminanceScale), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudScatteredLuminanceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudScatteredLuminanceScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightmassSettings_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** The Lightmass settings for this object. */" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The Lightmass settings for this object." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightmassSettings = { "LightmassSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, LightmassSettings), Z_Construct_UScriptStruct_FLightmassDirectionalLightSettings, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightmassSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightmassSettings_MetaData)) }; // 366792125
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastModulatedShadows_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09* Whether the light should cast modulated shadows from dynamic objects (mobile only).  Also requires Cast Shadows to be set to True.\n\x09**/" },
		{ "EditCondition", "Mobility == EComponentMobility::Stationary" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Whether the light should cast modulated shadows from dynamic objects (mobile only).  Also requires Cast Shadows to be set to True." },
	};
#endif
	void Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastModulatedShadows_SetBit(void* Obj)
	{
		((UDirectionalLightComponent*)Obj)->bCastModulatedShadows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastModulatedShadows = { "bCastModulatedShadows", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDirectionalLightComponent), &Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastModulatedShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastModulatedShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastModulatedShadows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ModulatedShadowColor_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09* Color to modulate against the scene color when rendering modulated shadows. (mobile only)\n\x09**/" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Color to modulate against the scene color when rendering modulated shadows. (mobile only)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ModulatedShadowColor = { "ModulatedShadowColor", nullptr, (EPropertyFlags)0x0010040200000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, ModulatedShadowColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ModulatedShadowColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ModulatedShadowColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ShadowAmount_MetaData[] = {
		{ "Category", "Light" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Control the amount of shadow occlusion. A value of 0 means no occlusion, thus no shadow.\n\x09 */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Control the amount of shadow occlusion. A value of 0 means no occlusion, thus no shadow." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ShadowAmount = { "ShadowAmount", nullptr, (EPropertyFlags)0x0010040200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightComponent, ShadowAmount), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ShadowAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ShadowAmount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDirectionalLightComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ShadowCascadeBiasDistribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bEnableLightShaftOcclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_OcclusionMaskDarkness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_OcclusionDepthRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightShaftOverrideDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_WholeSceneDynamicShadowRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowDistanceMovableLight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowDistanceStationaryLight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowCascades,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CascadeDistributionExponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CascadeTransitionFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ShadowDistanceFadeoutFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUseInsetShadowsForMovableObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_FarShadowCascadeCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_FarShadowDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DistanceFieldShadowDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ForwardShadingPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightSourceAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightSourceSoftAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ShadowSourceAngleFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_TraceDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUsedAsAtmosphereSunLight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bAtmosphereSunLight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_AtmosphereSunLightIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_AtmosphereSunDiskColorScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bPerPixelAtmosphereTransmittance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastShadowsOnClouds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastShadowsOnAtmosphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastCloudShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowOnAtmosphereStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowOnSurfaceStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowDepthBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowMapResolutionScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowRaySampleCountScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudScatteredLuminanceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightmassSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastModulatedShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ModulatedShadowColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ShadowAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDirectionalLightComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDirectionalLightComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDirectionalLightComponent_Statics::ClassParams = {
		&UDirectionalLightComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDirectionalLightComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDirectionalLightComponent()
	{
		if (!Z_Registration_Info_UClass_UDirectionalLightComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDirectionalLightComponent.OuterSingleton, Z_Construct_UClass_UDirectionalLightComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDirectionalLightComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDirectionalLightComponent>()
	{
		return UDirectionalLightComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDirectionalLightComponent);
	UDirectionalLightComponent::~UDirectionalLightComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDirectionalLightComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDirectionalLightComponent, UDirectionalLightComponent::StaticClass, TEXT("UDirectionalLightComponent"), &Z_Registration_Info_UClass_UDirectionalLightComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDirectionalLightComponent), 555157440U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_1079334112(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
