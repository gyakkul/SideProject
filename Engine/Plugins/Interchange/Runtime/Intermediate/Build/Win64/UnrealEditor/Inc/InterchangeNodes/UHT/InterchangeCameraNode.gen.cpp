// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeCameraNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeCameraNode() {}
// Cross Module References
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNode();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeCameraNode();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeCameraNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeNodes();
// End Cross Module References
	DEFINE_FUNCTION(UInterchangeCameraNode::execSetCustomEnableDepthOfField)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomEnableDepthOfField(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeCameraNode::execGetCustomEnableDepthOfField)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomEnableDepthOfField(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeCameraNode::execSetCustomSensorHeight)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomSensorHeight(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeCameraNode::execGetCustomSensorHeight)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomSensorHeight(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeCameraNode::execSetCustomSensorWidth)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomSensorWidth(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeCameraNode::execGetCustomSensorWidth)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomSensorWidth(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeCameraNode::execSetCustomFocalLength)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomFocalLength(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeCameraNode::execGetCustomFocalLength)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomFocalLength(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	void UInterchangeCameraNode::StaticRegisterNativesUInterchangeCameraNode()
	{
		UClass* Class = UInterchangeCameraNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomEnableDepthOfField", &UInterchangeCameraNode::execGetCustomEnableDepthOfField },
			{ "GetCustomFocalLength", &UInterchangeCameraNode::execGetCustomFocalLength },
			{ "GetCustomSensorHeight", &UInterchangeCameraNode::execGetCustomSensorHeight },
			{ "GetCustomSensorWidth", &UInterchangeCameraNode::execGetCustomSensorWidth },
			{ "SetCustomEnableDepthOfField", &UInterchangeCameraNode::execSetCustomEnableDepthOfField },
			{ "SetCustomFocalLength", &UInterchangeCameraNode::execSetCustomFocalLength },
			{ "SetCustomSensorHeight", &UInterchangeCameraNode::execSetCustomSensorHeight },
			{ "SetCustomSensorWidth", &UInterchangeCameraNode::execSetCustomSensorWidth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeCameraNode_GetCustomEnableDepthOfField_Statics
	{
		struct InterchangeCameraNode_eventGetCustomEnableDepthOfField_Parms
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
	void Z_Construct_UFunction_UInterchangeCameraNode_GetCustomEnableDepthOfField_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeCameraNode_eventGetCustomEnableDepthOfField_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCameraNode_GetCustomEnableDepthOfField_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeCameraNode_eventGetCustomEnableDepthOfField_Parms), &Z_Construct_UFunction_UInterchangeCameraNode_GetCustomEnableDepthOfField_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeCameraNode_GetCustomEnableDepthOfField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeCameraNode_eventGetCustomEnableDepthOfField_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCameraNode_GetCustomEnableDepthOfField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeCameraNode_eventGetCustomEnableDepthOfField_Parms), &Z_Construct_UFunction_UInterchangeCameraNode_GetCustomEnableDepthOfField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeCameraNode_GetCustomEnableDepthOfField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCameraNode_GetCustomEnableDepthOfField_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCameraNode_GetCustomEnableDepthOfField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeCameraNode_GetCustomEnableDepthOfField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Camera" },
		{ "ModuleRelativePath", "Public/InterchangeCameraNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeCameraNode_GetCustomEnableDepthOfField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeCameraNode, nullptr, "GetCustomEnableDepthOfField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeCameraNode_GetCustomEnableDepthOfField_Statics::InterchangeCameraNode_eventGetCustomEnableDepthOfField_Parms), Z_Construct_UFunction_UInterchangeCameraNode_GetCustomEnableDepthOfField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCameraNode_GetCustomEnableDepthOfField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeCameraNode_GetCustomEnableDepthOfField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCameraNode_GetCustomEnableDepthOfField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeCameraNode_GetCustomEnableDepthOfField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeCameraNode_GetCustomEnableDepthOfField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeCameraNode_GetCustomFocalLength_Statics
	{
		struct InterchangeCameraNode_eventGetCustomFocalLength_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeCameraNode_GetCustomFocalLength_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeCameraNode_eventGetCustomFocalLength_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeCameraNode_GetCustomFocalLength_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeCameraNode_eventGetCustomFocalLength_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCameraNode_GetCustomFocalLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeCameraNode_eventGetCustomFocalLength_Parms), &Z_Construct_UFunction_UInterchangeCameraNode_GetCustomFocalLength_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeCameraNode_GetCustomFocalLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCameraNode_GetCustomFocalLength_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCameraNode_GetCustomFocalLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeCameraNode_GetCustomFocalLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Camera" },
		{ "ModuleRelativePath", "Public/InterchangeCameraNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeCameraNode_GetCustomFocalLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeCameraNode, nullptr, "GetCustomFocalLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeCameraNode_GetCustomFocalLength_Statics::InterchangeCameraNode_eventGetCustomFocalLength_Parms), Z_Construct_UFunction_UInterchangeCameraNode_GetCustomFocalLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCameraNode_GetCustomFocalLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeCameraNode_GetCustomFocalLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCameraNode_GetCustomFocalLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeCameraNode_GetCustomFocalLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeCameraNode_GetCustomFocalLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorHeight_Statics
	{
		struct InterchangeCameraNode_eventGetCustomSensorHeight_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorHeight_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeCameraNode_eventGetCustomSensorHeight_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorHeight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeCameraNode_eventGetCustomSensorHeight_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeCameraNode_eventGetCustomSensorHeight_Parms), &Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorHeight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorHeight_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Camera" },
		{ "ModuleRelativePath", "Public/InterchangeCameraNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeCameraNode, nullptr, "GetCustomSensorHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorHeight_Statics::InterchangeCameraNode_eventGetCustomSensorHeight_Parms), Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorWidth_Statics
	{
		struct InterchangeCameraNode_eventGetCustomSensorWidth_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorWidth_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeCameraNode_eventGetCustomSensorWidth_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorWidth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeCameraNode_eventGetCustomSensorWidth_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeCameraNode_eventGetCustomSensorWidth_Parms), &Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorWidth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorWidth_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Camera" },
		{ "ModuleRelativePath", "Public/InterchangeCameraNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeCameraNode, nullptr, "GetCustomSensorWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorWidth_Statics::InterchangeCameraNode_eventGetCustomSensorWidth_Parms), Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeCameraNode_SetCustomEnableDepthOfField_Statics
	{
		struct InterchangeCameraNode_eventSetCustomEnableDepthOfField_Parms
		{
			bool AttributeValue;
			bool ReturnValue;
		};
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeCameraNode_SetCustomEnableDepthOfField_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeCameraNode_SetCustomEnableDepthOfField_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeCameraNode_eventSetCustomEnableDepthOfField_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCameraNode_SetCustomEnableDepthOfField_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeCameraNode_eventSetCustomEnableDepthOfField_Parms), &Z_Construct_UFunction_UInterchangeCameraNode_SetCustomEnableDepthOfField_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeCameraNode_SetCustomEnableDepthOfField_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCameraNode_SetCustomEnableDepthOfField_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeCameraNode_SetCustomEnableDepthOfField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeCameraNode_eventSetCustomEnableDepthOfField_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCameraNode_SetCustomEnableDepthOfField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeCameraNode_eventSetCustomEnableDepthOfField_Parms), &Z_Construct_UFunction_UInterchangeCameraNode_SetCustomEnableDepthOfField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeCameraNode_SetCustomEnableDepthOfField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCameraNode_SetCustomEnableDepthOfField_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCameraNode_SetCustomEnableDepthOfField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeCameraNode_SetCustomEnableDepthOfField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Camera" },
		{ "ModuleRelativePath", "Public/InterchangeCameraNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeCameraNode_SetCustomEnableDepthOfField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeCameraNode, nullptr, "SetCustomEnableDepthOfField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeCameraNode_SetCustomEnableDepthOfField_Statics::InterchangeCameraNode_eventSetCustomEnableDepthOfField_Parms), Z_Construct_UFunction_UInterchangeCameraNode_SetCustomEnableDepthOfField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCameraNode_SetCustomEnableDepthOfField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeCameraNode_SetCustomEnableDepthOfField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCameraNode_SetCustomEnableDepthOfField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeCameraNode_SetCustomEnableDepthOfField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeCameraNode_SetCustomEnableDepthOfField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeCameraNode_SetCustomFocalLength_Statics
	{
		struct InterchangeCameraNode_eventSetCustomFocalLength_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeCameraNode_SetCustomFocalLength_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeCameraNode_SetCustomFocalLength_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeCameraNode_eventSetCustomFocalLength_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeCameraNode_SetCustomFocalLength_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCameraNode_SetCustomFocalLength_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeCameraNode_SetCustomFocalLength_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeCameraNode_eventSetCustomFocalLength_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCameraNode_SetCustomFocalLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeCameraNode_eventSetCustomFocalLength_Parms), &Z_Construct_UFunction_UInterchangeCameraNode_SetCustomFocalLength_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeCameraNode_SetCustomFocalLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCameraNode_SetCustomFocalLength_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCameraNode_SetCustomFocalLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeCameraNode_SetCustomFocalLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Camera" },
		{ "ModuleRelativePath", "Public/InterchangeCameraNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeCameraNode_SetCustomFocalLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeCameraNode, nullptr, "SetCustomFocalLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeCameraNode_SetCustomFocalLength_Statics::InterchangeCameraNode_eventSetCustomFocalLength_Parms), Z_Construct_UFunction_UInterchangeCameraNode_SetCustomFocalLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCameraNode_SetCustomFocalLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeCameraNode_SetCustomFocalLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCameraNode_SetCustomFocalLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeCameraNode_SetCustomFocalLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeCameraNode_SetCustomFocalLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorHeight_Statics
	{
		struct InterchangeCameraNode_eventSetCustomSensorHeight_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorHeight_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorHeight_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeCameraNode_eventSetCustomSensorHeight_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorHeight_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorHeight_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorHeight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeCameraNode_eventSetCustomSensorHeight_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeCameraNode_eventSetCustomSensorHeight_Parms), &Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorHeight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorHeight_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Camera" },
		{ "ModuleRelativePath", "Public/InterchangeCameraNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeCameraNode, nullptr, "SetCustomSensorHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorHeight_Statics::InterchangeCameraNode_eventSetCustomSensorHeight_Parms), Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorWidth_Statics
	{
		struct InterchangeCameraNode_eventSetCustomSensorWidth_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorWidth_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorWidth_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeCameraNode_eventSetCustomSensorWidth_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorWidth_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorWidth_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorWidth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeCameraNode_eventSetCustomSensorWidth_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeCameraNode_eventSetCustomSensorWidth_Parms), &Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorWidth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorWidth_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Camera" },
		{ "ModuleRelativePath", "Public/InterchangeCameraNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeCameraNode, nullptr, "SetCustomSensorWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorWidth_Statics::InterchangeCameraNode_eventSetCustomSensorWidth_Parms), Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeCameraNode);
	UClass* Z_Construct_UClass_UInterchangeCameraNode_NoRegister()
	{
		return UInterchangeCameraNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeCameraNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeCameraNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeBaseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeCameraNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeCameraNode_GetCustomEnableDepthOfField, "GetCustomEnableDepthOfField" }, // 3387964788
		{ &Z_Construct_UFunction_UInterchangeCameraNode_GetCustomFocalLength, "GetCustomFocalLength" }, // 3679905602
		{ &Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorHeight, "GetCustomSensorHeight" }, // 812580995
		{ &Z_Construct_UFunction_UInterchangeCameraNode_GetCustomSensorWidth, "GetCustomSensorWidth" }, // 694872081
		{ &Z_Construct_UFunction_UInterchangeCameraNode_SetCustomEnableDepthOfField, "SetCustomEnableDepthOfField" }, // 388895655
		{ &Z_Construct_UFunction_UInterchangeCameraNode_SetCustomFocalLength, "SetCustomFocalLength" }, // 496971980
		{ &Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorHeight, "SetCustomSensorHeight" }, // 3709632909
		{ &Z_Construct_UFunction_UInterchangeCameraNode_SetCustomSensorWidth, "SetCustomSensorWidth" }, // 1027675842
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeCameraNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeCameraNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeCameraNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeCameraNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeCameraNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeCameraNode_Statics::ClassParams = {
		&UInterchangeCameraNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeCameraNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeCameraNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeCameraNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeCameraNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeCameraNode.OuterSingleton, Z_Construct_UClass_UInterchangeCameraNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeCameraNode.OuterSingleton;
	}
	template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeCameraNode>()
	{
		return UInterchangeCameraNode::StaticClass();
	}
	UInterchangeCameraNode::UInterchangeCameraNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeCameraNode);
	UInterchangeCameraNode::~UInterchangeCameraNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeCameraNode, UInterchangeCameraNode::StaticClass, TEXT("UInterchangeCameraNode"), &Z_Registration_Info_UClass_UInterchangeCameraNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeCameraNode), 3554476823U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_1170029722(TEXT("/Script/InterchangeNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
