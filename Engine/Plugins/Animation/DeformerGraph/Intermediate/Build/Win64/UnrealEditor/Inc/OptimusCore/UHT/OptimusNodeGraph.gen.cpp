// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusNodeGraph.h"
#include "OptimusDataType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNodeGraph() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentSourceBinding_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeGraph();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeGraph_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeGraphCollectionOwner_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeLink_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodePin_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusResourceDescription_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusVariableDescription_NoRegister();
	OPTIMUSCORE_API UEnum* Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataTypeRef();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOptimusNodeGraphType;
	static UEnum* EOptimusNodeGraphType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOptimusNodeGraphType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOptimusNodeGraphType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("EOptimusNodeGraphType"));
		}
		return Z_Registration_Info_UEnum_EOptimusNodeGraphType.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UEnum* StaticEnum<EOptimusNodeGraphType>()
	{
		return EOptimusNodeGraphType_StaticEnum();
	}
	struct Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType_Statics::Enumerators[] = {
		{ "EOptimusNodeGraphType::Setup", (int64)EOptimusNodeGraphType::Setup },
		{ "EOptimusNodeGraphType::Update", (int64)EOptimusNodeGraphType::Update },
		{ "EOptimusNodeGraphType::ExternalTrigger", (int64)EOptimusNodeGraphType::ExternalTrigger },
		{ "EOptimusNodeGraphType::Function", (int64)EOptimusNodeGraphType::Function },
		{ "EOptimusNodeGraphType::SubGraph", (int64)EOptimusNodeGraphType::SubGraph },
		{ "EOptimusNodeGraphType::Transient", (int64)EOptimusNodeGraphType::Transient },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** The use type of a particular graph */" },
		{ "ExternalTrigger.Comment", "/** Called on every tick */" },
		{ "ExternalTrigger.Name", "EOptimusNodeGraphType::ExternalTrigger" },
		{ "ExternalTrigger.ToolTip", "Called on every tick" },
		{ "Function.Comment", "/** Called when triggered from a blueprint */// Storage graphs\n" },
		{ "Function.Name", "EOptimusNodeGraphType::Function" },
		{ "Function.ToolTip", "Called when triggered from a blueprint // Storage graphs" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
		{ "Setup.Comment", "// Execution graphs\n" },
		{ "Setup.Name", "EOptimusNodeGraphType::Setup" },
		{ "Setup.ToolTip", "Execution graphs" },
		{ "SubGraph.Comment", "/** Used to store function graphs */" },
		{ "SubGraph.Name", "EOptimusNodeGraphType::SubGraph" },
		{ "SubGraph.ToolTip", "Used to store function graphs" },
		{ "ToolTip", "The use type of a particular graph" },
		{ "Transient.Comment", "/** Used to store sub-graphs within other graphs */" },
		{ "Transient.Name", "EOptimusNodeGraphType::Transient" },
		{ "Transient.ToolTip", "Used to store sub-graphs within other graphs" },
		{ "Update.Comment", "/** Called once during an actor's setup event */" },
		{ "Update.Name", "EOptimusNodeGraphType::Update" },
		{ "Update.ToolTip", "Called once during an actor's setup event" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OptimusCore,
		nullptr,
		"EOptimusNodeGraphType",
		"EOptimusNodeGraphType",
		Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType()
	{
		if (!Z_Registration_Info_UEnum_EOptimusNodeGraphType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOptimusNodeGraphType.InnerSingleton, Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOptimusNodeGraphType.InnerSingleton;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execRenameGraph)
	{
		P_GET_OBJECT(UOptimusNodeGraph,Z_Param_InGraph);
		P_GET_PROPERTY(FStrProperty,Z_Param_InNewName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RenameGraph(Z_Param_InGraph,Z_Param_InNewName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execMoveGraph)
	{
		P_GET_OBJECT(UOptimusNodeGraph,Z_Param_InGraph);
		P_GET_PROPERTY(FIntProperty,Z_Param_InInsertBefore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MoveGraph(Z_Param_InGraph,Z_Param_InInsertBefore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execGetGraphs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UOptimusNodeGraph*>*)Z_Param__Result=P_THIS->GetGraphs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execIsSubGraphReference)
	{
		P_GET_OBJECT(UOptimusNode,Z_Param_InNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSubGraphReference(Z_Param_InNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execIsFunctionReference)
	{
		P_GET_OBJECT(UOptimusNode,Z_Param_InNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFunctionReference(Z_Param_InNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execIsKernelFunction)
	{
		P_GET_OBJECT(UOptimusNode,Z_Param_InNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsKernelFunction(Z_Param_InNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execIsCustomKernel)
	{
		P_GET_OBJECT(UOptimusNode,Z_Param_InNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCustomKernel(Z_Param_InNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execExpandCollapsedNodes)
	{
		P_GET_OBJECT(UOptimusNode,Z_Param_InFunctionNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UOptimusNode*>*)Z_Param__Result=P_THIS->ExpandCollapsedNodes(Z_Param_InFunctionNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execCollapseNodesToSubGraph)
	{
		P_GET_TARRAY_REF(UOptimusNode*,Z_Param_Out_InNodes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOptimusNode**)Z_Param__Result=P_THIS->CollapseNodesToSubGraph(Z_Param_Out_InNodes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execCollapseNodesToFunction)
	{
		P_GET_TARRAY_REF(UOptimusNode*,Z_Param_Out_InNodes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOptimusNode**)Z_Param__Result=P_THIS->CollapseNodesToFunction(Z_Param_Out_InNodes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execConvertFunctionToCustomKernel)
	{
		P_GET_OBJECT(UOptimusNode,Z_Param_InKernelFunction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOptimusNode**)Z_Param__Result=P_THIS->ConvertFunctionToCustomKernel(Z_Param_InKernelFunction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execConvertCustomKernelToFunction)
	{
		P_GET_OBJECT(UOptimusNode,Z_Param_InCustomKernel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOptimusNode**)Z_Param__Result=P_THIS->ConvertCustomKernelToFunction(Z_Param_InCustomKernel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execRemoveAllLinks)
	{
		P_GET_OBJECT(UOptimusNodePin,Z_Param_InNodePin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveAllLinks(Z_Param_InNodePin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execRemoveLink)
	{
		P_GET_OBJECT(UOptimusNodePin,Z_Param_InNodeOutputPin);
		P_GET_OBJECT(UOptimusNodePin,Z_Param_InNodeInputPin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveLink(Z_Param_InNodeOutputPin,Z_Param_InNodeInputPin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execAddLink)
	{
		P_GET_OBJECT(UOptimusNodePin,Z_Param_InNodeOutputPin);
		P_GET_OBJECT(UOptimusNodePin,Z_Param_InNodeInputPin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddLink(Z_Param_InNodeOutputPin,Z_Param_InNodeInputPin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execDuplicateNodes)
	{
		P_GET_TARRAY_REF(UOptimusNode*,Z_Param_Out_InNodes);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DuplicateNodes(Z_Param_Out_InNodes,Z_Param_Out_InPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execDuplicateNode)
	{
		P_GET_OBJECT(UOptimusNode,Z_Param_InNode);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOptimusNode**)Z_Param__Result=P_THIS->DuplicateNode(Z_Param_InNode,Z_Param_Out_InPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execRemoveNodes)
	{
		P_GET_TARRAY_REF(UOptimusNode*,Z_Param_Out_InNodes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveNodes(Z_Param_Out_InNodes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execRemoveNode)
	{
		P_GET_OBJECT(UOptimusNode,Z_Param_InNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveNode(Z_Param_InNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execAddComponentBindingGetNode)
	{
		P_GET_OBJECT(UOptimusComponentSourceBinding,Z_Param_InComponentBinding);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOptimusNode**)Z_Param__Result=P_THIS->AddComponentBindingGetNode(Z_Param_InComponentBinding,Z_Param_Out_InPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execAddVariableGetNode)
	{
		P_GET_OBJECT(UOptimusVariableDescription,Z_Param_InVariableDesc);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOptimusNode**)Z_Param__Result=P_THIS->AddVariableGetNode(Z_Param_InVariableDesc,Z_Param_Out_InPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execAddResourceSetNode)
	{
		P_GET_OBJECT(UOptimusResourceDescription,Z_Param_InResourceDesc);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOptimusNode**)Z_Param__Result=P_THIS->AddResourceSetNode(Z_Param_InResourceDesc,Z_Param_Out_InPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execAddResourceGetNode)
	{
		P_GET_OBJECT(UOptimusResourceDescription,Z_Param_InResourceDesc);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOptimusNode**)Z_Param__Result=P_THIS->AddResourceGetNode(Z_Param_InResourceDesc,Z_Param_Out_InPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execAddResourceNode)
	{
		P_GET_OBJECT(UOptimusResourceDescription,Z_Param_InResourceDesc);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOptimusNode**)Z_Param__Result=P_THIS->AddResourceNode(Z_Param_InResourceDesc,Z_Param_Out_InPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execAddDataInterfaceNode)
	{
		P_GET_OBJECT(UClass,Z_Param_InDataInterfaceClass);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOptimusNode**)Z_Param__Result=P_THIS->AddDataInterfaceNode(Z_Param_InDataInterfaceClass,Z_Param_Out_InPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execAddValueNode)
	{
		P_GET_STRUCT(FOptimusDataTypeRef,Z_Param_InDataTypeRef);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOptimusNode**)Z_Param__Result=P_THIS->AddValueNode(Z_Param_InDataTypeRef,Z_Param_Out_InPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execAddNode)
	{
		P_GET_OBJECT(UClass,Z_Param_InNodeClass);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOptimusNode**)Z_Param__Result=P_THIS->AddNode(Z_Param_InNodeClass,Z_Param_Out_InPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execGetGraphIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGraphIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execIsFunctionGraph)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFunctionGraph();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execIsExecutionGraph)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsExecutionGraph();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNodeGraph::execGetGraphType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOptimusNodeGraphType*)Z_Param__Result=P_THIS->GetGraphType();
		P_NATIVE_END;
	}
	void UOptimusNodeGraph::StaticRegisterNativesUOptimusNodeGraph()
	{
		UClass* Class = UOptimusNodeGraph::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddComponentBindingGetNode", &UOptimusNodeGraph::execAddComponentBindingGetNode },
			{ "AddDataInterfaceNode", &UOptimusNodeGraph::execAddDataInterfaceNode },
			{ "AddLink", &UOptimusNodeGraph::execAddLink },
			{ "AddNode", &UOptimusNodeGraph::execAddNode },
			{ "AddResourceGetNode", &UOptimusNodeGraph::execAddResourceGetNode },
			{ "AddResourceNode", &UOptimusNodeGraph::execAddResourceNode },
			{ "AddResourceSetNode", &UOptimusNodeGraph::execAddResourceSetNode },
			{ "AddValueNode", &UOptimusNodeGraph::execAddValueNode },
			{ "AddVariableGetNode", &UOptimusNodeGraph::execAddVariableGetNode },
			{ "CollapseNodesToFunction", &UOptimusNodeGraph::execCollapseNodesToFunction },
			{ "CollapseNodesToSubGraph", &UOptimusNodeGraph::execCollapseNodesToSubGraph },
			{ "ConvertCustomKernelToFunction", &UOptimusNodeGraph::execConvertCustomKernelToFunction },
			{ "ConvertFunctionToCustomKernel", &UOptimusNodeGraph::execConvertFunctionToCustomKernel },
			{ "DuplicateNode", &UOptimusNodeGraph::execDuplicateNode },
			{ "DuplicateNodes", &UOptimusNodeGraph::execDuplicateNodes },
			{ "ExpandCollapsedNodes", &UOptimusNodeGraph::execExpandCollapsedNodes },
			{ "GetGraphIndex", &UOptimusNodeGraph::execGetGraphIndex },
			{ "GetGraphs", &UOptimusNodeGraph::execGetGraphs },
			{ "GetGraphType", &UOptimusNodeGraph::execGetGraphType },
			{ "IsCustomKernel", &UOptimusNodeGraph::execIsCustomKernel },
			{ "IsExecutionGraph", &UOptimusNodeGraph::execIsExecutionGraph },
			{ "IsFunctionGraph", &UOptimusNodeGraph::execIsFunctionGraph },
			{ "IsFunctionReference", &UOptimusNodeGraph::execIsFunctionReference },
			{ "IsKernelFunction", &UOptimusNodeGraph::execIsKernelFunction },
			{ "IsSubGraphReference", &UOptimusNodeGraph::execIsSubGraphReference },
			{ "MoveGraph", &UOptimusNodeGraph::execMoveGraph },
			{ "RemoveAllLinks", &UOptimusNodeGraph::execRemoveAllLinks },
			{ "RemoveLink", &UOptimusNodeGraph::execRemoveLink },
			{ "RemoveNode", &UOptimusNodeGraph::execRemoveNode },
			{ "RemoveNodes", &UOptimusNodeGraph::execRemoveNodes },
			{ "RenameGraph", &UOptimusNodeGraph::execRenameGraph },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics
	{
		struct OptimusNodeGraph_eventAddComponentBindingGetNode_Parms
		{
			UOptimusComponentSourceBinding* InComponentBinding;
			FVector2D InPosition;
			UOptimusNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponentBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::NewProp_InComponentBinding = { "InComponentBinding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventAddComponentBindingGetNode_Parms, InComponentBinding), Z_Construct_UClass_UOptimusComponentSourceBinding_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventAddComponentBindingGetNode_Parms, InPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::NewProp_InPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::NewProp_InPosition_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventAddComponentBindingGetNode_Parms, ReturnValue), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::NewProp_InComponentBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "AddComponentBindingGetNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::OptimusNodeGraph_eventAddComponentBindingGetNode_Parms), Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics
	{
		struct OptimusNodeGraph_eventAddDataInterfaceNode_Parms
		{
			const TSubclassOf<UOptimusComputeDataInterface>  InDataInterfaceClass;
			FVector2D InPosition;
			UOptimusNode* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDataInterfaceClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InDataInterfaceClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::NewProp_InDataInterfaceClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::NewProp_InDataInterfaceClass = { "InDataInterfaceClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventAddDataInterfaceNode_Parms, InDataInterfaceClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOptimusComputeDataInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::NewProp_InDataInterfaceClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::NewProp_InDataInterfaceClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventAddDataInterfaceNode_Parms, InPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::NewProp_InPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::NewProp_InPosition_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventAddDataInterfaceNode_Parms, ReturnValue), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::NewProp_InDataInterfaceClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "AddDataInterfaceNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::OptimusNodeGraph_eventAddDataInterfaceNode_Parms), Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics
	{
		struct OptimusNodeGraph_eventAddLink_Parms
		{
			UOptimusNodePin* InNodeOutputPin;
			UOptimusNodePin* InNodeInputPin;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNodeOutputPin;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNodeInputPin;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::NewProp_InNodeOutputPin = { "InNodeOutputPin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventAddLink_Parms, InNodeOutputPin), Z_Construct_UClass_UOptimusNodePin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::NewProp_InNodeInputPin = { "InNodeInputPin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventAddLink_Parms, InNodeInputPin), Z_Construct_UClass_UOptimusNodePin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusNodeGraph_eventAddLink_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OptimusNodeGraph_eventAddLink_Parms), &Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::NewProp_InNodeOutputPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::NewProp_InNodeInputPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "AddLink", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::OptimusNodeGraph_eventAddLink_Parms), Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_AddLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_AddLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics
	{
		struct OptimusNodeGraph_eventAddNode_Parms
		{
			const TSubclassOf<UOptimusNode>  InNodeClass;
			FVector2D InPosition;
			UOptimusNode* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNodeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InNodeClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::NewProp_InNodeClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::NewProp_InNodeClass = { "InNodeClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventAddNode_Parms, InNodeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::NewProp_InNodeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::NewProp_InNodeClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventAddNode_Parms, InPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::NewProp_InPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::NewProp_InPosition_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventAddNode_Parms, ReturnValue), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::NewProp_InNodeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "// TODO: Add magic connection from a pin.\n" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
		{ "ToolTip", "TODO: Add magic connection from a pin." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "AddNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::OptimusNodeGraph_eventAddNode_Parms), Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_AddNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_AddNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics
	{
		struct OptimusNodeGraph_eventAddResourceGetNode_Parms
		{
			UOptimusResourceDescription* InResourceDesc;
			FVector2D InPosition;
			UOptimusNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InResourceDesc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::NewProp_InResourceDesc = { "InResourceDesc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventAddResourceGetNode_Parms, InResourceDesc), Z_Construct_UClass_UOptimusResourceDescription_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventAddResourceGetNode_Parms, InPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::NewProp_InPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::NewProp_InPosition_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventAddResourceGetNode_Parms, ReturnValue), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::NewProp_InResourceDesc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "AddResourceGetNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::OptimusNodeGraph_eventAddResourceGetNode_Parms), Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics
	{
		struct OptimusNodeGraph_eventAddResourceNode_Parms
		{
			UOptimusResourceDescription* InResourceDesc;
			FVector2D InPosition;
			UOptimusNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InResourceDesc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::NewProp_InResourceDesc = { "InResourceDesc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventAddResourceNode_Parms, InResourceDesc), Z_Construct_UClass_UOptimusResourceDescription_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventAddResourceNode_Parms, InPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::NewProp_InPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::NewProp_InPosition_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventAddResourceNode_Parms, ReturnValue), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::NewProp_InResourceDesc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "AddResourceNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::OptimusNodeGraph_eventAddResourceNode_Parms), Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics
	{
		struct OptimusNodeGraph_eventAddResourceSetNode_Parms
		{
			UOptimusResourceDescription* InResourceDesc;
			FVector2D InPosition;
			UOptimusNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InResourceDesc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::NewProp_InResourceDesc = { "InResourceDesc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventAddResourceSetNode_Parms, InResourceDesc), Z_Construct_UClass_UOptimusResourceDescription_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventAddResourceSetNode_Parms, InPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::NewProp_InPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::NewProp_InPosition_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventAddResourceSetNode_Parms, ReturnValue), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::NewProp_InResourceDesc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "AddResourceSetNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::OptimusNodeGraph_eventAddResourceSetNode_Parms), Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics
	{
		struct OptimusNodeGraph_eventAddValueNode_Parms
		{
			FOptimusDataTypeRef InDataTypeRef;
			FVector2D InPosition;
			UOptimusNode* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDataTypeRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::NewProp_InDataTypeRef = { "InDataTypeRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventAddValueNode_Parms, InDataTypeRef), Z_Construct_UScriptStruct_FOptimusDataTypeRef, METADATA_PARAMS(nullptr, 0) }; // 2733180919
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventAddValueNode_Parms, InPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::NewProp_InPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::NewProp_InPosition_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventAddValueNode_Parms, ReturnValue), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::NewProp_InDataTypeRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "AddValueNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::OptimusNodeGraph_eventAddValueNode_Parms), Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics
	{
		struct OptimusNodeGraph_eventAddVariableGetNode_Parms
		{
			UOptimusVariableDescription* InVariableDesc;
			FVector2D InPosition;
			UOptimusNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InVariableDesc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::NewProp_InVariableDesc = { "InVariableDesc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventAddVariableGetNode_Parms, InVariableDesc), Z_Construct_UClass_UOptimusVariableDescription_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventAddVariableGetNode_Parms, InPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::NewProp_InPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::NewProp_InPosition_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventAddVariableGetNode_Parms, ReturnValue), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::NewProp_InVariableDesc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "AddVariableGetNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::OptimusNodeGraph_eventAddVariableGetNode_Parms), Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics
	{
		struct OptimusNodeGraph_eventCollapseNodesToFunction_Parms
		{
			TArray<UOptimusNode*> InNodes;
			UOptimusNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InNodes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::NewProp_InNodes_Inner = { "InNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::NewProp_InNodes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::NewProp_InNodes = { "InNodes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventCollapseNodesToFunction_Parms, InNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::NewProp_InNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::NewProp_InNodes_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventCollapseNodesToFunction_Parms, ReturnValue), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::NewProp_InNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::NewProp_InNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/** Take a set of nodes and collapse them into a single function, replacing the given nodes\n\x09 *  with the new function node and returning it. A new function definition is made available\n\x09 *  as a new Function graph in the package.\n\x09 */" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
		{ "ToolTip", "Take a set of nodes and collapse them into a single function, replacing the given nodes\nwith the new function node and returning it. A new function definition is made available\nas a new Function graph in the package." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "CollapseNodesToFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::OptimusNodeGraph_eventCollapseNodesToFunction_Parms), Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics
	{
		struct OptimusNodeGraph_eventCollapseNodesToSubGraph_Parms
		{
			TArray<UOptimusNode*> InNodes;
			UOptimusNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InNodes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::NewProp_InNodes_Inner = { "InNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::NewProp_InNodes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::NewProp_InNodes = { "InNodes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventCollapseNodesToSubGraph_Parms, InNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::NewProp_InNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::NewProp_InNodes_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventCollapseNodesToSubGraph_Parms, ReturnValue), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::NewProp_InNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::NewProp_InNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/** Take a set of nodes and collapse them into a subgraph, replacing the given nodes\n\x09 *  with a new subgraph node and returning it. \n\x09 */" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
		{ "ToolTip", "Take a set of nodes and collapse them into a subgraph, replacing the given nodes\nwith a new subgraph node and returning it." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "CollapseNodesToSubGraph", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::OptimusNodeGraph_eventCollapseNodesToSubGraph_Parms), Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction_Statics
	{
		struct OptimusNodeGraph_eventConvertCustomKernelToFunction_Parms
		{
			UOptimusNode* InCustomKernel;
			UOptimusNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InCustomKernel;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction_Statics::NewProp_InCustomKernel = { "InCustomKernel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventConvertCustomKernelToFunction_Parms, InCustomKernel), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventConvertCustomKernelToFunction_Parms, ReturnValue), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction_Statics::NewProp_InCustomKernel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/** Takes a custom kernel and converts to a packaged function. If the given node is not a\n\x09 *  custom kernel or cannot be converted, a nullptr is returned.\n\x09 */" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
		{ "ToolTip", "Takes a custom kernel and converts to a packaged function. If the given node is not a\ncustom kernel or cannot be converted, a nullptr is returned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "ConvertCustomKernelToFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction_Statics::OptimusNodeGraph_eventConvertCustomKernelToFunction_Parms), Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel_Statics
	{
		struct OptimusNodeGraph_eventConvertFunctionToCustomKernel_Parms
		{
			UOptimusNode* InKernelFunction;
			UOptimusNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InKernelFunction;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel_Statics::NewProp_InKernelFunction = { "InKernelFunction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventConvertFunctionToCustomKernel_Parms, InKernelFunction), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventConvertFunctionToCustomKernel_Parms, ReturnValue), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel_Statics::NewProp_InKernelFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/** Takes a kernel function and unpackages to a custom kernel. If the given node is not a \n\x09 *  kernel function or cannot be converted, a nullptr is returned.\n\x09 */" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
		{ "ToolTip", "Takes a kernel function and unpackages to a custom kernel. If the given node is not a\nkernel function or cannot be converted, a nullptr is returned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "ConvertFunctionToCustomKernel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel_Statics::OptimusNodeGraph_eventConvertFunctionToCustomKernel_Parms), Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics
	{
		struct OptimusNodeGraph_eventDuplicateNode_Parms
		{
			UOptimusNode* InNode;
			FVector2D InPosition;
			UOptimusNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::NewProp_InNode = { "InNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventDuplicateNode_Parms, InNode), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventDuplicateNode_Parms, InPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::NewProp_InPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::NewProp_InPosition_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventDuplicateNode_Parms, ReturnValue), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::NewProp_InNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "DuplicateNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::OptimusNodeGraph_eventDuplicateNode_Parms), Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics
	{
		struct OptimusNodeGraph_eventDuplicateNodes_Parms
		{
			TArray<UOptimusNode*> InNodes;
			FVector2D InPosition;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::NewProp_InNodes_Inner = { "InNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::NewProp_InNodes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::NewProp_InNodes = { "InNodes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventDuplicateNodes_Parms, InNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::NewProp_InNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::NewProp_InNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventDuplicateNodes_Parms, InPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::NewProp_InPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::NewProp_InPosition_MetaData)) };
	void Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusNodeGraph_eventDuplicateNodes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OptimusNodeGraph_eventDuplicateNodes_Parms), &Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::NewProp_InNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::NewProp_InNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/// Duplicate a collection of nodes from the same graph, using the InPosition position\n/// to be the top-left origin of the pasted nodes.\n" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
		{ "ToolTip", "Duplicate a collection of nodes from the same graph, using the InPosition position\nto be the top-left origin of the pasted nodes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "DuplicateNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::OptimusNodeGraph_eventDuplicateNodes_Parms), Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics
	{
		struct OptimusNodeGraph_eventExpandCollapsedNodes_Parms
		{
			UOptimusNode* InFunctionNode;
			TArray<UOptimusNode*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InFunctionNode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics::NewProp_InFunctionNode = { "InFunctionNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventExpandCollapsedNodes_Parms, InFunctionNode), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventExpandCollapsedNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics::NewProp_InFunctionNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/** Take a function or subgraph node and expand it in-place, replacing the given function \n\x09 *  node. The function definition still remains, if a function node was expanded. If a\n\x09 *  sub-graph was expanded, the sub-graph is deleted.\n\x09 */" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
		{ "ToolTip", "Take a function or subgraph node and expand it in-place, replacing the given function\nnode. The function definition still remains, if a function node was expanded. If a\nsub-graph was expanded, the sub-graph is deleted." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "ExpandCollapsedNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics::OptimusNodeGraph_eventExpandCollapsedNodes_Parms), Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_GetGraphIndex_Statics
	{
		struct OptimusNodeGraph_eventGetGraphIndex_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_GetGraphIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventGetGraphIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_GetGraphIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_GetGraphIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_GetGraphIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_GetGraphIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "GetGraphIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNodeGraph_GetGraphIndex_Statics::OptimusNodeGraph_eventGetGraphIndex_Parms), Z_Construct_UFunction_UOptimusNodeGraph_GetGraphIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_GetGraphIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_GetGraphIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_GetGraphIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_GetGraphIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_GetGraphIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics
	{
		struct OptimusNodeGraph_eventGetGraphs_Parms
		{
			TArray<UOptimusNodeGraph*> ReturnValue;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UOptimusNodeGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventGetGraphs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "GetGraphs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::OptimusNodeGraph_eventGetGraphs_Parms), Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType_Statics
	{
		struct OptimusNodeGraph_eventGetGraphType_Parms
		{
			EOptimusNodeGraphType ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventGetGraphType_Parms, ReturnValue), Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType, METADATA_PARAMS(nullptr, 0) }; // 818714182
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "GetGraphType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType_Statics::OptimusNodeGraph_eventGetGraphType_Parms), Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics
	{
		struct OptimusNodeGraph_eventIsCustomKernel_Parms
		{
			UOptimusNode* InNode;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics::NewProp_InNode = { "InNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventIsCustomKernel_Parms, InNode), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusNodeGraph_eventIsCustomKernel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OptimusNodeGraph_eventIsCustomKernel_Parms), &Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics::NewProp_InNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/** Returns true if the node in question is a custom kernel node that can be converted to\n\x09  * a kernel function with ConvertCustomKernelToFunction.\n\x09  */" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
		{ "ToolTip", "Returns true if the node in question is a custom kernel node that can be converted to\na kernel function with ConvertCustomKernelToFunction." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "IsCustomKernel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics::OptimusNodeGraph_eventIsCustomKernel_Parms), Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph_Statics
	{
		struct OptimusNodeGraph_eventIsExecutionGraph_Parms
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
	void Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusNodeGraph_eventIsExecutionGraph_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OptimusNodeGraph_eventIsExecutionGraph_Parms), &Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "IsExecutionGraph", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph_Statics::OptimusNodeGraph_eventIsExecutionGraph_Parms), Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph_Statics
	{
		struct OptimusNodeGraph_eventIsFunctionGraph_Parms
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
	void Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusNodeGraph_eventIsFunctionGraph_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OptimusNodeGraph_eventIsFunctionGraph_Parms), &Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "IsFunctionGraph", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph_Statics::OptimusNodeGraph_eventIsFunctionGraph_Parms), Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics
	{
		struct OptimusNodeGraph_eventIsFunctionReference_Parms
		{
			UOptimusNode* InNode;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics::NewProp_InNode = { "InNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventIsFunctionReference_Parms, InNode), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusNodeGraph_eventIsFunctionReference_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OptimusNodeGraph_eventIsFunctionReference_Parms), &Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics::NewProp_InNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/** Returns true if the node in question is a function reference node that can be expanded \n\x09 *  into a group of nodes using ExpandFunctionToNodes.\n\x09  */" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
		{ "ToolTip", "Returns true if the node in question is a function reference node that can be expanded\ninto a group of nodes using ExpandFunctionToNodes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "IsFunctionReference", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics::OptimusNodeGraph_eventIsFunctionReference_Parms), Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics
	{
		struct OptimusNodeGraph_eventIsKernelFunction_Parms
		{
			UOptimusNode* InNode;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics::NewProp_InNode = { "InNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventIsKernelFunction_Parms, InNode), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusNodeGraph_eventIsKernelFunction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OptimusNodeGraph_eventIsKernelFunction_Parms), &Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics::NewProp_InNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/** Returns true if the node in question is a kernel function node that can be converted to\n\x09  * a custom kernel using ConvertFunctionToCustomKernel. \n\x09  */" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
		{ "ToolTip", "Returns true if the node in question is a kernel function node that can be converted to\na custom kernel using ConvertFunctionToCustomKernel." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "IsKernelFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics::OptimusNodeGraph_eventIsKernelFunction_Parms), Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics
	{
		struct OptimusNodeGraph_eventIsSubGraphReference_Parms
		{
			UOptimusNode* InNode;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics::NewProp_InNode = { "InNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventIsSubGraphReference_Parms, InNode), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusNodeGraph_eventIsSubGraphReference_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OptimusNodeGraph_eventIsSubGraphReference_Parms), &Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics::NewProp_InNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/** Returns true if the node in question is a function sub-graph node that can be expanded \n\x09 *  into a group of nodes using ExpandFunctionToNodes.\n\x09  */" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
		{ "ToolTip", "Returns true if the node in question is a function sub-graph node that can be expanded\ninto a group of nodes using ExpandFunctionToNodes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "IsSubGraphReference", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics::OptimusNodeGraph_eventIsSubGraphReference_Parms), Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics
	{
		struct OptimusNodeGraph_eventMoveGraph_Parms
		{
			UOptimusNodeGraph* InGraph;
			int32 InInsertBefore;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InGraph;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InInsertBefore;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::NewProp_InGraph = { "InGraph", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventMoveGraph_Parms, InGraph), Z_Construct_UClass_UOptimusNodeGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::NewProp_InInsertBefore = { "InInsertBefore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventMoveGraph_Parms, InInsertBefore), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusNodeGraph_eventMoveGraph_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OptimusNodeGraph_eventMoveGraph_Parms), &Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::NewProp_InGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::NewProp_InInsertBefore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "MoveGraph", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::OptimusNodeGraph_eventMoveGraph_Parms), Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics
	{
		struct OptimusNodeGraph_eventRemoveAllLinks_Parms
		{
			UOptimusNodePin* InNodePin;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNodePin;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics::NewProp_InNodePin = { "InNodePin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventRemoveAllLinks_Parms, InNodePin), Z_Construct_UClass_UOptimusNodePin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusNodeGraph_eventRemoveAllLinks_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OptimusNodeGraph_eventRemoveAllLinks_Parms), &Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics::NewProp_InNodePin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/// @brief Removes all links to the given pin, whether it's an input or an output pin.\n" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
		{ "ToolTip", "@brief Removes all links to the given pin, whether it's an input or an output pin." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "RemoveAllLinks", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics::OptimusNodeGraph_eventRemoveAllLinks_Parms), Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics
	{
		struct OptimusNodeGraph_eventRemoveLink_Parms
		{
			UOptimusNodePin* InNodeOutputPin;
			UOptimusNodePin* InNodeInputPin;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNodeOutputPin;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNodeInputPin;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::NewProp_InNodeOutputPin = { "InNodeOutputPin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventRemoveLink_Parms, InNodeOutputPin), Z_Construct_UClass_UOptimusNodePin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::NewProp_InNodeInputPin = { "InNodeInputPin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventRemoveLink_Parms, InNodeInputPin), Z_Construct_UClass_UOptimusNodePin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusNodeGraph_eventRemoveLink_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OptimusNodeGraph_eventRemoveLink_Parms), &Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::NewProp_InNodeOutputPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::NewProp_InNodeInputPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/// @brief Removes a single link between two nodes.\n// FIXME: Use UOptimusNodeLink instead.\n" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
		{ "ToolTip", "@brief Removes a single link between two nodes.\nFIXME: Use UOptimusNodeLink instead." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "RemoveLink", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::OptimusNodeGraph_eventRemoveLink_Parms), Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics
	{
		struct OptimusNodeGraph_eventRemoveNode_Parms
		{
			UOptimusNode* InNode;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics::NewProp_InNode = { "InNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventRemoveNode_Parms, InNode), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusNodeGraph_eventRemoveNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OptimusNodeGraph_eventRemoveNode_Parms), &Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics::NewProp_InNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "RemoveNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics::OptimusNodeGraph_eventRemoveNode_Parms), Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics
	{
		struct OptimusNodeGraph_eventRemoveNodes_Parms
		{
			TArray<UOptimusNode*> InNodes;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InNodes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::NewProp_InNodes_Inner = { "InNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::NewProp_InNodes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::NewProp_InNodes = { "InNodes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventRemoveNodes_Parms, InNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::NewProp_InNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::NewProp_InNodes_MetaData)) };
	void Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusNodeGraph_eventRemoveNodes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OptimusNodeGraph_eventRemoveNodes_Parms), &Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::NewProp_InNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::NewProp_InNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "RemoveNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::OptimusNodeGraph_eventRemoveNodes_Parms), Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics
	{
		struct OptimusNodeGraph_eventRenameGraph_Parms
		{
			UOptimusNodeGraph* InGraph;
			FString InNewName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNewName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InNewName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::NewProp_InGraph = { "InGraph", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventRenameGraph_Parms, InGraph), Z_Construct_UClass_UOptimusNodeGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::NewProp_InNewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::NewProp_InNewName = { "InNewName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNodeGraph_eventRenameGraph_Parms, InNewName), METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::NewProp_InNewName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::NewProp_InNewName_MetaData)) };
	void Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusNodeGraph_eventRenameGraph_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OptimusNodeGraph_eventRenameGraph_Parms), &Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::NewProp_InGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::NewProp_InNewName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNodeGraph, nullptr, "RenameGraph", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::OptimusNodeGraph_eventRenameGraph_Parms), Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNodeGraph);
	UClass* Z_Construct_UClass_UOptimusNodeGraph_NoRegister()
	{
		return UOptimusNodeGraph::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusNodeGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_GraphType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GraphType;
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
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubGraphs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubGraphs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubGraphs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusNodeGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOptimusNodeGraph_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOptimusNodeGraph_AddComponentBindingGetNode, "AddComponentBindingGetNode" }, // 1947970255
		{ &Z_Construct_UFunction_UOptimusNodeGraph_AddDataInterfaceNode, "AddDataInterfaceNode" }, // 892087626
		{ &Z_Construct_UFunction_UOptimusNodeGraph_AddLink, "AddLink" }, // 2061110866
		{ &Z_Construct_UFunction_UOptimusNodeGraph_AddNode, "AddNode" }, // 1559066395
		{ &Z_Construct_UFunction_UOptimusNodeGraph_AddResourceGetNode, "AddResourceGetNode" }, // 2620442643
		{ &Z_Construct_UFunction_UOptimusNodeGraph_AddResourceNode, "AddResourceNode" }, // 4004840674
		{ &Z_Construct_UFunction_UOptimusNodeGraph_AddResourceSetNode, "AddResourceSetNode" }, // 2356302414
		{ &Z_Construct_UFunction_UOptimusNodeGraph_AddValueNode, "AddValueNode" }, // 2715994512
		{ &Z_Construct_UFunction_UOptimusNodeGraph_AddVariableGetNode, "AddVariableGetNode" }, // 3421225397
		{ &Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToFunction, "CollapseNodesToFunction" }, // 2513774000
		{ &Z_Construct_UFunction_UOptimusNodeGraph_CollapseNodesToSubGraph, "CollapseNodesToSubGraph" }, // 3383502085
		{ &Z_Construct_UFunction_UOptimusNodeGraph_ConvertCustomKernelToFunction, "ConvertCustomKernelToFunction" }, // 1091178161
		{ &Z_Construct_UFunction_UOptimusNodeGraph_ConvertFunctionToCustomKernel, "ConvertFunctionToCustomKernel" }, // 481202326
		{ &Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNode, "DuplicateNode" }, // 3078713235
		{ &Z_Construct_UFunction_UOptimusNodeGraph_DuplicateNodes, "DuplicateNodes" }, // 2965770973
		{ &Z_Construct_UFunction_UOptimusNodeGraph_ExpandCollapsedNodes, "ExpandCollapsedNodes" }, // 2816963111
		{ &Z_Construct_UFunction_UOptimusNodeGraph_GetGraphIndex, "GetGraphIndex" }, // 2674289632
		{ &Z_Construct_UFunction_UOptimusNodeGraph_GetGraphs, "GetGraphs" }, // 237883688
		{ &Z_Construct_UFunction_UOptimusNodeGraph_GetGraphType, "GetGraphType" }, // 2693767397
		{ &Z_Construct_UFunction_UOptimusNodeGraph_IsCustomKernel, "IsCustomKernel" }, // 1675627350
		{ &Z_Construct_UFunction_UOptimusNodeGraph_IsExecutionGraph, "IsExecutionGraph" }, // 415363265
		{ &Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionGraph, "IsFunctionGraph" }, // 790216529
		{ &Z_Construct_UFunction_UOptimusNodeGraph_IsFunctionReference, "IsFunctionReference" }, // 2762622676
		{ &Z_Construct_UFunction_UOptimusNodeGraph_IsKernelFunction, "IsKernelFunction" }, // 711648830
		{ &Z_Construct_UFunction_UOptimusNodeGraph_IsSubGraphReference, "IsSubGraphReference" }, // 1649281603
		{ &Z_Construct_UFunction_UOptimusNodeGraph_MoveGraph, "MoveGraph" }, // 2130837662
		{ &Z_Construct_UFunction_UOptimusNodeGraph_RemoveAllLinks, "RemoveAllLinks" }, // 907785656
		{ &Z_Construct_UFunction_UOptimusNodeGraph_RemoveLink, "RemoveLink" }, // 623064427
		{ &Z_Construct_UFunction_UOptimusNodeGraph_RemoveNode, "RemoveNode" }, // 2072845272
		{ &Z_Construct_UFunction_UOptimusNodeGraph_RemoveNodes, "RemoveNodes" }, // 2495826709
		{ &Z_Construct_UFunction_UOptimusNodeGraph_RenameGraph, "RenameGraph" }, // 3526318381
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNodeGraph_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OptimusNodeGraph.h" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_GraphType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_GraphType_MetaData[] = {
		{ "Category", "Overview" },
		{ "Comment", "// The type of graph this represents. \n" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
		{ "ToolTip", "The type of graph this represents." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_GraphType = { "GraphType", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNodeGraph, GraphType), Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType, METADATA_PARAMS(Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_GraphType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_GraphType_MetaData)) }; // 818714182
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_Nodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0044000400000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNodeGraph, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_Nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_Nodes_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_Links_Inner = { "Links", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UOptimusNodeLink_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_Links_MetaData[] = {
		{ "Comment", "// FIXME: Use a map.\n" },
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
		{ "ToolTip", "FIXME: Use a map." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_Links = { "Links", nullptr, (EPropertyFlags)0x0044000400000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNodeGraph, Links), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_Links_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_Links_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_SubGraphs_Inner = { "SubGraphs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UOptimusNodeGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_SubGraphs_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusNodeGraph.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_SubGraphs = { "SubGraphs", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNodeGraph, SubGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_SubGraphs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_SubGraphs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusNodeGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_GraphType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_GraphType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_Nodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_Nodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_Links_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_Links,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_SubGraphs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodeGraph_Statics::NewProp_SubGraphs,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusNodeGraph_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UOptimusNodeGraphCollectionOwner_NoRegister, (int32)VTABLE_OFFSET(UOptimusNodeGraph, IOptimusNodeGraphCollectionOwner), false },  // 471769287
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusNodeGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNodeGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNodeGraph_Statics::ClassParams = {
		&UOptimusNodeGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOptimusNodeGraph_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeGraph_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusNodeGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusNodeGraph()
	{
		if (!Z_Registration_Info_UClass_UOptimusNodeGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNodeGraph.OuterSingleton, Z_Construct_UClass_UOptimusNodeGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusNodeGraph.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNodeGraph>()
	{
		return UOptimusNodeGraph::StaticClass();
	}
	UOptimusNodeGraph::UOptimusNodeGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNodeGraph);
	UOptimusNodeGraph::~UOptimusNodeGraph() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_Statics::EnumInfo[] = {
		{ EOptimusNodeGraphType_StaticEnum, TEXT("EOptimusNodeGraphType"), &Z_Registration_Info_UEnum_EOptimusNodeGraphType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 818714182U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNodeGraph, UOptimusNodeGraph::StaticClass, TEXT("UOptimusNodeGraph"), &Z_Registration_Info_UClass_UOptimusNodeGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNodeGraph), 104724192U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_1218424727(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
