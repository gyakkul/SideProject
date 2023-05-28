// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeDatasmithAreaLightFactoryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeDatasmithAreaLightFactoryNode() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DATASMITHCONTENT_API UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape();
	DATASMITHCONTENT_API UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType();
	DATASMITHINTERCHANGE_API UClass* Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode();
	DATASMITHINTERCHANGE_API UClass* Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightUnits();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeActorFactoryNode();
	UPackage* Z_Construct_UPackage__Script_DatasmithInterchange();
// End Cross Module References
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightFactoryNode::execSetCustomSpotlightOuterAngle)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomSpotlightOuterAngle(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightFactoryNode::execGetCustomSpotlightOuterAngle)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomSpotlightOuterAngle(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightFactoryNode::execSetCustomSpotlightInnerAngle)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomSpotlightInnerAngle(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightFactoryNode::execGetCustomSpotlightInnerAngle)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomSpotlightInnerAngle(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightFactoryNode::execSetCustomAttenuationRadius)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomAttenuationRadius(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightFactoryNode::execGetCustomAttenuationRadius)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomAttenuationRadius(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightFactoryNode::execSetCustomSourceLength)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomSourceLength(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightFactoryNode::execGetCustomSourceLength)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomSourceLength(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightFactoryNode::execSetCustomSourceRadius)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomSourceRadius(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightFactoryNode::execGetCustomSourceRadius)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomSourceRadius(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightFactoryNode::execSetCustomRotation)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomRotation(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightFactoryNode::execGetCustomRotation)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomRotation(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightFactoryNode::execSetCustomIESBrightnessScale)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomIESBrightnessScale(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightFactoryNode::execGetCustomIESBrightnessScale)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomIESBrightnessScale(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightFactoryNode::execSetCustomUseIESBrightness)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomUseIESBrightness(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightFactoryNode::execGetCustomUseIESBrightness)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomUseIESBrightness(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightFactoryNode::execSetCustomTemperature)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomTemperature(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightFactoryNode::execGetCustomTemperature)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomTemperature(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightFactoryNode::execSetCustomColor)
	{
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomColor(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightFactoryNode::execGetCustomColor)
	{
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomColor(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightFactoryNode::execSetCustomIntensityUnits)
	{
		P_GET_ENUM_REF(ELightUnits,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomIntensityUnits((ELightUnits&)(Z_Param_Out_AttributeValue),Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightFactoryNode::execGetCustomIntensityUnits)
	{
		P_GET_ENUM_REF(ELightUnits,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomIntensityUnits((ELightUnits&)(Z_Param_Out_AttributeValue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightFactoryNode::execSetCustomIntensity)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomIntensity(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightFactoryNode::execGetCustomIntensity)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomIntensity(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightFactoryNode::execSetCustomDimensions)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomDimensions(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightFactoryNode::execGetCustomDimensions)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomDimensions(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightFactoryNode::execSetCustomLightShape)
	{
		P_GET_ENUM_REF(EDatasmithAreaLightActorShape,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomLightShape((EDatasmithAreaLightActorShape&)(Z_Param_Out_AttributeValue),Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightFactoryNode::execGetCustomLightShape)
	{
		P_GET_ENUM_REF(EDatasmithAreaLightActorShape,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomLightShape((EDatasmithAreaLightActorShape&)(Z_Param_Out_AttributeValue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightFactoryNode::execSetCustomLightType)
	{
		P_GET_ENUM_REF(EDatasmithAreaLightActorType,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomLightType((EDatasmithAreaLightActorType&)(Z_Param_Out_AttributeValue),Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightFactoryNode::execGetCustomLightType)
	{
		P_GET_ENUM_REF(EDatasmithAreaLightActorType,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomLightType((EDatasmithAreaLightActorType&)(Z_Param_Out_AttributeValue));
		P_NATIVE_END;
	}
	void UInterchangeDatasmithAreaLightFactoryNode::StaticRegisterNativesUInterchangeDatasmithAreaLightFactoryNode()
	{
		UClass* Class = UInterchangeDatasmithAreaLightFactoryNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomAttenuationRadius", &UInterchangeDatasmithAreaLightFactoryNode::execGetCustomAttenuationRadius },
			{ "GetCustomColor", &UInterchangeDatasmithAreaLightFactoryNode::execGetCustomColor },
			{ "GetCustomDimensions", &UInterchangeDatasmithAreaLightFactoryNode::execGetCustomDimensions },
			{ "GetCustomIESBrightnessScale", &UInterchangeDatasmithAreaLightFactoryNode::execGetCustomIESBrightnessScale },
			{ "GetCustomIntensity", &UInterchangeDatasmithAreaLightFactoryNode::execGetCustomIntensity },
			{ "GetCustomIntensityUnits", &UInterchangeDatasmithAreaLightFactoryNode::execGetCustomIntensityUnits },
			{ "GetCustomLightShape", &UInterchangeDatasmithAreaLightFactoryNode::execGetCustomLightShape },
			{ "GetCustomLightType", &UInterchangeDatasmithAreaLightFactoryNode::execGetCustomLightType },
			{ "GetCustomRotation", &UInterchangeDatasmithAreaLightFactoryNode::execGetCustomRotation },
			{ "GetCustomSourceLength", &UInterchangeDatasmithAreaLightFactoryNode::execGetCustomSourceLength },
			{ "GetCustomSourceRadius", &UInterchangeDatasmithAreaLightFactoryNode::execGetCustomSourceRadius },
			{ "GetCustomSpotlightInnerAngle", &UInterchangeDatasmithAreaLightFactoryNode::execGetCustomSpotlightInnerAngle },
			{ "GetCustomSpotlightOuterAngle", &UInterchangeDatasmithAreaLightFactoryNode::execGetCustomSpotlightOuterAngle },
			{ "GetCustomTemperature", &UInterchangeDatasmithAreaLightFactoryNode::execGetCustomTemperature },
			{ "GetCustomUseIESBrightness", &UInterchangeDatasmithAreaLightFactoryNode::execGetCustomUseIESBrightness },
			{ "SetCustomAttenuationRadius", &UInterchangeDatasmithAreaLightFactoryNode::execSetCustomAttenuationRadius },
			{ "SetCustomColor", &UInterchangeDatasmithAreaLightFactoryNode::execSetCustomColor },
			{ "SetCustomDimensions", &UInterchangeDatasmithAreaLightFactoryNode::execSetCustomDimensions },
			{ "SetCustomIESBrightnessScale", &UInterchangeDatasmithAreaLightFactoryNode::execSetCustomIESBrightnessScale },
			{ "SetCustomIntensity", &UInterchangeDatasmithAreaLightFactoryNode::execSetCustomIntensity },
			{ "SetCustomIntensityUnits", &UInterchangeDatasmithAreaLightFactoryNode::execSetCustomIntensityUnits },
			{ "SetCustomLightShape", &UInterchangeDatasmithAreaLightFactoryNode::execSetCustomLightShape },
			{ "SetCustomLightType", &UInterchangeDatasmithAreaLightFactoryNode::execSetCustomLightType },
			{ "SetCustomRotation", &UInterchangeDatasmithAreaLightFactoryNode::execSetCustomRotation },
			{ "SetCustomSourceLength", &UInterchangeDatasmithAreaLightFactoryNode::execSetCustomSourceLength },
			{ "SetCustomSourceRadius", &UInterchangeDatasmithAreaLightFactoryNode::execSetCustomSourceRadius },
			{ "SetCustomSpotlightInnerAngle", &UInterchangeDatasmithAreaLightFactoryNode::execSetCustomSpotlightInnerAngle },
			{ "SetCustomSpotlightOuterAngle", &UInterchangeDatasmithAreaLightFactoryNode::execSetCustomSpotlightOuterAngle },
			{ "SetCustomTemperature", &UInterchangeDatasmithAreaLightFactoryNode::execSetCustomTemperature },
			{ "SetCustomUseIESBrightness", &UInterchangeDatasmithAreaLightFactoryNode::execSetCustomUseIESBrightness },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomAttenuationRadius_Statics
	{
		struct InterchangeDatasmithAreaLightFactoryNode_eventGetCustomAttenuationRadius_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomAttenuationRadius_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightFactoryNode_eventGetCustomAttenuationRadius_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomAttenuationRadius_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventGetCustomAttenuationRadius_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomAttenuationRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventGetCustomAttenuationRadius_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomAttenuationRadius_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomAttenuationRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomAttenuationRadius_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomAttenuationRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomAttenuationRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomAttenuationRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode, nullptr, "GetCustomAttenuationRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomAttenuationRadius_Statics::InterchangeDatasmithAreaLightFactoryNode_eventGetCustomAttenuationRadius_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomAttenuationRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomAttenuationRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomAttenuationRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomAttenuationRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomAttenuationRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomAttenuationRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomColor_Statics
	{
		struct InterchangeDatasmithAreaLightFactoryNode_eventGetCustomColor_Parms
		{
			FLinearColor AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomColor_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightFactoryNode_eventGetCustomColor_Parms, AttributeValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventGetCustomColor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventGetCustomColor_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomColor_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode, nullptr, "GetCustomColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomColor_Statics::InterchangeDatasmithAreaLightFactoryNode_eventGetCustomColor_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomDimensions_Statics
	{
		struct InterchangeDatasmithAreaLightFactoryNode_eventGetCustomDimensions_Parms
		{
			FVector2D AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomDimensions_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightFactoryNode_eventGetCustomDimensions_Parms, AttributeValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomDimensions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventGetCustomDimensions_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomDimensions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventGetCustomDimensions_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomDimensions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomDimensions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomDimensions_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomDimensions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomDimensions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomDimensions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode, nullptr, "GetCustomDimensions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomDimensions_Statics::InterchangeDatasmithAreaLightFactoryNode_eventGetCustomDimensions_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomDimensions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomDimensions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomDimensions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomDimensions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomDimensions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomDimensions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIESBrightnessScale_Statics
	{
		struct InterchangeDatasmithAreaLightFactoryNode_eventGetCustomIESBrightnessScale_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIESBrightnessScale_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightFactoryNode_eventGetCustomIESBrightnessScale_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIESBrightnessScale_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventGetCustomIESBrightnessScale_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIESBrightnessScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventGetCustomIESBrightnessScale_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIESBrightnessScale_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIESBrightnessScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIESBrightnessScale_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIESBrightnessScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIESBrightnessScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIESBrightnessScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode, nullptr, "GetCustomIESBrightnessScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIESBrightnessScale_Statics::InterchangeDatasmithAreaLightFactoryNode_eventGetCustomIESBrightnessScale_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIESBrightnessScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIESBrightnessScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIESBrightnessScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIESBrightnessScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIESBrightnessScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIESBrightnessScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensity_Statics
	{
		struct InterchangeDatasmithAreaLightFactoryNode_eventGetCustomIntensity_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensity_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightFactoryNode_eventGetCustomIntensity_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventGetCustomIntensity_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventGetCustomIntensity_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensity_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode, nullptr, "GetCustomIntensity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensity_Statics::InterchangeDatasmithAreaLightFactoryNode_eventGetCustomIntensity_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensityUnits_Statics
	{
		struct InterchangeDatasmithAreaLightFactoryNode_eventGetCustomIntensityUnits_Parms
		{
			ELightUnits AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensityUnits_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensityUnits_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightFactoryNode_eventGetCustomIntensityUnits_Parms, AttributeValue), Z_Construct_UEnum_Engine_ELightUnits, METADATA_PARAMS(nullptr, 0) }; // 117192790
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensityUnits_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventGetCustomIntensityUnits_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensityUnits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventGetCustomIntensityUnits_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensityUnits_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensityUnits_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensityUnits_Statics::NewProp_AttributeValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensityUnits_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensityUnits_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensityUnits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensityUnits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode, nullptr, "GetCustomIntensityUnits", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensityUnits_Statics::InterchangeDatasmithAreaLightFactoryNode_eventGetCustomIntensityUnits_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensityUnits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensityUnits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensityUnits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensityUnits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensityUnits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensityUnits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightShape_Statics
	{
		struct InterchangeDatasmithAreaLightFactoryNode_eventGetCustomLightShape_Parms
		{
			EDatasmithAreaLightActorShape AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightShape_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightShape_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightFactoryNode_eventGetCustomLightShape_Parms, AttributeValue), Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape, METADATA_PARAMS(nullptr, 0) }; // 2181757507
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightShape_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventGetCustomLightShape_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightShape_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventGetCustomLightShape_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightShape_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightShape_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightShape_Statics::NewProp_AttributeValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightShape_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightShape_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightShape_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightShape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode, nullptr, "GetCustomLightShape", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightShape_Statics::InterchangeDatasmithAreaLightFactoryNode_eventGetCustomLightShape_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightShape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightShape_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightShape_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightShape_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightShape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightShape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightType_Statics
	{
		struct InterchangeDatasmithAreaLightFactoryNode_eventGetCustomLightType_Parms
		{
			EDatasmithAreaLightActorType AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightType_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightType_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightFactoryNode_eventGetCustomLightType_Parms, AttributeValue), Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType, METADATA_PARAMS(nullptr, 0) }; // 4169612036
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventGetCustomLightType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventGetCustomLightType_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightType_Statics::NewProp_AttributeValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightType_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode, nullptr, "GetCustomLightType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightType_Statics::InterchangeDatasmithAreaLightFactoryNode_eventGetCustomLightType_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomRotation_Statics
	{
		struct InterchangeDatasmithAreaLightFactoryNode_eventGetCustomRotation_Parms
		{
			FRotator AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomRotation_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightFactoryNode_eventGetCustomRotation_Parms, AttributeValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventGetCustomRotation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventGetCustomRotation_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomRotation_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode, nullptr, "GetCustomRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomRotation_Statics::InterchangeDatasmithAreaLightFactoryNode_eventGetCustomRotation_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceLength_Statics
	{
		struct InterchangeDatasmithAreaLightFactoryNode_eventGetCustomSourceLength_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceLength_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightFactoryNode_eventGetCustomSourceLength_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceLength_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventGetCustomSourceLength_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventGetCustomSourceLength_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceLength_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceLength_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode, nullptr, "GetCustomSourceLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceLength_Statics::InterchangeDatasmithAreaLightFactoryNode_eventGetCustomSourceLength_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceRadius_Statics
	{
		struct InterchangeDatasmithAreaLightFactoryNode_eventGetCustomSourceRadius_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceRadius_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightFactoryNode_eventGetCustomSourceRadius_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceRadius_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventGetCustomSourceRadius_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventGetCustomSourceRadius_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceRadius_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceRadius_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode, nullptr, "GetCustomSourceRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceRadius_Statics::InterchangeDatasmithAreaLightFactoryNode_eventGetCustomSourceRadius_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightInnerAngle_Statics
	{
		struct InterchangeDatasmithAreaLightFactoryNode_eventGetCustomSpotlightInnerAngle_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightInnerAngle_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightFactoryNode_eventGetCustomSpotlightInnerAngle_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightInnerAngle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventGetCustomSpotlightInnerAngle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightInnerAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventGetCustomSpotlightInnerAngle_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightInnerAngle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightInnerAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightInnerAngle_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightInnerAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightInnerAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightInnerAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode, nullptr, "GetCustomSpotlightInnerAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightInnerAngle_Statics::InterchangeDatasmithAreaLightFactoryNode_eventGetCustomSpotlightInnerAngle_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightInnerAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightInnerAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightInnerAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightInnerAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightInnerAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightInnerAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightOuterAngle_Statics
	{
		struct InterchangeDatasmithAreaLightFactoryNode_eventGetCustomSpotlightOuterAngle_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightOuterAngle_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightFactoryNode_eventGetCustomSpotlightOuterAngle_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightOuterAngle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventGetCustomSpotlightOuterAngle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightOuterAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventGetCustomSpotlightOuterAngle_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightOuterAngle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightOuterAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightOuterAngle_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightOuterAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightOuterAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightOuterAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode, nullptr, "GetCustomSpotlightOuterAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightOuterAngle_Statics::InterchangeDatasmithAreaLightFactoryNode_eventGetCustomSpotlightOuterAngle_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightOuterAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightOuterAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightOuterAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightOuterAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightOuterAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightOuterAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomTemperature_Statics
	{
		struct InterchangeDatasmithAreaLightFactoryNode_eventGetCustomTemperature_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomTemperature_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightFactoryNode_eventGetCustomTemperature_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomTemperature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventGetCustomTemperature_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomTemperature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventGetCustomTemperature_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomTemperature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomTemperature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomTemperature_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomTemperature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomTemperature_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode, nullptr, "GetCustomTemperature", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomTemperature_Statics::InterchangeDatasmithAreaLightFactoryNode_eventGetCustomTemperature_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomTemperature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomTemperature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomTemperature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomTemperature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomTemperature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomUseIESBrightness_Statics
	{
		struct InterchangeDatasmithAreaLightFactoryNode_eventGetCustomUseIESBrightness_Parms
		{
			bool AttributeValue;
			bool ReturnValue;
		};
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomUseIESBrightness_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventGetCustomUseIESBrightness_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomUseIESBrightness_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventGetCustomUseIESBrightness_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomUseIESBrightness_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomUseIESBrightness_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventGetCustomUseIESBrightness_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomUseIESBrightness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventGetCustomUseIESBrightness_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomUseIESBrightness_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomUseIESBrightness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomUseIESBrightness_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomUseIESBrightness_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomUseIESBrightness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomUseIESBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode, nullptr, "GetCustomUseIESBrightness", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomUseIESBrightness_Statics::InterchangeDatasmithAreaLightFactoryNode_eventGetCustomUseIESBrightness_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomUseIESBrightness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomUseIESBrightness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomUseIESBrightness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomUseIESBrightness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomUseIESBrightness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomUseIESBrightness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomAttenuationRadius_Statics
	{
		struct InterchangeDatasmithAreaLightFactoryNode_eventSetCustomAttenuationRadius_Parms
		{
			float AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomAttenuationRadius_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomAttenuationRadius_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomAttenuationRadius_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomAttenuationRadius_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomAttenuationRadius_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomAttenuationRadius_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventSetCustomAttenuationRadius_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomAttenuationRadius_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomAttenuationRadius_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomAttenuationRadius_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomAttenuationRadius_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventSetCustomAttenuationRadius_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomAttenuationRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomAttenuationRadius_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomAttenuationRadius_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomAttenuationRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomAttenuationRadius_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomAttenuationRadius_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomAttenuationRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomAttenuationRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomAttenuationRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode, nullptr, "SetCustomAttenuationRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomAttenuationRadius_Statics::InterchangeDatasmithAreaLightFactoryNode_eventSetCustomAttenuationRadius_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomAttenuationRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomAttenuationRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomAttenuationRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomAttenuationRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomAttenuationRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomAttenuationRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomColor_Statics
	{
		struct InterchangeDatasmithAreaLightFactoryNode_eventSetCustomColor_Parms
		{
			FLinearColor AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomColor_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomColor_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomColor_Parms, AttributeValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomColor_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomColor_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomColor_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventSetCustomColor_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomColor_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomColor_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomColor_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventSetCustomColor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomColor_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomColor_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomColor_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode, nullptr, "SetCustomColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomColor_Statics::InterchangeDatasmithAreaLightFactoryNode_eventSetCustomColor_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomDimensions_Statics
	{
		struct InterchangeDatasmithAreaLightFactoryNode_eventSetCustomDimensions_Parms
		{
			FVector2D AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomDimensions_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomDimensions_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomDimensions_Parms, AttributeValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomDimensions_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomDimensions_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomDimensions_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventSetCustomDimensions_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomDimensions_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomDimensions_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomDimensions_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomDimensions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventSetCustomDimensions_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomDimensions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomDimensions_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomDimensions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomDimensions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomDimensions_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomDimensions_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomDimensions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomDimensions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomDimensions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode, nullptr, "SetCustomDimensions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomDimensions_Statics::InterchangeDatasmithAreaLightFactoryNode_eventSetCustomDimensions_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomDimensions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomDimensions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomDimensions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomDimensions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomDimensions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomDimensions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIESBrightnessScale_Statics
	{
		struct InterchangeDatasmithAreaLightFactoryNode_eventSetCustomIESBrightnessScale_Parms
		{
			float AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIESBrightnessScale_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIESBrightnessScale_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomIESBrightnessScale_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIESBrightnessScale_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIESBrightnessScale_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIESBrightnessScale_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventSetCustomIESBrightnessScale_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIESBrightnessScale_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomIESBrightnessScale_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIESBrightnessScale_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIESBrightnessScale_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventSetCustomIESBrightnessScale_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIESBrightnessScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomIESBrightnessScale_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIESBrightnessScale_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIESBrightnessScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIESBrightnessScale_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIESBrightnessScale_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIESBrightnessScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIESBrightnessScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIESBrightnessScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode, nullptr, "SetCustomIESBrightnessScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIESBrightnessScale_Statics::InterchangeDatasmithAreaLightFactoryNode_eventSetCustomIESBrightnessScale_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIESBrightnessScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIESBrightnessScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIESBrightnessScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIESBrightnessScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIESBrightnessScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIESBrightnessScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensity_Statics
	{
		struct InterchangeDatasmithAreaLightFactoryNode_eventSetCustomIntensity_Parms
		{
			float AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensity_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensity_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomIntensity_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensity_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensity_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensity_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventSetCustomIntensity_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensity_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomIntensity_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensity_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventSetCustomIntensity_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomIntensity_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensity_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensity_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode, nullptr, "SetCustomIntensity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensity_Statics::InterchangeDatasmithAreaLightFactoryNode_eventSetCustomIntensity_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensityUnits_Statics
	{
		struct InterchangeDatasmithAreaLightFactoryNode_eventSetCustomIntensityUnits_Parms
		{
			ELightUnits AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomIntensityUnits_Parms, AttributeValue), Z_Construct_UEnum_Engine_ELightUnits, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_AttributeValue_MetaData)) }; // 117192790
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventSetCustomIntensityUnits_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomIntensityUnits_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventSetCustomIntensityUnits_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomIntensityUnits_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensityUnits_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_AttributeValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensityUnits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensityUnits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode, nullptr, "SetCustomIntensityUnits", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensityUnits_Statics::InterchangeDatasmithAreaLightFactoryNode_eventSetCustomIntensityUnits_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensityUnits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensityUnits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensityUnits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensityUnits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensityUnits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensityUnits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightShape_Statics
	{
		struct InterchangeDatasmithAreaLightFactoryNode_eventSetCustomLightShape_Parms
		{
			EDatasmithAreaLightActorShape AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightShape_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightShape_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightShape_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomLightShape_Parms, AttributeValue), Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightShape_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightShape_Statics::NewProp_AttributeValue_MetaData)) }; // 2181757507
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightShape_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventSetCustomLightShape_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightShape_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomLightShape_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightShape_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightShape_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventSetCustomLightShape_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightShape_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomLightShape_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightShape_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightShape_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightShape_Statics::NewProp_AttributeValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightShape_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightShape_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightShape_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightShape_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightShape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode, nullptr, "SetCustomLightShape", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightShape_Statics::InterchangeDatasmithAreaLightFactoryNode_eventSetCustomLightShape_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightShape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightShape_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightShape_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightShape_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightShape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightShape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightType_Statics
	{
		struct InterchangeDatasmithAreaLightFactoryNode_eventSetCustomLightType_Parms
		{
			EDatasmithAreaLightActorType AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightType_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightType_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightType_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomLightType_Parms, AttributeValue), Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightType_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightType_Statics::NewProp_AttributeValue_MetaData)) }; // 4169612036
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightType_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventSetCustomLightType_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightType_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomLightType_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightType_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventSetCustomLightType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomLightType_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightType_Statics::NewProp_AttributeValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightType_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightType_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode, nullptr, "SetCustomLightType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightType_Statics::InterchangeDatasmithAreaLightFactoryNode_eventSetCustomLightType_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomRotation_Statics
	{
		struct InterchangeDatasmithAreaLightFactoryNode_eventSetCustomRotation_Parms
		{
			FRotator AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomRotation_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomRotation_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomRotation_Parms, AttributeValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomRotation_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomRotation_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomRotation_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventSetCustomRotation_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomRotation_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomRotation_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomRotation_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventSetCustomRotation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomRotation_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomRotation_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomRotation_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode, nullptr, "SetCustomRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomRotation_Statics::InterchangeDatasmithAreaLightFactoryNode_eventSetCustomRotation_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceLength_Statics
	{
		struct InterchangeDatasmithAreaLightFactoryNode_eventSetCustomSourceLength_Parms
		{
			float AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceLength_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceLength_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomSourceLength_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceLength_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceLength_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceLength_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventSetCustomSourceLength_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceLength_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomSourceLength_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceLength_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceLength_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventSetCustomSourceLength_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomSourceLength_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceLength_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceLength_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceLength_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode, nullptr, "SetCustomSourceLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceLength_Statics::InterchangeDatasmithAreaLightFactoryNode_eventSetCustomSourceLength_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceRadius_Statics
	{
		struct InterchangeDatasmithAreaLightFactoryNode_eventSetCustomSourceRadius_Parms
		{
			float AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceRadius_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceRadius_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomSourceRadius_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceRadius_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceRadius_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceRadius_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventSetCustomSourceRadius_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceRadius_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomSourceRadius_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceRadius_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceRadius_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventSetCustomSourceRadius_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomSourceRadius_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceRadius_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceRadius_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceRadius_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode, nullptr, "SetCustomSourceRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceRadius_Statics::InterchangeDatasmithAreaLightFactoryNode_eventSetCustomSourceRadius_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightInnerAngle_Statics
	{
		struct InterchangeDatasmithAreaLightFactoryNode_eventSetCustomSpotlightInnerAngle_Parms
		{
			float AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightInnerAngle_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightInnerAngle_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomSpotlightInnerAngle_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightInnerAngle_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightInnerAngle_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightInnerAngle_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventSetCustomSpotlightInnerAngle_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightInnerAngle_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomSpotlightInnerAngle_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightInnerAngle_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightInnerAngle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventSetCustomSpotlightInnerAngle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightInnerAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomSpotlightInnerAngle_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightInnerAngle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightInnerAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightInnerAngle_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightInnerAngle_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightInnerAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightInnerAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightInnerAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode, nullptr, "SetCustomSpotlightInnerAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightInnerAngle_Statics::InterchangeDatasmithAreaLightFactoryNode_eventSetCustomSpotlightInnerAngle_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightInnerAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightInnerAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightInnerAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightInnerAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightInnerAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightInnerAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightOuterAngle_Statics
	{
		struct InterchangeDatasmithAreaLightFactoryNode_eventSetCustomSpotlightOuterAngle_Parms
		{
			float AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightOuterAngle_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightOuterAngle_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomSpotlightOuterAngle_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightOuterAngle_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightOuterAngle_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightOuterAngle_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventSetCustomSpotlightOuterAngle_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightOuterAngle_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomSpotlightOuterAngle_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightOuterAngle_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightOuterAngle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventSetCustomSpotlightOuterAngle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightOuterAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomSpotlightOuterAngle_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightOuterAngle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightOuterAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightOuterAngle_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightOuterAngle_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightOuterAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightOuterAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightOuterAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode, nullptr, "SetCustomSpotlightOuterAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightOuterAngle_Statics::InterchangeDatasmithAreaLightFactoryNode_eventSetCustomSpotlightOuterAngle_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightOuterAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightOuterAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightOuterAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightOuterAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightOuterAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightOuterAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomTemperature_Statics
	{
		struct InterchangeDatasmithAreaLightFactoryNode_eventSetCustomTemperature_Parms
		{
			float AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomTemperature_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomTemperature_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomTemperature_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomTemperature_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomTemperature_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomTemperature_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventSetCustomTemperature_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomTemperature_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomTemperature_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomTemperature_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomTemperature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventSetCustomTemperature_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomTemperature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomTemperature_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomTemperature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomTemperature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomTemperature_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomTemperature_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomTemperature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomTemperature_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode, nullptr, "SetCustomTemperature", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomTemperature_Statics::InterchangeDatasmithAreaLightFactoryNode_eventSetCustomTemperature_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomTemperature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomTemperature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomTemperature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomTemperature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomTemperature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomUseIESBrightness_Statics
	{
		struct InterchangeDatasmithAreaLightFactoryNode_eventSetCustomUseIESBrightness_Parms
		{
			bool AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomUseIESBrightness_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomUseIESBrightness_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventSetCustomUseIESBrightness_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomUseIESBrightness_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomUseIESBrightness_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomUseIESBrightness_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomUseIESBrightness_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomUseIESBrightness_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomUseIESBrightness_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventSetCustomUseIESBrightness_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomUseIESBrightness_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomUseIESBrightness_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomUseIESBrightness_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomUseIESBrightness_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightFactoryNode_eventSetCustomUseIESBrightness_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomUseIESBrightness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightFactoryNode_eventSetCustomUseIESBrightness_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomUseIESBrightness_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomUseIESBrightness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomUseIESBrightness_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomUseIESBrightness_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomUseIESBrightness_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomUseIESBrightness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomUseIESBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode, nullptr, "SetCustomUseIESBrightness", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomUseIESBrightness_Statics::InterchangeDatasmithAreaLightFactoryNode_eventSetCustomUseIESBrightness_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomUseIESBrightness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomUseIESBrightness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomUseIESBrightness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomUseIESBrightness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomUseIESBrightness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomUseIESBrightness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeDatasmithAreaLightFactoryNode);
	UClass* Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode_NoRegister()
	{
		return UInterchangeDatasmithAreaLightFactoryNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeActorFactoryNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithInterchange,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomAttenuationRadius, "GetCustomAttenuationRadius" }, // 1080074572
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomColor, "GetCustomColor" }, // 4258854337
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomDimensions, "GetCustomDimensions" }, // 557172476
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIESBrightnessScale, "GetCustomIESBrightnessScale" }, // 2361862476
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensity, "GetCustomIntensity" }, // 1750152906
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomIntensityUnits, "GetCustomIntensityUnits" }, // 3604451210
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightShape, "GetCustomLightShape" }, // 2372159687
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomLightType, "GetCustomLightType" }, // 557353626
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomRotation, "GetCustomRotation" }, // 869328346
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceLength, "GetCustomSourceLength" }, // 796341376
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSourceRadius, "GetCustomSourceRadius" }, // 110786086
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightInnerAngle, "GetCustomSpotlightInnerAngle" }, // 1886673760
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomSpotlightOuterAngle, "GetCustomSpotlightOuterAngle" }, // 1596658263
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomTemperature, "GetCustomTemperature" }, // 2002990666
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_GetCustomUseIESBrightness, "GetCustomUseIESBrightness" }, // 3405758539
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomAttenuationRadius, "SetCustomAttenuationRadius" }, // 2002422040
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomColor, "SetCustomColor" }, // 940829711
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomDimensions, "SetCustomDimensions" }, // 710010633
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIESBrightnessScale, "SetCustomIESBrightnessScale" }, // 1063343253
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensity, "SetCustomIntensity" }, // 3719821189
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomIntensityUnits, "SetCustomIntensityUnits" }, // 3278237352
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightShape, "SetCustomLightShape" }, // 669398385
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomLightType, "SetCustomLightType" }, // 1015762295
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomRotation, "SetCustomRotation" }, // 704547613
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceLength, "SetCustomSourceLength" }, // 2735250045
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSourceRadius, "SetCustomSourceRadius" }, // 3951061511
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightInnerAngle, "SetCustomSpotlightInnerAngle" }, // 2933511132
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomSpotlightOuterAngle, "SetCustomSpotlightOuterAngle" }, // 2515290329
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomTemperature, "SetCustomTemperature" }, // 3201783348
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightFactoryNode_SetCustomUseIESBrightness, "SetCustomUseIESBrightness" }, // 944873050
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeDatasmithAreaLightFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightFactoryNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeDatasmithAreaLightFactoryNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode_Statics::ClassParams = {
		&UInterchangeDatasmithAreaLightFactoryNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeDatasmithAreaLightFactoryNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeDatasmithAreaLightFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeDatasmithAreaLightFactoryNode.OuterSingleton;
	}
	template<> DATASMITHINTERCHANGE_API UClass* StaticClass<UInterchangeDatasmithAreaLightFactoryNode>()
	{
		return UInterchangeDatasmithAreaLightFactoryNode::StaticClass();
	}
	UInterchangeDatasmithAreaLightFactoryNode::UInterchangeDatasmithAreaLightFactoryNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeDatasmithAreaLightFactoryNode);
	UInterchangeDatasmithAreaLightFactoryNode::~UInterchangeDatasmithAreaLightFactoryNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightFactoryNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightFactoryNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode, UInterchangeDatasmithAreaLightFactoryNode::StaticClass, TEXT("UInterchangeDatasmithAreaLightFactoryNode"), &Z_Registration_Info_UClass_UInterchangeDatasmithAreaLightFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeDatasmithAreaLightFactoryNode), 1704425538U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightFactoryNode_h_3781769298(TEXT("/Script/DatasmithInterchange"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightFactoryNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
