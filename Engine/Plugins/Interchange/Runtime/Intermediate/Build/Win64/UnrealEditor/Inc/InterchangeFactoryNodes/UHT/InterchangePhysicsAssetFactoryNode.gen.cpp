// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangePhysicsAssetFactoryNode.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangePhysicsAssetFactoryNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangePhysicsAssetFactoryNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangePhysicsAssetFactoryNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References
	DEFINE_FUNCTION(UInterchangePhysicsAssetFactoryNode::execSetCustomSkeletalMeshUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomSkeletalMeshUid(Z_Param_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePhysicsAssetFactoryNode::execGetCustomSkeletalMeshUid)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomSkeletalMeshUid(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePhysicsAssetFactoryNode::execGetObjectClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->GetObjectClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePhysicsAssetFactoryNode::execInitializePhysicsAssetNode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UniqueID);
		P_GET_PROPERTY(FStrProperty,Z_Param_DisplayLabel);
		P_GET_PROPERTY(FStrProperty,Z_Param_InAssetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializePhysicsAssetNode(Z_Param_UniqueID,Z_Param_DisplayLabel,Z_Param_InAssetClass);
		P_NATIVE_END;
	}
	void UInterchangePhysicsAssetFactoryNode::StaticRegisterNativesUInterchangePhysicsAssetFactoryNode()
	{
		UClass* Class = UInterchangePhysicsAssetFactoryNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomSkeletalMeshUid", &UInterchangePhysicsAssetFactoryNode::execGetCustomSkeletalMeshUid },
			{ "GetObjectClass", &UInterchangePhysicsAssetFactoryNode::execGetObjectClass },
			{ "InitializePhysicsAssetNode", &UInterchangePhysicsAssetFactoryNode::execInitializePhysicsAssetNode },
			{ "SetCustomSkeletalMeshUid", &UInterchangePhysicsAssetFactoryNode::execSetCustomSkeletalMeshUid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_GetCustomSkeletalMeshUid_Statics
	{
		struct InterchangePhysicsAssetFactoryNode_eventGetCustomSkeletalMeshUid_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_GetCustomSkeletalMeshUid_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePhysicsAssetFactoryNode_eventGetCustomSkeletalMeshUid_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_GetCustomSkeletalMeshUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangePhysicsAssetFactoryNode_eventGetCustomSkeletalMeshUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_GetCustomSkeletalMeshUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangePhysicsAssetFactoryNode_eventGetCustomSkeletalMeshUid_Parms), &Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_GetCustomSkeletalMeshUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_GetCustomSkeletalMeshUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_GetCustomSkeletalMeshUid_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_GetCustomSkeletalMeshUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_GetCustomSkeletalMeshUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Skeleton" },
		{ "Comment", "/** Get skeletalMesh asset Uid used to create the data in the post pipeline step.*/" },
		{ "ModuleRelativePath", "Public/InterchangePhysicsAssetFactoryNode.h" },
		{ "ToolTip", "Get skeletalMesh asset Uid used to create the data in the post pipeline step." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_GetCustomSkeletalMeshUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePhysicsAssetFactoryNode, nullptr, "GetCustomSkeletalMeshUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_GetCustomSkeletalMeshUid_Statics::InterchangePhysicsAssetFactoryNode_eventGetCustomSkeletalMeshUid_Parms), Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_GetCustomSkeletalMeshUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_GetCustomSkeletalMeshUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_GetCustomSkeletalMeshUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_GetCustomSkeletalMeshUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_GetCustomSkeletalMeshUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_GetCustomSkeletalMeshUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_GetObjectClass_Statics
	{
		struct InterchangePhysicsAssetFactoryNode_eventGetObjectClass_Parms
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePhysicsAssetFactoryNode_eventGetObjectClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_GetObjectClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_GetObjectClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Skeleton" },
		{ "Comment", "/** Get the class this node want to create */" },
		{ "ModuleRelativePath", "Public/InterchangePhysicsAssetFactoryNode.h" },
		{ "ToolTip", "Get the class this node want to create" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_GetObjectClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePhysicsAssetFactoryNode, nullptr, "GetObjectClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_GetObjectClass_Statics::InterchangePhysicsAssetFactoryNode_eventGetObjectClass_Parms), Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_GetObjectClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_GetObjectClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_GetObjectClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_GetObjectClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_GetObjectClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_GetObjectClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_InitializePhysicsAssetNode_Statics
	{
		struct InterchangePhysicsAssetFactoryNode_eventInitializePhysicsAssetNode_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_InitializePhysicsAssetNode_Statics::NewProp_UniqueID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_InitializePhysicsAssetNode_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePhysicsAssetFactoryNode_eventInitializePhysicsAssetNode_Parms, UniqueID), METADATA_PARAMS(Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_InitializePhysicsAssetNode_Statics::NewProp_UniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_InitializePhysicsAssetNode_Statics::NewProp_UniqueID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_InitializePhysicsAssetNode_Statics::NewProp_DisplayLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_InitializePhysicsAssetNode_Statics::NewProp_DisplayLabel = { "DisplayLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePhysicsAssetFactoryNode_eventInitializePhysicsAssetNode_Parms, DisplayLabel), METADATA_PARAMS(Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_InitializePhysicsAssetNode_Statics::NewProp_DisplayLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_InitializePhysicsAssetNode_Statics::NewProp_DisplayLabel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_InitializePhysicsAssetNode_Statics::NewProp_InAssetClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_InitializePhysicsAssetNode_Statics::NewProp_InAssetClass = { "InAssetClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePhysicsAssetFactoryNode_eventInitializePhysicsAssetNode_Parms, InAssetClass), METADATA_PARAMS(Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_InitializePhysicsAssetNode_Statics::NewProp_InAssetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_InitializePhysicsAssetNode_Statics::NewProp_InAssetClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_InitializePhysicsAssetNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_InitializePhysicsAssetNode_Statics::NewProp_UniqueID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_InitializePhysicsAssetNode_Statics::NewProp_DisplayLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_InitializePhysicsAssetNode_Statics::NewProp_InAssetClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_InitializePhysicsAssetNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Skeleton" },
		{ "Comment", "/**\n\x09 * Initialize node data\n\x09 * @param: UniqueID - The uniqueId for this node\n\x09 * @param DisplayLabel - The name of the node\n\x09 * @param InAssetClass - The class the Skeleton factory will create for this node.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePhysicsAssetFactoryNode.h" },
		{ "ToolTip", "Initialize node data\n@param: UniqueID - The uniqueId for this node\n@param DisplayLabel - The name of the node\n@param InAssetClass - The class the Skeleton factory will create for this node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_InitializePhysicsAssetNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePhysicsAssetFactoryNode, nullptr, "InitializePhysicsAssetNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_InitializePhysicsAssetNode_Statics::InterchangePhysicsAssetFactoryNode_eventInitializePhysicsAssetNode_Parms), Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_InitializePhysicsAssetNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_InitializePhysicsAssetNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_InitializePhysicsAssetNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_InitializePhysicsAssetNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_InitializePhysicsAssetNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_InitializePhysicsAssetNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_SetCustomSkeletalMeshUid_Statics
	{
		struct InterchangePhysicsAssetFactoryNode_eventSetCustomSkeletalMeshUid_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_SetCustomSkeletalMeshUid_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_SetCustomSkeletalMeshUid_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePhysicsAssetFactoryNode_eventSetCustomSkeletalMeshUid_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_SetCustomSkeletalMeshUid_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_SetCustomSkeletalMeshUid_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_SetCustomSkeletalMeshUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangePhysicsAssetFactoryNode_eventSetCustomSkeletalMeshUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_SetCustomSkeletalMeshUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangePhysicsAssetFactoryNode_eventSetCustomSkeletalMeshUid_Parms), &Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_SetCustomSkeletalMeshUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_SetCustomSkeletalMeshUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_SetCustomSkeletalMeshUid_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_SetCustomSkeletalMeshUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_SetCustomSkeletalMeshUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Skeleton" },
		{ "Comment", "/** Set skeletalMesh asset Uid used to create the data in the post pipeline step.*/" },
		{ "ModuleRelativePath", "Public/InterchangePhysicsAssetFactoryNode.h" },
		{ "ToolTip", "Set skeletalMesh asset Uid used to create the data in the post pipeline step." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_SetCustomSkeletalMeshUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePhysicsAssetFactoryNode, nullptr, "SetCustomSkeletalMeshUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_SetCustomSkeletalMeshUid_Statics::InterchangePhysicsAssetFactoryNode_eventSetCustomSkeletalMeshUid_Parms), Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_SetCustomSkeletalMeshUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_SetCustomSkeletalMeshUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_SetCustomSkeletalMeshUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_SetCustomSkeletalMeshUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_SetCustomSkeletalMeshUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_SetCustomSkeletalMeshUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangePhysicsAssetFactoryNode);
	UClass* Z_Construct_UClass_UInterchangePhysicsAssetFactoryNode_NoRegister()
	{
		return UInterchangePhysicsAssetFactoryNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangePhysicsAssetFactoryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangePhysicsAssetFactoryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBaseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangePhysicsAssetFactoryNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_GetCustomSkeletalMeshUid, "GetCustomSkeletalMeshUid" }, // 3470735125
		{ &Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_GetObjectClass, "GetObjectClass" }, // 717824260
		{ &Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_InitializePhysicsAssetNode, "InitializePhysicsAssetNode" }, // 2533626167
		{ &Z_Construct_UFunction_UInterchangePhysicsAssetFactoryNode_SetCustomSkeletalMeshUid, "SetCustomSkeletalMeshUid" }, // 1727999882
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangePhysicsAssetFactoryNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangePhysicsAssetFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangePhysicsAssetFactoryNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangePhysicsAssetFactoryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangePhysicsAssetFactoryNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangePhysicsAssetFactoryNode_Statics::ClassParams = {
		&UInterchangePhysicsAssetFactoryNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangePhysicsAssetFactoryNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePhysicsAssetFactoryNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangePhysicsAssetFactoryNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangePhysicsAssetFactoryNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangePhysicsAssetFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangePhysicsAssetFactoryNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangePhysicsAssetFactoryNode.OuterSingleton;
	}
	template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangePhysicsAssetFactoryNode>()
	{
		return UInterchangePhysicsAssetFactoryNode::StaticClass();
	}
	UInterchangePhysicsAssetFactoryNode::UInterchangePhysicsAssetFactoryNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangePhysicsAssetFactoryNode);
	UInterchangePhysicsAssetFactoryNode::~UInterchangePhysicsAssetFactoryNode() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangePhysicsAssetFactoryNode)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangePhysicsAssetFactoryNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangePhysicsAssetFactoryNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangePhysicsAssetFactoryNode, UInterchangePhysicsAssetFactoryNode::StaticClass, TEXT("UInterchangePhysicsAssetFactoryNode"), &Z_Registration_Info_UClass_UInterchangePhysicsAssetFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangePhysicsAssetFactoryNode), 880785415U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangePhysicsAssetFactoryNode_h_726135729(TEXT("/Script/InterchangeFactoryNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangePhysicsAssetFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangePhysicsAssetFactoryNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
