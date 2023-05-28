// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTree.h"
#include "InstancedStructContainer.h"
#include "PropertyBag.h"
#include "Serialization/StructuredArchive.h"
#include "StateTreeInstanceData.h"
#include "StateTreePropertyBindings.h"
#include "StateTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTree() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTree();
	STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTree_NoRegister();
	STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeSchema_NoRegister();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FCompactStateTransition();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FCompactStateTreeState();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeExternalDataDesc();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeIndex8();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeInstanceData();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyBindings();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedPropertyBag();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStructContainer();
	UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References
	void UStateTree::StaticRegisterNativesUStateTree()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateTree);
	UClass* Z_Construct_UClass_UStateTree_NoRegister()
	{
		return UStateTree::StaticClass();
	}
	struct Z_Construct_UClass_UStateTree_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastCompiledEditorDataHash_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_LastCompiledEditorDataHash;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Schema_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Schema;
		static const UECodeGen_Private::FStructPropertyParams NewProp_States_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_States_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_States;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transitions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Nodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInstanceData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultInstanceData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SharedInstanceData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SharedInstanceData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContextDataDescs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextDataDescs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ContextDataDescs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyBindings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyBindings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParametersDataViewIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParametersDataViewIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvaluatorsBegin_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_EvaluatorsBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvaluatorsNum_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_EvaluatorsNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalTasksBegin_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_GlobalTasksBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalTasksNum_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_GlobalTasksNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasGlobalTransitionTasks_MetaData[];
