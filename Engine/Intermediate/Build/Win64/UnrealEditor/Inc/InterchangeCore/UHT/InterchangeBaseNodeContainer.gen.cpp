// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nodes/InterchangeBaseNodeContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeBaseNodeContainer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNode_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNodeContainer();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeCore();
// End Cross Module References
	DEFINE_FUNCTION(UInterchangeBaseNodeContainer::execResetChildrenCache)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetChildrenCache();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeBaseNodeContainer::execComputeChildrenCache)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ComputeChildrenCache();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeBaseNodeContainer::execLoadFromFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadFromFile(Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeBaseNodeContainer::execSaveToFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveToFile(Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeBaseNodeContainer::execGetNodeChildren)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NodeUniqueID);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChildIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInterchangeBaseNode**)Z_Param__Result=P_THIS->GetNodeChildren(Z_Param_NodeUniqueID,Z_Param_ChildIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeBaseNodeContainer::execGetNodeChildrenUids)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NodeUniqueID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetNodeChildrenUids(Z_Param_NodeUniqueID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeBaseNodeContainer::execGetNodeChildrenCount)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NodeUniqueID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNodeChildrenCount(Z_Param_NodeUniqueID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeBaseNodeContainer::execSetNodeParentUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NodeUniqueID);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewParentNodeUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetNodeParentUid(Z_Param_NodeUniqueID,Z_Param_NewParentNodeUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeBaseNodeContainer::execGetFactoryNode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NodeUniqueID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInterchangeFactoryBaseNode**)Z_Param__Result=P_THIS->GetFactoryNode(Z_Param_NodeUniqueID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeBaseNodeContainer::execGetNode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NodeUniqueID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UInterchangeBaseNode**)Z_Param__Result=P_THIS->GetNode(Z_Param_NodeUniqueID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeBaseNodeContainer::execGetNodes)
	{
		P_GET_OBJECT(UClass,Z_Param_ClassNode);
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutNodes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNodes(Z_Param_ClassNode,Z_Param_Out_OutNodes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeBaseNodeContainer::execGetRoots)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_RootNodes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRoots(Z_Param_Out_RootNodes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeBaseNodeContainer::execIsNodeUidValid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NodeUniqueID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNodeUidValid(Z_Param_NodeUniqueID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeBaseNodeContainer::execAddNode)
	{
		P_GET_OBJECT(UInterchangeBaseNode,Z_Param_Node);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->AddNode(Z_Param_Node);
		P_NATIVE_END;
	}
	void UInterchangeBaseNodeContainer::StaticRegisterNativesUInterchangeBaseNodeContainer()
	{
		UClass* Class = UInterchangeBaseNodeContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddNode", &UInterchangeBaseNodeContainer::execAddNode },
			{ "ComputeChildrenCache", &UInterchangeBaseNodeContainer::execComputeChildrenCache },
			{ "GetFactoryNode", &UInterchangeBaseNodeContainer::execGetFactoryNode },
			{ "GetNode", &UInterchangeBaseNodeContainer::execGetNode },
			{ "GetNodeChildren", &UInterchangeBaseNodeContainer::execGetNodeChildren },
			{ "GetNodeChildrenCount", &UInterchangeBaseNodeContainer::execGetNodeChildrenCount },
			{ "GetNodeChildrenUids", &UInterchangeBaseNodeContainer::execGetNodeChildrenUids },
			{ "GetNodes", &UInterchangeBaseNodeContainer::execGetNodes },
			{ "GetRoots", &UInterchangeBaseNodeContainer::execGetRoots },
			{ "IsNodeUidValid", &UInterchangeBaseNodeContainer::execIsNodeUidValid },
			{ "LoadFromFile", &UInterchangeBaseNodeContainer::execLoadFromFile },
			{ "ResetChildrenCache", &UInterchangeBaseNodeContainer::execResetChildrenCache },
			{ "SaveToFile", &UInterchangeBaseNodeContainer::execSaveToFile },
			{ "SetNodeParentUid", &UInterchangeBaseNodeContainer::execSetNodeParentUid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeBaseNodeContainer_AddNode_Statics
	{
		struct InterchangeBaseNodeContainer_eventAddNode_Parms
		{
			UInterchangeBaseNode* Node;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_AddNode_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventAddNode_Parms, Node), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_AddNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventAddNode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNodeContainer_AddNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_AddNode_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_AddNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseNodeContainer_AddNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node Container" },
		{ "Comment", "/**\n\x09 * Add a node in the container, the node will be add into a TMap.\n\x09 *\n\x09 * @param Node - a pointer on the node you want to add\n\x09 * @return: return the node unique ID of the added item. If the node already exist it will return the existing ID. Return InvalidNodeUid if the node cannot be added.\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
		{ "ToolTip", "Add a node in the container, the node will be add into a TMap.\n\n@param Node - a pointer on the node you want to add\n@return: return the node unique ID of the added item. If the node already exist it will return the existing ID. Return InvalidNodeUid if the node cannot be added." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_AddNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNodeContainer, nullptr, "AddNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_AddNode_Statics::InterchangeBaseNodeContainer_eventAddNode_Parms), Z_Construct_UFunction_UInterchangeBaseNodeContainer_AddNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_AddNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseNodeContainer_AddNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_AddNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeBaseNodeContainer_AddNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNodeContainer_AddNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeBaseNodeContainer_ComputeChildrenCache_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseNodeContainer_ComputeChildrenCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node Container" },
		{ "Comment", "/* Fill the children uids cache to optimize the GetNodeChildrenUids call.*/" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
		{ "ToolTip", "Fill the children uids cache to optimize the GetNodeChildrenUids call." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_ComputeChildrenCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNodeContainer, nullptr, "ComputeChildrenCache", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseNodeContainer_ComputeChildrenCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_ComputeChildrenCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeBaseNodeContainer_ComputeChildrenCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNodeContainer_ComputeChildrenCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode_Statics
	{
		struct InterchangeBaseNodeContainer_eventGetFactoryNode_Parms
		{
			FString NodeUniqueID;
			UInterchangeFactoryBaseNode* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeUniqueID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeUniqueID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode_Statics::NewProp_NodeUniqueID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode_Statics::NewProp_NodeUniqueID = { "NodeUniqueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventGetFactoryNode_Parms, NodeUniqueID), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode_Statics::NewProp_NodeUniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode_Statics::NewProp_NodeUniqueID_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventGetFactoryNode_Parms, ReturnValue), Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode_Statics::NewProp_NodeUniqueID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node Container" },
		{ "Comment", "/** Get a factory node pointer */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
		{ "ToolTip", "Get a factory node pointer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNodeContainer, nullptr, "GetFactoryNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode_Statics::InterchangeBaseNodeContainer_eventGetFactoryNode_Parms), Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics
	{
		struct InterchangeBaseNodeContainer_eventGetNode_Parms
		{
			FString NodeUniqueID;
			const UInterchangeBaseNode* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeUniqueID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeUniqueID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics::NewProp_NodeUniqueID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics::NewProp_NodeUniqueID = { "NodeUniqueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventGetNode_Parms, NodeUniqueID), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics::NewProp_NodeUniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics::NewProp_NodeUniqueID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventGetNode_Parms, ReturnValue), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics::NewProp_NodeUniqueID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node Container" },
		{ "Comment", "/** Get a node pointer. Once added to the container, nodes are considered const */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
		{ "ToolTip", "Get a node pointer. Once added to the container, nodes are considered const" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNodeContainer, nullptr, "GetNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics::InterchangeBaseNodeContainer_eventGetNode_Parms), Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics
	{
		struct InterchangeBaseNodeContainer_eventGetNodeChildren_Parms
		{
			FString NodeUniqueID;
			int32 ChildIndex;
			UInterchangeBaseNode* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeUniqueID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeUniqueID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChildIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::NewProp_NodeUniqueID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::NewProp_NodeUniqueID = { "NodeUniqueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventGetNodeChildren_Parms, NodeUniqueID), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::NewProp_NodeUniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::NewProp_NodeUniqueID_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::NewProp_ChildIndex = { "ChildIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventGetNodeChildren_Parms, ChildIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventGetNodeChildren_Parms, ReturnValue), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::NewProp_NodeUniqueID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::NewProp_ChildIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node Container" },
		{ "Comment", "/** Get the node nth const children */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
		{ "ToolTip", "Get the node nth const children" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNodeContainer, nullptr, "GetNodeChildren", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::InterchangeBaseNodeContainer_eventGetNodeChildren_Parms), Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount_Statics
	{
		struct InterchangeBaseNodeContainer_eventGetNodeChildrenCount_Parms
		{
			FString NodeUniqueID;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeUniqueID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeUniqueID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount_Statics::NewProp_NodeUniqueID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount_Statics::NewProp_NodeUniqueID = { "NodeUniqueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventGetNodeChildrenCount_Parms, NodeUniqueID), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount_Statics::NewProp_NodeUniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount_Statics::NewProp_NodeUniqueID_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventGetNodeChildrenCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount_Statics::NewProp_NodeUniqueID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node Container" },
		{ "Comment", "/** Get the node children count */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
		{ "ToolTip", "Get the node children count" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNodeContainer, nullptr, "GetNodeChildrenCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount_Statics::InterchangeBaseNodeContainer_eventGetNodeChildrenCount_Parms), Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics
	{
		struct InterchangeBaseNodeContainer_eventGetNodeChildrenUids_Parms
		{
			FString NodeUniqueID;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeUniqueID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeUniqueID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::NewProp_NodeUniqueID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::NewProp_NodeUniqueID = { "NodeUniqueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventGetNodeChildrenUids_Parms, NodeUniqueID), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::NewProp_NodeUniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::NewProp_NodeUniqueID_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventGetNodeChildrenUids_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::NewProp_NodeUniqueID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node Container" },
		{ "Comment", "/** Get all children Uid */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
		{ "ToolTip", "Get all children Uid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNodeContainer, nullptr, "GetNodeChildrenUids", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::InterchangeBaseNodeContainer_eventGetNodeChildrenUids_Parms), Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics
	{
		struct InterchangeBaseNodeContainer_eventGetNodes_Parms
		{
			const UClass* ClassNode;
			TArray<FString> OutNodes;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassNode_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ClassNode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutNodes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutNodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::NewProp_ClassNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::NewProp_ClassNode = { "ClassNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventGetNodes_Parms, ClassNode), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::NewProp_ClassNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::NewProp_ClassNode_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::NewProp_OutNodes_Inner = { "OutNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::NewProp_OutNodes = { "OutNodes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventGetNodes_Parms, OutNodes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::NewProp_ClassNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::NewProp_OutNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::NewProp_OutNodes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node Container" },
		{ "Comment", "/** Return all nodes that are of the ClassNode type*/" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
		{ "ToolTip", "Return all nodes that are of the ClassNode type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNodeContainer, nullptr, "GetNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::InterchangeBaseNodeContainer_eventGetNodes_Parms), Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetRoots_Statics
	{
		struct InterchangeBaseNodeContainer_eventGetRoots_Parms
		{
			TArray<FString> RootNodes;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_RootNodes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RootNodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetRoots_Statics::NewProp_RootNodes_Inner = { "RootNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetRoots_Statics::NewProp_RootNodes = { "RootNodes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventGetRoots_Parms, RootNodes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetRoots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetRoots_Statics::NewProp_RootNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetRoots_Statics::NewProp_RootNodes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetRoots_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node Container" },
		{ "Comment", "/** Return all nodes that do not have any parent */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
		{ "ToolTip", "Return all nodes that do not have any parent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetRoots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNodeContainer, nullptr, "GetRoots", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetRoots_Statics::InterchangeBaseNodeContainer_eventGetRoots_Parms), Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetRoots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetRoots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetRoots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetRoots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetRoots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetRoots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics
	{
		struct InterchangeBaseNodeContainer_eventIsNodeUidValid_Parms
		{
			FString NodeUniqueID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeUniqueID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeUniqueID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::NewProp_NodeUniqueID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::NewProp_NodeUniqueID = { "NodeUniqueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventIsNodeUidValid_Parms, NodeUniqueID), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::NewProp_NodeUniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::NewProp_NodeUniqueID_MetaData)) };
	void Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeBaseNodeContainer_eventIsNodeUidValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeBaseNodeContainer_eventIsNodeUidValid_Parms), &Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::NewProp_NodeUniqueID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node Container" },
		{ "Comment", "/** Return true if the node unique ID exist in the container */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
		{ "ToolTip", "Return true if the node unique ID exist in the container" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNodeContainer, nullptr, "IsNodeUidValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::InterchangeBaseNodeContainer_eventIsNodeUidValid_Parms), Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeBaseNodeContainer_LoadFromFile_Statics
	{
		struct InterchangeBaseNodeContainer_eventLoadFromFile_Parms
		{
			FString Filename;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseNodeContainer_LoadFromFile_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_LoadFromFile_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventLoadFromFile_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseNodeContainer_LoadFromFile_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_LoadFromFile_Statics::NewProp_Filename_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNodeContainer_LoadFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_LoadFromFile_Statics::NewProp_Filename,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseNodeContainer_LoadFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node Container" },
		{ "Comment", "/* Serialize the node container from the specified file.*/" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
		{ "ToolTip", "Serialize the node container from the specified file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_LoadFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNodeContainer, nullptr, "LoadFromFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_LoadFromFile_Statics::InterchangeBaseNodeContainer_eventLoadFromFile_Parms), Z_Construct_UFunction_UInterchangeBaseNodeContainer_LoadFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_LoadFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseNodeContainer_LoadFromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_LoadFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeBaseNodeContainer_LoadFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNodeContainer_LoadFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeBaseNodeContainer_ResetChildrenCache_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseNodeContainer_ResetChildrenCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node Container" },
		{ "Comment", "/* Reset the children uids cache. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
		{ "ToolTip", "Reset the children uids cache." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_ResetChildrenCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNodeContainer, nullptr, "ResetChildrenCache", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseNodeContainer_ResetChildrenCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_ResetChildrenCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeBaseNodeContainer_ResetChildrenCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNodeContainer_ResetChildrenCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeBaseNodeContainer_SaveToFile_Statics
	{
		struct InterchangeBaseNodeContainer_eventSaveToFile_Parms
		{
			FString Filename;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseNodeContainer_SaveToFile_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_SaveToFile_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventSaveToFile_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseNodeContainer_SaveToFile_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_SaveToFile_Statics::NewProp_Filename_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNodeContainer_SaveToFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_SaveToFile_Statics::NewProp_Filename,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseNodeContainer_SaveToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node Container" },
		{ "Comment", "/* Serialize the node container into the specified file.*/" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
		{ "ToolTip", "Serialize the node container into the specified file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_SaveToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNodeContainer, nullptr, "SaveToFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_SaveToFile_Statics::InterchangeBaseNodeContainer_eventSaveToFile_Parms), Z_Construct_UFunction_UInterchangeBaseNodeContainer_SaveToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_SaveToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseNodeContainer_SaveToFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_SaveToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeBaseNodeContainer_SaveToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNodeContainer_SaveToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics
	{
		struct InterchangeBaseNodeContainer_eventSetNodeParentUid_Parms
		{
			FString NodeUniqueID;
			FString NewParentNodeUid;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeUniqueID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeUniqueID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewParentNodeUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewParentNodeUid;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::NewProp_NodeUniqueID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::NewProp_NodeUniqueID = { "NodeUniqueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventSetNodeParentUid_Parms, NodeUniqueID), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::NewProp_NodeUniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::NewProp_NodeUniqueID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::NewProp_NewParentNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::NewProp_NewParentNodeUid = { "NewParentNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventSetNodeParentUid_Parms, NewParentNodeUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::NewProp_NewParentNodeUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::NewProp_NewParentNodeUid_MetaData)) };
	void Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeBaseNodeContainer_eventSetNodeParentUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeBaseNodeContainer_eventSetNodeParentUid_Parms), &Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::NewProp_NodeUniqueID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::NewProp_NewParentNodeUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node Container" },
		{ "Comment", "/** Set node ParentUid */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
		{ "ToolTip", "Set node ParentUid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNodeContainer, nullptr, "SetNodeParentUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::InterchangeBaseNodeContainer_eventSetNodeParentUid_Parms), Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeBaseNodeContainer);
	UClass* Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister()
	{
		return UInterchangeBaseNodeContainer::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Nodes_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Nodes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Nodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeBaseNodeContainer_AddNode, "AddNode" }, // 2084754427
		{ &Z_Construct_UFunction_UInterchangeBaseNodeContainer_ComputeChildrenCache, "ComputeChildrenCache" }, // 3989491042
		{ &Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode, "GetFactoryNode" }, // 1171388832
		{ &Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode, "GetNode" }, // 2219299961
		{ &Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren, "GetNodeChildren" }, // 3280379348
		{ &Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount, "GetNodeChildrenCount" }, // 1654069009
		{ &Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids, "GetNodeChildrenUids" }, // 2853940877
		{ &Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes, "GetNodes" }, // 3767148018
		{ &Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetRoots, "GetRoots" }, // 3873678627
		{ &Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid, "IsNodeUidValid" }, // 2136121607
		{ &Z_Construct_UFunction_UInterchangeBaseNodeContainer_LoadFromFile, "LoadFromFile" }, // 17312814
		{ &Z_Construct_UFunction_UInterchangeBaseNodeContainer_ResetChildrenCache, "ResetChildrenCache" }, // 1436877306
		{ &Z_Construct_UFunction_UInterchangeBaseNodeContainer_SaveToFile, "SaveToFile" }, // 3167677130
		{ &Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid, "SetNodeParentUid" }, // 1452177052
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Interchange UInterchangeBaseNode graph is a format used to feed asset/scene import/reimport/export factories/writer.\n * This container hold a flat list of all nodes that have been translated from the source data.\n *\n * Translators are filling this container and the Import/Export managers are reading it to execute the import/export process\n */" },
		{ "IncludePath", "Nodes/InterchangeBaseNodeContainer.h" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
		{ "ToolTip", "Interchange UInterchangeBaseNode graph is a format used to feed asset/scene import/reimport/export factories/writer.\nThis container hold a flat list of all nodes that have been translated from the source data.\n\nTranslators are filling this container and the Import/Export managers are reading it to execute the import/export process" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::NewProp_Nodes_ValueProp = { "Nodes", nullptr, (EPropertyFlags)0x0004000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::NewProp_Nodes_Key_KeyProp = { "Nodes_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::NewProp_Nodes_MetaData[] = {
		{ "Category", "Interchange | Node Container" },
		{ "Comment", "/** Flat List of the nodes. Since the nodes are variable size, we store a pointer. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
		{ "ToolTip", "Flat List of the nodes. Since the nodes are variable size, we store a pointer." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeBaseNodeContainer, Nodes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::NewProp_Nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::NewProp_Nodes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::NewProp_Nodes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::NewProp_Nodes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::NewProp_Nodes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeBaseNodeContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::ClassParams = {
		&UInterchangeBaseNodeContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeBaseNodeContainer()
	{
		if (!Z_Registration_Info_UClass_UInterchangeBaseNodeContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeBaseNodeContainer.OuterSingleton, Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeBaseNodeContainer.OuterSingleton;
	}
	template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangeBaseNodeContainer>()
	{
		return UInterchangeBaseNodeContainer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeBaseNodeContainer);
	UInterchangeBaseNodeContainer::~UInterchangeBaseNodeContainer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNodeContainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNodeContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeBaseNodeContainer, UInterchangeBaseNodeContainer::StaticClass, TEXT("UInterchangeBaseNodeContainer"), &Z_Registration_Info_UClass_UInterchangeBaseNodeContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeBaseNodeContainer), 873719687U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNodeContainer_h_386496499(TEXT("/Script/InterchangeCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNodeContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNodeContainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
