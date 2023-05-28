// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nodes/InterchangeAnimationAPI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeAnimationAPI() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeAnimationAPI();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeAnimationAPI_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeCore();
// End Cross Module References
	DEFINE_FUNCTION(UInterchangeAnimationAPI::execSetCustomNodeTransformPayloadKey)
	{
		P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeBaseNode);
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInterchangeAnimationAPI::SetCustomNodeTransformPayloadKey(Z_Param_InterchangeBaseNode,Z_Param_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimationAPI::execGetCustomNodeTransformPayloadKey)
	{
		P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeBaseNode);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInterchangeAnimationAPI::GetCustomNodeTransformPayloadKey(Z_Param_InterchangeBaseNode,Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimationAPI::execSetCustomNodeTransformAnimationEndTime)
	{
		P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeBaseNode);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInterchangeAnimationAPI::SetCustomNodeTransformAnimationEndTime(Z_Param_InterchangeBaseNode,Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimationAPI::execGetCustomNodeTransformAnimationEndTime)
	{
		P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeBaseNode);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInterchangeAnimationAPI::GetCustomNodeTransformAnimationEndTime(Z_Param_InterchangeBaseNode,Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimationAPI::execSetCustomNodeTransformAnimationStartTime)
	{
		P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeBaseNode);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInterchangeAnimationAPI::SetCustomNodeTransformAnimationStartTime(Z_Param_InterchangeBaseNode,Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimationAPI::execGetCustomNodeTransformAnimationStartTime)
	{
		P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeBaseNode);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInterchangeAnimationAPI::GetCustomNodeTransformAnimationStartTime(Z_Param_InterchangeBaseNode,Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimationAPI::execSetCustomNodeTransformAnimationKeyCount)
	{
		P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeBaseNode);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInterchangeAnimationAPI::SetCustomNodeTransformAnimationKeyCount(Z_Param_InterchangeBaseNode,Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimationAPI::execGetCustomNodeTransformAnimationKeyCount)
	{
		P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeBaseNode);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInterchangeAnimationAPI::GetCustomNodeTransformAnimationKeyCount(Z_Param_InterchangeBaseNode,Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimationAPI::execSetCustomIsNodeTransformAnimated)
	{
		P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeBaseNode);
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInterchangeAnimationAPI::SetCustomIsNodeTransformAnimated(Z_Param_InterchangeBaseNode,Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimationAPI::execGetCustomIsNodeTransformAnimated)
	{
		P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeBaseNode);
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInterchangeAnimationAPI::GetCustomIsNodeTransformAnimated(Z_Param_InterchangeBaseNode,Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	void UInterchangeAnimationAPI::StaticRegisterNativesUInterchangeAnimationAPI()
	{
		UClass* Class = UInterchangeAnimationAPI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomIsNodeTransformAnimated", &UInterchangeAnimationAPI::execGetCustomIsNodeTransformAnimated },
			{ "GetCustomNodeTransformAnimationEndTime", &UInterchangeAnimationAPI::execGetCustomNodeTransformAnimationEndTime },
			{ "GetCustomNodeTransformAnimationKeyCount", &UInterchangeAnimationAPI::execGetCustomNodeTransformAnimationKeyCount },
			{ "GetCustomNodeTransformAnimationStartTime", &UInterchangeAnimationAPI::execGetCustomNodeTransformAnimationStartTime },
			{ "GetCustomNodeTransformPayloadKey", &UInterchangeAnimationAPI::execGetCustomNodeTransformPayloadKey },
			{ "SetCustomIsNodeTransformAnimated", &UInterchangeAnimationAPI::execSetCustomIsNodeTransformAnimated },
			{ "SetCustomNodeTransformAnimationEndTime", &UInterchangeAnimationAPI::execSetCustomNodeTransformAnimationEndTime },
			{ "SetCustomNodeTransformAnimationKeyCount", &UInterchangeAnimationAPI::execSetCustomNodeTransformAnimationKeyCount },
			{ "SetCustomNodeTransformAnimationStartTime", &UInterchangeAnimationAPI::execSetCustomNodeTransformAnimationStartTime },
			{ "SetCustomNodeTransformPayloadKey", &UInterchangeAnimationAPI::execSetCustomNodeTransformPayloadKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomIsNodeTransformAnimated_Statics
	{
		struct InterchangeAnimationAPI_eventGetCustomIsNodeTransformAnimated_Parms
		{
			const UInterchangeBaseNode* InterchangeBaseNode;
			bool AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterchangeBaseNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeBaseNode;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomIsNodeTransformAnimated_Statics::NewProp_InterchangeBaseNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomIsNodeTransformAnimated_Statics::NewProp_InterchangeBaseNode = { "InterchangeBaseNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimationAPI_eventGetCustomIsNodeTransformAnimated_Parms, InterchangeBaseNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomIsNodeTransformAnimated_Statics::NewProp_InterchangeBaseNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomIsNodeTransformAnimated_Statics::NewProp_InterchangeBaseNode_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomIsNodeTransformAnimated_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeAnimationAPI_eventGetCustomIsNodeTransformAnimated_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomIsNodeTransformAnimated_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimationAPI_eventGetCustomIsNodeTransformAnimated_Parms), &Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomIsNodeTransformAnimated_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomIsNodeTransformAnimated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimationAPI_eventGetCustomIsNodeTransformAnimated_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomIsNodeTransformAnimated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimationAPI_eventGetCustomIsNodeTransformAnimated_Parms), &Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomIsNodeTransformAnimated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomIsNodeTransformAnimated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomIsNodeTransformAnimated_Statics::NewProp_InterchangeBaseNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomIsNodeTransformAnimated_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomIsNodeTransformAnimated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomIsNodeTransformAnimated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Scene | Animation" },
		{ "Comment", "/** Get true if the node transform have animation. Return false if the Attribute is not set. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeAnimationAPI.h" },
		{ "ToolTip", "Get true if the node transform have animation. Return false if the Attribute is not set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomIsNodeTransformAnimated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationAPI, nullptr, "GetCustomIsNodeTransformAnimated", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomIsNodeTransformAnimated_Statics::InterchangeAnimationAPI_eventGetCustomIsNodeTransformAnimated_Parms), Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomIsNodeTransformAnimated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomIsNodeTransformAnimated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomIsNodeTransformAnimated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomIsNodeTransformAnimated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomIsNodeTransformAnimated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomIsNodeTransformAnimated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationEndTime_Statics
	{
		struct InterchangeAnimationAPI_eventGetCustomNodeTransformAnimationEndTime_Parms
		{
			const UInterchangeBaseNode* InterchangeBaseNode;
			double AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterchangeBaseNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeBaseNode;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationEndTime_Statics::NewProp_InterchangeBaseNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationEndTime_Statics::NewProp_InterchangeBaseNode = { "InterchangeBaseNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimationAPI_eventGetCustomNodeTransformAnimationEndTime_Parms, InterchangeBaseNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationEndTime_Statics::NewProp_InterchangeBaseNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationEndTime_Statics::NewProp_InterchangeBaseNode_MetaData)) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationEndTime_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimationAPI_eventGetCustomNodeTransformAnimationEndTime_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationEndTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimationAPI_eventGetCustomNodeTransformAnimationEndTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationEndTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimationAPI_eventGetCustomNodeTransformAnimationEndTime_Parms), &Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationEndTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationEndTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationEndTime_Statics::NewProp_InterchangeBaseNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationEndTime_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationEndTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationEndTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Scene | Animation" },
		{ "Comment", "/**\n\x09 * Get the animation end time in second for this node transform.\n\x09 * Return false if the Attribute is not set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeAnimationAPI.h" },
		{ "ToolTip", "Get the animation end time in second for this node transform.\nReturn false if the Attribute is not set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationEndTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationAPI, nullptr, "GetCustomNodeTransformAnimationEndTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationEndTime_Statics::InterchangeAnimationAPI_eventGetCustomNodeTransformAnimationEndTime_Parms), Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationEndTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationEndTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationEndTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationEndTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationEndTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationEndTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationKeyCount_Statics
	{
		struct InterchangeAnimationAPI_eventGetCustomNodeTransformAnimationKeyCount_Parms
		{
			const UInterchangeBaseNode* InterchangeBaseNode;
			int32 AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterchangeBaseNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeBaseNode;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationKeyCount_Statics::NewProp_InterchangeBaseNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationKeyCount_Statics::NewProp_InterchangeBaseNode = { "InterchangeBaseNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimationAPI_eventGetCustomNodeTransformAnimationKeyCount_Parms, InterchangeBaseNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationKeyCount_Statics::NewProp_InterchangeBaseNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationKeyCount_Statics::NewProp_InterchangeBaseNode_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationKeyCount_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimationAPI_eventGetCustomNodeTransformAnimationKeyCount_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationKeyCount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimationAPI_eventGetCustomNodeTransformAnimationKeyCount_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationKeyCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimationAPI_eventGetCustomNodeTransformAnimationKeyCount_Parms), &Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationKeyCount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationKeyCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationKeyCount_Statics::NewProp_InterchangeBaseNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationKeyCount_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationKeyCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationKeyCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Scene | Animation" },
		{ "Comment", "/** Get the node transform animation key count. Return false if the Attribute is not set. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeAnimationAPI.h" },
		{ "ToolTip", "Get the node transform animation key count. Return false if the Attribute is not set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationKeyCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationAPI, nullptr, "GetCustomNodeTransformAnimationKeyCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationKeyCount_Statics::InterchangeAnimationAPI_eventGetCustomNodeTransformAnimationKeyCount_Parms), Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationKeyCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationKeyCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationKeyCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationKeyCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationKeyCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationKeyCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationStartTime_Statics
	{
		struct InterchangeAnimationAPI_eventGetCustomNodeTransformAnimationStartTime_Parms
		{
			const UInterchangeBaseNode* InterchangeBaseNode;
			double AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterchangeBaseNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeBaseNode;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationStartTime_Statics::NewProp_InterchangeBaseNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationStartTime_Statics::NewProp_InterchangeBaseNode = { "InterchangeBaseNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimationAPI_eventGetCustomNodeTransformAnimationStartTime_Parms, InterchangeBaseNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationStartTime_Statics::NewProp_InterchangeBaseNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationStartTime_Statics::NewProp_InterchangeBaseNode_MetaData)) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationStartTime_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimationAPI_eventGetCustomNodeTransformAnimationStartTime_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationStartTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimationAPI_eventGetCustomNodeTransformAnimationStartTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationStartTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimationAPI_eventGetCustomNodeTransformAnimationStartTime_Parms), &Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationStartTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationStartTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationStartTime_Statics::NewProp_InterchangeBaseNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationStartTime_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationStartTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationStartTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Scene | Animation" },
		{ "Comment", "/**\n\x09 * Get the animation start time in second for this node transform.\n\x09 * Return false if the Attribute is not set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeAnimationAPI.h" },
		{ "ToolTip", "Get the animation start time in second for this node transform.\nReturn false if the Attribute is not set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationStartTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationAPI, nullptr, "GetCustomNodeTransformAnimationStartTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationStartTime_Statics::InterchangeAnimationAPI_eventGetCustomNodeTransformAnimationStartTime_Parms), Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationStartTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationStartTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationStartTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationStartTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationStartTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationStartTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformPayloadKey_Statics
	{
		struct InterchangeAnimationAPI_eventGetCustomNodeTransformPayloadKey_Parms
		{
			const UInterchangeBaseNode* InterchangeBaseNode;
			FString AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterchangeBaseNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeBaseNode;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformPayloadKey_Statics::NewProp_InterchangeBaseNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformPayloadKey_Statics::NewProp_InterchangeBaseNode = { "InterchangeBaseNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimationAPI_eventGetCustomNodeTransformPayloadKey_Parms, InterchangeBaseNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformPayloadKey_Statics::NewProp_InterchangeBaseNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformPayloadKey_Statics::NewProp_InterchangeBaseNode_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformPayloadKey_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimationAPI_eventGetCustomNodeTransformPayloadKey_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformPayloadKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimationAPI_eventGetCustomNodeTransformPayloadKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformPayloadKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimationAPI_eventGetCustomNodeTransformPayloadKey_Parms), &Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformPayloadKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformPayloadKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformPayloadKey_Statics::NewProp_InterchangeBaseNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformPayloadKey_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformPayloadKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformPayloadKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Scene | Animation" },
		{ "Comment", "/**\n\x09 * Get the payload key needed to retrieve the animation from the source.\n\x09 * Return false if the Attribute is not set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeAnimationAPI.h" },
		{ "ToolTip", "Get the payload key needed to retrieve the animation from the source.\nReturn false if the Attribute is not set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformPayloadKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationAPI, nullptr, "GetCustomNodeTransformPayloadKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformPayloadKey_Statics::InterchangeAnimationAPI_eventGetCustomNodeTransformPayloadKey_Parms), Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformPayloadKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformPayloadKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformPayloadKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformPayloadKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformPayloadKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformPayloadKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomIsNodeTransformAnimated_Statics
	{
		struct InterchangeAnimationAPI_eventSetCustomIsNodeTransformAnimated_Parms
		{
			UInterchangeBaseNode* InterchangeBaseNode;
			bool AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeBaseNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomIsNodeTransformAnimated_Statics::NewProp_InterchangeBaseNode = { "InterchangeBaseNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimationAPI_eventSetCustomIsNodeTransformAnimated_Parms, InterchangeBaseNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomIsNodeTransformAnimated_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomIsNodeTransformAnimated_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeAnimationAPI_eventSetCustomIsNodeTransformAnimated_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomIsNodeTransformAnimated_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimationAPI_eventSetCustomIsNodeTransformAnimated_Parms), &Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomIsNodeTransformAnimated_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomIsNodeTransformAnimated_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomIsNodeTransformAnimated_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomIsNodeTransformAnimated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimationAPI_eventSetCustomIsNodeTransformAnimated_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomIsNodeTransformAnimated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimationAPI_eventSetCustomIsNodeTransformAnimated_Parms), &Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomIsNodeTransformAnimated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomIsNodeTransformAnimated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomIsNodeTransformAnimated_Statics::NewProp_InterchangeBaseNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomIsNodeTransformAnimated_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomIsNodeTransformAnimated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomIsNodeTransformAnimated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Scene | Animation" },
		{ "Comment", "/** Set true if the node transform has animation. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeAnimationAPI.h" },
		{ "ToolTip", "Set true if the node transform has animation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomIsNodeTransformAnimated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationAPI, nullptr, "SetCustomIsNodeTransformAnimated", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomIsNodeTransformAnimated_Statics::InterchangeAnimationAPI_eventSetCustomIsNodeTransformAnimated_Parms), Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomIsNodeTransformAnimated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomIsNodeTransformAnimated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomIsNodeTransformAnimated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomIsNodeTransformAnimated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomIsNodeTransformAnimated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomIsNodeTransformAnimated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationEndTime_Statics
	{
		struct InterchangeAnimationAPI_eventSetCustomNodeTransformAnimationEndTime_Parms
		{
			UInterchangeBaseNode* InterchangeBaseNode;
			double AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeBaseNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationEndTime_Statics::NewProp_InterchangeBaseNode = { "InterchangeBaseNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimationAPI_eventSetCustomNodeTransformAnimationEndTime_Parms, InterchangeBaseNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationEndTime_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationEndTime_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimationAPI_eventSetCustomNodeTransformAnimationEndTime_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationEndTime_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationEndTime_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationEndTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimationAPI_eventSetCustomNodeTransformAnimationEndTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationEndTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimationAPI_eventSetCustomNodeTransformAnimationEndTime_Parms), &Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationEndTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationEndTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationEndTime_Statics::NewProp_InterchangeBaseNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationEndTime_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationEndTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationEndTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Scene | Animation" },
		{ "Comment", "/** Set the animation end time in second for this node transform. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeAnimationAPI.h" },
		{ "ToolTip", "Set the animation end time in second for this node transform." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationEndTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationAPI, nullptr, "SetCustomNodeTransformAnimationEndTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationEndTime_Statics::InterchangeAnimationAPI_eventSetCustomNodeTransformAnimationEndTime_Parms), Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationEndTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationEndTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationEndTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationEndTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationEndTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationEndTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationKeyCount_Statics
	{
		struct InterchangeAnimationAPI_eventSetCustomNodeTransformAnimationKeyCount_Parms
		{
			UInterchangeBaseNode* InterchangeBaseNode;
			int32 AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeBaseNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationKeyCount_Statics::NewProp_InterchangeBaseNode = { "InterchangeBaseNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimationAPI_eventSetCustomNodeTransformAnimationKeyCount_Parms, InterchangeBaseNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationKeyCount_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationKeyCount_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimationAPI_eventSetCustomNodeTransformAnimationKeyCount_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationKeyCount_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationKeyCount_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationKeyCount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimationAPI_eventSetCustomNodeTransformAnimationKeyCount_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationKeyCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimationAPI_eventSetCustomNodeTransformAnimationKeyCount_Parms), &Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationKeyCount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationKeyCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationKeyCount_Statics::NewProp_InterchangeBaseNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationKeyCount_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationKeyCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationKeyCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Scene | Animation" },
		{ "Comment", "/** Set the node transform animation key count. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeAnimationAPI.h" },
		{ "ToolTip", "Set the node transform animation key count." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationKeyCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationAPI, nullptr, "SetCustomNodeTransformAnimationKeyCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationKeyCount_Statics::InterchangeAnimationAPI_eventSetCustomNodeTransformAnimationKeyCount_Parms), Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationKeyCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationKeyCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationKeyCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationKeyCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationKeyCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationKeyCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationStartTime_Statics
	{
		struct InterchangeAnimationAPI_eventSetCustomNodeTransformAnimationStartTime_Parms
		{
			UInterchangeBaseNode* InterchangeBaseNode;
			double AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeBaseNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationStartTime_Statics::NewProp_InterchangeBaseNode = { "InterchangeBaseNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimationAPI_eventSetCustomNodeTransformAnimationStartTime_Parms, InterchangeBaseNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationStartTime_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationStartTime_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimationAPI_eventSetCustomNodeTransformAnimationStartTime_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationStartTime_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationStartTime_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationStartTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimationAPI_eventSetCustomNodeTransformAnimationStartTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationStartTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimationAPI_eventSetCustomNodeTransformAnimationStartTime_Parms), &Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationStartTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationStartTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationStartTime_Statics::NewProp_InterchangeBaseNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationStartTime_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationStartTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationStartTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Scene | Animation" },
		{ "Comment", "/** Set the animation start time in second for this node transform. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeAnimationAPI.h" },
		{ "ToolTip", "Set the animation start time in second for this node transform." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationStartTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationAPI, nullptr, "SetCustomNodeTransformAnimationStartTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationStartTime_Statics::InterchangeAnimationAPI_eventSetCustomNodeTransformAnimationStartTime_Parms), Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationStartTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationStartTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationStartTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationStartTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationStartTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationStartTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformPayloadKey_Statics
	{
		struct InterchangeAnimationAPI_eventSetCustomNodeTransformPayloadKey_Parms
		{
			UInterchangeBaseNode* InterchangeBaseNode;
			FString AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeBaseNode;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformPayloadKey_Statics::NewProp_InterchangeBaseNode = { "InterchangeBaseNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimationAPI_eventSetCustomNodeTransformPayloadKey_Parms, InterchangeBaseNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformPayloadKey_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformPayloadKey_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimationAPI_eventSetCustomNodeTransformPayloadKey_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformPayloadKey_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformPayloadKey_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformPayloadKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimationAPI_eventSetCustomNodeTransformPayloadKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformPayloadKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimationAPI_eventSetCustomNodeTransformPayloadKey_Parms), &Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformPayloadKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformPayloadKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformPayloadKey_Statics::NewProp_InterchangeBaseNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformPayloadKey_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformPayloadKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformPayloadKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Scene | Animation" },
		{ "Comment", "/** Set the payload key needed to retrieve the animation from the source. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeAnimationAPI.h" },
		{ "ToolTip", "Set the payload key needed to retrieve the animation from the source." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformPayloadKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationAPI, nullptr, "SetCustomNodeTransformPayloadKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformPayloadKey_Statics::InterchangeAnimationAPI_eventSetCustomNodeTransformPayloadKey_Parms), Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformPayloadKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformPayloadKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformPayloadKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformPayloadKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformPayloadKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformPayloadKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeAnimationAPI);
	UClass* Z_Construct_UClass_UInterchangeAnimationAPI_NoRegister()
	{
		return UInterchangeAnimationAPI::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeAnimationAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeAnimationAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeAnimationAPI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomIsNodeTransformAnimated, "GetCustomIsNodeTransformAnimated" }, // 249162783
		{ &Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationEndTime, "GetCustomNodeTransformAnimationEndTime" }, // 956162415
		{ &Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationKeyCount, "GetCustomNodeTransformAnimationKeyCount" }, // 1063822799
		{ &Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformAnimationStartTime, "GetCustomNodeTransformAnimationStartTime" }, // 2420012647
		{ &Z_Construct_UFunction_UInterchangeAnimationAPI_GetCustomNodeTransformPayloadKey, "GetCustomNodeTransformPayloadKey" }, // 4117614926
		{ &Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomIsNodeTransformAnimated, "SetCustomIsNodeTransformAnimated" }, // 3687375074
		{ &Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationEndTime, "SetCustomNodeTransformAnimationEndTime" }, // 3725671837
		{ &Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationKeyCount, "SetCustomNodeTransformAnimationKeyCount" }, // 3411829283
		{ &Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformAnimationStartTime, "SetCustomNodeTransformAnimationStartTime" }, // 1577850657
		{ &Z_Construct_UFunction_UInterchangeAnimationAPI_SetCustomNodeTransformPayloadKey, "SetCustomNodeTransformPayloadKey" }, // 1076336008
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeAnimationAPI_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UInterchangeAnimationAPI is used to store and retrieve animation data(i.e. DCC node attributes, pipelines will have access to those attributes)\n */" },
		{ "IncludePath", "Nodes/InterchangeAnimationAPI.h" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeAnimationAPI.h" },
		{ "ToolTip", "UInterchangeAnimationAPI is used to store and retrieve animation data(i.e. DCC node attributes, pipelines will have access to those attributes)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeAnimationAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeAnimationAPI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeAnimationAPI_Statics::ClassParams = {
		&UInterchangeAnimationAPI::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeAnimationAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAnimationAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeAnimationAPI()
	{
		if (!Z_Registration_Info_UClass_UInterchangeAnimationAPI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeAnimationAPI.OuterSingleton, Z_Construct_UClass_UInterchangeAnimationAPI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeAnimationAPI.OuterSingleton;
	}
	template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangeAnimationAPI>()
	{
		return UInterchangeAnimationAPI::StaticClass();
	}
	UInterchangeAnimationAPI::UInterchangeAnimationAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeAnimationAPI);
	UInterchangeAnimationAPI::~UInterchangeAnimationAPI() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeAnimationAPI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeAnimationAPI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeAnimationAPI, UInterchangeAnimationAPI::StaticClass, TEXT("UInterchangeAnimationAPI"), &Z_Registration_Info_UClass_UInterchangeAnimationAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeAnimationAPI), 3340032354U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeAnimationAPI_h_1785784922(TEXT("/Script/InterchangeCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeAnimationAPI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeAnimationAPI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
