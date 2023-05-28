// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeLightFactoryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeLightFactoryNode() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightUnits();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeActorFactoryNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeBaseLightFactoryNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeBaseLightFactoryNode_NoRegister();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeDirectionalLightFactoryNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeDirectionalLightFactoryNode_NoRegister();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeLightFactoryNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeLightFactoryNode_NoRegister();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangePointLightFactoryNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangePointLightFactoryNode_NoRegister();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeRectLightFactoryNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeRectLightFactoryNode_NoRegister();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeSpotLightFactoryNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeSpotLightFactoryNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References
	DEFINE_FUNCTION(UInterchangeBaseLightFactoryNode::execSetCustomUseTemperature)
	{
		P_GET_UBOOL(Z_Param_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomUseTemperature(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeBaseLightFactoryNode::execGetCustomUseTemperature)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomUseTemperature(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeBaseLightFactoryNode::execSetCustomTemperature)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomTemperature(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeBaseLightFactoryNode::execGetCustomTemperature)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomTemperature(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeBaseLightFactoryNode::execSetCustomIntensity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomIntensity(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeBaseLightFactoryNode::execGetCustomIntensity)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomIntensity(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeBaseLightFactoryNode::execSetCustomLightColor)
	{
		P_GET_STRUCT_REF(FColor,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomLightColor(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeBaseLightFactoryNode::execGetCustomLightColor)
	{
		P_GET_STRUCT_REF(FColor,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomLightColor(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	void UInterchangeBaseLightFactoryNode::StaticRegisterNativesUInterchangeBaseLightFactoryNode()
	{
		UClass* Class = UInterchangeBaseLightFactoryNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomIntensity", &UInterchangeBaseLightFactoryNode::execGetCustomIntensity },
			{ "GetCustomLightColor", &UInterchangeBaseLightFactoryNode::execGetCustomLightColor },
			{ "GetCustomTemperature", &UInterchangeBaseLightFactoryNode::execGetCustomTemperature },
			{ "GetCustomUseTemperature", &UInterchangeBaseLightFactoryNode::execGetCustomUseTemperature },
			{ "SetCustomIntensity", &UInterchangeBaseLightFactoryNode::execSetCustomIntensity },
			{ "SetCustomLightColor", &UInterchangeBaseLightFactoryNode::execSetCustomLightColor },
			{ "SetCustomTemperature", &UInterchangeBaseLightFactoryNode::execSetCustomTemperature },
			{ "SetCustomUseTemperature", &UInterchangeBaseLightFactoryNode::execSetCustomUseTemperature },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity_Statics
	{
		struct InterchangeBaseLightFactoryNode_eventGetCustomIntensity_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeBaseLightFactoryNode_eventGetCustomIntensity_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeBaseLightFactoryNode_eventGetCustomIntensity_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeBaseLightFactoryNode_eventGetCustomIntensity_Parms), &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseLightFactoryNode, nullptr, "GetCustomIntensity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity_Statics::InterchangeBaseLightFactoryNode_eventGetCustomIntensity_Parms), Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor_Statics
	{
		struct InterchangeBaseLightFactoryNode_eventGetCustomLightColor_Parms
		{
			FColor AttributeValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeBaseLightFactoryNode_eventGetCustomLightColor_Parms, AttributeValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeBaseLightFactoryNode_eventGetCustomLightColor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeBaseLightFactoryNode_eventGetCustomLightColor_Parms), &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseLightFactoryNode, nullptr, "GetCustomLightColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor_Statics::InterchangeBaseLightFactoryNode_eventGetCustomLightColor_Parms), Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature_Statics
	{
		struct InterchangeBaseLightFactoryNode_eventGetCustomTemperature_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeBaseLightFactoryNode_eventGetCustomTemperature_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeBaseLightFactoryNode_eventGetCustomTemperature_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeBaseLightFactoryNode_eventGetCustomTemperature_Parms), &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseLightFactoryNode, nullptr, "GetCustomTemperature", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature_Statics::InterchangeBaseLightFactoryNode_eventGetCustomTemperature_Parms), Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics
	{
		struct InterchangeBaseLightFactoryNode_eventGetCustomUseTemperature_Parms
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
	void Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeBaseLightFactoryNode_eventGetCustomUseTemperature_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeBaseLightFactoryNode_eventGetCustomUseTemperature_Parms), &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeBaseLightFactoryNode_eventGetCustomUseTemperature_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeBaseLightFactoryNode_eventGetCustomUseTemperature_Parms), &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseLightFactoryNode, nullptr, "GetCustomUseTemperature", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::InterchangeBaseLightFactoryNode_eventGetCustomUseTemperature_Parms), Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics
	{
		struct InterchangeBaseLightFactoryNode_eventSetCustomIntensity_Parms
		{
			float AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeBaseLightFactoryNode_eventSetCustomIntensity_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeBaseLightFactoryNode_eventSetCustomIntensity_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeBaseLightFactoryNode_eventSetCustomIntensity_Parms), &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeBaseLightFactoryNode_eventSetCustomIntensity_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeBaseLightFactoryNode_eventSetCustomIntensity_Parms), &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseLightFactoryNode, nullptr, "SetCustomIntensity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::InterchangeBaseLightFactoryNode_eventSetCustomIntensity_Parms), Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics
	{
		struct InterchangeBaseLightFactoryNode_eventSetCustomLightColor_Parms
		{
			FColor AttributeValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeBaseLightFactoryNode_eventSetCustomLightColor_Parms, AttributeValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeBaseLightFactoryNode_eventSetCustomLightColor_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeBaseLightFactoryNode_eventSetCustomLightColor_Parms), &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeBaseLightFactoryNode_eventSetCustomLightColor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeBaseLightFactoryNode_eventSetCustomLightColor_Parms), &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseLightFactoryNode, nullptr, "SetCustomLightColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::InterchangeBaseLightFactoryNode_eventSetCustomLightColor_Parms), Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics
	{
		struct InterchangeBaseLightFactoryNode_eventSetCustomTemperature_Parms
		{
			float AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeBaseLightFactoryNode_eventSetCustomTemperature_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeBaseLightFactoryNode_eventSetCustomTemperature_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeBaseLightFactoryNode_eventSetCustomTemperature_Parms), &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeBaseLightFactoryNode_eventSetCustomTemperature_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeBaseLightFactoryNode_eventSetCustomTemperature_Parms), &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseLightFactoryNode, nullptr, "SetCustomTemperature", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::InterchangeBaseLightFactoryNode_eventSetCustomTemperature_Parms), Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics
	{
		struct InterchangeBaseLightFactoryNode_eventSetCustomUseTemperature_Parms
		{
			bool AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
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
	void Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeBaseLightFactoryNode_eventSetCustomUseTemperature_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeBaseLightFactoryNode_eventSetCustomUseTemperature_Parms), &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeBaseLightFactoryNode_eventSetCustomUseTemperature_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeBaseLightFactoryNode_eventSetCustomUseTemperature_Parms), &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeBaseLightFactoryNode_eventSetCustomUseTemperature_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeBaseLightFactoryNode_eventSetCustomUseTemperature_Parms), &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseLightFactoryNode, nullptr, "SetCustomUseTemperature", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::InterchangeBaseLightFactoryNode_eventSetCustomUseTemperature_Parms), Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeBaseLightFactoryNode);
	UClass* Z_Construct_UClass_UInterchangeBaseLightFactoryNode_NoRegister()
	{
		return UInterchangeBaseLightFactoryNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeBaseLightFactoryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeBaseLightFactoryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeActorFactoryNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeBaseLightFactoryNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomIntensity, "GetCustomIntensity" }, // 3936366363
		{ &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomLightColor, "GetCustomLightColor" }, // 2538663736
		{ &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomTemperature, "GetCustomTemperature" }, // 3953641569
		{ &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_GetCustomUseTemperature, "GetCustomUseTemperature" }, // 3929471375
		{ &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomIntensity, "SetCustomIntensity" }, // 3904637325
		{ &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomLightColor, "SetCustomLightColor" }, // 1615042170
		{ &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomTemperature, "SetCustomTemperature" }, // 3821346643
		{ &Z_Construct_UFunction_UInterchangeBaseLightFactoryNode_SetCustomUseTemperature, "SetCustomUseTemperature" }, // 2387437113
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeBaseLightFactoryNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeLightFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeBaseLightFactoryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeBaseLightFactoryNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeBaseLightFactoryNode_Statics::ClassParams = {
		&UInterchangeBaseLightFactoryNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeBaseLightFactoryNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeBaseLightFactoryNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeBaseLightFactoryNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeBaseLightFactoryNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeBaseLightFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeBaseLightFactoryNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeBaseLightFactoryNode.OuterSingleton;
	}
	template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeBaseLightFactoryNode>()
	{
		return UInterchangeBaseLightFactoryNode::StaticClass();
	}
	UInterchangeBaseLightFactoryNode::UInterchangeBaseLightFactoryNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeBaseLightFactoryNode);
	UInterchangeBaseLightFactoryNode::~UInterchangeBaseLightFactoryNode() {}
	void UInterchangeDirectionalLightFactoryNode::StaticRegisterNativesUInterchangeDirectionalLightFactoryNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeDirectionalLightFactoryNode);
	UClass* Z_Construct_UClass_UInterchangeDirectionalLightFactoryNode_NoRegister()
	{
		return UInterchangeDirectionalLightFactoryNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeDirectionalLightFactoryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeDirectionalLightFactoryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeBaseLightFactoryNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeDirectionalLightFactoryNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeLightFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeDirectionalLightFactoryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeDirectionalLightFactoryNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeDirectionalLightFactoryNode_Statics::ClassParams = {
		&UInterchangeDirectionalLightFactoryNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeDirectionalLightFactoryNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDirectionalLightFactoryNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeDirectionalLightFactoryNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeDirectionalLightFactoryNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeDirectionalLightFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeDirectionalLightFactoryNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeDirectionalLightFactoryNode.OuterSingleton;
	}
	template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeDirectionalLightFactoryNode>()
	{
		return UInterchangeDirectionalLightFactoryNode::StaticClass();
	}
	UInterchangeDirectionalLightFactoryNode::UInterchangeDirectionalLightFactoryNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeDirectionalLightFactoryNode);
	UInterchangeDirectionalLightFactoryNode::~UInterchangeDirectionalLightFactoryNode() {}
	DEFINE_FUNCTION(UInterchangeLightFactoryNode::execSetCustomIESTexture)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomIESTexture(Z_Param_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeLightFactoryNode::execGetCustomIESTexture)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomIESTexture(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeLightFactoryNode::execSetCustomAttenuationRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomAttenuationRadius(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeLightFactoryNode::execGetCustomAttenuationRadius)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomAttenuationRadius(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeLightFactoryNode::execSetCustomIntensityUnits)
	{
		P_GET_ENUM(ELightUnits,Z_Param_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomIntensityUnits(ELightUnits(Z_Param_AttributeValue),Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeLightFactoryNode::execGetCustomIntensityUnits)
	{
		P_GET_ENUM_REF(ELightUnits,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomIntensityUnits((ELightUnits&)(Z_Param_Out_AttributeValue));
		P_NATIVE_END;
	}
	void UInterchangeLightFactoryNode::StaticRegisterNativesUInterchangeLightFactoryNode()
	{
		UClass* Class = UInterchangeLightFactoryNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomAttenuationRadius", &UInterchangeLightFactoryNode::execGetCustomAttenuationRadius },
			{ "GetCustomIESTexture", &UInterchangeLightFactoryNode::execGetCustomIESTexture },
			{ "GetCustomIntensityUnits", &UInterchangeLightFactoryNode::execGetCustomIntensityUnits },
			{ "SetCustomAttenuationRadius", &UInterchangeLightFactoryNode::execSetCustomAttenuationRadius },
			{ "SetCustomIESTexture", &UInterchangeLightFactoryNode::execSetCustomIESTexture },
			{ "SetCustomIntensityUnits", &UInterchangeLightFactoryNode::execSetCustomIntensityUnits },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Statics
	{
		struct InterchangeLightFactoryNode_eventGetCustomAttenuationRadius_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeLightFactoryNode_eventGetCustomAttenuationRadius_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeLightFactoryNode_eventGetCustomAttenuationRadius_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeLightFactoryNode_eventGetCustomAttenuationRadius_Parms), &Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLightFactoryNode, nullptr, "GetCustomAttenuationRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Statics::InterchangeLightFactoryNode_eventGetCustomAttenuationRadius_Parms), Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture_Statics
	{
		struct InterchangeLightFactoryNode_eventGetCustomIESTexture_Parms
		{
			FString AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeLightFactoryNode_eventGetCustomIESTexture_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeLightFactoryNode_eventGetCustomIESTexture_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeLightFactoryNode_eventGetCustomIESTexture_Parms), &Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLightFactoryNode, nullptr, "GetCustomIESTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture_Statics::InterchangeLightFactoryNode_eventGetCustomIESTexture_Parms), Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics
	{
		struct InterchangeLightFactoryNode_eventGetCustomIntensityUnits_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeLightFactoryNode_eventGetCustomIntensityUnits_Parms, AttributeValue), Z_Construct_UEnum_Engine_ELightUnits, METADATA_PARAMS(nullptr, 0) }; // 117192790
	void Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeLightFactoryNode_eventGetCustomIntensityUnits_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeLightFactoryNode_eventGetCustomIntensityUnits_Parms), &Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::NewProp_AttributeValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLightFactoryNode, nullptr, "GetCustomIntensityUnits", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::InterchangeLightFactoryNode_eventGetCustomIntensityUnits_Parms), Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics
	{
		struct InterchangeLightFactoryNode_eventSetCustomAttenuationRadius_Parms
		{
			float AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeLightFactoryNode_eventSetCustomAttenuationRadius_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeLightFactoryNode_eventSetCustomAttenuationRadius_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeLightFactoryNode_eventSetCustomAttenuationRadius_Parms), &Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeLightFactoryNode_eventSetCustomAttenuationRadius_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeLightFactoryNode_eventSetCustomAttenuationRadius_Parms), &Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLightFactoryNode, nullptr, "SetCustomAttenuationRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::InterchangeLightFactoryNode_eventSetCustomAttenuationRadius_Parms), Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics
	{
		struct InterchangeLightFactoryNode_eventSetCustomIESTexture_Parms
		{
			FString AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeLightFactoryNode_eventSetCustomIESTexture_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeLightFactoryNode_eventSetCustomIESTexture_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeLightFactoryNode_eventSetCustomIESTexture_Parms), &Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLightFactoryNode, nullptr, "SetCustomIESTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::InterchangeLightFactoryNode_eventSetCustomIESTexture_Parms), Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics
	{
		struct InterchangeLightFactoryNode_eventSetCustomIntensityUnits_Parms
		{
			ELightUnits AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue_Underlying;
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeLightFactoryNode_eventSetCustomIntensityUnits_Parms, AttributeValue), Z_Construct_UEnum_Engine_ELightUnits, METADATA_PARAMS(nullptr, 0) }; // 117192790
	void Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeLightFactoryNode_eventSetCustomIntensityUnits_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeLightFactoryNode_eventSetCustomIntensityUnits_Parms), &Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeLightFactoryNode_eventSetCustomIntensityUnits_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeLightFactoryNode_eventSetCustomIntensityUnits_Parms), &Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_AttributeValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LightFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLightFactoryNode, nullptr, "SetCustomIntensityUnits", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::InterchangeLightFactoryNode_eventSetCustomIntensityUnits_Parms), Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeLightFactoryNode);
	UClass* Z_Construct_UClass_UInterchangeLightFactoryNode_NoRegister()
	{
		return UInterchangeLightFactoryNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeLightFactoryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeLightFactoryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeBaseLightFactoryNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeLightFactoryNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomAttenuationRadius, "GetCustomAttenuationRadius" }, // 2618087585
		{ &Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIESTexture, "GetCustomIESTexture" }, // 3662340567
		{ &Z_Construct_UFunction_UInterchangeLightFactoryNode_GetCustomIntensityUnits, "GetCustomIntensityUnits" }, // 444647279
		{ &Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomAttenuationRadius, "SetCustomAttenuationRadius" }, // 2026347005
		{ &Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIESTexture, "SetCustomIESTexture" }, // 1493746058
		{ &Z_Construct_UFunction_UInterchangeLightFactoryNode_SetCustomIntensityUnits, "SetCustomIntensityUnits" }, // 1492964404
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeLightFactoryNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeLightFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeLightFactoryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeLightFactoryNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeLightFactoryNode_Statics::ClassParams = {
		&UInterchangeLightFactoryNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeLightFactoryNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeLightFactoryNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeLightFactoryNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeLightFactoryNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeLightFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeLightFactoryNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeLightFactoryNode.OuterSingleton;
	}
	template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeLightFactoryNode>()
	{
		return UInterchangeLightFactoryNode::StaticClass();
	}
	UInterchangeLightFactoryNode::UInterchangeLightFactoryNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeLightFactoryNode);
	UInterchangeLightFactoryNode::~UInterchangeLightFactoryNode() {}
	DEFINE_FUNCTION(UInterchangeRectLightFactoryNode::execSetCustomSourceHeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomSourceHeight(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeRectLightFactoryNode::execGetCustomSourceHeight)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomSourceHeight(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeRectLightFactoryNode::execSetCustomSourceWidth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomSourceWidth(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeRectLightFactoryNode::execGetCustomSourceWidth)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomSourceWidth(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	void UInterchangeRectLightFactoryNode::StaticRegisterNativesUInterchangeRectLightFactoryNode()
	{
		UClass* Class = UInterchangeRectLightFactoryNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomSourceHeight", &UInterchangeRectLightFactoryNode::execGetCustomSourceHeight },
			{ "GetCustomSourceWidth", &UInterchangeRectLightFactoryNode::execGetCustomSourceWidth },
			{ "SetCustomSourceHeight", &UInterchangeRectLightFactoryNode::execSetCustomSourceHeight },
			{ "SetCustomSourceWidth", &UInterchangeRectLightFactoryNode::execSetCustomSourceWidth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Statics
	{
		struct InterchangeRectLightFactoryNode_eventGetCustomSourceHeight_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeRectLightFactoryNode_eventGetCustomSourceHeight_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeRectLightFactoryNode_eventGetCustomSourceHeight_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeRectLightFactoryNode_eventGetCustomSourceHeight_Parms), &Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | RectLightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeRectLightFactoryNode, nullptr, "GetCustomSourceHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Statics::InterchangeRectLightFactoryNode_eventGetCustomSourceHeight_Parms), Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Statics
	{
		struct InterchangeRectLightFactoryNode_eventGetCustomSourceWidth_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeRectLightFactoryNode_eventGetCustomSourceWidth_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeRectLightFactoryNode_eventGetCustomSourceWidth_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeRectLightFactoryNode_eventGetCustomSourceWidth_Parms), &Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | RectLightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeRectLightFactoryNode, nullptr, "GetCustomSourceWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Statics::InterchangeRectLightFactoryNode_eventGetCustomSourceWidth_Parms), Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics
	{
		struct InterchangeRectLightFactoryNode_eventSetCustomSourceHeight_Parms
		{
			float AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeRectLightFactoryNode_eventSetCustomSourceHeight_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeRectLightFactoryNode_eventSetCustomSourceHeight_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeRectLightFactoryNode_eventSetCustomSourceHeight_Parms), &Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeRectLightFactoryNode_eventSetCustomSourceHeight_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeRectLightFactoryNode_eventSetCustomSourceHeight_Parms), &Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | RectLightFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeRectLightFactoryNode, nullptr, "SetCustomSourceHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::InterchangeRectLightFactoryNode_eventSetCustomSourceHeight_Parms), Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics
	{
		struct InterchangeRectLightFactoryNode_eventSetCustomSourceWidth_Parms
		{
			float AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeRectLightFactoryNode_eventSetCustomSourceWidth_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeRectLightFactoryNode_eventSetCustomSourceWidth_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeRectLightFactoryNode_eventSetCustomSourceWidth_Parms), &Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeRectLightFactoryNode_eventSetCustomSourceWidth_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeRectLightFactoryNode_eventSetCustomSourceWidth_Parms), &Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | RectLightFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeRectLightFactoryNode, nullptr, "SetCustomSourceWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::InterchangeRectLightFactoryNode_eventSetCustomSourceWidth_Parms), Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeRectLightFactoryNode);
	UClass* Z_Construct_UClass_UInterchangeRectLightFactoryNode_NoRegister()
	{
		return UInterchangeRectLightFactoryNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeRectLightFactoryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeRectLightFactoryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeLightFactoryNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeRectLightFactoryNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceHeight, "GetCustomSourceHeight" }, // 1259902400
		{ &Z_Construct_UFunction_UInterchangeRectLightFactoryNode_GetCustomSourceWidth, "GetCustomSourceWidth" }, // 1207153131
		{ &Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceHeight, "SetCustomSourceHeight" }, // 1595241821
		{ &Z_Construct_UFunction_UInterchangeRectLightFactoryNode_SetCustomSourceWidth, "SetCustomSourceWidth" }, // 3423058126
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeRectLightFactoryNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeLightFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeRectLightFactoryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeRectLightFactoryNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeRectLightFactoryNode_Statics::ClassParams = {
		&UInterchangeRectLightFactoryNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeRectLightFactoryNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeRectLightFactoryNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeRectLightFactoryNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeRectLightFactoryNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeRectLightFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeRectLightFactoryNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeRectLightFactoryNode.OuterSingleton;
	}
	template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeRectLightFactoryNode>()
	{
		return UInterchangeRectLightFactoryNode::StaticClass();
	}
	UInterchangeRectLightFactoryNode::UInterchangeRectLightFactoryNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeRectLightFactoryNode);
	UInterchangeRectLightFactoryNode::~UInterchangeRectLightFactoryNode() {}
	DEFINE_FUNCTION(UInterchangePointLightFactoryNode::execSetCustomLightFalloffExponent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomLightFalloffExponent(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePointLightFactoryNode::execGetCustomLightFalloffExponent)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomLightFalloffExponent(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePointLightFactoryNode::execSetCustomUseInverseSquaredFalloff)
	{
		P_GET_UBOOL(Z_Param_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomUseInverseSquaredFalloff(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePointLightFactoryNode::execGetCustomUseInverseSquaredFalloff)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomUseInverseSquaredFalloff(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	void UInterchangePointLightFactoryNode::StaticRegisterNativesUInterchangePointLightFactoryNode()
	{
		UClass* Class = UInterchangePointLightFactoryNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomLightFalloffExponent", &UInterchangePointLightFactoryNode::execGetCustomLightFalloffExponent },
			{ "GetCustomUseInverseSquaredFalloff", &UInterchangePointLightFactoryNode::execGetCustomUseInverseSquaredFalloff },
			{ "SetCustomLightFalloffExponent", &UInterchangePointLightFactoryNode::execSetCustomLightFalloffExponent },
			{ "SetCustomUseInverseSquaredFalloff", &UInterchangePointLightFactoryNode::execSetCustomUseInverseSquaredFalloff },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Statics
	{
		struct InterchangePointLightFactoryNode_eventGetCustomLightFalloffExponent_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePointLightFactoryNode_eventGetCustomLightFalloffExponent_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangePointLightFactoryNode_eventGetCustomLightFalloffExponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangePointLightFactoryNode_eventGetCustomLightFalloffExponent_Parms), &Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | PointLightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePointLightFactoryNode, nullptr, "GetCustomLightFalloffExponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Statics::InterchangePointLightFactoryNode_eventGetCustomLightFalloffExponent_Parms), Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics
	{
		struct InterchangePointLightFactoryNode_eventGetCustomUseInverseSquaredFalloff_Parms
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
	void Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangePointLightFactoryNode_eventGetCustomUseInverseSquaredFalloff_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangePointLightFactoryNode_eventGetCustomUseInverseSquaredFalloff_Parms), &Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangePointLightFactoryNode_eventGetCustomUseInverseSquaredFalloff_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangePointLightFactoryNode_eventGetCustomUseInverseSquaredFalloff_Parms), &Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | PointLightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePointLightFactoryNode, nullptr, "GetCustomUseInverseSquaredFalloff", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::InterchangePointLightFactoryNode_eventGetCustomUseInverseSquaredFalloff_Parms), Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics
	{
		struct InterchangePointLightFactoryNode_eventSetCustomLightFalloffExponent_Parms
		{
			float AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePointLightFactoryNode_eventSetCustomLightFalloffExponent_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangePointLightFactoryNode_eventSetCustomLightFalloffExponent_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangePointLightFactoryNode_eventSetCustomLightFalloffExponent_Parms), &Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangePointLightFactoryNode_eventSetCustomLightFalloffExponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangePointLightFactoryNode_eventSetCustomLightFalloffExponent_Parms), &Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | PointLightFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePointLightFactoryNode, nullptr, "SetCustomLightFalloffExponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::InterchangePointLightFactoryNode_eventSetCustomLightFalloffExponent_Parms), Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics
	{
		struct InterchangePointLightFactoryNode_eventSetCustomUseInverseSquaredFalloff_Parms
		{
			bool AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
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
	void Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangePointLightFactoryNode_eventSetCustomUseInverseSquaredFalloff_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangePointLightFactoryNode_eventSetCustomUseInverseSquaredFalloff_Parms), &Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangePointLightFactoryNode_eventSetCustomUseInverseSquaredFalloff_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangePointLightFactoryNode_eventSetCustomUseInverseSquaredFalloff_Parms), &Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangePointLightFactoryNode_eventSetCustomUseInverseSquaredFalloff_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangePointLightFactoryNode_eventSetCustomUseInverseSquaredFalloff_Parms), &Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | PointLightFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePointLightFactoryNode, nullptr, "SetCustomUseInverseSquaredFalloff", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::InterchangePointLightFactoryNode_eventSetCustomUseInverseSquaredFalloff_Parms), Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangePointLightFactoryNode);
	UClass* Z_Construct_UClass_UInterchangePointLightFactoryNode_NoRegister()
	{
		return UInterchangePointLightFactoryNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangePointLightFactoryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangePointLightFactoryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeLightFactoryNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangePointLightFactoryNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomLightFalloffExponent, "GetCustomLightFalloffExponent" }, // 2186596186
		{ &Z_Construct_UFunction_UInterchangePointLightFactoryNode_GetCustomUseInverseSquaredFalloff, "GetCustomUseInverseSquaredFalloff" }, // 3512704599
		{ &Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomLightFalloffExponent, "SetCustomLightFalloffExponent" }, // 879285567
		{ &Z_Construct_UFunction_UInterchangePointLightFactoryNode_SetCustomUseInverseSquaredFalloff, "SetCustomUseInverseSquaredFalloff" }, // 4117609313
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangePointLightFactoryNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeLightFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangePointLightFactoryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangePointLightFactoryNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangePointLightFactoryNode_Statics::ClassParams = {
		&UInterchangePointLightFactoryNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangePointLightFactoryNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePointLightFactoryNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangePointLightFactoryNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangePointLightFactoryNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangePointLightFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangePointLightFactoryNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangePointLightFactoryNode.OuterSingleton;
	}
	template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangePointLightFactoryNode>()
	{
		return UInterchangePointLightFactoryNode::StaticClass();
	}
	UInterchangePointLightFactoryNode::UInterchangePointLightFactoryNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangePointLightFactoryNode);
	UInterchangePointLightFactoryNode::~UInterchangePointLightFactoryNode() {}
	DEFINE_FUNCTION(UInterchangeSpotLightFactoryNode::execSetCustomOuterConeAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomOuterConeAngle(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSpotLightFactoryNode::execGetCustomOuterConeAngle)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomOuterConeAngle(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSpotLightFactoryNode::execSetCustomInnerConeAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomInnerConeAngle(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSpotLightFactoryNode::execGetCustomInnerConeAngle)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomInnerConeAngle(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	void UInterchangeSpotLightFactoryNode::StaticRegisterNativesUInterchangeSpotLightFactoryNode()
	{
		UClass* Class = UInterchangeSpotLightFactoryNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomInnerConeAngle", &UInterchangeSpotLightFactoryNode::execGetCustomInnerConeAngle },
			{ "GetCustomOuterConeAngle", &UInterchangeSpotLightFactoryNode::execGetCustomOuterConeAngle },
			{ "SetCustomInnerConeAngle", &UInterchangeSpotLightFactoryNode::execSetCustomInnerConeAngle },
			{ "SetCustomOuterConeAngle", &UInterchangeSpotLightFactoryNode::execSetCustomOuterConeAngle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Statics
	{
		struct InterchangeSpotLightFactoryNode_eventGetCustomInnerConeAngle_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSpotLightFactoryNode_eventGetCustomInnerConeAngle_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSpotLightFactoryNode_eventGetCustomInnerConeAngle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSpotLightFactoryNode_eventGetCustomInnerConeAngle_Parms), &Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SpotLightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSpotLightFactoryNode, nullptr, "GetCustomInnerConeAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Statics::InterchangeSpotLightFactoryNode_eventGetCustomInnerConeAngle_Parms), Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Statics
	{
		struct InterchangeSpotLightFactoryNode_eventGetCustomOuterConeAngle_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSpotLightFactoryNode_eventGetCustomOuterConeAngle_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSpotLightFactoryNode_eventGetCustomOuterConeAngle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSpotLightFactoryNode_eventGetCustomOuterConeAngle_Parms), &Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SpotLightFactory" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSpotLightFactoryNode, nullptr, "GetCustomOuterConeAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Statics::InterchangeSpotLightFactoryNode_eventGetCustomOuterConeAngle_Parms), Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics
	{
		struct InterchangeSpotLightFactoryNode_eventSetCustomInnerConeAngle_Parms
		{
			float AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSpotLightFactoryNode_eventSetCustomInnerConeAngle_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeSpotLightFactoryNode_eventSetCustomInnerConeAngle_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSpotLightFactoryNode_eventSetCustomInnerConeAngle_Parms), &Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSpotLightFactoryNode_eventSetCustomInnerConeAngle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSpotLightFactoryNode_eventSetCustomInnerConeAngle_Parms), &Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SpotLightFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSpotLightFactoryNode, nullptr, "SetCustomInnerConeAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::InterchangeSpotLightFactoryNode_eventSetCustomInnerConeAngle_Parms), Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics
	{
		struct InterchangeSpotLightFactoryNode_eventSetCustomOuterConeAngle_Parms
		{
			float AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSpotLightFactoryNode_eventSetCustomOuterConeAngle_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeSpotLightFactoryNode_eventSetCustomOuterConeAngle_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSpotLightFactoryNode_eventSetCustomOuterConeAngle_Parms), &Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSpotLightFactoryNode_eventSetCustomOuterConeAngle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSpotLightFactoryNode_eventSetCustomOuterConeAngle_Parms), &Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SpotLightFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSpotLightFactoryNode, nullptr, "SetCustomOuterConeAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::InterchangeSpotLightFactoryNode_eventSetCustomOuterConeAngle_Parms), Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeSpotLightFactoryNode);
	UClass* Z_Construct_UClass_UInterchangeSpotLightFactoryNode_NoRegister()
	{
		return UInterchangeSpotLightFactoryNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeSpotLightFactoryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeSpotLightFactoryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangePointLightFactoryNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeSpotLightFactoryNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomInnerConeAngle, "GetCustomInnerConeAngle" }, // 4204970020
		{ &Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_GetCustomOuterConeAngle, "GetCustomOuterConeAngle" }, // 3511914910
		{ &Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomInnerConeAngle, "SetCustomInnerConeAngle" }, // 1199886850
		{ &Z_Construct_UFunction_UInterchangeSpotLightFactoryNode_SetCustomOuterConeAngle, "SetCustomOuterConeAngle" }, // 4061966805
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeSpotLightFactoryNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeLightFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeLightFactoryNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeSpotLightFactoryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeSpotLightFactoryNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeSpotLightFactoryNode_Statics::ClassParams = {
		&UInterchangeSpotLightFactoryNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeSpotLightFactoryNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSpotLightFactoryNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeSpotLightFactoryNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeSpotLightFactoryNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeSpotLightFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeSpotLightFactoryNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeSpotLightFactoryNode.OuterSingleton;
	}
	template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeSpotLightFactoryNode>()
	{
		return UInterchangeSpotLightFactoryNode::StaticClass();
	}
	UInterchangeSpotLightFactoryNode::UInterchangeSpotLightFactoryNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeSpotLightFactoryNode);
	UInterchangeSpotLightFactoryNode::~UInterchangeSpotLightFactoryNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeBaseLightFactoryNode, UInterchangeBaseLightFactoryNode::StaticClass, TEXT("UInterchangeBaseLightFactoryNode"), &Z_Registration_Info_UClass_UInterchangeBaseLightFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeBaseLightFactoryNode), 1112421467U) },
		{ Z_Construct_UClass_UInterchangeDirectionalLightFactoryNode, UInterchangeDirectionalLightFactoryNode::StaticClass, TEXT("UInterchangeDirectionalLightFactoryNode"), &Z_Registration_Info_UClass_UInterchangeDirectionalLightFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeDirectionalLightFactoryNode), 1780271246U) },
		{ Z_Construct_UClass_UInterchangeLightFactoryNode, UInterchangeLightFactoryNode::StaticClass, TEXT("UInterchangeLightFactoryNode"), &Z_Registration_Info_UClass_UInterchangeLightFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeLightFactoryNode), 2686085592U) },
		{ Z_Construct_UClass_UInterchangeRectLightFactoryNode, UInterchangeRectLightFactoryNode::StaticClass, TEXT("UInterchangeRectLightFactoryNode"), &Z_Registration_Info_UClass_UInterchangeRectLightFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeRectLightFactoryNode), 2799672650U) },
		{ Z_Construct_UClass_UInterchangePointLightFactoryNode, UInterchangePointLightFactoryNode::StaticClass, TEXT("UInterchangePointLightFactoryNode"), &Z_Registration_Info_UClass_UInterchangePointLightFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangePointLightFactoryNode), 3680701467U) },
		{ Z_Construct_UClass_UInterchangeSpotLightFactoryNode, UInterchangeSpotLightFactoryNode::StaticClass, TEXT("UInterchangeSpotLightFactoryNode"), &Z_Registration_Info_UClass_UInterchangeSpotLightFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeSpotLightFactoryNode), 2168413174U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_4228378510(TEXT("/Script/InterchangeFactoryNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
