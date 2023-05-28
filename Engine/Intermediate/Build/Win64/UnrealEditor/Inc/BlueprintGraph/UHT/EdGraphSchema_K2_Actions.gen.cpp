// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EdGraphSchema_K2_Actions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphSchema_K2_Actions() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_NoRegister();
	BLUEPRINTGRAPH_API UEnum* Z_Construct_UEnum_BlueprintGraph_EEdGraphSchemaAction_K2Graph();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComment();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCustomEvent();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddEvent();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AssignDelegate();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Delegate();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Enum();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Event();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Graph();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2InputAction();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2LocalVar();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2PasteHere();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2TargetNode();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Var();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References

static_assert(std::is_polymorphic<FEdGraphSchemaAction_K2NewNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FEdGraphSchemaAction_K2NewNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2NewNode;
class UScriptStruct* FEdGraphSchemaAction_K2NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode, (UObject*)Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2NewNode.OuterSingleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2NewNode>()
{
	return FEdGraphSchemaAction_K2NewNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NodeTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGotoNode_MetaData[];
#endif
		static void NewProp_bGotoNode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGotoNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2NewNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::NewProp_NodeTemplate_MetaData[] = {
		{ "Comment", "/** Template of node we want to create */" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Template of node we want to create" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::NewProp_NodeTemplate = { "NodeTemplate", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction_K2NewNode, NodeTemplate), Z_Construct_UClass_UK2Node_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::NewProp_NodeTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::NewProp_NodeTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::NewProp_bGotoNode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::NewProp_bGotoNode_SetBit(void* Obj)
	{
		((FEdGraphSchemaAction_K2NewNode*)Obj)->bGotoNode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::NewProp_bGotoNode = { "bGotoNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FEdGraphSchemaAction_K2NewNode), &Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::NewProp_bGotoNode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::NewProp_bGotoNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::NewProp_bGotoNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::NewProp_NodeTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::NewProp_bGotoNode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"EdGraphSchemaAction_K2NewNode",
		sizeof(FEdGraphSchemaAction_K2NewNode),
		alignof(FEdGraphSchemaAction_K2NewNode),
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode()
	{
		if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2NewNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2NewNode.InnerSingleton, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2NewNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEdGraphSchemaAction_K2ViewNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FEdGraphSchemaAction_K2ViewNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2ViewNode;
class UScriptStruct* FEdGraphSchemaAction_K2ViewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2ViewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2ViewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode, (UObject*)Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2ViewNode"));
	}
	return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2ViewNode.OuterSingleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2ViewNode>()
{
	return FEdGraphSchemaAction_K2ViewNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodePtr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NodePtr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to view a node to the graph */" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Action to view a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2ViewNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Statics::NewProp_NodePtr_MetaData[] = {
		{ "Comment", "/** node we want to view */" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "node we want to view" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Statics::NewProp_NodePtr = { "NodePtr", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction_K2ViewNode, NodePtr), Z_Construct_UClass_UK2Node_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Statics::NewProp_NodePtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Statics::NewProp_NodePtr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Statics::NewProp_NodePtr,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"EdGraphSchemaAction_K2ViewNode",
		sizeof(FEdGraphSchemaAction_K2ViewNode),
		alignof(FEdGraphSchemaAction_K2ViewNode),
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode()
	{
		if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2ViewNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2ViewNode.InnerSingleton, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2ViewNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEdGraphSchemaAction_K2AssignDelegate>() == std::is_polymorphic<FEdGraphSchemaAction_K2NewNode>(), "USTRUCT FEdGraphSchemaAction_K2AssignDelegate cannot be polymorphic unless super FEdGraphSchemaAction_K2NewNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AssignDelegate;
class UScriptStruct* FEdGraphSchemaAction_K2AssignDelegate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AssignDelegate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AssignDelegate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AssignDelegate, (UObject*)Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2AssignDelegate"));
	}
	return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AssignDelegate.OuterSingleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2AssignDelegate>()
{
	return FEdGraphSchemaAction_K2AssignDelegate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AssignDelegate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AssignDelegate_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AssignDelegate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2AssignDelegate>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AssignDelegate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode,
		&NewStructOps,
		"EdGraphSchemaAction_K2AssignDelegate",
		sizeof(FEdGraphSchemaAction_K2AssignDelegate),
		alignof(FEdGraphSchemaAction_K2AssignDelegate),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AssignDelegate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AssignDelegate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AssignDelegate()
	{
		if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AssignDelegate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AssignDelegate.InnerSingleton, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AssignDelegate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AssignDelegate.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEdGraphSchemaAction_EventFromFunction>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FEdGraphSchemaAction_EventFromFunction cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_EventFromFunction;
class UScriptStruct* FEdGraphSchemaAction_EventFromFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_EventFromFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_EventFromFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction, (UObject*)Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_EventFromFunction"));
	}
	return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_EventFromFunction.OuterSingleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_EventFromFunction>()
{
	return FEdGraphSchemaAction_EventFromFunction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SignatureFunction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SignatureFunction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_EventFromFunction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Statics::NewProp_SignatureFunction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Statics::NewProp_SignatureFunction = { "SignatureFunction", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction_EventFromFunction, SignatureFunction), Z_Construct_UClass_UFunction, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Statics::NewProp_SignatureFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Statics::NewProp_SignatureFunction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Statics::NewProp_SignatureFunction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"EdGraphSchemaAction_EventFromFunction",
		sizeof(FEdGraphSchemaAction_EventFromFunction),
		alignof(FEdGraphSchemaAction_EventFromFunction),
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction()
	{
		if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_EventFromFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_EventFromFunction.InnerSingleton, Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_EventFromFunction.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEdGraphSchemaAction_K2AddComponent>() == std::is_polymorphic<FEdGraphSchemaAction_K2NewNode>(), "USTRUCT FEdGraphSchemaAction_K2AddComponent cannot be polymorphic unless super FEdGraphSchemaAction_K2NewNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddComponent;
class UScriptStruct* FEdGraphSchemaAction_K2AddComponent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddComponent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddComponent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent, (UObject*)Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2AddComponent"));
	}
	return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddComponent.OuterSingleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2AddComponent>()
{
	return FEdGraphSchemaAction_K2AddComponent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComponentAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add an 'add component' node to the graph */" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Action to add an 'add component' node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2AddComponent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::NewProp_ComponentClass_MetaData[] = {
		{ "Comment", "/** Class of component we want to add */" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Class of component we want to add" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction_K2AddComponent, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::NewProp_ComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::NewProp_ComponentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::NewProp_ComponentAsset_MetaData[] = {
		{ "Comment", "/** Option asset to assign to newly created component */" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Option asset to assign to newly created component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::NewProp_ComponentAsset = { "ComponentAsset", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction_K2AddComponent, ComponentAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::NewProp_ComponentAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::NewProp_ComponentAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::NewProp_ComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::NewProp_ComponentAsset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode,
		&NewStructOps,
		"EdGraphSchemaAction_K2AddComponent",
		sizeof(FEdGraphSchemaAction_K2AddComponent),
		alignof(FEdGraphSchemaAction_K2AddComponent),
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent()
	{
		if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddComponent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddComponent.InnerSingleton, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddComponent.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEdGraphSchemaAction_K2AddEvent>() == std::is_polymorphic<FEdGraphSchemaAction_K2NewNode>(), "USTRUCT FEdGraphSchemaAction_K2AddEvent cannot be polymorphic unless super FEdGraphSchemaAction_K2NewNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddEvent;
class UScriptStruct* FEdGraphSchemaAction_K2AddEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddEvent, (UObject*)Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2AddEvent"));
	}
	return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddEvent.OuterSingleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2AddEvent>()
{
	return FEdGraphSchemaAction_K2AddEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a 'event' node to the graph */" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Action to add a 'event' node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2AddEvent>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode,
		&NewStructOps,
		"EdGraphSchemaAction_K2AddEvent",
		sizeof(FEdGraphSchemaAction_K2AddEvent),
		alignof(FEdGraphSchemaAction_K2AddEvent),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddEvent.InnerSingleton, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddEvent.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEdGraphSchemaAction_K2AddCustomEvent>() == std::is_polymorphic<FEdGraphSchemaAction_K2NewNode>(), "USTRUCT FEdGraphSchemaAction_K2AddCustomEvent cannot be polymorphic unless super FEdGraphSchemaAction_K2NewNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddCustomEvent;
class UScriptStruct* FEdGraphSchemaAction_K2AddCustomEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddCustomEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddCustomEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCustomEvent, (UObject*)Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2AddCustomEvent"));
	}
	return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddCustomEvent.OuterSingleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2AddCustomEvent>()
{
	return FEdGraphSchemaAction_K2AddCustomEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCustomEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCustomEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a 'custom event' node to the graph */" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Action to add a 'custom event' node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCustomEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2AddCustomEvent>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCustomEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode,
		&NewStructOps,
		"EdGraphSchemaAction_K2AddCustomEvent",
		sizeof(FEdGraphSchemaAction_K2AddCustomEvent),
		alignof(FEdGraphSchemaAction_K2AddCustomEvent),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCustomEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCustomEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCustomEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddCustomEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddCustomEvent.InnerSingleton, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCustomEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddCustomEvent.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEdGraphSchemaAction_K2AddCallOnActor>() == std::is_polymorphic<FEdGraphSchemaAction_K2NewNode>(), "USTRUCT FEdGraphSchemaAction_K2AddCallOnActor cannot be polymorphic unless super FEdGraphSchemaAction_K2NewNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddCallOnActor;
class UScriptStruct* FEdGraphSchemaAction_K2AddCallOnActor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddCallOnActor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddCallOnActor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor, (UObject*)Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2AddCallOnActor"));
	}
	return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddCallOnActor.OuterSingleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2AddCallOnActor>()
{
	return FEdGraphSchemaAction_K2AddCallOnActor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LevelActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a 'call function on actor(s)' set of nodes to the graph */" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Action to add a 'call function on actor(s)' set of nodes to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2AddCallOnActor>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics::NewProp_LevelActors_Inner = { "LevelActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics::NewProp_LevelActors_MetaData[] = {
		{ "Comment", "/** Pointer to actors in level we want to call function on */" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Pointer to actors in level we want to call function on" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics::NewProp_LevelActors = { "LevelActors", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction_K2AddCallOnActor, LevelActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics::NewProp_LevelActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics::NewProp_LevelActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics::NewProp_LevelActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics::NewProp_LevelActors,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode,
		&NewStructOps,
		"EdGraphSchemaAction_K2AddCallOnActor",
		sizeof(FEdGraphSchemaAction_K2AddCallOnActor),
		alignof(FEdGraphSchemaAction_K2AddCallOnActor),
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor()
	{
		if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddCallOnActor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddCallOnActor.InnerSingleton, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddCallOnActor.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEdGraphSchemaAction_K2AddComment>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FEdGraphSchemaAction_K2AddComment cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddComment;
class UScriptStruct* FEdGraphSchemaAction_K2AddComment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddComment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddComment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComment, (UObject*)Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2AddComment"));
	}
	return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddComment.OuterSingleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2AddComment>()
{
	return FEdGraphSchemaAction_K2AddComment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a 'comment' node to the graph */" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Action to add a 'comment' node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2AddComment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"EdGraphSchemaAction_K2AddComment",
		sizeof(FEdGraphSchemaAction_K2AddComment),
		alignof(FEdGraphSchemaAction_K2AddComment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComment()
	{
		if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddComment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddComment.InnerSingleton, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddComment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEdGraphSchemaAction_K2TargetNode>() == std::is_polymorphic<FEdGraphSchemaAction_K2NewNode>(), "USTRUCT FEdGraphSchemaAction_K2TargetNode cannot be polymorphic unless super FEdGraphSchemaAction_K2NewNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2TargetNode;
class UScriptStruct* FEdGraphSchemaAction_K2TargetNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2TargetNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2TargetNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2TargetNode, (UObject*)Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2TargetNode"));
	}
	return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2TargetNode.OuterSingleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2TargetNode>()
{
	return FEdGraphSchemaAction_K2TargetNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2TargetNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2TargetNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to target a specific node on graph */" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Action to target a specific node on graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2TargetNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2TargetNode>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2TargetNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode,
		&NewStructOps,
		"EdGraphSchemaAction_K2TargetNode",
		sizeof(FEdGraphSchemaAction_K2TargetNode),
		alignof(FEdGraphSchemaAction_K2TargetNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2TargetNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2TargetNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2TargetNode()
	{
		if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2TargetNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2TargetNode.InnerSingleton, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2TargetNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2TargetNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEdGraphSchemaAction_K2PasteHere>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FEdGraphSchemaAction_K2PasteHere cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2PasteHere;
class UScriptStruct* FEdGraphSchemaAction_K2PasteHere::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2PasteHere.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2PasteHere.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2PasteHere, (UObject*)Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2PasteHere"));
	}
	return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2PasteHere.OuterSingleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2PasteHere>()
{
	return FEdGraphSchemaAction_K2PasteHere::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2PasteHere_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2PasteHere_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to paste at this location on graph*/" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Action to paste at this location on graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2PasteHere_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2PasteHere>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2PasteHere_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"EdGraphSchemaAction_K2PasteHere",
		sizeof(FEdGraphSchemaAction_K2PasteHere),
		alignof(FEdGraphSchemaAction_K2PasteHere),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2PasteHere_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2PasteHere_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2PasteHere()
	{
		if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2PasteHere.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2PasteHere.InnerSingleton, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2PasteHere_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2PasteHere.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEdGraphSchemaAction_K2Enum>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FEdGraphSchemaAction_K2Enum cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Enum;
class UScriptStruct* FEdGraphSchemaAction_K2Enum::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Enum.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Enum.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Enum, (UObject*)Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2Enum"));
	}
	return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Enum.OuterSingleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2Enum>()
{
	return FEdGraphSchemaAction_K2Enum::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Enum_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Enum_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Reference to an enumeration (only used in 'docked' palette) */" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Reference to an enumeration (only used in 'docked' palette)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Enum_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2Enum>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Enum_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"EdGraphSchemaAction_K2Enum",
		sizeof(FEdGraphSchemaAction_K2Enum),
		alignof(FEdGraphSchemaAction_K2Enum),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Enum_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Enum_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Enum()
	{
		if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Enum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Enum.InnerSingleton, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Enum_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Enum.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEdGraphSchemaAction_BlueprintVariableBase>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FEdGraphSchemaAction_BlueprintVariableBase cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_BlueprintVariableBase;
class UScriptStruct* FEdGraphSchemaAction_BlueprintVariableBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_BlueprintVariableBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_BlueprintVariableBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase, (UObject*)Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_BlueprintVariableBase"));
	}
	return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_BlueprintVariableBase.OuterSingleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_BlueprintVariableBase>()
{
	return FEdGraphSchemaAction_BlueprintVariableBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Reference to a variable (only used in 'My Blueprints' but used for member variables, local variables, delegates, etc...) */" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Reference to a variable (only used in 'My Blueprints' but used for member variables, local variables, delegates, etc...)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_BlueprintVariableBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"EdGraphSchemaAction_BlueprintVariableBase",
		sizeof(FEdGraphSchemaAction_BlueprintVariableBase),
		alignof(FEdGraphSchemaAction_BlueprintVariableBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase()
	{
		if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_BlueprintVariableBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_BlueprintVariableBase.InnerSingleton, Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_BlueprintVariableBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEdGraphSchemaAction_K2Var>() == std::is_polymorphic<FEdGraphSchemaAction_BlueprintVariableBase>(), "USTRUCT FEdGraphSchemaAction_K2Var cannot be polymorphic unless super FEdGraphSchemaAction_BlueprintVariableBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Var;
class UScriptStruct* FEdGraphSchemaAction_K2Var::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Var.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Var.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Var, (UObject*)Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2Var"));
	}
	return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Var.OuterSingleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2Var>()
{
	return FEdGraphSchemaAction_K2Var::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Var_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Var_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Reference to a variable (only used in 'docked' palette) */" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Reference to a variable (only used in 'docked' palette)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Var_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2Var>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Var_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase,
		&NewStructOps,
		"EdGraphSchemaAction_K2Var",
		sizeof(FEdGraphSchemaAction_K2Var),
		alignof(FEdGraphSchemaAction_K2Var),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Var_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Var_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Var()
	{
		if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Var.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Var.InnerSingleton, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Var_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Var.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEdGraphSchemaAction_K2LocalVar>() == std::is_polymorphic<FEdGraphSchemaAction_BlueprintVariableBase>(), "USTRUCT FEdGraphSchemaAction_K2LocalVar cannot be polymorphic unless super FEdGraphSchemaAction_BlueprintVariableBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2LocalVar;
class UScriptStruct* FEdGraphSchemaAction_K2LocalVar::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2LocalVar.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2LocalVar.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2LocalVar, (UObject*)Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2LocalVar"));
	}
	return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2LocalVar.OuterSingleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2LocalVar>()
{
	return FEdGraphSchemaAction_K2LocalVar::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2LocalVar_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2LocalVar_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Reference to a local variable (only used in 'docked' palette) */" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Reference to a local variable (only used in 'docked' palette)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2LocalVar_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2LocalVar>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2LocalVar_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase,
		&NewStructOps,
		"EdGraphSchemaAction_K2LocalVar",
		sizeof(FEdGraphSchemaAction_K2LocalVar),
		alignof(FEdGraphSchemaAction_K2LocalVar),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2LocalVar_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2LocalVar_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2LocalVar()
	{
		if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2LocalVar.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2LocalVar.InnerSingleton, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2LocalVar_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2LocalVar.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEdGraphSchemaAction_K2Graph;
	static UEnum* EEdGraphSchemaAction_K2Graph_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEdGraphSchemaAction_K2Graph.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEdGraphSchemaAction_K2Graph.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlueprintGraph_EEdGraphSchemaAction_K2Graph, (UObject*)Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EEdGraphSchemaAction_K2Graph"));
		}
		return Z_Registration_Info_UEnum_EEdGraphSchemaAction_K2Graph.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UEnum* StaticEnum<EEdGraphSchemaAction_K2Graph::Type>()
	{
		return EEdGraphSchemaAction_K2Graph_StaticEnum();
	}
	struct Z_Construct_UEnum_BlueprintGraph_EEdGraphSchemaAction_K2Graph_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BlueprintGraph_EEdGraphSchemaAction_K2Graph_Statics::Enumerators[] = {
		{ "EEdGraphSchemaAction_K2Graph::Graph", (int64)EEdGraphSchemaAction_K2Graph::Graph },
		{ "EEdGraphSchemaAction_K2Graph::Subgraph", (int64)EEdGraphSchemaAction_K2Graph::Subgraph },
		{ "EEdGraphSchemaAction_K2Graph::Function", (int64)EEdGraphSchemaAction_K2Graph::Function },
		{ "EEdGraphSchemaAction_K2Graph::Interface", (int64)EEdGraphSchemaAction_K2Graph::Interface },
		{ "EEdGraphSchemaAction_K2Graph::Macro", (int64)EEdGraphSchemaAction_K2Graph::Macro },
		{ "EEdGraphSchemaAction_K2Graph::MAX", (int64)EEdGraphSchemaAction_K2Graph::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BlueprintGraph_EEdGraphSchemaAction_K2Graph_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** The graph type that the schema is */" },
		{ "Function.Name", "EEdGraphSchemaAction_K2Graph::Function" },
		{ "Graph.Name", "EEdGraphSchemaAction_K2Graph::Graph" },
		{ "Interface.Name", "EEdGraphSchemaAction_K2Graph::Interface" },
		{ "Macro.Name", "EEdGraphSchemaAction_K2Graph::Macro" },
		{ "MAX.Name", "EEdGraphSchemaAction_K2Graph::MAX" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "Subgraph.Name", "EEdGraphSchemaAction_K2Graph::Subgraph" },
		{ "ToolTip", "The graph type that the schema is" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlueprintGraph_EEdGraphSchemaAction_K2Graph_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BlueprintGraph,
		nullptr,
		"EEdGraphSchemaAction_K2Graph",
		"EEdGraphSchemaAction_K2Graph::Type",
		Z_Construct_UEnum_BlueprintGraph_EEdGraphSchemaAction_K2Graph_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintGraph_EEdGraphSchemaAction_K2Graph_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_BlueprintGraph_EEdGraphSchemaAction_K2Graph_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintGraph_EEdGraphSchemaAction_K2Graph_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BlueprintGraph_EEdGraphSchemaAction_K2Graph()
	{
		if (!Z_Registration_Info_UEnum_EEdGraphSchemaAction_K2Graph.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEdGraphSchemaAction_K2Graph.InnerSingleton, Z_Construct_UEnum_BlueprintGraph_EEdGraphSchemaAction_K2Graph_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEdGraphSchemaAction_K2Graph.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEdGraphSchemaAction_K2Graph>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FEdGraphSchemaAction_K2Graph cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Graph;
class UScriptStruct* FEdGraphSchemaAction_K2Graph::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Graph.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Graph.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Graph, (UObject*)Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2Graph"));
	}
	return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Graph.OuterSingleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2Graph>()
{
	return FEdGraphSchemaAction_K2Graph::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Graph_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Graph_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Reference to a function, macro, event graph, or timeline (only used in 'docked' palette) */" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Reference to a function, macro, event graph, or timeline (only used in 'docked' palette)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Graph_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2Graph>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Graph_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"EdGraphSchemaAction_K2Graph",
		sizeof(FEdGraphSchemaAction_K2Graph),
		alignof(FEdGraphSchemaAction_K2Graph),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Graph_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Graph_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Graph()
	{
		if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Graph.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Graph.InnerSingleton, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Graph_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Graph.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEdGraphSchemaAction_K2Event>() == std::is_polymorphic<FEdGraphSchemaAction_K2TargetNode>(), "USTRUCT FEdGraphSchemaAction_K2Event cannot be polymorphic unless super FEdGraphSchemaAction_K2TargetNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Event;
class UScriptStruct* FEdGraphSchemaAction_K2Event::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Event.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Event.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Event, (UObject*)Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2Event"));
	}
	return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Event.OuterSingleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2Event>()
{
	return FEdGraphSchemaAction_K2Event::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Event_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Event_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* A reference to a specific event (living inside a Blueprint graph)... intended\n* to be used the 'docked' palette only.\n*/" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "A reference to a specific event (living inside a Blueprint graph)... intended\nto be used the 'docked' palette only." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Event_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2Event>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Event_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2TargetNode,
		&NewStructOps,
		"EdGraphSchemaAction_K2Event",
		sizeof(FEdGraphSchemaAction_K2Event),
		alignof(FEdGraphSchemaAction_K2Event),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Event_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Event_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Event()
	{
		if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Event.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Event.InnerSingleton, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Event_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Event.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEdGraphSchemaAction_K2InputAction>() == std::is_polymorphic<FEdGraphSchemaAction_K2TargetNode>(), "USTRUCT FEdGraphSchemaAction_K2InputAction cannot be polymorphic unless super FEdGraphSchemaAction_K2TargetNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2InputAction;
class UScriptStruct* FEdGraphSchemaAction_K2InputAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2InputAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2InputAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2InputAction, (UObject*)Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2InputAction"));
	}
	return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2InputAction.OuterSingleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2InputAction>()
{
	return FEdGraphSchemaAction_K2InputAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2InputAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2InputAction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* A reference to a specific event (living inside a Blueprint graph)... intended\n* to be used the 'docked' palette only.\n*/" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "A reference to a specific event (living inside a Blueprint graph)... intended\nto be used the 'docked' palette only." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2InputAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2InputAction>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2InputAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2TargetNode,
		&NewStructOps,
		"EdGraphSchemaAction_K2InputAction",
		sizeof(FEdGraphSchemaAction_K2InputAction),
		alignof(FEdGraphSchemaAction_K2InputAction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2InputAction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2InputAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2InputAction()
	{
		if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2InputAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2InputAction.InnerSingleton, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2InputAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2InputAction.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEdGraphSchemaAction_K2Delegate>() == std::is_polymorphic<FEdGraphSchemaAction_BlueprintVariableBase>(), "USTRUCT FEdGraphSchemaAction_K2Delegate cannot be polymorphic unless super FEdGraphSchemaAction_BlueprintVariableBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Delegate;
class UScriptStruct* FEdGraphSchemaAction_K2Delegate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Delegate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Delegate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Delegate, (UObject*)Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("EdGraphSchemaAction_K2Delegate"));
	}
	return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Delegate.OuterSingleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K2Delegate>()
{
	return FEdGraphSchemaAction_K2Delegate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Delegate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Delegate_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Reference to a delegate */" },
		{ "ModuleRelativePath", "Classes/EdGraphSchema_K2_Actions.h" },
		{ "ToolTip", "Reference to a delegate" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Delegate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K2Delegate>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Delegate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase,
		&NewStructOps,
		"EdGraphSchemaAction_K2Delegate",
		sizeof(FEdGraphSchemaAction_K2Delegate),
		alignof(FEdGraphSchemaAction_K2Delegate),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Delegate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Delegate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Delegate()
	{
		if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Delegate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Delegate.InnerSingleton, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Delegate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Delegate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_Actions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_Actions_h_Statics::EnumInfo[] = {
		{ EEdGraphSchemaAction_K2Graph_StaticEnum, TEXT("EEdGraphSchemaAction_K2Graph"), &Z_Registration_Info_UEnum_EEdGraphSchemaAction_K2Graph, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3963707896U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_Actions_h_Statics::ScriptStructInfo[] = {
		{ FEdGraphSchemaAction_K2NewNode::StaticStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2NewNode_Statics::NewStructOps, TEXT("EdGraphSchemaAction_K2NewNode"), &Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEdGraphSchemaAction_K2NewNode), 3503577265U) },
		{ FEdGraphSchemaAction_K2ViewNode::StaticStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2ViewNode_Statics::NewStructOps, TEXT("EdGraphSchemaAction_K2ViewNode"), &Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2ViewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEdGraphSchemaAction_K2ViewNode), 1765781455U) },
		{ FEdGraphSchemaAction_K2AssignDelegate::StaticStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AssignDelegate_Statics::NewStructOps, TEXT("EdGraphSchemaAction_K2AssignDelegate"), &Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AssignDelegate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEdGraphSchemaAction_K2AssignDelegate), 756555692U) },
		{ FEdGraphSchemaAction_EventFromFunction::StaticStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_EventFromFunction_Statics::NewStructOps, TEXT("EdGraphSchemaAction_EventFromFunction"), &Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_EventFromFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEdGraphSchemaAction_EventFromFunction), 2248955637U) },
		{ FEdGraphSchemaAction_K2AddComponent::StaticStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComponent_Statics::NewStructOps, TEXT("EdGraphSchemaAction_K2AddComponent"), &Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddComponent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEdGraphSchemaAction_K2AddComponent), 364223840U) },
		{ FEdGraphSchemaAction_K2AddEvent::StaticStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddEvent_Statics::NewStructOps, TEXT("EdGraphSchemaAction_K2AddEvent"), &Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEdGraphSchemaAction_K2AddEvent), 3087167694U) },
		{ FEdGraphSchemaAction_K2AddCustomEvent::StaticStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCustomEvent_Statics::NewStructOps, TEXT("EdGraphSchemaAction_K2AddCustomEvent"), &Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddCustomEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEdGraphSchemaAction_K2AddCustomEvent), 1499675355U) },
		{ FEdGraphSchemaAction_K2AddCallOnActor::StaticStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddCallOnActor_Statics::NewStructOps, TEXT("EdGraphSchemaAction_K2AddCallOnActor"), &Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddCallOnActor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEdGraphSchemaAction_K2AddCallOnActor), 2194320267U) },
		{ FEdGraphSchemaAction_K2AddComment::StaticStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComment_Statics::NewStructOps, TEXT("EdGraphSchemaAction_K2AddComment"), &Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2AddComment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEdGraphSchemaAction_K2AddComment), 319222795U) },
		{ FEdGraphSchemaAction_K2TargetNode::StaticStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2TargetNode_Statics::NewStructOps, TEXT("EdGraphSchemaAction_K2TargetNode"), &Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2TargetNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEdGraphSchemaAction_K2TargetNode), 2480182387U) },
		{ FEdGraphSchemaAction_K2PasteHere::StaticStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2PasteHere_Statics::NewStructOps, TEXT("EdGraphSchemaAction_K2PasteHere"), &Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2PasteHere, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEdGraphSchemaAction_K2PasteHere), 3697412927U) },
		{ FEdGraphSchemaAction_K2Enum::StaticStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Enum_Statics::NewStructOps, TEXT("EdGraphSchemaAction_K2Enum"), &Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Enum, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEdGraphSchemaAction_K2Enum), 2106573906U) },
		{ FEdGraphSchemaAction_BlueprintVariableBase::StaticStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase_Statics::NewStructOps, TEXT("EdGraphSchemaAction_BlueprintVariableBase"), &Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_BlueprintVariableBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEdGraphSchemaAction_BlueprintVariableBase), 2314348864U) },
		{ FEdGraphSchemaAction_K2Var::StaticStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Var_Statics::NewStructOps, TEXT("EdGraphSchemaAction_K2Var"), &Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Var, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEdGraphSchemaAction_K2Var), 2806111539U) },
		{ FEdGraphSchemaAction_K2LocalVar::StaticStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2LocalVar_Statics::NewStructOps, TEXT("EdGraphSchemaAction_K2LocalVar"), &Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2LocalVar, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEdGraphSchemaAction_K2LocalVar), 39270150U) },
		{ FEdGraphSchemaAction_K2Graph::StaticStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Graph_Statics::NewStructOps, TEXT("EdGraphSchemaAction_K2Graph"), &Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Graph, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEdGraphSchemaAction_K2Graph), 3454441493U) },
		{ FEdGraphSchemaAction_K2Event::StaticStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Event_Statics::NewStructOps, TEXT("EdGraphSchemaAction_K2Event"), &Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Event, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEdGraphSchemaAction_K2Event), 2170996444U) },
		{ FEdGraphSchemaAction_K2InputAction::StaticStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2InputAction_Statics::NewStructOps, TEXT("EdGraphSchemaAction_K2InputAction"), &Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2InputAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEdGraphSchemaAction_K2InputAction), 1646161617U) },
		{ FEdGraphSchemaAction_K2Delegate::StaticStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Delegate_Statics::NewStructOps, TEXT("EdGraphSchemaAction_K2Delegate"), &Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K2Delegate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEdGraphSchemaAction_K2Delegate), 1039995211U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_Actions_h_2808288900(TEXT("/Script/BlueprintGraph"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_Actions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_Actions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_Actions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_Actions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
