// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeSkeletonFactoryNode.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeSkeletonFactoryNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeSkeletonFactoryNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeSkeletonFactoryNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References
	DEFINE_FUNCTION(UInterchangeSkeletonFactoryNode::execSetCustomSkeletalMeshFactoryNodeUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomSkeletalMeshFactoryNodeUid(Z_Param_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletonFactoryNode::execGetCustomSkeletalMeshFactoryNodeUid)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomSkeletalMeshFactoryNodeUid(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletonFactoryNode::execSetCustomUseTimeZeroForBindPose)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomUseTimeZeroForBindPose(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletonFactoryNode::execGetCustomUseTimeZeroForBindPose)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomUseTimeZeroForBindPose(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletonFactoryNode::execSetCustomRootJointUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomRootJointUid(Z_Param_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletonFactoryNode::execGetCustomRootJointUid)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomRootJointUid(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletonFactoryNode::execGetObjectClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->GetObjectClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSkeletonFactoryNode::execInitializeSkeletonNode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UniqueID);
		P_GET_PROPERTY(FStrProperty,Z_Param_DisplayLabel);
		P_GET_PROPERTY(FStrProperty,Z_Param_InAssetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeSkeletonNode(Z_Param_UniqueID,Z_Param_DisplayLabel,Z_Param_InAssetClass);
		P_NATIVE_END;
	}
	void UInterchangeSkeletonFactoryNode::StaticRegisterNativesUInterchangeSkeletonFactoryNode()
	{
		UClass* Class = UInterchangeSkeletonFactoryNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomRootJointUid", &UInterchangeSkeletonFactoryNode::execGetCustomRootJointUid },
			{ "GetCustomSkeletalMeshFactoryNodeUid", &UInterchangeSkeletonFactoryNode::execGetCustomSkeletalMeshFactoryNodeUid },
			{ "GetCustomUseTimeZeroForBindPose", &UInterchangeSkeletonFactoryNode::execGetCustomUseTimeZeroForBindPose },
			{ "GetObjectClass", &UInterchangeSkeletonFactoryNode::execGetObjectClass },
			{ "InitializeSkeletonNode", &UInterchangeSkeletonFactoryNode::execInitializeSkeletonNode },
			{ "SetCustomRootJointUid", &UInterchangeSkeletonFactoryNode::execSetCustomRootJointUid },
			{ "SetCustomSkeletalMeshFactoryNodeUid", &UInterchangeSkeletonFactoryNode::execSetCustomSkeletalMeshFactoryNodeUid },
			{ "SetCustomUseTimeZeroForBindPose", &UInterchangeSkeletonFactoryNode::execSetCustomUseTimeZeroForBindPose },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Statics
	{
		struct InterchangeSkeletonFactoryNode_eventGetCustomRootJointUid_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletonFactoryNode_eventGetCustomRootJointUid_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSkeletonFactoryNode_eventGetCustomRootJointUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletonFactoryNode_eventGetCustomRootJointUid_Parms), &Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Skeleton" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletonFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletonFactoryNode, nullptr, "GetCustomRootJointUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Statics::InterchangeSkeletonFactoryNode_eventGetCustomRootJointUid_Parms), Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Statics
	{
		struct InterchangeSkeletonFactoryNode_eventGetCustomSkeletalMeshFactoryNodeUid_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletonFactoryNode_eventGetCustomSkeletalMeshFactoryNodeUid_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSkeletonFactoryNode_eventGetCustomSkeletalMeshFactoryNodeUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletonFactoryNode_eventGetCustomSkeletalMeshFactoryNodeUid_Parms), &Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Skeleton" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletonFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletonFactoryNode, nullptr, "GetCustomSkeletalMeshFactoryNodeUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Statics::InterchangeSkeletonFactoryNode_eventGetCustomSkeletalMeshFactoryNodeUid_Parms), Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics
	{
		struct InterchangeSkeletonFactoryNode_eventGetCustomUseTimeZeroForBindPose_Parms
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
	void Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeSkeletonFactoryNode_eventGetCustomUseTimeZeroForBindPose_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletonFactoryNode_eventGetCustomUseTimeZeroForBindPose_Parms), &Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSkeletonFactoryNode_eventGetCustomUseTimeZeroForBindPose_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletonFactoryNode_eventGetCustomUseTimeZeroForBindPose_Parms), &Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Skeleton" },
		{ "Comment", "/** Query if this skeleton should replace joint transform with time zero evaluation instead of bind pose.*/" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletonFactoryNode.h" },
		{ "ToolTip", "Query if this skeleton should replace joint transform with time zero evaluation instead of bind pose." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletonFactoryNode, nullptr, "GetCustomUseTimeZeroForBindPose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::InterchangeSkeletonFactoryNode_eventGetCustomUseTimeZeroForBindPose_Parms), Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetObjectClass_Statics
	{
		struct InterchangeSkeletonFactoryNode_eventGetObjectClass_Parms
		{
			UClass* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletonFactoryNode_eventGetObjectClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetObjectClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetObjectClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Skeleton" },
		{ "Comment", "/** Get the class this node want to create */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletonFactoryNode.h" },
		{ "ToolTip", "Get the class this node want to create" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetObjectClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletonFactoryNode, nullptr, "GetObjectClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetObjectClass_Statics::InterchangeSkeletonFactoryNode_eventGetObjectClass_Parms), Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetObjectClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetObjectClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetObjectClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetObjectClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetObjectClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetObjectClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics
	{
		struct InterchangeSkeletonFactoryNode_eventInitializeSkeletonNode_Parms
		{
			FString UniqueID;
			FString DisplayLabel;
			FString InAssetClass;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayLabel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayLabel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAssetClass_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InAssetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::NewProp_UniqueID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletonFactoryNode_eventInitializeSkeletonNode_Parms, UniqueID), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::NewProp_UniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::NewProp_UniqueID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::NewProp_DisplayLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::NewProp_DisplayLabel = { "DisplayLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletonFactoryNode_eventInitializeSkeletonNode_Parms, DisplayLabel), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::NewProp_DisplayLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::NewProp_DisplayLabel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::NewProp_InAssetClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::NewProp_InAssetClass = { "InAssetClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletonFactoryNode_eventInitializeSkeletonNode_Parms, InAssetClass), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::NewProp_InAssetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::NewProp_InAssetClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::NewProp_UniqueID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::NewProp_DisplayLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::NewProp_InAssetClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Skeleton" },
		{ "Comment", "/**\n\x09 * Initialize node data\n\x09 * @param: UniqueID - The uniqueId for this node\n\x09 * @param DisplayLabel - The name of the node\n\x09 * @param InAssetClass - The class the Skeleton factory will create for this node.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletonFactoryNode.h" },
		{ "ToolTip", "Initialize node data\n@param: UniqueID - The uniqueId for this node\n@param DisplayLabel - The name of the node\n@param InAssetClass - The class the Skeleton factory will create for this node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletonFactoryNode, nullptr, "InitializeSkeletonNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::InterchangeSkeletonFactoryNode_eventInitializeSkeletonNode_Parms), Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics
	{
		struct InterchangeSkeletonFactoryNode_eventSetCustomRootJointUid_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletonFactoryNode_eventSetCustomRootJointUid_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSkeletonFactoryNode_eventSetCustomRootJointUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletonFactoryNode_eventSetCustomRootJointUid_Parms), &Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Skeleton" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletonFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletonFactoryNode, nullptr, "SetCustomRootJointUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::InterchangeSkeletonFactoryNode_eventSetCustomRootJointUid_Parms), Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics
	{
		struct InterchangeSkeletonFactoryNode_eventSetCustomSkeletalMeshFactoryNodeUid_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSkeletonFactoryNode_eventSetCustomSkeletalMeshFactoryNodeUid_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSkeletonFactoryNode_eventSetCustomSkeletalMeshFactoryNodeUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletonFactoryNode_eventSetCustomSkeletalMeshFactoryNodeUid_Parms), &Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Skeleton" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletonFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletonFactoryNode, nullptr, "SetCustomSkeletalMeshFactoryNodeUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::InterchangeSkeletonFactoryNode_eventSetCustomSkeletalMeshFactoryNodeUid_Parms), Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics
	{
		struct InterchangeSkeletonFactoryNode_eventSetCustomUseTimeZeroForBindPose_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeSkeletonFactoryNode_eventSetCustomUseTimeZeroForBindPose_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletonFactoryNode_eventSetCustomUseTimeZeroForBindPose_Parms), &Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSkeletonFactoryNode_eventSetCustomUseTimeZeroForBindPose_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSkeletonFactoryNode_eventSetCustomUseTimeZeroForBindPose_Parms), &Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Skeleton" },
		{ "Comment", "/** If AttributeValue is true, force this skeleton bind pose to use time zero instead of bind pose.*/" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletonFactoryNode.h" },
		{ "ToolTip", "If AttributeValue is true, force this skeleton bind pose to use time zero instead of bind pose." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletonFactoryNode, nullptr, "SetCustomUseTimeZeroForBindPose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::InterchangeSkeletonFactoryNode_eventSetCustomUseTimeZeroForBindPose_Parms), Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeSkeletonFactoryNode);
	UClass* Z_Construct_UClass_UInterchangeSkeletonFactoryNode_NoRegister()
	{
		return UInterchangeSkeletonFactoryNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeSkeletonFactoryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeSkeletonFactoryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBaseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeSkeletonFactoryNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid, "GetCustomRootJointUid" }, // 1552689617
		{ &Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid, "GetCustomSkeletalMeshFactoryNodeUid" }, // 3115029240
		{ &Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose, "GetCustomUseTimeZeroForBindPose" }, // 654566005
		{ &Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetObjectClass, "GetObjectClass" }, // 2109984822
		{ &Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode, "InitializeSkeletonNode" }, // 199580506
		{ &Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid, "SetCustomRootJointUid" }, // 1251782264
		{ &Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid, "SetCustomSkeletalMeshFactoryNodeUid" }, // 3855696912
		{ &Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose, "SetCustomUseTimeZeroForBindPose" }, // 3521690419
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeSkeletonFactoryNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeSkeletonFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletonFactoryNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeSkeletonFactoryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeSkeletonFactoryNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeSkeletonFactoryNode_Statics::ClassParams = {
		&UInterchangeSkeletonFactoryNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeSkeletonFactoryNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSkeletonFactoryNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeSkeletonFactoryNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeSkeletonFactoryNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeSkeletonFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeSkeletonFactoryNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeSkeletonFactoryNode.OuterSingleton;
	}
	template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeSkeletonFactoryNode>()
	{
		return UInterchangeSkeletonFactoryNode::StaticClass();
	}
	UInterchangeSkeletonFactoryNode::UInterchangeSkeletonFactoryNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeSkeletonFactoryNode);
	UInterchangeSkeletonFactoryNode::~UInterchangeSkeletonFactoryNode() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeSkeletonFactoryNode)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeSkeletonFactoryNode, UInterchangeSkeletonFactoryNode::StaticClass, TEXT("UInterchangeSkeletonFactoryNode"), &Z_Registration_Info_UClass_UInterchangeSkeletonFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeSkeletonFactoryNode), 318463303U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_1849156254(TEXT("/Script/InterchangeFactoryNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
