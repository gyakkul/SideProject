// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeActorFactoryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeActorFactoryNode() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeActorFactoryNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeActorFactoryNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References
	DEFINE_FUNCTION(UInterchangeActorFactoryNode::execSetCustomMobility)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomMobility(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeActorFactoryNode::execGetCustomMobility)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomMobility(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeActorFactoryNode::execSetCustomActorClassName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomActorClassName(Z_Param_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeActorFactoryNode::execGetCustomActorClassName)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomActorClassName(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeActorFactoryNode::execSetCustomGlobalTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomGlobalTransform(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeActorFactoryNode::execGetCustomGlobalTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomGlobalTransform(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	void UInterchangeActorFactoryNode::StaticRegisterNativesUInterchangeActorFactoryNode()
	{
		UClass* Class = UInterchangeActorFactoryNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomActorClassName", &UInterchangeActorFactoryNode::execGetCustomActorClassName },
			{ "GetCustomGlobalTransform", &UInterchangeActorFactoryNode::execGetCustomGlobalTransform },
			{ "GetCustomMobility", &UInterchangeActorFactoryNode::execGetCustomMobility },
			{ "SetCustomActorClassName", &UInterchangeActorFactoryNode::execSetCustomActorClassName },
			{ "SetCustomGlobalTransform", &UInterchangeActorFactoryNode::execSetCustomGlobalTransform },
			{ "SetCustomMobility", &UInterchangeActorFactoryNode::execSetCustomMobility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName_Statics
	{
		struct InterchangeActorFactoryNode_eventGetCustomActorClassName_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeActorFactoryNode_eventGetCustomActorClassName_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeActorFactoryNode_eventGetCustomActorClassName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeActorFactoryNode_eventGetCustomActorClassName_Parms), &Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | ActorFactory" },
		{ "ModuleRelativePath", "Public/InterchangeActorFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeActorFactoryNode, nullptr, "GetCustomActorClassName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName_Statics::InterchangeActorFactoryNode_eventGetCustomActorClassName_Parms), Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform_Statics
	{
		struct InterchangeActorFactoryNode_eventGetCustomGlobalTransform_Parms
		{
			FTransform AttributeValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeActorFactoryNode_eventGetCustomGlobalTransform_Parms, AttributeValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeActorFactoryNode_eventGetCustomGlobalTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeActorFactoryNode_eventGetCustomGlobalTransform_Parms), &Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | ActorFactory" },
		{ "ModuleRelativePath", "Public/InterchangeActorFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeActorFactoryNode, nullptr, "GetCustomGlobalTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform_Statics::InterchangeActorFactoryNode_eventGetCustomGlobalTransform_Parms), Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility_Statics
	{
		struct InterchangeActorFactoryNode_eventGetCustomMobility_Parms
		{
			uint8 AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeActorFactoryNode_eventGetCustomMobility_Parms, AttributeValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeActorFactoryNode_eventGetCustomMobility_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeActorFactoryNode_eventGetCustomMobility_Parms), &Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | ActorFactory" },
		{ "ModuleRelativePath", "Public/InterchangeActorFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeActorFactoryNode, nullptr, "GetCustomMobility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility_Statics::InterchangeActorFactoryNode_eventGetCustomMobility_Parms), Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics
	{
		struct InterchangeActorFactoryNode_eventSetCustomActorClassName_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeActorFactoryNode_eventSetCustomActorClassName_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeActorFactoryNode_eventSetCustomActorClassName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeActorFactoryNode_eventSetCustomActorClassName_Parms), &Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | ActorFactory" },
		{ "ModuleRelativePath", "Public/InterchangeActorFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeActorFactoryNode, nullptr, "SetCustomActorClassName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::InterchangeActorFactoryNode_eventSetCustomActorClassName_Parms), Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics
	{
		struct InterchangeActorFactoryNode_eventSetCustomGlobalTransform_Parms
		{
			FTransform AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeActorFactoryNode_eventSetCustomGlobalTransform_Parms, AttributeValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeActorFactoryNode_eventSetCustomGlobalTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeActorFactoryNode_eventSetCustomGlobalTransform_Parms), &Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | ActorFactory" },
		{ "ModuleRelativePath", "Public/InterchangeActorFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeActorFactoryNode, nullptr, "SetCustomGlobalTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::InterchangeActorFactoryNode_eventSetCustomGlobalTransform_Parms), Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics
	{
		struct InterchangeActorFactoryNode_eventSetCustomMobility_Parms
		{
			uint8 AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeActorFactoryNode_eventSetCustomMobility_Parms, AttributeValue), nullptr, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeActorFactoryNode_eventSetCustomMobility_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeActorFactoryNode_eventSetCustomMobility_Parms), &Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeActorFactoryNode_eventSetCustomMobility_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeActorFactoryNode_eventSetCustomMobility_Parms), &Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | ActorFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeActorFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeActorFactoryNode, nullptr, "SetCustomMobility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::InterchangeActorFactoryNode_eventSetCustomMobility_Parms), Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeActorFactoryNode);
	UClass* Z_Construct_UClass_UInterchangeActorFactoryNode_NoRegister()
	{
		return UInterchangeActorFactoryNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeActorFactoryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeActorFactoryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBaseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeActorFactoryNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomActorClassName, "GetCustomActorClassName" }, // 1615131747
		{ &Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomGlobalTransform, "GetCustomGlobalTransform" }, // 2709285755
		{ &Z_Construct_UFunction_UInterchangeActorFactoryNode_GetCustomMobility, "GetCustomMobility" }, // 1631396355
		{ &Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomActorClassName, "SetCustomActorClassName" }, // 25175174
		{ &Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomGlobalTransform, "SetCustomGlobalTransform" }, // 4268766734
		{ &Z_Construct_UFunction_UInterchangeActorFactoryNode_SetCustomMobility, "SetCustomMobility" }, // 2083299153
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeActorFactoryNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeActorFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeActorFactoryNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeActorFactoryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeActorFactoryNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeActorFactoryNode_Statics::ClassParams = {
		&UInterchangeActorFactoryNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeActorFactoryNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeActorFactoryNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeActorFactoryNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeActorFactoryNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeActorFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeActorFactoryNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeActorFactoryNode.OuterSingleton;
	}
	template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeActorFactoryNode>()
	{
		return UInterchangeActorFactoryNode::StaticClass();
	}
	UInterchangeActorFactoryNode::UInterchangeActorFactoryNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeActorFactoryNode);
	UInterchangeActorFactoryNode::~UInterchangeActorFactoryNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeActorFactoryNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeActorFactoryNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeActorFactoryNode, UInterchangeActorFactoryNode::StaticClass, TEXT("UInterchangeActorFactoryNode"), &Z_Registration_Info_UClass_UInterchangeActorFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeActorFactoryNode), 2590787643U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeActorFactoryNode_h_1606953765(TEXT("/Script/InterchangeFactoryNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeActorFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeActorFactoryNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
