// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMModel/RigVMNode.h"
#include "RigVMCore/RigVMUserWorkflow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMPinDirection();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMUserWorkflowType();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMUserWorkflow();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMGraph_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMInjectionInfo_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMLibraryNode_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMLink_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMNode();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMNode_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMPin_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	DEFINE_FUNCTION(URigVMNode::execFindFunctionForNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMLibraryNode**)Z_Param__Result=P_THIS->FindFunctionForNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execGetNextAggregateName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InLastAggregatePinName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetNextAggregateName(Z_Param_Out_InLastAggregatePinName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execGetAggregateOutputs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URigVMPin*>*)Z_Param__Result=P_THIS->GetAggregateOutputs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execGetAggregateInputs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URigVMPin*>*)Z_Param__Result=P_THIS->GetAggregateInputs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execIsInputAggregate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInputAggregate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execGetOppositeAggregatePin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMPin**)Z_Param__Result=P_THIS->GetOppositeAggregatePin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execGetSecondAggregatePin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMPin**)Z_Param__Result=P_THIS->GetSecondAggregatePin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execGetFirstAggregatePin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMPin**)Z_Param__Result=P_THIS->GetFirstAggregatePin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execIsAggregate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAggregate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execSetExecutionIsHaltedAtThisNode)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExecutionIsHaltedAtThisNode(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execExecutionIsHaltedAtThisNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ExecutionIsHaltedAtThisNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execSetHasBreakpoint)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHasBreakpoint(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execHasBreakpoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasBreakpoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execGetSupportedWorkflows)
	{
		P_GET_ENUM(ERigVMUserWorkflowType,Z_Param_InType);
		P_GET_OBJECT(UObject,Z_Param_InSubject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRigVMUserWorkflow>*)Z_Param__Result=P_THIS->GetSupportedWorkflows(ERigVMUserWorkflowType(Z_Param_InType),Z_Param_InSubject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execCanBeUpgraded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanBeUpgraded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execIsControlFlowNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsControlFlowNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execIsLoopNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLoopNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execGetPreviousFName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetPreviousFName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execGetLinkedTargetNodes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URigVMNode*>*)Z_Param__Result=P_THIS->GetLinkedTargetNodes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execGetLinkedSourceNodes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URigVMNode*>*)Z_Param__Result=P_THIS->GetLinkedSourceNodes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execGetLinks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URigVMLink*>*)Z_Param__Result=P_THIS->GetLinks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execIsLinkedTo)
	{
		P_GET_OBJECT(URigVMNode,Z_Param_InNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLinkedTo(Z_Param_InNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execHasPinOfDirection)
	{
		P_GET_ENUM(ERigVMPinDirection,Z_Param_InDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasPinOfDirection(ERigVMPinDirection(Z_Param_InDirection));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execHasOutputPin)
	{
		P_GET_UBOOL(Z_Param_bIncludeIO);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasOutputPin(Z_Param_bIncludeIO);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execHasLazyPin)
	{
		P_GET_UBOOL(Z_Param_bOnlyConsiderPinsWithLinks);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasLazyPin(Z_Param_bOnlyConsiderPinsWithLinks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execHasIOPin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasIOPin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execHasInputPin)
	{
		P_GET_UBOOL(Z_Param_bIncludeIO);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasInputPin(Z_Param_bIncludeIO);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execCanOnlyExistOnce)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanOnlyExistOnce();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execGetEventName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetEventName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execIsEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execIsMutable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMutable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execIsDefinedAsVarying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDefinedAsVarying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execIsDefinedAsConstant)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDefinedAsConstant();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execIsPure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execIsVisibleInUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVisibleInUI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execIsInjected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInjected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execIsSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execGetToolTipText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetToolTipText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execGetNodeColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetNodeColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execGetSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execGetPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execGetNodeTitle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetNodeTitle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execGetInjectionInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMInjectionInfo**)Z_Param__Result=P_THIS->GetInjectionInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execGetRootGraph)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMGraph**)Z_Param__Result=P_THIS->GetRootGraph();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execGetGraph)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMGraph**)Z_Param__Result=P_THIS->GetGraph();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execHasOrphanedPins)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasOrphanedPins();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execGetOrphanedPins)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URigVMPin*>*)Z_Param__Result=P_THIS->GetOrphanedPins();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execFindPin)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPinPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMPin**)Z_Param__Result=P_THIS->FindPin(Z_Param_InPinPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execGetAllPinsRecursively)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URigVMPin*>*)Z_Param__Result=P_THIS->GetAllPinsRecursively();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execGetPins)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URigVMPin*>*)Z_Param__Result=P_THIS->GetPins();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execGetNodeIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNodeIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMNode::execGetNodePath)
	{
		P_GET_UBOOL(Z_Param_bRecursive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetNodePath(Z_Param_bRecursive);
		P_NATIVE_END;
	}
	void URigVMNode::StaticRegisterNativesURigVMNode()
	{
		UClass* Class = URigVMNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanBeUpgraded", &URigVMNode::execCanBeUpgraded },
			{ "CanOnlyExistOnce", &URigVMNode::execCanOnlyExistOnce },
			{ "ExecutionIsHaltedAtThisNode", &URigVMNode::execExecutionIsHaltedAtThisNode },
			{ "FindFunctionForNode", &URigVMNode::execFindFunctionForNode },
			{ "FindPin", &URigVMNode::execFindPin },
			{ "GetAggregateInputs", &URigVMNode::execGetAggregateInputs },
			{ "GetAggregateOutputs", &URigVMNode::execGetAggregateOutputs },
			{ "GetAllPinsRecursively", &URigVMNode::execGetAllPinsRecursively },
			{ "GetEventName", &URigVMNode::execGetEventName },
			{ "GetFirstAggregatePin", &URigVMNode::execGetFirstAggregatePin },
			{ "GetGraph", &URigVMNode::execGetGraph },
			{ "GetInjectionInfo", &URigVMNode::execGetInjectionInfo },
			{ "GetLinkedSourceNodes", &URigVMNode::execGetLinkedSourceNodes },
			{ "GetLinkedTargetNodes", &URigVMNode::execGetLinkedTargetNodes },
			{ "GetLinks", &URigVMNode::execGetLinks },
			{ "GetNextAggregateName", &URigVMNode::execGetNextAggregateName },
			{ "GetNodeColor", &URigVMNode::execGetNodeColor },
			{ "GetNodeIndex", &URigVMNode::execGetNodeIndex },
			{ "GetNodePath", &URigVMNode::execGetNodePath },
			{ "GetNodeTitle", &URigVMNode::execGetNodeTitle },
			{ "GetOppositeAggregatePin", &URigVMNode::execGetOppositeAggregatePin },
			{ "GetOrphanedPins", &URigVMNode::execGetOrphanedPins },
			{ "GetPins", &URigVMNode::execGetPins },
			{ "GetPosition", &URigVMNode::execGetPosition },
			{ "GetPreviousFName", &URigVMNode::execGetPreviousFName },
			{ "GetRootGraph", &URigVMNode::execGetRootGraph },
			{ "GetSecondAggregatePin", &URigVMNode::execGetSecondAggregatePin },
			{ "GetSize", &URigVMNode::execGetSize },
			{ "GetSupportedWorkflows", &URigVMNode::execGetSupportedWorkflows },
			{ "GetToolTipText", &URigVMNode::execGetToolTipText },
			{ "HasBreakpoint", &URigVMNode::execHasBreakpoint },
			{ "HasInputPin", &URigVMNode::execHasInputPin },
			{ "HasIOPin", &URigVMNode::execHasIOPin },
			{ "HasLazyPin", &URigVMNode::execHasLazyPin },
			{ "HasOrphanedPins", &URigVMNode::execHasOrphanedPins },
			{ "HasOutputPin", &URigVMNode::execHasOutputPin },
			{ "HasPinOfDirection", &URigVMNode::execHasPinOfDirection },
			{ "IsAggregate", &URigVMNode::execIsAggregate },
			{ "IsControlFlowNode", &URigVMNode::execIsControlFlowNode },
			{ "IsDefinedAsConstant", &URigVMNode::execIsDefinedAsConstant },
			{ "IsDefinedAsVarying", &URigVMNode::execIsDefinedAsVarying },
			{ "IsEvent", &URigVMNode::execIsEvent },
			{ "IsInjected", &URigVMNode::execIsInjected },
			{ "IsInputAggregate", &URigVMNode::execIsInputAggregate },
			{ "IsLinkedTo", &URigVMNode::execIsLinkedTo },
			{ "IsLoopNode", &URigVMNode::execIsLoopNode },
			{ "IsMutable", &URigVMNode::execIsMutable },
			{ "IsPure", &URigVMNode::execIsPure },
			{ "IsSelected", &URigVMNode::execIsSelected },
			{ "IsVisibleInUI", &URigVMNode::execIsVisibleInUI },
			{ "SetExecutionIsHaltedAtThisNode", &URigVMNode::execSetExecutionIsHaltedAtThisNode },
			{ "SetHasBreakpoint", &URigVMNode::execSetHasBreakpoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URigVMNode_CanBeUpgraded_Statics
	{
		struct RigVMNode_eventCanBeUpgraded_Parms
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
	void Z_Construct_UFunction_URigVMNode_CanBeUpgraded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMNode_eventCanBeUpgraded_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMNode_CanBeUpgraded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMNode_eventCanBeUpgraded_Parms), &Z_Construct_UFunction_URigVMNode_CanBeUpgraded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_CanBeUpgraded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_CanBeUpgraded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_CanBeUpgraded_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// returns true if the node can be upgraded\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "returns true if the node can be upgraded" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_CanBeUpgraded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "CanBeUpgraded", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_CanBeUpgraded_Statics::RigVMNode_eventCanBeUpgraded_Parms), Z_Construct_UFunction_URigVMNode_CanBeUpgraded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_CanBeUpgraded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_CanBeUpgraded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_CanBeUpgraded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_CanBeUpgraded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_CanBeUpgraded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_CanOnlyExistOnce_Statics
	{
		struct RigVMNode_eventCanOnlyExistOnce_Parms
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
	void Z_Construct_UFunction_URigVMNode_CanOnlyExistOnce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMNode_eventCanOnlyExistOnce_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMNode_CanOnlyExistOnce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMNode_eventCanOnlyExistOnce_Parms), &Z_Construct_UFunction_URigVMNode_CanOnlyExistOnce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_CanOnlyExistOnce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_CanOnlyExistOnce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_CanOnlyExistOnce_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns true if this node can only exist once in a graph\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns true if this node can only exist once in a graph" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_CanOnlyExistOnce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "CanOnlyExistOnce", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_CanOnlyExistOnce_Statics::RigVMNode_eventCanOnlyExistOnce_Parms), Z_Construct_UFunction_URigVMNode_CanOnlyExistOnce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_CanOnlyExistOnce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_CanOnlyExistOnce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_CanOnlyExistOnce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_CanOnlyExistOnce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_CanOnlyExistOnce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_ExecutionIsHaltedAtThisNode_Statics
	{
		struct RigVMNode_eventExecutionIsHaltedAtThisNode_Parms
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
	void Z_Construct_UFunction_URigVMNode_ExecutionIsHaltedAtThisNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMNode_eventExecutionIsHaltedAtThisNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMNode_ExecutionIsHaltedAtThisNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMNode_eventExecutionIsHaltedAtThisNode_Parms), &Z_Construct_UFunction_URigVMNode_ExecutionIsHaltedAtThisNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_ExecutionIsHaltedAtThisNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_ExecutionIsHaltedAtThisNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_ExecutionIsHaltedAtThisNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_ExecutionIsHaltedAtThisNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "ExecutionIsHaltedAtThisNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_ExecutionIsHaltedAtThisNode_Statics::RigVMNode_eventExecutionIsHaltedAtThisNode_Parms), Z_Construct_UFunction_URigVMNode_ExecutionIsHaltedAtThisNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_ExecutionIsHaltedAtThisNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_ExecutionIsHaltedAtThisNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_ExecutionIsHaltedAtThisNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_ExecutionIsHaltedAtThisNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_ExecutionIsHaltedAtThisNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_FindFunctionForNode_Statics
	{
		struct RigVMNode_eventFindFunctionForNode_Parms
		{
			URigVMLibraryNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMNode_FindFunctionForNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMNode_eventFindFunctionForNode_Parms, ReturnValue), Z_Construct_UClass_URigVMLibraryNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_FindFunctionForNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_FindFunctionForNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_FindFunctionForNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_FindFunctionForNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "FindFunctionForNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_FindFunctionForNode_Statics::RigVMNode_eventFindFunctionForNode_Parms), Z_Construct_UFunction_URigVMNode_FindFunctionForNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_FindFunctionForNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_FindFunctionForNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_FindFunctionForNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_FindFunctionForNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_FindFunctionForNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_FindPin_Statics
	{
		struct RigVMNode_eventFindPin_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_FindPin_Statics::NewProp_InPinPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMNode_FindPin_Statics::NewProp_InPinPath = { "InPinPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMNode_eventFindPin_Parms, InPinPath), METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_FindPin_Statics::NewProp_InPinPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_FindPin_Statics::NewProp_InPinPath_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMNode_FindPin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMNode_eventFindPin_Parms, ReturnValue), Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_FindPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_FindPin_Statics::NewProp_InPinPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_FindPin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_FindPin_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns a Pin given it's partial pin path below\n// this node (for example: \"Color.R\")\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns a Pin given it's partial pin path below\nthis node (for example: \"Color.R\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_FindPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "FindPin", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_FindPin_Statics::RigVMNode_eventFindPin_Parms), Z_Construct_UFunction_URigVMNode_FindPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_FindPin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_FindPin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_FindPin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_FindPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_FindPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_GetAggregateInputs_Statics
	{
		struct RigVMNode_eventGetAggregateInputs_Parms
		{
			TArray<URigVMPin*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMNode_GetAggregateInputs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMNode_GetAggregateInputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMNode_eventGetAggregateInputs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_GetAggregateInputs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetAggregateInputs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetAggregateInputs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_GetAggregateInputs_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_GetAggregateInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "GetAggregateInputs", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_GetAggregateInputs_Statics::RigVMNode_eventGetAggregateInputs_Parms), Z_Construct_UFunction_URigVMNode_GetAggregateInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetAggregateInputs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_GetAggregateInputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetAggregateInputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_GetAggregateInputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_GetAggregateInputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_GetAggregateOutputs_Statics
	{
		struct RigVMNode_eventGetAggregateOutputs_Parms
		{
			TArray<URigVMPin*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMNode_GetAggregateOutputs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMNode_GetAggregateOutputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMNode_eventGetAggregateOutputs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_GetAggregateOutputs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetAggregateOutputs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetAggregateOutputs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_GetAggregateOutputs_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_GetAggregateOutputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "GetAggregateOutputs", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_GetAggregateOutputs_Statics::RigVMNode_eventGetAggregateOutputs_Parms), Z_Construct_UFunction_URigVMNode_GetAggregateOutputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetAggregateOutputs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_GetAggregateOutputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetAggregateOutputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_GetAggregateOutputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_GetAggregateOutputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_GetAllPinsRecursively_Statics
	{
		struct RigVMNode_eventGetAllPinsRecursively_Parms
		{
			TArray<URigVMPin*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMNode_GetAllPinsRecursively_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMNode_GetAllPinsRecursively_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMNode_eventGetAllPinsRecursively_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_GetAllPinsRecursively_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetAllPinsRecursively_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetAllPinsRecursively_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_GetAllPinsRecursively_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns all of the Pins of this Node (including SubPins).\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns all of the Pins of this Node (including SubPins)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_GetAllPinsRecursively_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "GetAllPinsRecursively", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_GetAllPinsRecursively_Statics::RigVMNode_eventGetAllPinsRecursively_Parms), Z_Construct_UFunction_URigVMNode_GetAllPinsRecursively_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetAllPinsRecursively_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_GetAllPinsRecursively_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetAllPinsRecursively_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_GetAllPinsRecursively()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_GetAllPinsRecursively_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_GetEventName_Statics
	{
		struct RigVMNode_eventGetEventName_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMNode_GetEventName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMNode_eventGetEventName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_GetEventName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetEventName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_GetEventName_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns the name of the event\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns the name of the event" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_GetEventName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "GetEventName", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_GetEventName_Statics::RigVMNode_eventGetEventName_Parms), Z_Construct_UFunction_URigVMNode_GetEventName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetEventName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_GetEventName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetEventName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_GetEventName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_GetEventName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_GetFirstAggregatePin_Statics
	{
		struct RigVMNode_eventGetFirstAggregatePin_Parms
		{
			URigVMPin* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMNode_GetFirstAggregatePin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMNode_eventGetFirstAggregatePin_Parms, ReturnValue), Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_GetFirstAggregatePin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetFirstAggregatePin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_GetFirstAggregatePin_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_GetFirstAggregatePin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "GetFirstAggregatePin", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_GetFirstAggregatePin_Statics::RigVMNode_eventGetFirstAggregatePin_Parms), Z_Construct_UFunction_URigVMNode_GetFirstAggregatePin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetFirstAggregatePin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_GetFirstAggregatePin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetFirstAggregatePin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_GetFirstAggregatePin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_GetFirstAggregatePin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_GetGraph_Statics
	{
		struct RigVMNode_eventGetGraph_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMNode_GetGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMNode_eventGetGraph_Parms, ReturnValue), Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_GetGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_GetGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns the Graph of this Node\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns the Graph of this Node" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_GetGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "GetGraph", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_GetGraph_Statics::RigVMNode_eventGetGraph_Parms), Z_Construct_UFunction_URigVMNode_GetGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_GetGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_GetGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_GetGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_GetInjectionInfo_Statics
	{
		struct RigVMNode_eventGetInjectionInfo_Parms
		{
			URigVMInjectionInfo* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMNode_GetInjectionInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMNode_eventGetInjectionInfo_Parms, ReturnValue), Z_Construct_UClass_URigVMInjectionInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_GetInjectionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetInjectionInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_GetInjectionInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns the injection info of this Node (or nullptr)\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns the injection info of this Node (or nullptr)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_GetInjectionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "GetInjectionInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_GetInjectionInfo_Statics::RigVMNode_eventGetInjectionInfo_Parms), Z_Construct_UFunction_URigVMNode_GetInjectionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetInjectionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_GetInjectionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetInjectionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_GetInjectionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_GetInjectionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_GetLinkedSourceNodes_Statics
	{
		struct RigVMNode_eventGetLinkedSourceNodes_Parms
		{
			TArray<URigVMNode*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMNode_GetLinkedSourceNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URigVMNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMNode_GetLinkedSourceNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMNode_eventGetLinkedSourceNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_GetLinkedSourceNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetLinkedSourceNodes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetLinkedSourceNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_GetLinkedSourceNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns a list of Nodes connected as sources to\n// this Node as the target.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns a list of Nodes connected as sources to\nthis Node as the target." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_GetLinkedSourceNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "GetLinkedSourceNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_GetLinkedSourceNodes_Statics::RigVMNode_eventGetLinkedSourceNodes_Parms), Z_Construct_UFunction_URigVMNode_GetLinkedSourceNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetLinkedSourceNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_GetLinkedSourceNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetLinkedSourceNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_GetLinkedSourceNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_GetLinkedSourceNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_GetLinkedTargetNodes_Statics
	{
		struct RigVMNode_eventGetLinkedTargetNodes_Parms
		{
			TArray<URigVMNode*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMNode_GetLinkedTargetNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URigVMNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMNode_GetLinkedTargetNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMNode_eventGetLinkedTargetNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_GetLinkedTargetNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetLinkedTargetNodes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetLinkedTargetNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_GetLinkedTargetNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns a list of Nodes connected as targets to\n// this Node as the source.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns a list of Nodes connected as targets to\nthis Node as the source." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_GetLinkedTargetNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "GetLinkedTargetNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_GetLinkedTargetNodes_Statics::RigVMNode_eventGetLinkedTargetNodes_Parms), Z_Construct_UFunction_URigVMNode_GetLinkedTargetNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetLinkedTargetNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_GetLinkedTargetNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetLinkedTargetNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_GetLinkedTargetNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_GetLinkedTargetNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_GetLinks_Statics
	{
		struct RigVMNode_eventGetLinks_Parms
		{
			TArray<URigVMLink*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMNode_GetLinks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URigVMLink_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMNode_GetLinks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMNode_eventGetLinks_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_GetLinks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetLinks_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetLinks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_GetLinks_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns all links to any pin on this node\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns all links to any pin on this node" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_GetLinks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "GetLinks", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_GetLinks_Statics::RigVMNode_eventGetLinks_Parms), Z_Construct_UFunction_URigVMNode_GetLinks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetLinks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_GetLinks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetLinks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_GetLinks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_GetLinks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_GetNextAggregateName_Statics
	{
		struct RigVMNode_eventGetNextAggregateName_Parms
		{
			FName InLastAggregatePinName;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLastAggregatePinName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InLastAggregatePinName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_GetNextAggregateName_Statics::NewProp_InLastAggregatePinName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMNode_GetNextAggregateName_Statics::NewProp_InLastAggregatePinName = { "InLastAggregatePinName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMNode_eventGetNextAggregateName_Parms, InLastAggregatePinName), METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_GetNextAggregateName_Statics::NewProp_InLastAggregatePinName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetNextAggregateName_Statics::NewProp_InLastAggregatePinName_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMNode_GetNextAggregateName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMNode_eventGetNextAggregateName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_GetNextAggregateName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetNextAggregateName_Statics::NewProp_InLastAggregatePinName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetNextAggregateName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_GetNextAggregateName_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_GetNextAggregateName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "GetNextAggregateName", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_GetNextAggregateName_Statics::RigVMNode_eventGetNextAggregateName_Parms), Z_Construct_UFunction_URigVMNode_GetNextAggregateName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetNextAggregateName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_GetNextAggregateName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetNextAggregateName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_GetNextAggregateName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_GetNextAggregateName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_GetNodeColor_Statics
	{
		struct RigVMNode_eventGetNodeColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigVMNode_GetNodeColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMNode_eventGetNodeColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_GetNodeColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetNodeColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_GetNodeColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns the color of this node - used for UI.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns the color of this node - used for UI." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_GetNodeColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "GetNodeColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_GetNodeColor_Statics::RigVMNode_eventGetNodeColor_Parms), Z_Construct_UFunction_URigVMNode_GetNodeColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetNodeColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_GetNodeColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetNodeColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_GetNodeColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_GetNodeColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_GetNodeIndex_Statics
	{
		struct RigVMNode_eventGetNodeIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVMNode_GetNodeIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMNode_eventGetNodeIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_GetNodeIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetNodeIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_GetNodeIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns the current index of the Node within the Graph.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns the current index of the Node within the Graph." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_GetNodeIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "GetNodeIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_GetNodeIndex_Statics::RigVMNode_eventGetNodeIndex_Parms), Z_Construct_UFunction_URigVMNode_GetNodeIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetNodeIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_GetNodeIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetNodeIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_GetNodeIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_GetNodeIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_GetNodePath_Statics
	{
		struct RigVMNode_eventGetNodePath_Parms
		{
			bool bRecursive;
			FString ReturnValue;
		};
		static void NewProp_bRecursive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URigVMNode_GetNodePath_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((RigVMNode_eventGetNodePath_Parms*)Obj)->bRecursive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMNode_GetNodePath_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMNode_eventGetNodePath_Parms), &Z_Construct_UFunction_URigVMNode_GetNodePath_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMNode_GetNodePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMNode_eventGetNodePath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_GetNodePath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetNodePath_Statics::NewProp_bRecursive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetNodePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_GetNodePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns the a . separated string containing all of the\n// names used to reach this Node within the Graph.\n// (for now this is the same as the Node's name)\n" },
		{ "CPP_Default_bRecursive", "false" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns the a . separated string containing all of the\nnames used to reach this Node within the Graph.\n(for now this is the same as the Node's name)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_GetNodePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "GetNodePath", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_GetNodePath_Statics::RigVMNode_eventGetNodePath_Parms), Z_Construct_UFunction_URigVMNode_GetNodePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetNodePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_GetNodePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetNodePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_GetNodePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_GetNodePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_GetNodeTitle_Statics
	{
		struct RigVMNode_eventGetNodeTitle_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMNode_GetNodeTitle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMNode_eventGetNodeTitle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_GetNodeTitle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetNodeTitle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_GetNodeTitle_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns the title of this Node - used for UI.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns the title of this Node - used for UI." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_GetNodeTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "GetNodeTitle", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_GetNodeTitle_Statics::RigVMNode_eventGetNodeTitle_Parms), Z_Construct_UFunction_URigVMNode_GetNodeTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetNodeTitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_GetNodeTitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetNodeTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_GetNodeTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_GetNodeTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_GetOppositeAggregatePin_Statics
	{
		struct RigVMNode_eventGetOppositeAggregatePin_Parms
		{
			URigVMPin* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMNode_GetOppositeAggregatePin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMNode_eventGetOppositeAggregatePin_Parms, ReturnValue), Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_GetOppositeAggregatePin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetOppositeAggregatePin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_GetOppositeAggregatePin_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_GetOppositeAggregatePin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "GetOppositeAggregatePin", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_GetOppositeAggregatePin_Statics::RigVMNode_eventGetOppositeAggregatePin_Parms), Z_Construct_UFunction_URigVMNode_GetOppositeAggregatePin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetOppositeAggregatePin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_GetOppositeAggregatePin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetOppositeAggregatePin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_GetOppositeAggregatePin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_GetOppositeAggregatePin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_GetOrphanedPins_Statics
	{
		struct RigVMNode_eventGetOrphanedPins_Parms
		{
			TArray<URigVMPin*> ReturnValue;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMNode_GetOrphanedPins_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_GetOrphanedPins_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMNode_GetOrphanedPins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMNode_eventGetOrphanedPins_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_GetOrphanedPins_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetOrphanedPins_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_GetOrphanedPins_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetOrphanedPins_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetOrphanedPins_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_GetOrphanedPins_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns all of the top-level orphaned Pins of this Node.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns all of the top-level orphaned Pins of this Node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_GetOrphanedPins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "GetOrphanedPins", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_GetOrphanedPins_Statics::RigVMNode_eventGetOrphanedPins_Parms), Z_Construct_UFunction_URigVMNode_GetOrphanedPins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetOrphanedPins_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_GetOrphanedPins_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetOrphanedPins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_GetOrphanedPins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_GetOrphanedPins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_GetPins_Statics
	{
		struct RigVMNode_eventGetPins_Parms
		{
			TArray<URigVMPin*> ReturnValue;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMNode_GetPins_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_GetPins_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMNode_GetPins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMNode_eventGetPins_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_GetPins_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetPins_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_GetPins_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetPins_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetPins_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_GetPins_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns all of the top-level Pins of this Node.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns all of the top-level Pins of this Node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_GetPins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "GetPins", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_GetPins_Statics::RigVMNode_eventGetPins_Parms), Z_Construct_UFunction_URigVMNode_GetPins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetPins_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_GetPins_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetPins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_GetPins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_GetPins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_GetPosition_Statics
	{
		struct RigVMNode_eventGetPosition_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigVMNode_GetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMNode_eventGetPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_GetPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_GetPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns the 2d position of this node - used for UI.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns the 2d position of this node - used for UI." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_GetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "GetPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_GetPosition_Statics::RigVMNode_eventGetPosition_Parms), Z_Construct_UFunction_URigVMNode_GetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_GetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_GetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_GetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_GetPreviousFName_Statics
	{
		struct RigVMNode_eventGetPreviousFName_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMNode_GetPreviousFName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMNode_eventGetPreviousFName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_GetPreviousFName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetPreviousFName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_GetPreviousFName_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns the name of the node prior to the renaming\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns the name of the node prior to the renaming" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_GetPreviousFName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "GetPreviousFName", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_GetPreviousFName_Statics::RigVMNode_eventGetPreviousFName_Parms), Z_Construct_UFunction_URigVMNode_GetPreviousFName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetPreviousFName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_GetPreviousFName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetPreviousFName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_GetPreviousFName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_GetPreviousFName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_GetRootGraph_Statics
	{
		struct RigVMNode_eventGetRootGraph_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMNode_GetRootGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMNode_eventGetRootGraph_Parms, ReturnValue), Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_GetRootGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetRootGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_GetRootGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns the top level / root Graph of this Node\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns the top level / root Graph of this Node" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_GetRootGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "GetRootGraph", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_GetRootGraph_Statics::RigVMNode_eventGetRootGraph_Parms), Z_Construct_UFunction_URigVMNode_GetRootGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetRootGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_GetRootGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetRootGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_GetRootGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_GetRootGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_GetSecondAggregatePin_Statics
	{
		struct RigVMNode_eventGetSecondAggregatePin_Parms
		{
			URigVMPin* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMNode_GetSecondAggregatePin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMNode_eventGetSecondAggregatePin_Parms, ReturnValue), Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_GetSecondAggregatePin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetSecondAggregatePin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_GetSecondAggregatePin_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_GetSecondAggregatePin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "GetSecondAggregatePin", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_GetSecondAggregatePin_Statics::RigVMNode_eventGetSecondAggregatePin_Parms), Z_Construct_UFunction_URigVMNode_GetSecondAggregatePin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetSecondAggregatePin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_GetSecondAggregatePin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetSecondAggregatePin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_GetSecondAggregatePin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_GetSecondAggregatePin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_GetSize_Statics
	{
		struct RigVMNode_eventGetSize_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigVMNode_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMNode_eventGetSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_GetSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_GetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns the 2d size of this node - used for UI.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns the 2d size of this node - used for UI." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "GetSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_GetSize_Statics::RigVMNode_eventGetSize_Parms), Z_Construct_UFunction_URigVMNode_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_GetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_GetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_GetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_GetSupportedWorkflows_Statics
	{
		struct RigVMNode_eventGetSupportedWorkflows_Parms
		{
			ERigVMUserWorkflowType InType;
			const UObject* InSubject;
			TArray<FRigVMUserWorkflow> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSubject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSubject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URigVMNode_GetSupportedWorkflows_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URigVMNode_GetSupportedWorkflows_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMNode_eventGetSupportedWorkflows_Parms, InType), Z_Construct_UEnum_RigVM_ERigVMUserWorkflowType, METADATA_PARAMS(nullptr, 0) }; // 2052489579
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_GetSupportedWorkflows_Statics::NewProp_InSubject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMNode_GetSupportedWorkflows_Statics::NewProp_InSubject = { "InSubject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMNode_eventGetSupportedWorkflows_Parms, InSubject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_GetSupportedWorkflows_Statics::NewProp_InSubject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetSupportedWorkflows_Statics::NewProp_InSubject_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigVMNode_GetSupportedWorkflows_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMUserWorkflow, METADATA_PARAMS(nullptr, 0) }; // 3892843476
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMNode_GetSupportedWorkflows_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMNode_eventGetSupportedWorkflows_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3892843476
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_GetSupportedWorkflows_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetSupportedWorkflows_Statics::NewProp_InType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetSupportedWorkflows_Statics::NewProp_InType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetSupportedWorkflows_Statics::NewProp_InSubject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetSupportedWorkflows_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetSupportedWorkflows_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_GetSupportedWorkflows_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// returns all supported workflows of the node\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "returns all supported workflows of the node" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_GetSupportedWorkflows_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "GetSupportedWorkflows", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_GetSupportedWorkflows_Statics::RigVMNode_eventGetSupportedWorkflows_Parms), Z_Construct_UFunction_URigVMNode_GetSupportedWorkflows_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetSupportedWorkflows_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_GetSupportedWorkflows_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetSupportedWorkflows_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_GetSupportedWorkflows()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_GetSupportedWorkflows_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_GetToolTipText_Statics
	{
		struct RigVMNode_eventGetToolTipText_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URigVMNode_GetToolTipText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMNode_eventGetToolTipText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_GetToolTipText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_GetToolTipText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_GetToolTipText_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns the tooltip of this node\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns the tooltip of this node" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_GetToolTipText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "GetToolTipText", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_GetToolTipText_Statics::RigVMNode_eventGetToolTipText_Parms), Z_Construct_UFunction_URigVMNode_GetToolTipText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetToolTipText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_GetToolTipText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_GetToolTipText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_GetToolTipText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_GetToolTipText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_HasBreakpoint_Statics
	{
		struct RigVMNode_eventHasBreakpoint_Parms
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
	void Z_Construct_UFunction_URigVMNode_HasBreakpoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMNode_eventHasBreakpoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMNode_HasBreakpoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMNode_eventHasBreakpoint_Parms), &Z_Construct_UFunction_URigVMNode_HasBreakpoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_HasBreakpoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_HasBreakpoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_HasBreakpoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_HasBreakpoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "HasBreakpoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_HasBreakpoint_Statics::RigVMNode_eventHasBreakpoint_Parms), Z_Construct_UFunction_URigVMNode_HasBreakpoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_HasBreakpoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_HasBreakpoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_HasBreakpoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_HasBreakpoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_HasBreakpoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_HasInputPin_Statics
	{
		struct RigVMNode_eventHasInputPin_Parms
		{
			bool bIncludeIO;
			bool ReturnValue;
		};
		static void NewProp_bIncludeIO_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeIO;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URigVMNode_HasInputPin_Statics::NewProp_bIncludeIO_SetBit(void* Obj)
	{
		((RigVMNode_eventHasInputPin_Parms*)Obj)->bIncludeIO = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMNode_HasInputPin_Statics::NewProp_bIncludeIO = { "bIncludeIO", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMNode_eventHasInputPin_Parms), &Z_Construct_UFunction_URigVMNode_HasInputPin_Statics::NewProp_bIncludeIO_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigVMNode_HasInputPin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMNode_eventHasInputPin_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMNode_HasInputPin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMNode_eventHasInputPin_Parms), &Z_Construct_UFunction_URigVMNode_HasInputPin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_HasInputPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_HasInputPin_Statics::NewProp_bIncludeIO,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_HasInputPin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_HasInputPin_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns true if the node has any input pins\n" },
		{ "CPP_Default_bIncludeIO", "true" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns true if the node has any input pins" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_HasInputPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "HasInputPin", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_HasInputPin_Statics::RigVMNode_eventHasInputPin_Parms), Z_Construct_UFunction_URigVMNode_HasInputPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_HasInputPin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_HasInputPin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_HasInputPin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_HasInputPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_HasInputPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_HasIOPin_Statics
	{
		struct RigVMNode_eventHasIOPin_Parms
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
	void Z_Construct_UFunction_URigVMNode_HasIOPin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMNode_eventHasIOPin_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMNode_HasIOPin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMNode_eventHasIOPin_Parms), &Z_Construct_UFunction_URigVMNode_HasIOPin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_HasIOPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_HasIOPin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_HasIOPin_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns true if the node has any io pins\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns true if the node has any io pins" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_HasIOPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "HasIOPin", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_HasIOPin_Statics::RigVMNode_eventHasIOPin_Parms), Z_Construct_UFunction_URigVMNode_HasIOPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_HasIOPin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_HasIOPin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_HasIOPin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_HasIOPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_HasIOPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_HasLazyPin_Statics
	{
		struct RigVMNode_eventHasLazyPin_Parms
		{
			bool bOnlyConsiderPinsWithLinks;
			bool ReturnValue;
		};
		static void NewProp_bOnlyConsiderPinsWithLinks_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyConsiderPinsWithLinks;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URigVMNode_HasLazyPin_Statics::NewProp_bOnlyConsiderPinsWithLinks_SetBit(void* Obj)
	{
		((RigVMNode_eventHasLazyPin_Parms*)Obj)->bOnlyConsiderPinsWithLinks = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMNode_HasLazyPin_Statics::NewProp_bOnlyConsiderPinsWithLinks = { "bOnlyConsiderPinsWithLinks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMNode_eventHasLazyPin_Parms), &Z_Construct_UFunction_URigVMNode_HasLazyPin_Statics::NewProp_bOnlyConsiderPinsWithLinks_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigVMNode_HasLazyPin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMNode_eventHasLazyPin_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMNode_HasLazyPin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMNode_eventHasLazyPin_Parms), &Z_Construct_UFunction_URigVMNode_HasLazyPin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_HasLazyPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_HasLazyPin_Statics::NewProp_bOnlyConsiderPinsWithLinks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_HasLazyPin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_HasLazyPin_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns true if the node has any lazily evaluating pins\n" },
		{ "CPP_Default_bOnlyConsiderPinsWithLinks", "false" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns true if the node has any lazily evaluating pins" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_HasLazyPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "HasLazyPin", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_HasLazyPin_Statics::RigVMNode_eventHasLazyPin_Parms), Z_Construct_UFunction_URigVMNode_HasLazyPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_HasLazyPin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_HasLazyPin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_HasLazyPin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_HasLazyPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_HasLazyPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_HasOrphanedPins_Statics
	{
		struct RigVMNode_eventHasOrphanedPins_Parms
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
	void Z_Construct_UFunction_URigVMNode_HasOrphanedPins_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMNode_eventHasOrphanedPins_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMNode_HasOrphanedPins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMNode_eventHasOrphanedPins_Parms), &Z_Construct_UFunction_URigVMNode_HasOrphanedPins_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_HasOrphanedPins_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_HasOrphanedPins_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_HasOrphanedPins_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns true if the node has orphaned pins - which leads to a compiler error\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns true if the node has orphaned pins - which leads to a compiler error" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_HasOrphanedPins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "HasOrphanedPins", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_HasOrphanedPins_Statics::RigVMNode_eventHasOrphanedPins_Parms), Z_Construct_UFunction_URigVMNode_HasOrphanedPins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_HasOrphanedPins_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_HasOrphanedPins_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_HasOrphanedPins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_HasOrphanedPins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_HasOrphanedPins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_HasOutputPin_Statics
	{
		struct RigVMNode_eventHasOutputPin_Parms
		{
			bool bIncludeIO;
			bool ReturnValue;
		};
		static void NewProp_bIncludeIO_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeIO;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URigVMNode_HasOutputPin_Statics::NewProp_bIncludeIO_SetBit(void* Obj)
	{
		((RigVMNode_eventHasOutputPin_Parms*)Obj)->bIncludeIO = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMNode_HasOutputPin_Statics::NewProp_bIncludeIO = { "bIncludeIO", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMNode_eventHasOutputPin_Parms), &Z_Construct_UFunction_URigVMNode_HasOutputPin_Statics::NewProp_bIncludeIO_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigVMNode_HasOutputPin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMNode_eventHasOutputPin_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMNode_HasOutputPin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMNode_eventHasOutputPin_Parms), &Z_Construct_UFunction_URigVMNode_HasOutputPin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_HasOutputPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_HasOutputPin_Statics::NewProp_bIncludeIO,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_HasOutputPin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_HasOutputPin_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns true if the node has any output pins\n" },
		{ "CPP_Default_bIncludeIO", "true" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns true if the node has any output pins" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_HasOutputPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "HasOutputPin", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_HasOutputPin_Statics::RigVMNode_eventHasOutputPin_Parms), Z_Construct_UFunction_URigVMNode_HasOutputPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_HasOutputPin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_HasOutputPin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_HasOutputPin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_HasOutputPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_HasOutputPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_HasPinOfDirection_Statics
	{
		struct RigVMNode_eventHasPinOfDirection_Parms
		{
			ERigVMPinDirection InDirection;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InDirection_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InDirection;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URigVMNode_HasPinOfDirection_Statics::NewProp_InDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URigVMNode_HasPinOfDirection_Statics::NewProp_InDirection = { "InDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMNode_eventHasPinOfDirection_Parms, InDirection), Z_Construct_UEnum_RigVM_ERigVMPinDirection, METADATA_PARAMS(nullptr, 0) }; // 4092277362
	void Z_Construct_UFunction_URigVMNode_HasPinOfDirection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMNode_eventHasPinOfDirection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMNode_HasPinOfDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMNode_eventHasPinOfDirection_Parms), &Z_Construct_UFunction_URigVMNode_HasPinOfDirection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_HasPinOfDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_HasPinOfDirection_Statics::NewProp_InDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_HasPinOfDirection_Statics::NewProp_InDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_HasPinOfDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_HasPinOfDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns true if the node has any pins of the provided direction\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns true if the node has any pins of the provided direction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_HasPinOfDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "HasPinOfDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_HasPinOfDirection_Statics::RigVMNode_eventHasPinOfDirection_Parms), Z_Construct_UFunction_URigVMNode_HasPinOfDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_HasPinOfDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_HasPinOfDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_HasPinOfDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_HasPinOfDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_HasPinOfDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_IsAggregate_Statics
	{
		struct RigVMNode_eventIsAggregate_Parms
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
	void Z_Construct_UFunction_URigVMNode_IsAggregate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMNode_eventIsAggregate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMNode_IsAggregate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMNode_eventIsAggregate_Parms), &Z_Construct_UFunction_URigVMNode_IsAggregate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_IsAggregate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_IsAggregate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_IsAggregate_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_IsAggregate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "IsAggregate", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_IsAggregate_Statics::RigVMNode_eventIsAggregate_Parms), Z_Construct_UFunction_URigVMNode_IsAggregate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_IsAggregate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_IsAggregate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_IsAggregate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_IsAggregate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_IsAggregate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_IsControlFlowNode_Statics
	{
		struct RigVMNode_eventIsControlFlowNode_Parms
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
	void Z_Construct_UFunction_URigVMNode_IsControlFlowNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMNode_eventIsControlFlowNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMNode_IsControlFlowNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMNode_eventIsControlFlowNode_Parms), &Z_Construct_UFunction_URigVMNode_IsControlFlowNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_IsControlFlowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_IsControlFlowNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_IsControlFlowNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// return true if this node is a control flow node\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "return true if this node is a control flow node" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_IsControlFlowNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "IsControlFlowNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_IsControlFlowNode_Statics::RigVMNode_eventIsControlFlowNode_Parms), Z_Construct_UFunction_URigVMNode_IsControlFlowNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_IsControlFlowNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_IsControlFlowNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_IsControlFlowNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_IsControlFlowNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_IsControlFlowNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_IsDefinedAsConstant_Statics
	{
		struct RigVMNode_eventIsDefinedAsConstant_Parms
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
	void Z_Construct_UFunction_URigVMNode_IsDefinedAsConstant_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMNode_eventIsDefinedAsConstant_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMNode_IsDefinedAsConstant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMNode_eventIsDefinedAsConstant_Parms), &Z_Construct_UFunction_URigVMNode_IsDefinedAsConstant_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_IsDefinedAsConstant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_IsDefinedAsConstant_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_IsDefinedAsConstant_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns true if the node is defined as non-varying\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns true if the node is defined as non-varying" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_IsDefinedAsConstant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "IsDefinedAsConstant", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_IsDefinedAsConstant_Statics::RigVMNode_eventIsDefinedAsConstant_Parms), Z_Construct_UFunction_URigVMNode_IsDefinedAsConstant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_IsDefinedAsConstant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_IsDefinedAsConstant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_IsDefinedAsConstant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_IsDefinedAsConstant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_IsDefinedAsConstant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_IsDefinedAsVarying_Statics
	{
		struct RigVMNode_eventIsDefinedAsVarying_Parms
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
	void Z_Construct_UFunction_URigVMNode_IsDefinedAsVarying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMNode_eventIsDefinedAsVarying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMNode_IsDefinedAsVarying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMNode_eventIsDefinedAsVarying_Parms), &Z_Construct_UFunction_URigVMNode_IsDefinedAsVarying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_IsDefinedAsVarying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_IsDefinedAsVarying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_IsDefinedAsVarying_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns true if the node is defined as non-varying\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns true if the node is defined as non-varying" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_IsDefinedAsVarying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "IsDefinedAsVarying", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_IsDefinedAsVarying_Statics::RigVMNode_eventIsDefinedAsVarying_Parms), Z_Construct_UFunction_URigVMNode_IsDefinedAsVarying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_IsDefinedAsVarying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_IsDefinedAsVarying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_IsDefinedAsVarying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_IsDefinedAsVarying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_IsDefinedAsVarying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_IsEvent_Statics
	{
		struct RigVMNode_eventIsEvent_Parms
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
	void Z_Construct_UFunction_URigVMNode_IsEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMNode_eventIsEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMNode_IsEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMNode_eventIsEvent_Parms), &Z_Construct_UFunction_URigVMNode_IsEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_IsEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_IsEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_IsEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns true if this Node is the beginning of a scope\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns true if this Node is the beginning of a scope" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_IsEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "IsEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_IsEvent_Statics::RigVMNode_eventIsEvent_Parms), Z_Construct_UFunction_URigVMNode_IsEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_IsEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_IsEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_IsEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_IsEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_IsEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_IsInjected_Statics
	{
		struct RigVMNode_eventIsInjected_Parms
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
	void Z_Construct_UFunction_URigVMNode_IsInjected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMNode_eventIsInjected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMNode_IsInjected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMNode_eventIsInjected_Parms), &Z_Construct_UFunction_URigVMNode_IsInjected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_IsInjected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_IsInjected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_IsInjected_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns true if this is an injected node.\n// Injected nodes are managed by pins are are not visible to the user.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns true if this is an injected node.\nInjected nodes are managed by pins are are not visible to the user." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_IsInjected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "IsInjected", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_IsInjected_Statics::RigVMNode_eventIsInjected_Parms), Z_Construct_UFunction_URigVMNode_IsInjected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_IsInjected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_IsInjected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_IsInjected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_IsInjected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_IsInjected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_IsInputAggregate_Statics
	{
		struct RigVMNode_eventIsInputAggregate_Parms
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
	void Z_Construct_UFunction_URigVMNode_IsInputAggregate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMNode_eventIsInputAggregate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMNode_IsInputAggregate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMNode_eventIsInputAggregate_Parms), &Z_Construct_UFunction_URigVMNode_IsInputAggregate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_IsInputAggregate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_IsInputAggregate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_IsInputAggregate_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_IsInputAggregate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "IsInputAggregate", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_IsInputAggregate_Statics::RigVMNode_eventIsInputAggregate_Parms), Z_Construct_UFunction_URigVMNode_IsInputAggregate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_IsInputAggregate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_IsInputAggregate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_IsInputAggregate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_IsInputAggregate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_IsInputAggregate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_IsLinkedTo_Statics
	{
		struct RigVMNode_eventIsLinkedTo_Parms
		{
			URigVMNode* InNode;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMNode_IsLinkedTo_Statics::NewProp_InNode = { "InNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMNode_eventIsLinkedTo_Parms, InNode), Z_Construct_UClass_URigVMNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigVMNode_IsLinkedTo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMNode_eventIsLinkedTo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMNode_IsLinkedTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMNode_eventIsLinkedTo_Parms), &Z_Construct_UFunction_URigVMNode_IsLinkedTo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_IsLinkedTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_IsLinkedTo_Statics::NewProp_InNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_IsLinkedTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_IsLinkedTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns true if this Node is linked to another \n// given node through any of the Nodes' Pins.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns true if this Node is linked to another\ngiven node through any of the Nodes' Pins." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_IsLinkedTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "IsLinkedTo", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_IsLinkedTo_Statics::RigVMNode_eventIsLinkedTo_Parms), Z_Construct_UFunction_URigVMNode_IsLinkedTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_IsLinkedTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_IsLinkedTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_IsLinkedTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_IsLinkedTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_IsLinkedTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_IsLoopNode_Statics
	{
		struct RigVMNode_eventIsLoopNode_Parms
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
	void Z_Construct_UFunction_URigVMNode_IsLoopNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMNode_eventIsLoopNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMNode_IsLoopNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMNode_eventIsLoopNode_Parms), &Z_Construct_UFunction_URigVMNode_IsLoopNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_IsLoopNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_IsLoopNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_IsLoopNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// return true if this node is a loop node\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "return true if this node is a loop node" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_IsLoopNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "IsLoopNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_IsLoopNode_Statics::RigVMNode_eventIsLoopNode_Parms), Z_Construct_UFunction_URigVMNode_IsLoopNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_IsLoopNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_IsLoopNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_IsLoopNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_IsLoopNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_IsLoopNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_IsMutable_Statics
	{
		struct RigVMNode_eventIsMutable_Parms
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
	void Z_Construct_UFunction_URigVMNode_IsMutable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMNode_eventIsMutable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMNode_IsMutable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMNode_eventIsMutable_Parms), &Z_Construct_UFunction_URigVMNode_IsMutable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_IsMutable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_IsMutable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_IsMutable_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns true if this Node has side effects or\n// internal state.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns true if this Node has side effects or\ninternal state." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_IsMutable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "IsMutable", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_IsMutable_Statics::RigVMNode_eventIsMutable_Parms), Z_Construct_UFunction_URigVMNode_IsMutable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_IsMutable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_IsMutable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_IsMutable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_IsMutable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_IsMutable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_IsPure_Statics
	{
		struct RigVMNode_eventIsPure_Parms
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
	void Z_Construct_UFunction_URigVMNode_IsPure_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMNode_eventIsPure_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMNode_IsPure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMNode_eventIsPure_Parms), &Z_Construct_UFunction_URigVMNode_IsPure_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_IsPure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_IsPure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_IsPure_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns true if this Node has no side-effects\n// and no internal state.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns true if this Node has no side-effects\nand no internal state." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_IsPure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "IsPure", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_IsPure_Statics::RigVMNode_eventIsPure_Parms), Z_Construct_UFunction_URigVMNode_IsPure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_IsPure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_IsPure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_IsPure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_IsPure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_IsPure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_IsSelected_Statics
	{
		struct RigVMNode_eventIsSelected_Parms
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
	void Z_Construct_UFunction_URigVMNode_IsSelected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMNode_eventIsSelected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMNode_IsSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMNode_eventIsSelected_Parms), &Z_Construct_UFunction_URigVMNode_IsSelected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_IsSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_IsSelected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_IsSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns true if this Node is currently selected.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns true if this Node is currently selected." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_IsSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "IsSelected", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_IsSelected_Statics::RigVMNode_eventIsSelected_Parms), Z_Construct_UFunction_URigVMNode_IsSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_IsSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_IsSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_IsSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_IsSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_IsSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_IsVisibleInUI_Statics
	{
		struct RigVMNode_eventIsVisibleInUI_Parms
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
	void Z_Construct_UFunction_URigVMNode_IsVisibleInUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMNode_eventIsVisibleInUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMNode_IsVisibleInUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMNode_eventIsVisibleInUI_Parms), &Z_Construct_UFunction_URigVMNode_IsVisibleInUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_IsVisibleInUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_IsVisibleInUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_IsVisibleInUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "Comment", "// Returns true if this should be visible in the UI\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "Returns true if this should be visible in the UI" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_IsVisibleInUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "IsVisibleInUI", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_IsVisibleInUI_Statics::RigVMNode_eventIsVisibleInUI_Parms), Z_Construct_UFunction_URigVMNode_IsVisibleInUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_IsVisibleInUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_IsVisibleInUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_IsVisibleInUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_IsVisibleInUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_IsVisibleInUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_SetExecutionIsHaltedAtThisNode_Statics
	{
		struct RigVMNode_eventSetExecutionIsHaltedAtThisNode_Parms
		{
			bool bValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValue_MetaData[];
#endif
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_SetExecutionIsHaltedAtThisNode_Statics::NewProp_bValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_URigVMNode_SetExecutionIsHaltedAtThisNode_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((RigVMNode_eventSetExecutionIsHaltedAtThisNode_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMNode_SetExecutionIsHaltedAtThisNode_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMNode_eventSetExecutionIsHaltedAtThisNode_Parms), &Z_Construct_UFunction_URigVMNode_SetExecutionIsHaltedAtThisNode_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_SetExecutionIsHaltedAtThisNode_Statics::NewProp_bValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_SetExecutionIsHaltedAtThisNode_Statics::NewProp_bValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_SetExecutionIsHaltedAtThisNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_SetExecutionIsHaltedAtThisNode_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_SetExecutionIsHaltedAtThisNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_SetExecutionIsHaltedAtThisNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "SetExecutionIsHaltedAtThisNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_SetExecutionIsHaltedAtThisNode_Statics::RigVMNode_eventSetExecutionIsHaltedAtThisNode_Parms), Z_Construct_UFunction_URigVMNode_SetExecutionIsHaltedAtThisNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_SetExecutionIsHaltedAtThisNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_SetExecutionIsHaltedAtThisNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_SetExecutionIsHaltedAtThisNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_SetExecutionIsHaltedAtThisNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_SetExecutionIsHaltedAtThisNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMNode_SetHasBreakpoint_Statics
	{
		struct RigVMNode_eventSetHasBreakpoint_Parms
		{
			bool bValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValue_MetaData[];
#endif
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_SetHasBreakpoint_Statics::NewProp_bValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_URigVMNode_SetHasBreakpoint_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((RigVMNode_eventSetHasBreakpoint_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMNode_SetHasBreakpoint_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMNode_eventSetHasBreakpoint_Parms), &Z_Construct_UFunction_URigVMNode_SetHasBreakpoint_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_SetHasBreakpoint_Statics::NewProp_bValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_SetHasBreakpoint_Statics::NewProp_bValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMNode_SetHasBreakpoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMNode_SetHasBreakpoint_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMNode_SetHasBreakpoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMNode" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMNode_SetHasBreakpoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMNode, nullptr, "SetHasBreakpoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMNode_SetHasBreakpoint_Statics::RigVMNode_eventSetHasBreakpoint_Parms), Z_Construct_UFunction_URigVMNode_SetHasBreakpoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_SetHasBreakpoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMNode_SetHasBreakpoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMNode_SetHasBreakpoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMNode_SetHasBreakpoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMNode_SetHasBreakpoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMNode);
	UClass* Z_Construct_UClass_URigVMNode_NoRegister()
	{
		return URigVMNode::StaticClass();
	}
	struct Z_Construct_UClass_URigVMNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeTitle_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeTitle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PreviousName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasBreakpoint_MetaData[];
#endif
		static void NewProp_bHasBreakpoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBreakpoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHaltedAtThisNode_MetaData[];
#endif
		static void NewProp_bHaltedAtThisNode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHaltedAtThisNode;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Pins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Pins;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OrphanedPins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrphanedPins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OrphanedPins;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URigVMNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URigVMNode_CanBeUpgraded, "CanBeUpgraded" }, // 3577514
		{ &Z_Construct_UFunction_URigVMNode_CanOnlyExistOnce, "CanOnlyExistOnce" }, // 362385466
		{ &Z_Construct_UFunction_URigVMNode_ExecutionIsHaltedAtThisNode, "ExecutionIsHaltedAtThisNode" }, // 4084041829
		{ &Z_Construct_UFunction_URigVMNode_FindFunctionForNode, "FindFunctionForNode" }, // 407097307
		{ &Z_Construct_UFunction_URigVMNode_FindPin, "FindPin" }, // 896386198
		{ &Z_Construct_UFunction_URigVMNode_GetAggregateInputs, "GetAggregateInputs" }, // 1216564247
		{ &Z_Construct_UFunction_URigVMNode_GetAggregateOutputs, "GetAggregateOutputs" }, // 2395172155
		{ &Z_Construct_UFunction_URigVMNode_GetAllPinsRecursively, "GetAllPinsRecursively" }, // 2988602483
		{ &Z_Construct_UFunction_URigVMNode_GetEventName, "GetEventName" }, // 1372259467
		{ &Z_Construct_UFunction_URigVMNode_GetFirstAggregatePin, "GetFirstAggregatePin" }, // 2367669079
		{ &Z_Construct_UFunction_URigVMNode_GetGraph, "GetGraph" }, // 776345162
		{ &Z_Construct_UFunction_URigVMNode_GetInjectionInfo, "GetInjectionInfo" }, // 2189440074
		{ &Z_Construct_UFunction_URigVMNode_GetLinkedSourceNodes, "GetLinkedSourceNodes" }, // 3843342127
		{ &Z_Construct_UFunction_URigVMNode_GetLinkedTargetNodes, "GetLinkedTargetNodes" }, // 926163554
		{ &Z_Construct_UFunction_URigVMNode_GetLinks, "GetLinks" }, // 4034361752
		{ &Z_Construct_UFunction_URigVMNode_GetNextAggregateName, "GetNextAggregateName" }, // 2279978944
		{ &Z_Construct_UFunction_URigVMNode_GetNodeColor, "GetNodeColor" }, // 203529890
		{ &Z_Construct_UFunction_URigVMNode_GetNodeIndex, "GetNodeIndex" }, // 599182308
		{ &Z_Construct_UFunction_URigVMNode_GetNodePath, "GetNodePath" }, // 3320337258
		{ &Z_Construct_UFunction_URigVMNode_GetNodeTitle, "GetNodeTitle" }, // 2455522641
		{ &Z_Construct_UFunction_URigVMNode_GetOppositeAggregatePin, "GetOppositeAggregatePin" }, // 1322321813
		{ &Z_Construct_UFunction_URigVMNode_GetOrphanedPins, "GetOrphanedPins" }, // 1005482371
		{ &Z_Construct_UFunction_URigVMNode_GetPins, "GetPins" }, // 701933477
		{ &Z_Construct_UFunction_URigVMNode_GetPosition, "GetPosition" }, // 3422807535
		{ &Z_Construct_UFunction_URigVMNode_GetPreviousFName, "GetPreviousFName" }, // 3943991897
		{ &Z_Construct_UFunction_URigVMNode_GetRootGraph, "GetRootGraph" }, // 2300765074
		{ &Z_Construct_UFunction_URigVMNode_GetSecondAggregatePin, "GetSecondAggregatePin" }, // 4028799209
		{ &Z_Construct_UFunction_URigVMNode_GetSize, "GetSize" }, // 2460581142
		{ &Z_Construct_UFunction_URigVMNode_GetSupportedWorkflows, "GetSupportedWorkflows" }, // 2473354304
		{ &Z_Construct_UFunction_URigVMNode_GetToolTipText, "GetToolTipText" }, // 3610410093
		{ &Z_Construct_UFunction_URigVMNode_HasBreakpoint, "HasBreakpoint" }, // 95743850
		{ &Z_Construct_UFunction_URigVMNode_HasInputPin, "HasInputPin" }, // 3803476427
		{ &Z_Construct_UFunction_URigVMNode_HasIOPin, "HasIOPin" }, // 270662614
		{ &Z_Construct_UFunction_URigVMNode_HasLazyPin, "HasLazyPin" }, // 348630300
		{ &Z_Construct_UFunction_URigVMNode_HasOrphanedPins, "HasOrphanedPins" }, // 869698094
		{ &Z_Construct_UFunction_URigVMNode_HasOutputPin, "HasOutputPin" }, // 1849261699
		{ &Z_Construct_UFunction_URigVMNode_HasPinOfDirection, "HasPinOfDirection" }, // 3591030213
		{ &Z_Construct_UFunction_URigVMNode_IsAggregate, "IsAggregate" }, // 2786960100
		{ &Z_Construct_UFunction_URigVMNode_IsControlFlowNode, "IsControlFlowNode" }, // 498487788
		{ &Z_Construct_UFunction_URigVMNode_IsDefinedAsConstant, "IsDefinedAsConstant" }, // 2450799830
		{ &Z_Construct_UFunction_URigVMNode_IsDefinedAsVarying, "IsDefinedAsVarying" }, // 1239990040
		{ &Z_Construct_UFunction_URigVMNode_IsEvent, "IsEvent" }, // 3514898132
		{ &Z_Construct_UFunction_URigVMNode_IsInjected, "IsInjected" }, // 1304618030
		{ &Z_Construct_UFunction_URigVMNode_IsInputAggregate, "IsInputAggregate" }, // 1509871683
		{ &Z_Construct_UFunction_URigVMNode_IsLinkedTo, "IsLinkedTo" }, // 3817621502
		{ &Z_Construct_UFunction_URigVMNode_IsLoopNode, "IsLoopNode" }, // 2106086984
		{ &Z_Construct_UFunction_URigVMNode_IsMutable, "IsMutable" }, // 2396068218
		{ &Z_Construct_UFunction_URigVMNode_IsPure, "IsPure" }, // 3365608789
		{ &Z_Construct_UFunction_URigVMNode_IsSelected, "IsSelected" }, // 1106777105
		{ &Z_Construct_UFunction_URigVMNode_IsVisibleInUI, "IsVisibleInUI" }, // 3680356935
		{ &Z_Construct_UFunction_URigVMNode_SetExecutionIsHaltedAtThisNode, "SetExecutionIsHaltedAtThisNode" }, // 2751761988
		{ &Z_Construct_UFunction_URigVMNode_SetHasBreakpoint, "SetHasBreakpoint" }, // 2053002894
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Node represents a single statement within a Graph. \n * Nodes can represent values such as Variables / Parameters,\n * they can represent Function Invocations or Control Flow\n * logic statements (such as If conditions of For loops).\n * Additionally Nodes are used to represent Comment statements.\n * Nodes contain Pins to represent parameters for Function\n * Invocations or Value access on Variables / Parameters.\n */" },
		{ "IncludePath", "RigVMModel/RigVMNode.h" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
		{ "ToolTip", "The Node represents a single statement within a Graph.\nNodes can represent values such as Variables / Parameters,\nthey can represent Function Invocations or Control Flow\nlogic statements (such as If conditions of For loops).\nAdditionally Nodes are used to represent Comment statements.\nNodes contain Pins to represent parameters for Function\nInvocations or Value access on Variables / Parameters." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMNode_Statics::NewProp_NodeTitle_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URigVMNode_Statics::NewProp_NodeTitle = { "NodeTitle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMNode, NodeTitle), METADATA_PARAMS(Z_Construct_UClass_URigVMNode_Statics::NewProp_NodeTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMNode_Statics::NewProp_NodeTitle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMNode_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMNode_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMNode, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_URigVMNode_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMNode_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMNode_Statics::NewProp_Size_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMNode_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMNode, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_URigVMNode_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMNode_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMNode_Statics::NewProp_NodeColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMNode_Statics::NewProp_NodeColor = { "NodeColor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMNode, NodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_URigVMNode_Statics::NewProp_NodeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMNode_Statics::NewProp_NodeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMNode_Statics::NewProp_PreviousName_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URigVMNode_Statics::NewProp_PreviousName = { "PreviousName", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMNode, PreviousName), METADATA_PARAMS(Z_Construct_UClass_URigVMNode_Statics::NewProp_PreviousName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMNode_Statics::NewProp_PreviousName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMNode_Statics::NewProp_bHasBreakpoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
	};
#endif
	void Z_Construct_UClass_URigVMNode_Statics::NewProp_bHasBreakpoint_SetBit(void* Obj)
	{
		((URigVMNode*)Obj)->bHasBreakpoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URigVMNode_Statics::NewProp_bHasBreakpoint = { "bHasBreakpoint", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URigVMNode), &Z_Construct_UClass_URigVMNode_Statics::NewProp_bHasBreakpoint_SetBit, METADATA_PARAMS(Z_Construct_UClass_URigVMNode_Statics::NewProp_bHasBreakpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMNode_Statics::NewProp_bHasBreakpoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMNode_Statics::NewProp_bHaltedAtThisNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
	};
#endif
	void Z_Construct_UClass_URigVMNode_Statics::NewProp_bHaltedAtThisNode_SetBit(void* Obj)
	{
		((URigVMNode*)Obj)->bHaltedAtThisNode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URigVMNode_Statics::NewProp_bHaltedAtThisNode = { "bHaltedAtThisNode", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URigVMNode), &Z_Construct_UClass_URigVMNode_Statics::NewProp_bHaltedAtThisNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_URigVMNode_Statics::NewProp_bHaltedAtThisNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMNode_Statics::NewProp_bHaltedAtThisNode_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigVMNode_Statics::NewProp_Pins_Inner = { "Pins", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMNode_Statics::NewProp_Pins_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URigVMNode_Statics::NewProp_Pins = { "Pins", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMNode, Pins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URigVMNode_Statics::NewProp_Pins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMNode_Statics::NewProp_Pins_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigVMNode_Statics::NewProp_OrphanedPins_Inner = { "OrphanedPins", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URigVMPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMNode_Statics::NewProp_OrphanedPins_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URigVMNode_Statics::NewProp_OrphanedPins = { "OrphanedPins", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMNode, OrphanedPins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URigVMNode_Statics::NewProp_OrphanedPins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMNode_Statics::NewProp_OrphanedPins_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigVMNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMNode_Statics::NewProp_NodeTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMNode_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMNode_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMNode_Statics::NewProp_NodeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMNode_Statics::NewProp_PreviousName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMNode_Statics::NewProp_bHasBreakpoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMNode_Statics::NewProp_bHaltedAtThisNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMNode_Statics::NewProp_Pins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMNode_Statics::NewProp_Pins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMNode_Statics::NewProp_OrphanedPins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMNode_Statics::NewProp_OrphanedPins,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMNode_Statics::ClassParams = {
		&URigVMNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URigVMNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URigVMNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URigVMNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigVMNode()
	{
		if (!Z_Registration_Info_UClass_URigVMNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMNode.OuterSingleton, Z_Construct_UClass_URigVMNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMNode.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<URigVMNode>()
	{
		return URigVMNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMNode);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMNode, URigVMNode::StaticClass, TEXT("URigVMNode"), &Z_Registration_Info_UClass_URigVMNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMNode), 3407097634U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_2844064417(TEXT("/Script/RigVMDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
