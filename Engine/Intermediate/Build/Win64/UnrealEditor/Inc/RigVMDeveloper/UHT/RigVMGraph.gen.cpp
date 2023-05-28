// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMModel/RigVMGraph.h"
#include "RigVMModel/RigVMVariableDescription.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMGraph() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMFunctionEntryNode_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMFunctionLibrary_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMFunctionReturnNode_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMGraph();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMGraph_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMLink_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMNode_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMPin_NoRegister();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphVariableDescription();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	DEFINE_FUNCTION(URigVMGraph::execGetOutputArguments)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRigVMGraphVariableDescription>*)Z_Param__Result=P_THIS->GetOutputArguments();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMGraph::execGetInputArguments)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRigVMGraphVariableDescription>*)Z_Param__Result=P_THIS->GetInputArguments();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMGraph::execGetLocalVariables)
	{
		P_GET_UBOOL(Z_Param_bIncludeInputArguments);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRigVMGraphVariableDescription>*)Z_Param__Result=P_THIS->GetLocalVariables(Z_Param_bIncludeInputArguments);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMGraph::execSetDefaultFunctionLibrary)
	{
		P_GET_OBJECT(URigVMFunctionLibrary,Z_Param_InFunctionLibrary);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultFunctionLibrary(Z_Param_InFunctionLibrary);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMGraph::execGetDefaultFunctionLibrary)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMFunctionLibrary**)Z_Param__Result=P_THIS->GetDefaultFunctionLibrary();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMGraph::execIsTopLevelGraph)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTopLevelGraph();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMGraph::execGetSelectNodes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetSelectNodes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMGraph::execIsNodeSelected)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InNodeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNodeSelected(Z_Param_Out_InNodeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMGraph::execFindLink)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InLinkPinPathRepresentation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMLink**)Z_Param__Result=P_THIS->FindLink(Z_Param_InLinkPinPathRepresentation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMGraph::execFindPin)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPinPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMPin**)Z_Param__Result=P_THIS->FindPin(Z_Param_InPinPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMGraph::execFindNode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InNodePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMNode**)Z_Param__Result=P_THIS->FindNode(Z_Param_InNodePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMGraph::execFindNodeByName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InNodeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMNode**)Z_Param__Result=P_THIS->FindNodeByName(Z_Param_Out_InNodeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMGraph::execGetGraphName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetGraphName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMGraph::execGetNodePath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetNodePath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMGraph::execGetVariableDescriptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRigVMGraphVariableDescription>*)Z_Param__Result=P_THIS->GetVariableDescriptions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMGraph::execGetReturnNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMFunctionReturnNode**)Z_Param__Result=P_THIS->GetReturnNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMGraph::execGetEntryNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMFunctionEntryNode**)Z_Param__Result=P_THIS->GetEntryNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMGraph::execIsRootGraph)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRootGraph();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMGraph::execGetRootGraph)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMGraph**)Z_Param__Result=P_THIS->GetRootGraph();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMGraph::execGetParentGraph)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMGraph**)Z_Param__Result=P_THIS->GetParentGraph();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMGraph::execGetContainedGraphs)
	{
		P_GET_UBOOL(Z_Param_bRecursive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URigVMGraph*>*)Z_Param__Result=P_THIS->GetContainedGraphs(Z_Param_bRecursive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMGraph::execGetLinks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URigVMLink*>*)Z_Param__Result=P_THIS->GetLinks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMGraph::execGetNodes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URigVMNode*>*)Z_Param__Result=P_THIS->GetNodes();
		P_NATIVE_END;
	}
	void URigVMGraph::StaticRegisterNativesURigVMGraph()
	{
		UClass* Class = URigVMGraph::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindLink", &URigVMGraph::execFindLink },
			{ "FindNode", &URigVMGraph::execFindNode },
			{ "FindNodeByName", &URigVMGraph::execFindNodeByName },
			{ "FindPin", &URigVMGraph::execFindPin },
			{ "GetContainedGraphs", &URigVMGraph::execGetContainedGraphs },
			{ "GetDefaultFunctionLibrary", &URigVMGraph::execGetDefaultFunctionLibrary },
			{ "GetEntryNode", &URigVMGraph::execGetEntryNode },
			{ "GetGraphName", &URigVMGraph::execGetGraphName },
			{ "GetInputArguments", &URigVMGraph::execGetInputArguments },
			{ "GetLinks", &URigVMGraph::execGetLinks },
			{ "GetLocalVariables", &URigVMGraph::execGetLocalVariables },
			{ "GetNodePath", &URigVMGraph::execGetNodePath },
			{ "GetNodes", &URigVMGraph::execGetNodes },
			{ "GetOutputArguments", &URigVMGraph::execGetOutputArguments },
			{ "GetParentGraph", &URigVMGraph::execGetParentGraph },
			{ "GetReturnNode", &URigVMGraph::execGetReturnNode },
			{ "GetRootGraph", &URigVMGraph::execGetRootGraph },
			{ "GetSelectNodes", &URigVMGraph::execGetSelectNodes },
			{ "GetVariableDescriptions", &URigVMGraph::execGetVariableDescriptions },
			{ "IsNodeSelected", &URigVMGraph::execIsNodeSelected },
			{ "IsRootGraph", &URigVMGraph::execIsRootGraph },
			{ "IsTopLevelGraph", &URigVMGraph::execIsTopLevelGraph },
			{ "SetDefaultFunctionLibrary", &URigVMGraph::execSetDefaultFunctionLibrary },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URigVMGraph_FindLink_Statics
	{
		struct RigVMGraph_eventFindLink_Parms
		{
			FString InLinkPinPathRepresentation;
			URigVMLink* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLinkPinPathRepresentation_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InLinkPinPathRepresentation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMGraph_FindLink_Statics::NewProp_InLinkPinPathRepresentation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMGraph_FindLink_Statics::NewProp_InLinkPinPathRepresentation = { "InLinkPinPathRepresentation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMGraph_eventFindLink_Parms, InLinkPinPathRepresentation), METADATA_PARAMS(Z_Construct_UFunction_URigVMGraph_FindLink_Statics::NewProp_InLinkPinPathRepresentation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_FindLink_Statics::NewProp_InLinkPinPathRepresentation_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMGraph_FindLink_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMGraph_eventFindLink_Parms, ReturnValue), Z_Construct_UClass_URigVMLink_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMGraph_FindLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_FindLink_Statics::NewProp_InLinkPinPathRepresentation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_FindLink_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMGraph_FindLink_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMGraph" },
		{ "Comment", "// Returns a link given its string representation,\n// for example \"NodeA.Color.R -> NodeB.Translation.X\"\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMGraph.h" },
		{ "ToolTip", "Returns a link given its string representation,\nfor example \"NodeA.Color.R -> NodeB.Translation.X\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMGraph_FindLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMGraph, nullptr, "FindLink", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMGraph_FindLink_Statics::RigVMGraph_eventFindLink_Parms), Z_Construct_UFunction_URigVMGraph_FindLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_FindLink_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMGraph_FindLink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_FindLink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMGraph_FindLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMGraph_FindLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMGraph_FindNode_Statics
	{
		struct RigVMGraph_eventFindNode_Parms
		{
			FString InNodePath;
			URigVMNode* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNodePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InNodePath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMGraph_FindNode_Statics::NewProp_InNodePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMGraph_FindNode_Statics::NewProp_InNodePath = { "InNodePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMGraph_eventFindNode_Parms, InNodePath), METADATA_PARAMS(Z_Construct_UFunction_URigVMGraph_FindNode_Statics::NewProp_InNodePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_FindNode_Statics::NewProp_InNodePath_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMGraph_FindNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMGraph_eventFindNode_Parms, ReturnValue), Z_Construct_UClass_URigVMNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMGraph_FindNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_FindNode_Statics::NewProp_InNodePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_FindNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMGraph_FindNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMGraph" },
		{ "Comment", "// Returns a Node given its path (or nullptr).\n// (for now this is the same as finding a node by its name.)\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMGraph.h" },
		{ "ToolTip", "Returns a Node given its path (or nullptr).\n(for now this is the same as finding a node by its name.)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMGraph_FindNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMGraph, nullptr, "FindNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMGraph_FindNode_Statics::RigVMGraph_eventFindNode_Parms), Z_Construct_UFunction_URigVMGraph_FindNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_FindNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMGraph_FindNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_FindNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMGraph_FindNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMGraph_FindNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMGraph_FindNodeByName_Statics
	{
		struct RigVMGraph_eventFindNodeByName_Parms
		{
			FName InNodeName;
			URigVMNode* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNodeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InNodeName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMGraph_FindNodeByName_Statics::NewProp_InNodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMGraph_FindNodeByName_Statics::NewProp_InNodeName = { "InNodeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMGraph_eventFindNodeByName_Parms, InNodeName), METADATA_PARAMS(Z_Construct_UFunction_URigVMGraph_FindNodeByName_Statics::NewProp_InNodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_FindNodeByName_Statics::NewProp_InNodeName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMGraph_FindNodeByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMGraph_eventFindNodeByName_Parms, ReturnValue), Z_Construct_UClass_URigVMNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMGraph_FindNodeByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_FindNodeByName_Statics::NewProp_InNodeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_FindNodeByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMGraph_FindNodeByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMGraph" },
		{ "Comment", "// Returns a Node given its name (or nullptr).\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMGraph.h" },
		{ "ToolTip", "Returns a Node given its name (or nullptr)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMGraph_FindNodeByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMGraph, nullptr, "FindNodeByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMGraph_FindNodeByName_Statics::RigVMGraph_eventFindNodeByName_Parms), Z_Construct_UFunction_URigVMGraph_FindNodeByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_FindNodeByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMGraph_FindNodeByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_FindNodeByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMGraph_FindNodeByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMGraph_FindNodeByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMGraph_FindPin_Statics
	{
		struct RigVMGraph_eventFindPin_Parms
		{
			FString InPinPath;
			URigVMPin* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPinPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InPinPath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMGraph_FindPin_Statics::NewProp_InPinPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMGraph_FindPin_Statics::NewProp_InPinPath = { "InPinPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMGraph_eventFindPin_Parms, InPinPath), METADATA_PARAMS(Z_Construct_UFunction_URigVMGraph_FindPin_Statics::NewProp_InPinPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_FindPin_Statics::NewProp_InPinPath_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMGraph_FindPin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMGraph_eventFindPin_Parms, ReturnValue), Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMGraph_FindPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_FindPin_Statics::NewProp_InPinPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_FindPin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMGraph_FindPin_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMGraph" },
		{ "Comment", "// Returns a Pin given its path, for example \"Node.Color.R\".\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMGraph.h" },
		{ "ToolTip", "Returns a Pin given its path, for example \"Node.Color.R\"." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMGraph_FindPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMGraph, nullptr, "FindPin", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMGraph_FindPin_Statics::RigVMGraph_eventFindPin_Parms), Z_Construct_UFunction_URigVMGraph_FindPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_FindPin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMGraph_FindPin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_FindPin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMGraph_FindPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMGraph_FindPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMGraph_GetContainedGraphs_Statics
	{
		struct RigVMGraph_eventGetContainedGraphs_Parms
		{
			bool bRecursive;
			TArray<URigVMGraph*> ReturnValue;
		};
		static void NewProp_bRecursive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URigVMGraph_GetContainedGraphs_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((RigVMGraph_eventGetContainedGraphs_Parms*)Obj)->bRecursive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMGraph_GetContainedGraphs_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMGraph_eventGetContainedGraphs_Parms), &Z_Construct_UFunction_URigVMGraph_GetContainedGraphs_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMGraph_GetContainedGraphs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMGraph_GetContainedGraphs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMGraph_eventGetContainedGraphs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMGraph_GetContainedGraphs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_GetContainedGraphs_Statics::NewProp_bRecursive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_GetContainedGraphs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_GetContainedGraphs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMGraph_GetContainedGraphs_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMGraph" },
		{ "Comment", "// Returns all of the contained graphs\n" },
		{ "CPP_Default_bRecursive", "false" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMGraph.h" },
		{ "ToolTip", "Returns all of the contained graphs" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMGraph_GetContainedGraphs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMGraph, nullptr, "GetContainedGraphs", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMGraph_GetContainedGraphs_Statics::RigVMGraph_eventGetContainedGraphs_Parms), Z_Construct_UFunction_URigVMGraph_GetContainedGraphs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_GetContainedGraphs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMGraph_GetContainedGraphs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_GetContainedGraphs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMGraph_GetContainedGraphs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMGraph_GetContainedGraphs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMGraph_GetDefaultFunctionLibrary_Statics
	{
		struct RigVMGraph_eventGetDefaultFunctionLibrary_Parms
		{
			URigVMFunctionLibrary* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMGraph_GetDefaultFunctionLibrary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMGraph_eventGetDefaultFunctionLibrary_Parms, ReturnValue), Z_Construct_UClass_URigVMFunctionLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMGraph_GetDefaultFunctionLibrary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_GetDefaultFunctionLibrary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMGraph_GetDefaultFunctionLibrary_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMGraph" },
		{ "Comment", "// Returns the locally available function library\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMGraph.h" },
		{ "ToolTip", "Returns the locally available function library" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMGraph_GetDefaultFunctionLibrary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMGraph, nullptr, "GetDefaultFunctionLibrary", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMGraph_GetDefaultFunctionLibrary_Statics::RigVMGraph_eventGetDefaultFunctionLibrary_Parms), Z_Construct_UFunction_URigVMGraph_GetDefaultFunctionLibrary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_GetDefaultFunctionLibrary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMGraph_GetDefaultFunctionLibrary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_GetDefaultFunctionLibrary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMGraph_GetDefaultFunctionLibrary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMGraph_GetDefaultFunctionLibrary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMGraph_GetEntryNode_Statics
	{
		struct RigVMGraph_eventGetEntryNode_Parms
		{
			URigVMFunctionEntryNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMGraph_GetEntryNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMGraph_eventGetEntryNode_Parms, ReturnValue), Z_Construct_UClass_URigVMFunctionEntryNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMGraph_GetEntryNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_GetEntryNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMGraph_GetEntryNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMGraph" },
		{ "Comment", "// Returns the entry node of this graph\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMGraph.h" },
		{ "ToolTip", "Returns the entry node of this graph" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMGraph_GetEntryNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMGraph, nullptr, "GetEntryNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMGraph_GetEntryNode_Statics::RigVMGraph_eventGetEntryNode_Parms), Z_Construct_UFunction_URigVMGraph_GetEntryNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_GetEntryNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMGraph_GetEntryNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_GetEntryNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMGraph_GetEntryNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMGraph_GetEntryNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMGraph_GetGraphName_Statics
	{
		struct RigVMGraph_eventGetGraphName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMGraph_GetGraphName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMGraph_eventGetGraphName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMGraph_GetGraphName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_GetGraphName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMGraph_GetGraphName_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMGraph" },
		{ "Comment", "// Returns the name of this graph (as defined by the node path)\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMGraph.h" },
		{ "ToolTip", "Returns the name of this graph (as defined by the node path)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMGraph_GetGraphName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMGraph, nullptr, "GetGraphName", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMGraph_GetGraphName_Statics::RigVMGraph_eventGetGraphName_Parms), Z_Construct_UFunction_URigVMGraph_GetGraphName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_GetGraphName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMGraph_GetGraphName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_GetGraphName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMGraph_GetGraphName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMGraph_GetGraphName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMGraph_GetInputArguments_Statics
	{
		struct RigVMGraph_eventGetInputArguments_Parms
		{
			TArray<FRigVMGraphVariableDescription> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigVMGraph_GetInputArguments_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMGraphVariableDescription, METADATA_PARAMS(nullptr, 0) }; // 2726194744
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMGraph_GetInputArguments_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMGraph_eventGetInputArguments_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2726194744
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMGraph_GetInputArguments_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_GetInputArguments_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_GetInputArguments_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMGraph_GetInputArguments_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMGraph" },
		{ "Comment", "// Returns the input arguments of this graph\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMGraph.h" },
		{ "ToolTip", "Returns the input arguments of this graph" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMGraph_GetInputArguments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMGraph, nullptr, "GetInputArguments", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMGraph_GetInputArguments_Statics::RigVMGraph_eventGetInputArguments_Parms), Z_Construct_UFunction_URigVMGraph_GetInputArguments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_GetInputArguments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMGraph_GetInputArguments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_GetInputArguments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMGraph_GetInputArguments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMGraph_GetInputArguments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMGraph_GetLinks_Statics
	{
		struct RigVMGraph_eventGetLinks_Parms
		{
			TArray<URigVMLink*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMGraph_GetLinks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URigVMLink_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMGraph_GetLinks_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMGraph_GetLinks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMGraph_eventGetLinks_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URigVMGraph_GetLinks_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_GetLinks_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMGraph_GetLinks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_GetLinks_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_GetLinks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMGraph_GetLinks_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMGraph" },
		{ "Comment", "// Returns all of the Links within this Graph.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMGraph.h" },
		{ "ToolTip", "Returns all of the Links within this Graph." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMGraph_GetLinks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMGraph, nullptr, "GetLinks", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMGraph_GetLinks_Statics::RigVMGraph_eventGetLinks_Parms), Z_Construct_UFunction_URigVMGraph_GetLinks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_GetLinks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMGraph_GetLinks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_GetLinks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMGraph_GetLinks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMGraph_GetLinks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMGraph_GetLocalVariables_Statics
	{
		struct RigVMGraph_eventGetLocalVariables_Parms
		{
			bool bIncludeInputArguments;
			TArray<FRigVMGraphVariableDescription> ReturnValue;
		};
		static void NewProp_bIncludeInputArguments_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeInputArguments;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URigVMGraph_GetLocalVariables_Statics::NewProp_bIncludeInputArguments_SetBit(void* Obj)
	{
		((RigVMGraph_eventGetLocalVariables_Parms*)Obj)->bIncludeInputArguments = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMGraph_GetLocalVariables_Statics::NewProp_bIncludeInputArguments = { "bIncludeInputArguments", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMGraph_eventGetLocalVariables_Parms), &Z_Construct_UFunction_URigVMGraph_GetLocalVariables_Statics::NewProp_bIncludeInputArguments_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigVMGraph_GetLocalVariables_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMGraphVariableDescription, METADATA_PARAMS(nullptr, 0) }; // 2726194744
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMGraph_GetLocalVariables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMGraph_eventGetLocalVariables_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2726194744
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMGraph_GetLocalVariables_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_GetLocalVariables_Statics::NewProp_bIncludeInputArguments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_GetLocalVariables_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_GetLocalVariables_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMGraph_GetLocalVariables_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMGraph" },
		{ "Comment", "// Returns the local variables of this function\n" },
		{ "CPP_Default_bIncludeInputArguments", "false" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMGraph.h" },
		{ "ToolTip", "Returns the local variables of this function" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMGraph_GetLocalVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMGraph, nullptr, "GetLocalVariables", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMGraph_GetLocalVariables_Statics::RigVMGraph_eventGetLocalVariables_Parms), Z_Construct_UFunction_URigVMGraph_GetLocalVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_GetLocalVariables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMGraph_GetLocalVariables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_GetLocalVariables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMGraph_GetLocalVariables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMGraph_GetLocalVariables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMGraph_GetNodePath_Statics
	{
		struct RigVMGraph_eventGetNodePath_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMGraph_GetNodePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMGraph_eventGetNodePath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMGraph_GetNodePath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_GetNodePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMGraph_GetNodePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMGraph" },
		{ "Comment", "// Returns the path of this graph as defined by its invoking nodes\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMGraph.h" },
		{ "ToolTip", "Returns the path of this graph as defined by its invoking nodes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMGraph_GetNodePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMGraph, nullptr, "GetNodePath", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMGraph_GetNodePath_Statics::RigVMGraph_eventGetNodePath_Parms), Z_Construct_UFunction_URigVMGraph_GetNodePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_GetNodePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMGraph_GetNodePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_GetNodePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMGraph_GetNodePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMGraph_GetNodePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMGraph_GetNodes_Statics
	{
		struct RigVMGraph_eventGetNodes_Parms
		{
			TArray<URigVMNode*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMGraph_GetNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URigVMNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMGraph_GetNodes_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMGraph_GetNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMGraph_eventGetNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URigVMGraph_GetNodes_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_GetNodes_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMGraph_GetNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_GetNodes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_GetNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMGraph_GetNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMGraph" },
		{ "Comment", "// Returns all of the Nodes within this Graph.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMGraph.h" },
		{ "ToolTip", "Returns all of the Nodes within this Graph." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMGraph_GetNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMGraph, nullptr, "GetNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMGraph_GetNodes_Statics::RigVMGraph_eventGetNodes_Parms), Z_Construct_UFunction_URigVMGraph_GetNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_GetNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMGraph_GetNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_GetNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMGraph_GetNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMGraph_GetNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMGraph_GetOutputArguments_Statics
	{
		struct RigVMGraph_eventGetOutputArguments_Parms
		{
			TArray<FRigVMGraphVariableDescription> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigVMGraph_GetOutputArguments_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMGraphVariableDescription, METADATA_PARAMS(nullptr, 0) }; // 2726194744
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMGraph_GetOutputArguments_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMGraph_eventGetOutputArguments_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2726194744
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMGraph_GetOutputArguments_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_GetOutputArguments_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_GetOutputArguments_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMGraph_GetOutputArguments_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMGraph" },
		{ "Comment", "// Returns the output arguments of this graph\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMGraph.h" },
		{ "ToolTip", "Returns the output arguments of this graph" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMGraph_GetOutputArguments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMGraph, nullptr, "GetOutputArguments", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMGraph_GetOutputArguments_Statics::RigVMGraph_eventGetOutputArguments_Parms), Z_Construct_UFunction_URigVMGraph_GetOutputArguments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_GetOutputArguments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMGraph_GetOutputArguments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_GetOutputArguments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMGraph_GetOutputArguments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMGraph_GetOutputArguments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMGraph_GetParentGraph_Statics
	{
		struct RigVMGraph_eventGetParentGraph_Parms
		{
			URigVMGraph* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMGraph_GetParentGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMGraph_eventGetParentGraph_Parms, ReturnValue), Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMGraph_GetParentGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_GetParentGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMGraph_GetParentGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMGraph" },
		{ "Comment", "// Returns the parent graph of this graph\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMGraph.h" },
		{ "ToolTip", "Returns the parent graph of this graph" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMGraph_GetParentGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMGraph, nullptr, "GetParentGraph", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMGraph_GetParentGraph_Statics::RigVMGraph_eventGetParentGraph_Parms), Z_Construct_UFunction_URigVMGraph_GetParentGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_GetParentGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMGraph_GetParentGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_GetParentGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMGraph_GetParentGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMGraph_GetParentGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMGraph_GetReturnNode_Statics
	{
		struct RigVMGraph_eventGetReturnNode_Parms
		{
			URigVMFunctionReturnNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMGraph_GetReturnNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMGraph_eventGetReturnNode_Parms, ReturnValue), Z_Construct_UClass_URigVMFunctionReturnNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMGraph_GetReturnNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_GetReturnNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMGraph_GetReturnNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMGraph" },
		{ "Comment", "// Returns the return node of this graph\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMGraph.h" },
		{ "ToolTip", "Returns the return node of this graph" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMGraph_GetReturnNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMGraph, nullptr, "GetReturnNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMGraph_GetReturnNode_Statics::RigVMGraph_eventGetReturnNode_Parms), Z_Construct_UFunction_URigVMGraph_GetReturnNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_GetReturnNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMGraph_GetReturnNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_GetReturnNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMGraph_GetReturnNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMGraph_GetReturnNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMGraph_GetRootGraph_Statics
	{
		struct RigVMGraph_eventGetRootGraph_Parms
		{
			URigVMGraph* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMGraph_GetRootGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMGraph_eventGetRootGraph_Parms, ReturnValue), Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMGraph_GetRootGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_GetRootGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMGraph_GetRootGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMGraph" },
		{ "Comment", "// Returns the root / top level parent graph of this graph (or this if it is the root graph)\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMGraph.h" },
		{ "ToolTip", "Returns the root / top level parent graph of this graph (or this if it is the root graph)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMGraph_GetRootGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMGraph, nullptr, "GetRootGraph", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMGraph_GetRootGraph_Statics::RigVMGraph_eventGetRootGraph_Parms), Z_Construct_UFunction_URigVMGraph_GetRootGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_GetRootGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMGraph_GetRootGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_GetRootGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMGraph_GetRootGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMGraph_GetRootGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMGraph_GetSelectNodes_Statics
	{
		struct RigVMGraph_eventGetSelectNodes_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMGraph_GetSelectNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMGraph_GetSelectNodes_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMGraph_GetSelectNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMGraph_eventGetSelectNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URigVMGraph_GetSelectNodes_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_GetSelectNodes_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMGraph_GetSelectNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_GetSelectNodes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_GetSelectNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMGraph_GetSelectNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMGraph" },
		{ "Comment", "// Returns the names of all currently selected Nodes.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMGraph.h" },
		{ "ToolTip", "Returns the names of all currently selected Nodes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMGraph_GetSelectNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMGraph, nullptr, "GetSelectNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMGraph_GetSelectNodes_Statics::RigVMGraph_eventGetSelectNodes_Parms), Z_Construct_UFunction_URigVMGraph_GetSelectNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_GetSelectNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMGraph_GetSelectNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_GetSelectNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMGraph_GetSelectNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMGraph_GetSelectNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMGraph_GetVariableDescriptions_Statics
	{
		struct RigVMGraph_eventGetVariableDescriptions_Parms
		{
			TArray<FRigVMGraphVariableDescription> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigVMGraph_GetVariableDescriptions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMGraphVariableDescription, METADATA_PARAMS(nullptr, 0) }; // 2726194744
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMGraph_GetVariableDescriptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMGraph_eventGetVariableDescriptions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2726194744
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMGraph_GetVariableDescriptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_GetVariableDescriptions_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_GetVariableDescriptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMGraph_GetVariableDescriptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMGraph" },
		{ "Comment", "// Returns a list of unique Variable descriptions within this Graph.\n// Multiple Variable Nodes can share the same description.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMGraph.h" },
		{ "ToolTip", "Returns a list of unique Variable descriptions within this Graph.\nMultiple Variable Nodes can share the same description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMGraph_GetVariableDescriptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMGraph, nullptr, "GetVariableDescriptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMGraph_GetVariableDescriptions_Statics::RigVMGraph_eventGetVariableDescriptions_Parms), Z_Construct_UFunction_URigVMGraph_GetVariableDescriptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_GetVariableDescriptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMGraph_GetVariableDescriptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_GetVariableDescriptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMGraph_GetVariableDescriptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMGraph_GetVariableDescriptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMGraph_IsNodeSelected_Statics
	{
		struct RigVMGraph_eventIsNodeSelected_Parms
		{
			FName InNodeName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNodeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InNodeName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMGraph_IsNodeSelected_Statics::NewProp_InNodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMGraph_IsNodeSelected_Statics::NewProp_InNodeName = { "InNodeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMGraph_eventIsNodeSelected_Parms, InNodeName), METADATA_PARAMS(Z_Construct_UFunction_URigVMGraph_IsNodeSelected_Statics::NewProp_InNodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_IsNodeSelected_Statics::NewProp_InNodeName_MetaData)) };
	void Z_Construct_UFunction_URigVMGraph_IsNodeSelected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMGraph_eventIsNodeSelected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMGraph_IsNodeSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMGraph_eventIsNodeSelected_Parms), &Z_Construct_UFunction_URigVMGraph_IsNodeSelected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMGraph_IsNodeSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_IsNodeSelected_Statics::NewProp_InNodeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_IsNodeSelected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMGraph_IsNodeSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMGraph" },
		{ "Comment", "// Returns true if a Node with a given name is selected.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMGraph.h" },
		{ "ToolTip", "Returns true if a Node with a given name is selected." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMGraph_IsNodeSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMGraph, nullptr, "IsNodeSelected", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMGraph_IsNodeSelected_Statics::RigVMGraph_eventIsNodeSelected_Parms), Z_Construct_UFunction_URigVMGraph_IsNodeSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_IsNodeSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMGraph_IsNodeSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_IsNodeSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMGraph_IsNodeSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMGraph_IsNodeSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMGraph_IsRootGraph_Statics
	{
		struct RigVMGraph_eventIsRootGraph_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URigVMGraph_IsRootGraph_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMGraph_eventIsRootGraph_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMGraph_IsRootGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMGraph_eventIsRootGraph_Parms), &Z_Construct_UFunction_URigVMGraph_IsRootGraph_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMGraph_IsRootGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_IsRootGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMGraph_IsRootGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMGraph" },
		{ "Comment", "// Returns true if this graph is a root / top level graph\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMGraph.h" },
		{ "ToolTip", "Returns true if this graph is a root / top level graph" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMGraph_IsRootGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMGraph, nullptr, "IsRootGraph", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMGraph_IsRootGraph_Statics::RigVMGraph_eventIsRootGraph_Parms), Z_Construct_UFunction_URigVMGraph_IsRootGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_IsRootGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMGraph_IsRootGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_IsRootGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMGraph_IsRootGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMGraph_IsRootGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMGraph_IsTopLevelGraph_Statics
	{
		struct RigVMGraph_eventIsTopLevelGraph_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URigVMGraph_IsTopLevelGraph_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMGraph_eventIsTopLevelGraph_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMGraph_IsTopLevelGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMGraph_eventIsTopLevelGraph_Parms), &Z_Construct_UFunction_URigVMGraph_IsTopLevelGraph_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMGraph_IsTopLevelGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_IsTopLevelGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMGraph_IsTopLevelGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMGraph" },
		{ "Comment", "// Returns true if this graph is the top level graph\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMGraph.h" },
		{ "ToolTip", "Returns true if this graph is the top level graph" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMGraph_IsTopLevelGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMGraph, nullptr, "IsTopLevelGraph", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMGraph_IsTopLevelGraph_Statics::RigVMGraph_eventIsTopLevelGraph_Parms), Z_Construct_UFunction_URigVMGraph_IsTopLevelGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_IsTopLevelGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMGraph_IsTopLevelGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_IsTopLevelGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMGraph_IsTopLevelGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMGraph_IsTopLevelGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMGraph_SetDefaultFunctionLibrary_Statics
	{
		struct RigVMGraph_eventSetDefaultFunctionLibrary_Parms
		{
			URigVMFunctionLibrary* InFunctionLibrary;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InFunctionLibrary;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMGraph_SetDefaultFunctionLibrary_Statics::NewProp_InFunctionLibrary = { "InFunctionLibrary", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMGraph_eventSetDefaultFunctionLibrary_Parms, InFunctionLibrary), Z_Construct_UClass_URigVMFunctionLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMGraph_SetDefaultFunctionLibrary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMGraph_SetDefaultFunctionLibrary_Statics::NewProp_InFunctionLibrary,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMGraph_SetDefaultFunctionLibrary_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMGraph" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMGraph_SetDefaultFunctionLibrary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMGraph, nullptr, "SetDefaultFunctionLibrary", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMGraph_SetDefaultFunctionLibrary_Statics::RigVMGraph_eventSetDefaultFunctionLibrary_Parms), Z_Construct_UFunction_URigVMGraph_SetDefaultFunctionLibrary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_SetDefaultFunctionLibrary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMGraph_SetDefaultFunctionLibrary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMGraph_SetDefaultFunctionLibrary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMGraph_SetDefaultFunctionLibrary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMGraph_SetDefaultFunctionLibrary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMGraph);
	UClass* Z_Construct_UClass_URigVMGraph_NoRegister()
	{
		return URigVMGraph::StaticClass();
	}
	struct Z_Construct_UClass_URigVMGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Nodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Nodes;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Links_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Links_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Links;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SelectedNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFunctionLibraryPtr_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_DefaultFunctionLibraryPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteContextStruct_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExecuteContextStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEditable_MetaData[];
#endif
		static void NewProp_bEditable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEditable;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalVariables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalVariables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalVariables;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URigVMGraph_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URigVMGraph_FindLink, "FindLink" }, // 1064844429
		{ &Z_Construct_UFunction_URigVMGraph_FindNode, "FindNode" }, // 3995286951
		{ &Z_Construct_UFunction_URigVMGraph_FindNodeByName, "FindNodeByName" }, // 1682624053
		{ &Z_Construct_UFunction_URigVMGraph_FindPin, "FindPin" }, // 964979247
		{ &Z_Construct_UFunction_URigVMGraph_GetContainedGraphs, "GetContainedGraphs" }, // 4137141873
		{ &Z_Construct_UFunction_URigVMGraph_GetDefaultFunctionLibrary, "GetDefaultFunctionLibrary" }, // 1566220686
		{ &Z_Construct_UFunction_URigVMGraph_GetEntryNode, "GetEntryNode" }, // 452404582
		{ &Z_Construct_UFunction_URigVMGraph_GetGraphName, "GetGraphName" }, // 763773321
		{ &Z_Construct_UFunction_URigVMGraph_GetInputArguments, "GetInputArguments" }, // 366547406
		{ &Z_Construct_UFunction_URigVMGraph_GetLinks, "GetLinks" }, // 4107305537
		{ &Z_Construct_UFunction_URigVMGraph_GetLocalVariables, "GetLocalVariables" }, // 1627533087
		{ &Z_Construct_UFunction_URigVMGraph_GetNodePath, "GetNodePath" }, // 133283865
		{ &Z_Construct_UFunction_URigVMGraph_GetNodes, "GetNodes" }, // 21759751
		{ &Z_Construct_UFunction_URigVMGraph_GetOutputArguments, "GetOutputArguments" }, // 2132596702
		{ &Z_Construct_UFunction_URigVMGraph_GetParentGraph, "GetParentGraph" }, // 603566173
		{ &Z_Construct_UFunction_URigVMGraph_GetReturnNode, "GetReturnNode" }, // 992820701
		{ &Z_Construct_UFunction_URigVMGraph_GetRootGraph, "GetRootGraph" }, // 964622477
		{ &Z_Construct_UFunction_URigVMGraph_GetSelectNodes, "GetSelectNodes" }, // 4270664752
		{ &Z_Construct_UFunction_URigVMGraph_GetVariableDescriptions, "GetVariableDescriptions" }, // 757108777
		{ &Z_Construct_UFunction_URigVMGraph_IsNodeSelected, "IsNodeSelected" }, // 2236726913
		{ &Z_Construct_UFunction_URigVMGraph_IsRootGraph, "IsRootGraph" }, // 1529480005
		{ &Z_Construct_UFunction_URigVMGraph_IsTopLevelGraph, "IsTopLevelGraph" }, // 3523085150
		{ &Z_Construct_UFunction_URigVMGraph_SetDefaultFunctionLibrary, "SetDefaultFunctionLibrary" }, // 4181040278
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMGraph_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Graph represents a Function definition\n * using Nodes as statements.\n * Graphs can be compiled into a URigVM using the \n * FRigVMCompiler. \n * Graphs provide access to its Nodes, Pins and\n * Links.\n */" },
		{ "IncludePath", "RigVMModel/RigVMGraph.h" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMGraph.h" },
		{ "ToolTip", "The Graph represents a Function definition\nusing Nodes as statements.\nGraphs can be compiled into a URigVM using the\nFRigVMCompiler.\nGraphs provide access to its Nodes, Pins and\nLinks." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigVMGraph_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URigVMNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMGraph_Statics::NewProp_Nodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMGraph.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URigVMGraph_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMGraph, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URigVMGraph_Statics::NewProp_Nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMGraph_Statics::NewProp_Nodes_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigVMGraph_Statics::NewProp_Links_Inner = { "Links", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URigVMLink_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMGraph_Statics::NewProp_Links_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMGraph.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URigVMGraph_Statics::NewProp_Links = { "Links", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMGraph, Links), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URigVMGraph_Statics::NewProp_Links_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMGraph_Statics::NewProp_Links_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URigVMGraph_Statics::NewProp_SelectedNodes_Inner = { "SelectedNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMGraph_Statics::NewProp_SelectedNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMGraph.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URigVMGraph_Statics::NewProp_SelectedNodes = { "SelectedNodes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMGraph, SelectedNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URigVMGraph_Statics::NewProp_SelectedNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMGraph_Statics::NewProp_SelectedNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMGraph_Statics::NewProp_DefaultFunctionLibraryPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMGraph.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_URigVMGraph_Statics::NewProp_DefaultFunctionLibraryPtr = { "DefaultFunctionLibraryPtr", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMGraph, DefaultFunctionLibraryPtr), Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URigVMGraph_Statics::NewProp_DefaultFunctionLibraryPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMGraph_Statics::NewProp_DefaultFunctionLibraryPtr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMGraph_Statics::NewProp_ExecuteContextStruct_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigVMGraph_Statics::NewProp_ExecuteContextStruct = { "ExecuteContextStruct", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMGraph, ExecuteContextStruct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UClass_URigVMGraph_Statics::NewProp_ExecuteContextStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMGraph_Statics::NewProp_ExecuteContextStruct_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMGraph_Statics::NewProp_bEditable_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMGraph.h" },
	};
#endif
	void Z_Construct_UClass_URigVMGraph_Statics::NewProp_bEditable_SetBit(void* Obj)
	{
		((URigVMGraph*)Obj)->bEditable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URigVMGraph_Statics::NewProp_bEditable = { "bEditable", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URigVMGraph), &Z_Construct_UClass_URigVMGraph_Statics::NewProp_bEditable_SetBit, METADATA_PARAMS(Z_Construct_UClass_URigVMGraph_Statics::NewProp_bEditable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMGraph_Statics::NewProp_bEditable_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMGraph_Statics::NewProp_LocalVariables_Inner = { "LocalVariables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMGraphVariableDescription, METADATA_PARAMS(nullptr, 0) }; // 2726194744
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMGraph_Statics::NewProp_LocalVariables_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMGraph.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URigVMGraph_Statics::NewProp_LocalVariables = { "LocalVariables", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMGraph, LocalVariables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URigVMGraph_Statics::NewProp_LocalVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMGraph_Statics::NewProp_LocalVariables_MetaData)) }; // 2726194744
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigVMGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMGraph_Statics::NewProp_Nodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMGraph_Statics::NewProp_Nodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMGraph_Statics::NewProp_Links_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMGraph_Statics::NewProp_Links,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMGraph_Statics::NewProp_SelectedNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMGraph_Statics::NewProp_SelectedNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMGraph_Statics::NewProp_DefaultFunctionLibraryPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMGraph_Statics::NewProp_ExecuteContextStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMGraph_Statics::NewProp_bEditable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMGraph_Statics::NewProp_LocalVariables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMGraph_Statics::NewProp_LocalVariables,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMGraph_Statics::ClassParams = {
		&URigVMGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URigVMGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URigVMGraph_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URigVMGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigVMGraph()
	{
		if (!Z_Registration_Info_UClass_URigVMGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMGraph.OuterSingleton, Z_Construct_UClass_URigVMGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMGraph.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<URigVMGraph>()
	{
		return URigVMGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMGraph);
	URigVMGraph::~URigVMGraph() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMGraph, URigVMGraph::StaticClass, TEXT("URigVMGraph"), &Z_Registration_Info_UClass_URigVMGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMGraph), 2335765179U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMGraph_h_1855499844(TEXT("/Script/RigVMDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
