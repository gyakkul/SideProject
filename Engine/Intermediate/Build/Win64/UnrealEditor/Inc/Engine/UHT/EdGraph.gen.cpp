// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraph() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGraphReference();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GraphReference;
class UScriptStruct* FGraphReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GraphReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GraphReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGraphReference, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("GraphReference"));
	}
	return Z_Registration_Info_UScriptStruct_GraphReference.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FGraphReference>()
{
	return FGraphReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGraphReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MacroGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MacroGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GraphBlueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GraphGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphReference_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGraphReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGraphReference>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_MacroGraph_MetaData[] = {
		{ "Comment", "// Reference to the actual graph\n" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "ToolTip", "Reference to the actual graph" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_MacroGraph = { "MacroGraph", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGraphReference, MacroGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_MacroGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_MacroGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_GraphBlueprint_MetaData[] = {
		{ "Comment", "// The blueprint the graph is contained within\n" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "ToolTip", "The blueprint the graph is contained within" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_GraphBlueprint = { "GraphBlueprint", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGraphReference, GraphBlueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_GraphBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_GraphBlueprint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_GraphGuid_MetaData[] = {
		{ "Comment", "// The graph GUID so we can refind it if it has been renamed\n" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "ToolTip", "The graph GUID so we can refind it if it has been renamed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_GraphGuid = { "GraphGuid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGraphReference, GraphGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_GraphGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_GraphGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGraphReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_MacroGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_GraphBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_GraphGuid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGraphReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"GraphReference",
		sizeof(FGraphReference),
		alignof(FGraphReference),
		Z_Construct_UScriptStruct_FGraphReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGraphReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGraphReference()
	{
		if (!Z_Registration_Info_UScriptStruct_GraphReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GraphReference.InnerSingleton, Z_Construct_UScriptStruct_FGraphReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GraphReference.InnerSingleton;
	}
	void UEdGraph::StaticRegisterNativesUEdGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraph);
	UClass* Z_Construct_UClass_UEdGraph_NoRegister()
	{
		return UEdGraph::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Schema_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Schema;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Nodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Nodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEditable_MetaData[];
#endif
		static void NewProp_bEditable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEditable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowDeletion_MetaData[];
#endif
		static void NewProp_bAllowDeletion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowDeletion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowRenaming_MetaData[];
#endif
		static void NewProp_bAllowRenaming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRenaming;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubGraphs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubGraphs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubGraphs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GraphGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterfaceGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InterfaceGuid;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraph/EdGraph.h" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraph_Statics::NewProp_Schema_MetaData[] = {
		{ "Comment", "/** The schema that this graph obeys */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "ToolTip", "The schema that this graph obeys" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEdGraph_Statics::NewProp_Schema = { "Schema", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdGraph, Schema), Z_Construct_UClass_UClass, Z_Construct_UClass_UEdGraphSchema_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEdGraph_Statics::NewProp_Schema_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_Statics::NewProp_Schema_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEdGraph_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraph_Statics::NewProp_Nodes_MetaData[] = {
		{ "Comment", "/** Set of all nodes in this graph */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "ToolTip", "Set of all nodes in this graph" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEdGraph_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdGraph, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEdGraph_Statics::NewProp_Nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_Statics::NewProp_Nodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraph_Statics::NewProp_bEditable_MetaData[] = {
		{ "Comment", "/** If true, graph can be edited by the user */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "ToolTip", "If true, graph can be edited by the user" },
	};
#endif
	void Z_Construct_UClass_UEdGraph_Statics::NewProp_bEditable_SetBit(void* Obj)
	{
		((UEdGraph*)Obj)->bEditable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraph_Statics::NewProp_bEditable = { "bEditable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEdGraph), &Z_Construct_UClass_UEdGraph_Statics::NewProp_bEditable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraph_Statics::NewProp_bEditable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_Statics::NewProp_bEditable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowDeletion_MetaData[] = {
		{ "Comment", "/** \n\x09\x09If true, graph can be deleted from the whatever container it is in. For FunctionGraphs\n\x09\x09this flag is reset to false on load (unless the function is the construction script or\n\x09\x09""AnimGraph)\n\x09*/" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "ToolTip", "If true, graph can be deleted from the whatever container it is in. For FunctionGraphs\nthis flag is reset to false on load (unless the function is the construction script or\nAnimGraph)" },
	};
#endif
	void Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowDeletion_SetBit(void* Obj)
	{
		((UEdGraph*)Obj)->bAllowDeletion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowDeletion = { "bAllowDeletion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEdGraph), &Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowDeletion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowDeletion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowDeletion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowRenaming_MetaData[] = {
		{ "Comment", "/** If true, graph can be renamed; Note: Graph can also be renamed if bAllowDeletion is true currently */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "ToolTip", "If true, graph can be renamed; Note: Graph can also be renamed if bAllowDeletion is true currently" },
	};
#endif
	void Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowRenaming_SetBit(void* Obj)
	{
		((UEdGraph*)Obj)->bAllowRenaming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowRenaming = { "bAllowRenaming", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEdGraph), &Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowRenaming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowRenaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowRenaming_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEdGraph_Statics::NewProp_SubGraphs_Inner = { "SubGraphs", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraph_Statics::NewProp_SubGraphs_MetaData[] = {
		{ "Comment", "/** Child graphs that are a part of this graph; the separation is purely visual */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "ToolTip", "Child graphs that are a part of this graph; the separation is purely visual" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEdGraph_Statics::NewProp_SubGraphs = { "SubGraphs", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdGraph, SubGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEdGraph_Statics::NewProp_SubGraphs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_Statics::NewProp_SubGraphs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraph_Statics::NewProp_GraphGuid_MetaData[] = {
		{ "Comment", "/** Guid for this graph */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "ToolTip", "Guid for this graph" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEdGraph_Statics::NewProp_GraphGuid = { "GraphGuid", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdGraph, GraphGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UEdGraph_Statics::NewProp_GraphGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_Statics::NewProp_GraphGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraph_Statics::NewProp_InterfaceGuid_MetaData[] = {
		{ "Comment", "/** Guid of interface graph this graph comes from (used for conforming) */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "ToolTip", "Guid of interface graph this graph comes from (used for conforming)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEdGraph_Statics::NewProp_InterfaceGuid = { "InterfaceGuid", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdGraph, InterfaceGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UEdGraph_Statics::NewProp_InterfaceGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_Statics::NewProp_InterfaceGuid_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_Statics::NewProp_Schema,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_Statics::NewProp_Nodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_Statics::NewProp_Nodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_Statics::NewProp_bEditable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowDeletion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowRenaming,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_Statics::NewProp_SubGraphs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_Statics::NewProp_SubGraphs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_Statics::NewProp_GraphGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_Statics::NewProp_InterfaceGuid,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraph_Statics::ClassParams = {
		&UEdGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEdGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEdGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraph()
	{
		if (!Z_Registration_Info_UClass_UEdGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraph.OuterSingleton, Z_Construct_UClass_UEdGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdGraph.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UEdGraph>()
	{
		return UEdGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraph);
	UEdGraph::~UEdGraph() {}
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FARCHIVE_SERIALIZER(UEdGraph)
#endif
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_Statics::ScriptStructInfo[] = {
		{ FGraphReference::StaticStruct, Z_Construct_UScriptStruct_FGraphReference_Statics::NewStructOps, TEXT("GraphReference"), &Z_Registration_Info_UScriptStruct_GraphReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGraphReference), 2337831158U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraph, UEdGraph::StaticClass, TEXT("UEdGraph"), &Z_Registration_Info_UClass_UEdGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraph), 2679731687U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_393969506(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
