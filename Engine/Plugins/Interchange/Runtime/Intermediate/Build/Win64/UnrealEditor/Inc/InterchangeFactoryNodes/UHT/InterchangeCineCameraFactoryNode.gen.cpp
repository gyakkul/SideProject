// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeCineCameraFactoryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeCineCameraFactoryNode() {}
// Cross Module References
	CINEMATICCAMERA_API UEnum* Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeActorFactoryNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeCineCameraFactoryNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeCineCameraFactoryNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References
	DEFINE_FUNCTION(UInterchangeCineCameraFactoryNode::execSetCustomFocusMethod)
	{
		P_GET_ENUM_REF(ECameraFocusMethod,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomFocusMethod((ECameraFocusMethod&)(Z_Param_Out_AttributeValue),Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeCineCameraFactoryNode::execGetCustomFocusMethod)
	{
		P_GET_ENUM_REF(ECameraFocusMethod,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomFocusMethod((ECameraFocusMethod&)(Z_Param_Out_AttributeValue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeCineCameraFactoryNode::execSetCustomSensorHeight)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomSensorHeight(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeCineCameraFactoryNode::execGetCustomSensorHeight)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomSensorHeight(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeCineCameraFactoryNode::execSetCustomSensorWidth)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomSensorWidth(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeCineCameraFactoryNode::execGetCustomSensorWidth)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomSensorWidth(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeCineCameraFactoryNode::execSetCustomFocalLength)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomFocalLength(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeCineCameraFactoryNode::execGetCustomFocalLength)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomFocalLength(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	void UInterchangeCineCameraFactoryNode::StaticRegisterNativesUInterchangeCineCameraFactoryNode()
	{
		UClass* Class = UInterchangeCineCameraFactoryNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomFocalLength", &UInterchangeCineCameraFactoryNode::execGetCustomFocalLength },
			{ "GetCustomFocusMethod", &UInterchangeCineCameraFactoryNode::execGetCustomFocusMethod },
			{ "GetCustomSensorHeight", &UInterchangeCineCameraFactoryNode::execGetCustomSensorHeight },
			{ "GetCustomSensorWidth", &UInterchangeCineCameraFactoryNode::execGetCustomSensorWidth },
			{ "SetCustomFocalLength", &UInterchangeCineCameraFactoryNode::execSetCustomFocalLength },
			{ "SetCustomFocusMethod", &UInterchangeCineCameraFactoryNode::execSetCustomFocusMethod },
			{ "SetCustomSensorHeight", &UInterchangeCineCameraFactoryNode::execSetCustomSensorHeight },
			{ "SetCustomSensorWidth", &UInterchangeCineCameraFactoryNode::execSetCustomSensorWidth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocalLength_Statics
	{
		struct InterchangeCineCameraFactoryNode_eventGetCustomFocalLength_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocalLength_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeCineCameraFactoryNode_eventGetCustomFocalLength_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocalLength_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeCineCameraFactoryNode_eventGetCustomFocalLength_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocalLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeCineCameraFactoryNode_eventGetCustomFocalLength_Parms), &Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocalLength_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocalLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocalLength_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocalLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocalLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | CameraFactory" },
		{ "ModuleRelativePath", "Public/InterchangeCineCameraFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocalLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeCineCameraFactoryNode, nullptr, "GetCustomFocalLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocalLength_Statics::InterchangeCineCameraFactoryNode_eventGetCustomFocalLength_Parms), Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocalLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocalLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocalLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocalLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocalLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocalLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocusMethod_Statics
	{
		struct InterchangeCineCameraFactoryNode_eventGetCustomFocusMethod_Parms
		{
			ECameraFocusMethod AttributeValue;
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocusMethod_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocusMethod_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeCineCameraFactoryNode_eventGetCustomFocusMethod_Parms, AttributeValue), Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod, METADATA_PARAMS(nullptr, 0) }; // 4223009113
	void Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocusMethod_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeCineCameraFactoryNode_eventGetCustomFocusMethod_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocusMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeCineCameraFactoryNode_eventGetCustomFocusMethod_Parms), &Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocusMethod_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocusMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocusMethod_Statics::NewProp_AttributeValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocusMethod_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocusMethod_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocusMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | CameraFactory" },
		{ "ModuleRelativePath", "Public/InterchangeCineCameraFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocusMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeCineCameraFactoryNode, nullptr, "GetCustomFocusMethod", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocusMethod_Statics::InterchangeCineCameraFactoryNode_eventGetCustomFocusMethod_Parms), Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocusMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocusMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocusMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocusMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocusMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocusMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorHeight_Statics
	{
		struct InterchangeCineCameraFactoryNode_eventGetCustomSensorHeight_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorHeight_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeCineCameraFactoryNode_eventGetCustomSensorHeight_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorHeight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeCineCameraFactoryNode_eventGetCustomSensorHeight_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeCineCameraFactoryNode_eventGetCustomSensorHeight_Parms), &Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorHeight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorHeight_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | CameraFactory" },
		{ "ModuleRelativePath", "Public/InterchangeCineCameraFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeCineCameraFactoryNode, nullptr, "GetCustomSensorHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorHeight_Statics::InterchangeCineCameraFactoryNode_eventGetCustomSensorHeight_Parms), Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorWidth_Statics
	{
		struct InterchangeCineCameraFactoryNode_eventGetCustomSensorWidth_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorWidth_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeCineCameraFactoryNode_eventGetCustomSensorWidth_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorWidth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeCineCameraFactoryNode_eventGetCustomSensorWidth_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeCineCameraFactoryNode_eventGetCustomSensorWidth_Parms), &Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorWidth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorWidth_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | CameraFactory" },
		{ "ModuleRelativePath", "Public/InterchangeCineCameraFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeCineCameraFactoryNode, nullptr, "GetCustomSensorWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorWidth_Statics::InterchangeCineCameraFactoryNode_eventGetCustomSensorWidth_Parms), Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocalLength_Statics
	{
		struct InterchangeCineCameraFactoryNode_eventSetCustomFocalLength_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocalLength_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocalLength_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeCineCameraFactoryNode_eventSetCustomFocalLength_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocalLength_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocalLength_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocalLength_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeCineCameraFactoryNode_eventSetCustomFocalLength_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocalLength_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeCineCameraFactoryNode_eventSetCustomFocalLength_Parms), &Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocalLength_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocalLength_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeCineCameraFactoryNode_eventSetCustomFocalLength_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocalLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeCineCameraFactoryNode_eventSetCustomFocalLength_Parms), &Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocalLength_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocalLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocalLength_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocalLength_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocalLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocalLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | CameraFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeCineCameraFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocalLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeCineCameraFactoryNode, nullptr, "SetCustomFocalLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocalLength_Statics::InterchangeCineCameraFactoryNode_eventSetCustomFocalLength_Parms), Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocalLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocalLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocalLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocalLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocalLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocalLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocusMethod_Statics
	{
		struct InterchangeCineCameraFactoryNode_eventSetCustomFocusMethod_Parms
		{
			ECameraFocusMethod AttributeValue;
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocusMethod_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocusMethod_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocusMethod_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeCineCameraFactoryNode_eventSetCustomFocusMethod_Parms, AttributeValue), Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocusMethod_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocusMethod_Statics::NewProp_AttributeValue_MetaData)) }; // 4223009113
	void Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocusMethod_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeCineCameraFactoryNode_eventSetCustomFocusMethod_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocusMethod_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeCineCameraFactoryNode_eventSetCustomFocusMethod_Parms), &Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocusMethod_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocusMethod_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeCineCameraFactoryNode_eventSetCustomFocusMethod_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocusMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeCineCameraFactoryNode_eventSetCustomFocusMethod_Parms), &Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocusMethod_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocusMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocusMethod_Statics::NewProp_AttributeValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocusMethod_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocusMethod_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocusMethod_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocusMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | CameraFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeCineCameraFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocusMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeCineCameraFactoryNode, nullptr, "SetCustomFocusMethod", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocusMethod_Statics::InterchangeCineCameraFactoryNode_eventSetCustomFocusMethod_Parms), Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocusMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocusMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocusMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocusMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocusMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocusMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorHeight_Statics
	{
		struct InterchangeCineCameraFactoryNode_eventSetCustomSensorHeight_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorHeight_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorHeight_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeCineCameraFactoryNode_eventSetCustomSensorHeight_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorHeight_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorHeight_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorHeight_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeCineCameraFactoryNode_eventSetCustomSensorHeight_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorHeight_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeCineCameraFactoryNode_eventSetCustomSensorHeight_Parms), &Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorHeight_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorHeight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeCineCameraFactoryNode_eventSetCustomSensorHeight_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeCineCameraFactoryNode_eventSetCustomSensorHeight_Parms), &Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorHeight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorHeight_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorHeight_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | CameraFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeCineCameraFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeCineCameraFactoryNode, nullptr, "SetCustomSensorHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorHeight_Statics::InterchangeCineCameraFactoryNode_eventSetCustomSensorHeight_Parms), Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorWidth_Statics
	{
		struct InterchangeCineCameraFactoryNode_eventSetCustomSensorWidth_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorWidth_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorWidth_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeCineCameraFactoryNode_eventSetCustomSensorWidth_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorWidth_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorWidth_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorWidth_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeCineCameraFactoryNode_eventSetCustomSensorWidth_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorWidth_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeCineCameraFactoryNode_eventSetCustomSensorWidth_Parms), &Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorWidth_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorWidth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeCineCameraFactoryNode_eventSetCustomSensorWidth_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeCineCameraFactoryNode_eventSetCustomSensorWidth_Parms), &Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorWidth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorWidth_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorWidth_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | CameraFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeCineCameraFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeCineCameraFactoryNode, nullptr, "SetCustomSensorWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorWidth_Statics::InterchangeCineCameraFactoryNode_eventSetCustomSensorWidth_Parms), Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeCineCameraFactoryNode);
	UClass* Z_Construct_UClass_UInterchangeCineCameraFactoryNode_NoRegister()
	{
		return UInterchangeCineCameraFactoryNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeCineCameraFactoryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeCineCameraFactoryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeActorFactoryNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeCineCameraFactoryNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocalLength, "GetCustomFocalLength" }, // 3132958837
		{ &Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomFocusMethod, "GetCustomFocusMethod" }, // 3997788257
		{ &Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorHeight, "GetCustomSensorHeight" }, // 420767064
		{ &Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_GetCustomSensorWidth, "GetCustomSensorWidth" }, // 1375515211
		{ &Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocalLength, "SetCustomFocalLength" }, // 44175762
		{ &Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomFocusMethod, "SetCustomFocusMethod" }, // 1469484523
		{ &Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorHeight, "SetCustomSensorHeight" }, // 1943780209
		{ &Z_Construct_UFunction_UInterchangeCineCameraFactoryNode_SetCustomSensorWidth, "SetCustomSensorWidth" }, // 513179158
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeCineCameraFactoryNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeCineCameraFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeCineCameraFactoryNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeCineCameraFactoryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeCineCameraFactoryNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeCineCameraFactoryNode_Statics::ClassParams = {
		&UInterchangeCineCameraFactoryNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeCineCameraFactoryNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeCineCameraFactoryNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeCineCameraFactoryNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeCineCameraFactoryNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeCineCameraFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeCineCameraFactoryNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeCineCameraFactoryNode.OuterSingleton;
	}
	template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeCineCameraFactoryNode>()
	{
		return UInterchangeCineCameraFactoryNode::StaticClass();
	}
	UInterchangeCineCameraFactoryNode::UInterchangeCineCameraFactoryNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeCineCameraFactoryNode);
	UInterchangeCineCameraFactoryNode::~UInterchangeCineCameraFactoryNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCineCameraFactoryNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCineCameraFactoryNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeCineCameraFactoryNode, UInterchangeCineCameraFactoryNode::StaticClass, TEXT("UInterchangeCineCameraFactoryNode"), &Z_Registration_Info_UClass_UInterchangeCineCameraFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeCineCameraFactoryNode), 4289744441U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCineCameraFactoryNode_h_2997856515(TEXT("/Script/InterchangeFactoryNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCineCameraFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCineCameraFactoryNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
