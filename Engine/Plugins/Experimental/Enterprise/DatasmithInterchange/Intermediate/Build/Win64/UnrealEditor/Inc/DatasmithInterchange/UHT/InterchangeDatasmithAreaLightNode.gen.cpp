// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeDatasmithAreaLightNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeDatasmithAreaLightNode() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DATASMITHCONTENT_API UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape();
	DATASMITHCONTENT_API UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType();
	DATASMITHINTERCHANGE_API UClass* Z_Construct_UClass_UInterchangeDatasmithAreaLightNode();
	DATASMITHINTERCHANGE_API UClass* Z_Construct_UClass_UInterchangeDatasmithAreaLightNode_NoRegister();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeLightNode();
	UPackage* Z_Construct_UPackage__Script_DatasmithInterchange();
// End Cross Module References
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightNode::execSetCustomSpotlightOuterAngle)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomSpotlightOuterAngle(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightNode::execGetCustomSpotlightOuterAngle)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomSpotlightOuterAngle(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightNode::execSetCustomSpotlightInnerAngle)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomSpotlightInnerAngle(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightNode::execGetCustomSpotlightInnerAngle)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomSpotlightInnerAngle(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightNode::execSetCustomSourceLength)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomSourceLength(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightNode::execGetCustomSourceLength)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomSourceLength(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightNode::execSetCustomSourceRadius)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomSourceRadius(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightNode::execGetCustomSourceRadius)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomSourceRadius(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightNode::execSetCustomRotation)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomRotation(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightNode::execGetCustomRotation)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomRotation(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightNode::execSetCustomIESBrightnessScale)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomIESBrightnessScale(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightNode::execGetCustomIESBrightnessScale)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomIESBrightnessScale(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightNode::execSetCustomUseIESBrightness)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomUseIESBrightness(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightNode::execGetCustomUseIESBrightness)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomUseIESBrightness(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightNode::execSetCustomColor)
	{
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomColor(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightNode::execGetCustomColor)
	{
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomColor(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightNode::execSetCustomDimensions)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomDimensions(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightNode::execGetCustomDimensions)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomDimensions(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightNode::execSetCustomLightShape)
	{
		P_GET_ENUM_REF(EDatasmithAreaLightActorShape,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomLightShape((EDatasmithAreaLightActorShape&)(Z_Param_Out_AttributeValue),Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightNode::execGetCustomLightShape)
	{
		P_GET_ENUM_REF(EDatasmithAreaLightActorShape,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomLightShape((EDatasmithAreaLightActorShape&)(Z_Param_Out_AttributeValue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightNode::execSetCustomLightType)
	{
		P_GET_ENUM_REF(EDatasmithAreaLightActorType,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomLightType((EDatasmithAreaLightActorType&)(Z_Param_Out_AttributeValue),Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeDatasmithAreaLightNode::execGetCustomLightType)
	{
		P_GET_ENUM_REF(EDatasmithAreaLightActorType,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomLightType((EDatasmithAreaLightActorType&)(Z_Param_Out_AttributeValue));
		P_NATIVE_END;
	}
	void UInterchangeDatasmithAreaLightNode::StaticRegisterNativesUInterchangeDatasmithAreaLightNode()
	{
		UClass* Class = UInterchangeDatasmithAreaLightNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomColor", &UInterchangeDatasmithAreaLightNode::execGetCustomColor },
			{ "GetCustomDimensions", &UInterchangeDatasmithAreaLightNode::execGetCustomDimensions },
			{ "GetCustomIESBrightnessScale", &UInterchangeDatasmithAreaLightNode::execGetCustomIESBrightnessScale },
			{ "GetCustomLightShape", &UInterchangeDatasmithAreaLightNode::execGetCustomLightShape },
			{ "GetCustomLightType", &UInterchangeDatasmithAreaLightNode::execGetCustomLightType },
			{ "GetCustomRotation", &UInterchangeDatasmithAreaLightNode::execGetCustomRotation },
			{ "GetCustomSourceLength", &UInterchangeDatasmithAreaLightNode::execGetCustomSourceLength },
			{ "GetCustomSourceRadius", &UInterchangeDatasmithAreaLightNode::execGetCustomSourceRadius },
			{ "GetCustomSpotlightInnerAngle", &UInterchangeDatasmithAreaLightNode::execGetCustomSpotlightInnerAngle },
			{ "GetCustomSpotlightOuterAngle", &UInterchangeDatasmithAreaLightNode::execGetCustomSpotlightOuterAngle },
			{ "GetCustomUseIESBrightness", &UInterchangeDatasmithAreaLightNode::execGetCustomUseIESBrightness },
			{ "SetCustomColor", &UInterchangeDatasmithAreaLightNode::execSetCustomColor },
			{ "SetCustomDimensions", &UInterchangeDatasmithAreaLightNode::execSetCustomDimensions },
			{ "SetCustomIESBrightnessScale", &UInterchangeDatasmithAreaLightNode::execSetCustomIESBrightnessScale },
			{ "SetCustomLightShape", &UInterchangeDatasmithAreaLightNode::execSetCustomLightShape },
			{ "SetCustomLightType", &UInterchangeDatasmithAreaLightNode::execSetCustomLightType },
			{ "SetCustomRotation", &UInterchangeDatasmithAreaLightNode::execSetCustomRotation },
			{ "SetCustomSourceLength", &UInterchangeDatasmithAreaLightNode::execSetCustomSourceLength },
			{ "SetCustomSourceRadius", &UInterchangeDatasmithAreaLightNode::execSetCustomSourceRadius },
			{ "SetCustomSpotlightInnerAngle", &UInterchangeDatasmithAreaLightNode::execSetCustomSpotlightInnerAngle },
			{ "SetCustomSpotlightOuterAngle", &UInterchangeDatasmithAreaLightNode::execSetCustomSpotlightOuterAngle },
			{ "SetCustomUseIESBrightness", &UInterchangeDatasmithAreaLightNode::execSetCustomUseIESBrightness },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomColor_Statics
	{
		struct InterchangeDatasmithAreaLightNode_eventGetCustomColor_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomColor_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightNode_eventGetCustomColor_Parms, AttributeValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventGetCustomColor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventGetCustomColor_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomColor_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightNode, nullptr, "GetCustomColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomColor_Statics::InterchangeDatasmithAreaLightNode_eventGetCustomColor_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomDimensions_Statics
	{
		struct InterchangeDatasmithAreaLightNode_eventGetCustomDimensions_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomDimensions_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightNode_eventGetCustomDimensions_Parms, AttributeValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomDimensions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventGetCustomDimensions_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomDimensions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventGetCustomDimensions_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomDimensions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomDimensions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomDimensions_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomDimensions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomDimensions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomDimensions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightNode, nullptr, "GetCustomDimensions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomDimensions_Statics::InterchangeDatasmithAreaLightNode_eventGetCustomDimensions_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomDimensions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomDimensions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomDimensions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomDimensions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomDimensions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomDimensions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomIESBrightnessScale_Statics
	{
		struct InterchangeDatasmithAreaLightNode_eventGetCustomIESBrightnessScale_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomIESBrightnessScale_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightNode_eventGetCustomIESBrightnessScale_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomIESBrightnessScale_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventGetCustomIESBrightnessScale_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomIESBrightnessScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventGetCustomIESBrightnessScale_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomIESBrightnessScale_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomIESBrightnessScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomIESBrightnessScale_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomIESBrightnessScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomIESBrightnessScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomIESBrightnessScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightNode, nullptr, "GetCustomIESBrightnessScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomIESBrightnessScale_Statics::InterchangeDatasmithAreaLightNode_eventGetCustomIESBrightnessScale_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomIESBrightnessScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomIESBrightnessScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomIESBrightnessScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomIESBrightnessScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomIESBrightnessScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomIESBrightnessScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightShape_Statics
	{
		struct InterchangeDatasmithAreaLightNode_eventGetCustomLightShape_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightShape_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightShape_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightNode_eventGetCustomLightShape_Parms, AttributeValue), Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape, METADATA_PARAMS(nullptr, 0) }; // 2181757507
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightShape_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventGetCustomLightShape_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightShape_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventGetCustomLightShape_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightShape_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightShape_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightShape_Statics::NewProp_AttributeValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightShape_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightShape_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightShape_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightShape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightNode, nullptr, "GetCustomLightShape", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightShape_Statics::InterchangeDatasmithAreaLightNode_eventGetCustomLightShape_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightShape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightShape_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightShape_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightShape_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightShape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightShape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightType_Statics
	{
		struct InterchangeDatasmithAreaLightNode_eventGetCustomLightType_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightType_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightType_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightNode_eventGetCustomLightType_Parms, AttributeValue), Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType, METADATA_PARAMS(nullptr, 0) }; // 4169612036
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventGetCustomLightType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventGetCustomLightType_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightType_Statics::NewProp_AttributeValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightType_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightNode, nullptr, "GetCustomLightType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightType_Statics::InterchangeDatasmithAreaLightNode_eventGetCustomLightType_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomRotation_Statics
	{
		struct InterchangeDatasmithAreaLightNode_eventGetCustomRotation_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomRotation_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightNode_eventGetCustomRotation_Parms, AttributeValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventGetCustomRotation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventGetCustomRotation_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomRotation_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightNode, nullptr, "GetCustomRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomRotation_Statics::InterchangeDatasmithAreaLightNode_eventGetCustomRotation_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceLength_Statics
	{
		struct InterchangeDatasmithAreaLightNode_eventGetCustomSourceLength_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceLength_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightNode_eventGetCustomSourceLength_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceLength_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventGetCustomSourceLength_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventGetCustomSourceLength_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceLength_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceLength_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightNode, nullptr, "GetCustomSourceLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceLength_Statics::InterchangeDatasmithAreaLightNode_eventGetCustomSourceLength_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceRadius_Statics
	{
		struct InterchangeDatasmithAreaLightNode_eventGetCustomSourceRadius_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceRadius_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightNode_eventGetCustomSourceRadius_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceRadius_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventGetCustomSourceRadius_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventGetCustomSourceRadius_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceRadius_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceRadius_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightNode, nullptr, "GetCustomSourceRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceRadius_Statics::InterchangeDatasmithAreaLightNode_eventGetCustomSourceRadius_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightInnerAngle_Statics
	{
		struct InterchangeDatasmithAreaLightNode_eventGetCustomSpotlightInnerAngle_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightInnerAngle_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightNode_eventGetCustomSpotlightInnerAngle_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightInnerAngle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventGetCustomSpotlightInnerAngle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightInnerAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventGetCustomSpotlightInnerAngle_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightInnerAngle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightInnerAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightInnerAngle_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightInnerAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightInnerAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightInnerAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightNode, nullptr, "GetCustomSpotlightInnerAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightInnerAngle_Statics::InterchangeDatasmithAreaLightNode_eventGetCustomSpotlightInnerAngle_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightInnerAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightInnerAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightInnerAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightInnerAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightInnerAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightInnerAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightOuterAngle_Statics
	{
		struct InterchangeDatasmithAreaLightNode_eventGetCustomSpotlightOuterAngle_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightOuterAngle_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightNode_eventGetCustomSpotlightOuterAngle_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightOuterAngle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventGetCustomSpotlightOuterAngle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightOuterAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventGetCustomSpotlightOuterAngle_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightOuterAngle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightOuterAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightOuterAngle_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightOuterAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightOuterAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightOuterAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightNode, nullptr, "GetCustomSpotlightOuterAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightOuterAngle_Statics::InterchangeDatasmithAreaLightNode_eventGetCustomSpotlightOuterAngle_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightOuterAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightOuterAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightOuterAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightOuterAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightOuterAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightOuterAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomUseIESBrightness_Statics
	{
		struct InterchangeDatasmithAreaLightNode_eventGetCustomUseIESBrightness_Parms
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
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomUseIESBrightness_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventGetCustomUseIESBrightness_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomUseIESBrightness_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventGetCustomUseIESBrightness_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomUseIESBrightness_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomUseIESBrightness_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventGetCustomUseIESBrightness_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomUseIESBrightness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventGetCustomUseIESBrightness_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomUseIESBrightness_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomUseIESBrightness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomUseIESBrightness_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomUseIESBrightness_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomUseIESBrightness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomUseIESBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightNode, nullptr, "GetCustomUseIESBrightness", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomUseIESBrightness_Statics::InterchangeDatasmithAreaLightNode_eventGetCustomUseIESBrightness_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomUseIESBrightness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomUseIESBrightness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomUseIESBrightness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomUseIESBrightness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomUseIESBrightness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomUseIESBrightness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomColor_Statics
	{
		struct InterchangeDatasmithAreaLightNode_eventSetCustomColor_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomColor_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomColor_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightNode_eventSetCustomColor_Parms, AttributeValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomColor_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomColor_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomColor_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventSetCustomColor_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomColor_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventSetCustomColor_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomColor_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventSetCustomColor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventSetCustomColor_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomColor_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomColor_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightNode, nullptr, "SetCustomColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomColor_Statics::InterchangeDatasmithAreaLightNode_eventSetCustomColor_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomDimensions_Statics
	{
		struct InterchangeDatasmithAreaLightNode_eventSetCustomDimensions_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomDimensions_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomDimensions_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightNode_eventSetCustomDimensions_Parms, AttributeValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomDimensions_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomDimensions_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomDimensions_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventSetCustomDimensions_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomDimensions_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventSetCustomDimensions_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomDimensions_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomDimensions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventSetCustomDimensions_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomDimensions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventSetCustomDimensions_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomDimensions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomDimensions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomDimensions_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomDimensions_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomDimensions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomDimensions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomDimensions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightNode, nullptr, "SetCustomDimensions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomDimensions_Statics::InterchangeDatasmithAreaLightNode_eventSetCustomDimensions_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomDimensions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomDimensions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomDimensions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomDimensions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomDimensions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomDimensions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomIESBrightnessScale_Statics
	{
		struct InterchangeDatasmithAreaLightNode_eventSetCustomIESBrightnessScale_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomIESBrightnessScale_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomIESBrightnessScale_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightNode_eventSetCustomIESBrightnessScale_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomIESBrightnessScale_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomIESBrightnessScale_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomIESBrightnessScale_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventSetCustomIESBrightnessScale_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomIESBrightnessScale_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventSetCustomIESBrightnessScale_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomIESBrightnessScale_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomIESBrightnessScale_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventSetCustomIESBrightnessScale_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomIESBrightnessScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventSetCustomIESBrightnessScale_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomIESBrightnessScale_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomIESBrightnessScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomIESBrightnessScale_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomIESBrightnessScale_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomIESBrightnessScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomIESBrightnessScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomIESBrightnessScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightNode, nullptr, "SetCustomIESBrightnessScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomIESBrightnessScale_Statics::InterchangeDatasmithAreaLightNode_eventSetCustomIESBrightnessScale_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomIESBrightnessScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomIESBrightnessScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomIESBrightnessScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomIESBrightnessScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomIESBrightnessScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomIESBrightnessScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightShape_Statics
	{
		struct InterchangeDatasmithAreaLightNode_eventSetCustomLightShape_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightShape_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightShape_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightShape_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightNode_eventSetCustomLightShape_Parms, AttributeValue), Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightShape_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightShape_Statics::NewProp_AttributeValue_MetaData)) }; // 2181757507
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightShape_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventSetCustomLightShape_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightShape_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventSetCustomLightShape_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightShape_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightShape_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventSetCustomLightShape_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightShape_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventSetCustomLightShape_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightShape_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightShape_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightShape_Statics::NewProp_AttributeValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightShape_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightShape_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightShape_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightShape_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightShape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightNode, nullptr, "SetCustomLightShape", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightShape_Statics::InterchangeDatasmithAreaLightNode_eventSetCustomLightShape_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightShape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightShape_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightShape_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightShape_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightShape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightShape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightType_Statics
	{
		struct InterchangeDatasmithAreaLightNode_eventSetCustomLightType_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightType_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightType_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightType_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightNode_eventSetCustomLightType_Parms, AttributeValue), Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightType_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightType_Statics::NewProp_AttributeValue_MetaData)) }; // 4169612036
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightType_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventSetCustomLightType_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightType_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventSetCustomLightType_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightType_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventSetCustomLightType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventSetCustomLightType_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightType_Statics::NewProp_AttributeValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightType_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightType_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightNode, nullptr, "SetCustomLightType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightType_Statics::InterchangeDatasmithAreaLightNode_eventSetCustomLightType_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomRotation_Statics
	{
		struct InterchangeDatasmithAreaLightNode_eventSetCustomRotation_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomRotation_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomRotation_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightNode_eventSetCustomRotation_Parms, AttributeValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomRotation_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomRotation_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomRotation_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventSetCustomRotation_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomRotation_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventSetCustomRotation_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomRotation_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventSetCustomRotation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventSetCustomRotation_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomRotation_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomRotation_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightNode, nullptr, "SetCustomRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomRotation_Statics::InterchangeDatasmithAreaLightNode_eventSetCustomRotation_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceLength_Statics
	{
		struct InterchangeDatasmithAreaLightNode_eventSetCustomSourceLength_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceLength_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceLength_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightNode_eventSetCustomSourceLength_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceLength_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceLength_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceLength_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventSetCustomSourceLength_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceLength_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventSetCustomSourceLength_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceLength_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceLength_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventSetCustomSourceLength_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventSetCustomSourceLength_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceLength_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceLength_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceLength_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightNode, nullptr, "SetCustomSourceLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceLength_Statics::InterchangeDatasmithAreaLightNode_eventSetCustomSourceLength_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceRadius_Statics
	{
		struct InterchangeDatasmithAreaLightNode_eventSetCustomSourceRadius_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceRadius_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceRadius_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightNode_eventSetCustomSourceRadius_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceRadius_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceRadius_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceRadius_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventSetCustomSourceRadius_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceRadius_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventSetCustomSourceRadius_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceRadius_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceRadius_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventSetCustomSourceRadius_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventSetCustomSourceRadius_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceRadius_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceRadius_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceRadius_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightNode, nullptr, "SetCustomSourceRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceRadius_Statics::InterchangeDatasmithAreaLightNode_eventSetCustomSourceRadius_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightInnerAngle_Statics
	{
		struct InterchangeDatasmithAreaLightNode_eventSetCustomSpotlightInnerAngle_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightInnerAngle_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightInnerAngle_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightNode_eventSetCustomSpotlightInnerAngle_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightInnerAngle_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightInnerAngle_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightInnerAngle_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventSetCustomSpotlightInnerAngle_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightInnerAngle_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventSetCustomSpotlightInnerAngle_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightInnerAngle_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightInnerAngle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventSetCustomSpotlightInnerAngle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightInnerAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventSetCustomSpotlightInnerAngle_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightInnerAngle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightInnerAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightInnerAngle_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightInnerAngle_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightInnerAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightInnerAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightInnerAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightNode, nullptr, "SetCustomSpotlightInnerAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightInnerAngle_Statics::InterchangeDatasmithAreaLightNode_eventSetCustomSpotlightInnerAngle_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightInnerAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightInnerAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightInnerAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightInnerAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightInnerAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightInnerAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightOuterAngle_Statics
	{
		struct InterchangeDatasmithAreaLightNode_eventSetCustomSpotlightOuterAngle_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightOuterAngle_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightOuterAngle_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeDatasmithAreaLightNode_eventSetCustomSpotlightOuterAngle_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightOuterAngle_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightOuterAngle_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightOuterAngle_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventSetCustomSpotlightOuterAngle_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightOuterAngle_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventSetCustomSpotlightOuterAngle_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightOuterAngle_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightOuterAngle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventSetCustomSpotlightOuterAngle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightOuterAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventSetCustomSpotlightOuterAngle_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightOuterAngle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightOuterAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightOuterAngle_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightOuterAngle_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightOuterAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightOuterAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightOuterAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightNode, nullptr, "SetCustomSpotlightOuterAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightOuterAngle_Statics::InterchangeDatasmithAreaLightNode_eventSetCustomSpotlightOuterAngle_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightOuterAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightOuterAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightOuterAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightOuterAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightOuterAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightOuterAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomUseIESBrightness_Statics
	{
		struct InterchangeDatasmithAreaLightNode_eventSetCustomUseIESBrightness_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomUseIESBrightness_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomUseIESBrightness_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventSetCustomUseIESBrightness_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomUseIESBrightness_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventSetCustomUseIESBrightness_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomUseIESBrightness_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomUseIESBrightness_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomUseIESBrightness_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomUseIESBrightness_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventSetCustomUseIESBrightness_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomUseIESBrightness_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventSetCustomUseIESBrightness_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomUseIESBrightness_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomUseIESBrightness_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeDatasmithAreaLightNode_eventSetCustomUseIESBrightness_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomUseIESBrightness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeDatasmithAreaLightNode_eventSetCustomUseIESBrightness_Parms), &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomUseIESBrightness_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomUseIESBrightness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomUseIESBrightness_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomUseIESBrightness_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomUseIESBrightness_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomUseIESBrightness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Datasmith" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomUseIESBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeDatasmithAreaLightNode, nullptr, "SetCustomUseIESBrightness", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomUseIESBrightness_Statics::InterchangeDatasmithAreaLightNode_eventSetCustomUseIESBrightness_Parms), Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomUseIESBrightness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomUseIESBrightness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomUseIESBrightness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomUseIESBrightness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomUseIESBrightness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomUseIESBrightness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeDatasmithAreaLightNode);
	UClass* Z_Construct_UClass_UInterchangeDatasmithAreaLightNode_NoRegister()
	{
		return UInterchangeDatasmithAreaLightNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeDatasmithAreaLightNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeDatasmithAreaLightNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeLightNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithInterchange,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeDatasmithAreaLightNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomColor, "GetCustomColor" }, // 3561844099
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomDimensions, "GetCustomDimensions" }, // 3878507447
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomIESBrightnessScale, "GetCustomIESBrightnessScale" }, // 558376428
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightShape, "GetCustomLightShape" }, // 3218831337
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomLightType, "GetCustomLightType" }, // 659810928
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomRotation, "GetCustomRotation" }, // 1117019681
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceLength, "GetCustomSourceLength" }, // 2232986761
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSourceRadius, "GetCustomSourceRadius" }, // 2187450384
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightInnerAngle, "GetCustomSpotlightInnerAngle" }, // 589405602
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomSpotlightOuterAngle, "GetCustomSpotlightOuterAngle" }, // 1537901353
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_GetCustomUseIESBrightness, "GetCustomUseIESBrightness" }, // 210009377
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomColor, "SetCustomColor" }, // 841410726
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomDimensions, "SetCustomDimensions" }, // 2532215972
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomIESBrightnessScale, "SetCustomIESBrightnessScale" }, // 4118349288
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightShape, "SetCustomLightShape" }, // 798471340
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomLightType, "SetCustomLightType" }, // 3331418510
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomRotation, "SetCustomRotation" }, // 2854535776
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceLength, "SetCustomSourceLength" }, // 1208467931
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSourceRadius, "SetCustomSourceRadius" }, // 2879825214
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightInnerAngle, "SetCustomSpotlightInnerAngle" }, // 1713182925
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomSpotlightOuterAngle, "SetCustomSpotlightOuterAngle" }, // 239990071
		{ &Z_Construct_UFunction_UInterchangeDatasmithAreaLightNode_SetCustomUseIESBrightness, "SetCustomUseIESBrightness" }, // 3539667229
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeDatasmithAreaLightNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeDatasmithAreaLightNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithAreaLightNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeDatasmithAreaLightNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeDatasmithAreaLightNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeDatasmithAreaLightNode_Statics::ClassParams = {
		&UInterchangeDatasmithAreaLightNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeDatasmithAreaLightNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDatasmithAreaLightNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeDatasmithAreaLightNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeDatasmithAreaLightNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeDatasmithAreaLightNode.OuterSingleton, Z_Construct_UClass_UInterchangeDatasmithAreaLightNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeDatasmithAreaLightNode.OuterSingleton;
	}
	template<> DATASMITHINTERCHANGE_API UClass* StaticClass<UInterchangeDatasmithAreaLightNode>()
	{
		return UInterchangeDatasmithAreaLightNode::StaticClass();
	}
	UInterchangeDatasmithAreaLightNode::UInterchangeDatasmithAreaLightNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeDatasmithAreaLightNode);
	UInterchangeDatasmithAreaLightNode::~UInterchangeDatasmithAreaLightNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeDatasmithAreaLightNode, UInterchangeDatasmithAreaLightNode::StaticClass, TEXT("UInterchangeDatasmithAreaLightNode"), &Z_Registration_Info_UClass_UInterchangeDatasmithAreaLightNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeDatasmithAreaLightNode), 278721896U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightNode_h_633456559(TEXT("/Script/DatasmithInterchange"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