#endif
		static void NewProp_bHasGlobalTransitionTasks_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasGlobalTransitionTasks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalDataDescs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalDataDescs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalDataDescs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalDataBaseIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExternalDataBaseIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumDataViews_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumDataViews;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStateTree_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTree_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * StateTree asset. Contains the StateTree definition in both editor and runtime (baked) formats.\n */" },
		{ "IncludePath", "StateTree.h" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "StateTree asset. Contains the StateTree definition in both editor and runtime (baked) formats." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTree_Statics::NewProp_EditorData_MetaData[] = {
		{ "Comment", "/** Edit time data for the StateTree, instance of UStateTreeEditorData */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Edit time data for the StateTree, instance of UStateTreeEditorData" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_EditorData = { "EditorData", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTree, EditorData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStateTree_Statics::NewProp_EditorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTree_Statics::NewProp_EditorData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTree_Statics::NewProp_LastCompiledEditorDataHash_MetaData[] = {
		{ "Comment", "/** Hash of the editor data from last compile. */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Hash of the editor data from last compile." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_LastCompiledEditorDataHash = { "LastCompiledEditorDataHash", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTree, LastCompiledEditorDataHash), METADATA_PARAMS(Z_Construct_UClass_UStateTree_Statics::NewProp_LastCompiledEditorDataHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTree_Statics::NewProp_LastCompiledEditorDataHash_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTree_Statics::NewProp_Schema_MetaData[] = {
		{ "Comment", "/** Schema used to compile the StateTree. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Schema used to compile the StateTree." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_Schema = { "Schema", nullptr, (EPropertyFlags)0x0046000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTree, Schema), Z_Construct_UClass_UStateTreeSchema_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStateTree_Statics::NewProp_Schema_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTree_Statics::NewProp_Schema_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_States_Inner = { "States", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCompactStateTreeState, METADATA_PARAMS(nullptr, 0) }; // 346072044
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTree_Statics::NewProp_States_MetaData[] = {
		{ "Comment", "/** Runtime states, root state at index 0 */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Runtime states, root state at index 0" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_States = { "States", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTree, States), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStateTree_Statics::NewProp_States_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTree_Statics::NewProp_States_MetaData)) }; // 346072044
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_Transitions_Inner = { "Transitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCompactStateTransition, METADATA_PARAMS(nullptr, 0) }; // 2349916782
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTree_Statics::NewProp_Transitions_MetaData[] = {
		{ "Comment", "/** Runtime transitions. */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Runtime transitions." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_Transitions = { "Transitions", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTree, Transitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStateTree_Statics::NewProp_Transitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTree_Statics::NewProp_Transitions_MetaData)) }; // 2349916782
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTree_Statics::NewProp_Nodes_MetaData[] = {
		{ "Comment", "/** Evaluators, Tasks, and Condition nodes. */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Evaluators, Tasks, and Condition nodes." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTree, Nodes), Z_Construct_UScriptStruct_FInstancedStructContainer, METADATA_PARAMS(Z_Construct_UClass_UStateTree_Statics::NewProp_Nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTree_Statics::NewProp_Nodes_MetaData)) }; // 334302854
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTree_Statics::NewProp_DefaultInstanceData_MetaData[] = {
		{ "Comment", "/** Default node instance data (e.g. evaluators, tasks). */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Default node instance data (e.g. evaluators, tasks)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_DefaultInstanceData = { "DefaultInstanceData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTree, DefaultInstanceData), Z_Construct_UScriptStruct_FStateTreeInstanceData, METADATA_PARAMS(Z_Construct_UClass_UStateTree_Statics::NewProp_DefaultInstanceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTree_Statics::NewProp_DefaultInstanceData_MetaData)) }; // 4128275611
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTree_Statics::NewProp_SharedInstanceData_MetaData[] = {
		{ "Comment", "/** Shared node instance data (e.g. conditions). */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Shared node instance data (e.g. conditions)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_SharedInstanceData = { "SharedInstanceData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTree, SharedInstanceData), Z_Construct_UScriptStruct_FStateTreeInstanceData, METADATA_PARAMS(Z_Construct_UClass_UStateTree_Statics::NewProp_SharedInstanceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTree_Statics::NewProp_SharedInstanceData_MetaData)) }; // 4128275611
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_ContextDataDescs_Inner = { "ContextDataDescs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStateTreeExternalDataDesc, METADATA_PARAMS(nullptr, 0) }; // 2405474714
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTree_Statics::NewProp_ContextDataDescs_MetaData[] = {
		{ "Comment", "/** List of names external data enforced by the schema, created at compilation. */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "List of names external data enforced by the schema, created at compilation." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_ContextDataDescs = { "ContextDataDescs", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTree, ContextDataDescs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStateTree_Statics::NewProp_ContextDataDescs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTree_Statics::NewProp_ContextDataDescs_MetaData)) }; // 2405474714
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTree_Statics::NewProp_PropertyBindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTree.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_PropertyBindings = { "PropertyBindings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTree, PropertyBindings), Z_Construct_UScriptStruct_FStateTreePropertyBindings, METADATA_PARAMS(Z_Construct_UClass_UStateTree_Statics::NewProp_PropertyBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTree_Statics::NewProp_PropertyBindings_MetaData)) }; // 257657452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTree_Statics::NewProp_Parameters_MetaData[] = {
		{ "Comment", "/**\n\x09 * Parameters that could be used for bindings within the Tree.\n\x09 * Default values are stored within the asset but StateTreeReference can be used to parameterized the tree.\n\x09 * @see FStateTreeReference\n\x09 */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Parameters that could be used for bindings within the Tree.\nDefault values are stored within the asset but StateTreeReference can be used to parameterized the tree.\n@see FStateTreeReference" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTree, Parameters), Z_Construct_UScriptStruct_FInstancedPropertyBag, METADATA_PARAMS(Z_Construct_UClass_UStateTree_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTree_Statics::NewProp_Parameters_MetaData)) }; // 3551882691
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTree_Statics::NewProp_ParametersDataViewIndex_MetaData[] = {
		{ "Comment", "/** Data view index of the tree Parameters */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Data view index of the tree Parameters" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_ParametersDataViewIndex = { "ParametersDataViewIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTree, ParametersDataViewIndex), Z_Construct_UScriptStruct_FStateTreeIndex8, METADATA_PARAMS(Z_Construct_UClass_UStateTree_Statics::NewProp_ParametersDataViewIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTree_Statics::NewProp_ParametersDataViewIndex_MetaData)) }; // 32052904
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTree_Statics::NewProp_EvaluatorsBegin_MetaData[] = {
		{ "Comment", "/** Index of first evaluator in Nodes. */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Index of first evaluator in Nodes." },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_EvaluatorsBegin = { "EvaluatorsBegin", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTree, EvaluatorsBegin), METADATA_PARAMS(Z_Construct_UClass_UStateTree_Statics::NewProp_EvaluatorsBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTree_Statics::NewProp_EvaluatorsBegin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTree_Statics::NewProp_EvaluatorsNum_MetaData[] = {
		{ "Comment", "/** Number of evaluators. */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Number of evaluators." },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_EvaluatorsNum = { "EvaluatorsNum", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTree, EvaluatorsNum), METADATA_PARAMS(Z_Construct_UClass_UStateTree_Statics::NewProp_EvaluatorsNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTree_Statics::NewProp_EvaluatorsNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTree_Statics::NewProp_GlobalTasksBegin_MetaData[] = {
		{ "Comment", "/** Index of first global task in Nodes. */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Index of first global task in Nodes." },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_GlobalTasksBegin = { "GlobalTasksBegin", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTree, GlobalTasksBegin), METADATA_PARAMS(Z_Construct_UClass_UStateTree_Statics::NewProp_GlobalTasksBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTree_Statics::NewProp_GlobalTasksBegin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTree_Statics::NewProp_GlobalTasksNum_MetaData[] = {
		{ "Comment", "/** Number of global tasks. */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Number of global tasks." },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_GlobalTasksNum = { "GlobalTasksNum", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTree, GlobalTasksNum), METADATA_PARAMS(Z_Construct_UClass_UStateTree_Statics::NewProp_GlobalTasksNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTree_Statics::NewProp_GlobalTasksNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTree_Statics::NewProp_bHasGlobalTransitionTasks_MetaData[] = {
		{ "Comment", "/** True if any global task is a transition task. */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "True if any global task is a transition task." },
	};
#endif
	void Z_Construct_UClass_UStateTree_Statics::NewProp_bHasGlobalTransitionTasks_SetBit(void* Obj)
	{
		((UStateTree*)Obj)->bHasGlobalTransitionTasks = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_bHasGlobalTransitionTasks = { "bHasGlobalTransitionTasks", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UStateTree), &Z_Construct_UClass_UStateTree_Statics::NewProp_bHasGlobalTransitionTasks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStateTree_Statics::NewProp_bHasGlobalTransitionTasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTree_Statics::NewProp_bHasGlobalTransitionTasks_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_ExternalDataDescs_Inner = { "ExternalDataDescs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStateTreeExternalDataDesc, METADATA_PARAMS(nullptr, 0) }; // 2405474714
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTree_Statics::NewProp_ExternalDataDescs_MetaData[] = {
		{ "Comment", "/** List of external data required by the state tree, created during linking. */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "List of external data required by the state tree, created during linking." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_ExternalDataDescs = { "ExternalDataDescs", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTree, ExternalDataDescs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStateTree_Statics::NewProp_ExternalDataDescs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTree_Statics::NewProp_ExternalDataDescs_MetaData)) }; // 2405474714
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTree_Statics::NewProp_ExternalDataBaseIndex_MetaData[] = {
		{ "Comment", "/** Base index of external data, created during linking. */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Base index of external data, created during linking." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_ExternalDataBaseIndex = { "ExternalDataBaseIndex", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTree, ExternalDataBaseIndex), METADATA_PARAMS(Z_Construct_UClass_UStateTree_Statics::NewProp_ExternalDataBaseIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTree_Statics::NewProp_ExternalDataBaseIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTree_Statics::NewProp_NumDataViews_MetaData[] = {
		{ "Comment", "/** Total number of data views, created during linking. */" },
		{ "ModuleRelativePath", "Public/StateTree.h" },
		{ "ToolTip", "Total number of data views, created during linking." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStateTree_Statics::NewProp_NumDataViews = { "NumDataViews", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTree, NumDataViews), METADATA_PARAMS(Z_Construct_UClass_UStateTree_Statics::NewProp_NumDataViews_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTree_Statics::NewProp_NumDataViews_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateTree_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_EditorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_LastCompiledEditorDataHash,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_Schema,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_States_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_States,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_Transitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_Transitions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_Nodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_DefaultInstanceData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_SharedInstanceData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_ContextDataDescs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_ContextDataDescs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_PropertyBindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_Parameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_ParametersDataViewIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_EvaluatorsBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_EvaluatorsNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_GlobalTasksBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_GlobalTasksNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_bHasGlobalTransitionTasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_ExternalDataDescs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_ExternalDataDescs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_ExternalDataBaseIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTree_Statics::NewProp_NumDataViews,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateTree_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateTree>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateTree_Statics::ClassParams = {
		&UStateTree::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStateTree_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStateTree_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStateTree_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTree_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStateTree()
	{
		if (!Z_Registration_Info_UClass_UStateTree.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateTree.OuterSingleton, Z_Construct_UClass_UStateTree_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStateTree.OuterSingleton;
	}
	template<> STATETREEMODULE_API UClass* StaticClass<UStateTree>()
	{
		return UStateTree::StaticClass();
	}
	UStateTree::UStateTree(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateTree);
	UStateTree::~UStateTree() {}
	IMPLEMENT_FARCHIVE_SERIALIZER(UStateTree)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTree_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTree_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStateTree, UStateTree::StaticClass, TEXT("UStateTree"), &Z_Registration_Info_UClass_UStateTree, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateTree), 4105270438U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTree_h_3744636605(TEXT("/Script/StateTreeModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTree_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTree_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
