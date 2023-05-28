// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DataprepGraph/DataprepGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepGraph() {}
// Cross Module References
	DATAPREPEDITOR_API UClass* Z_Construct_UClass_UDataprepGraph();
	DATAPREPEDITOR_API UClass* Z_Construct_UClass_UDataprepGraph_NoRegister();
	DATAPREPEDITOR_API UClass* Z_Construct_UClass_UDataprepGraphRecipeNode();
	DATAPREPEDITOR_API UClass* Z_Construct_UClass_UDataprepGraphRecipeNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_DataprepEditor();
// End Cross Module References
	void UDataprepGraph::StaticRegisterNativesUDataprepGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepGraph);
	UClass* Z_Construct_UClass_UDataprepGraph_NoRegister()
	{
		return UDataprepGraph::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepGraph_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The UDataprepGraph class is used to display the pipeline of a Dataprep asset\n * in a SDataprepGraphEditor.\n */" },
		{ "IncludePath", "DataprepGraph/DataprepGraph.h" },
		{ "ModuleRelativePath", "Private/DataprepGraph/DataprepGraph.h" },
		{ "ToolTip", "The UDataprepGraph class is used to display the pipeline of a Dataprep asset\nin a SDataprepGraphEditor." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepGraph_Statics::ClassParams = {
		&UDataprepGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepGraph()
	{
		if (!Z_Registration_Info_UClass_UDataprepGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepGraph.OuterSingleton, Z_Construct_UClass_UDataprepGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepGraph.OuterSingleton;
	}
	template<> DATAPREPEDITOR_API UClass* StaticClass<UDataprepGraph>()
	{
		return UDataprepGraph::StaticClass();
	}
	UDataprepGraph::UDataprepGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepGraph);
	UDataprepGraph::~UDataprepGraph() {}
	void UDataprepGraphRecipeNode::StaticRegisterNativesUDataprepGraphRecipeNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepGraphRecipeNode);
	UClass* Z_Construct_UClass_UDataprepGraphRecipeNode_NoRegister()
	{
		return UDataprepGraphRecipeNode::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepGraphRecipeNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepGraphRecipeNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepGraphRecipeNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The UDataprepGraphRecipeNode is the root graph node from which the associated widget,\n * SDataprepGraphTrackNode, will add all the action nodes and their content\n */" },
		{ "IncludePath", "DataprepGraph/DataprepGraph.h" },
		{ "ModuleRelativePath", "Private/DataprepGraph/DataprepGraph.h" },
		{ "ToolTip", "The UDataprepGraphRecipeNode is the root graph node from which the associated widget,\nSDataprepGraphTrackNode, will add all the action nodes and their content" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepGraphRecipeNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepGraphRecipeNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepGraphRecipeNode_Statics::ClassParams = {
		&UDataprepGraphRecipeNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepGraphRecipeNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepGraphRecipeNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepGraphRecipeNode()
	{
		if (!Z_Registration_Info_UClass_UDataprepGraphRecipeNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepGraphRecipeNode.OuterSingleton, Z_Construct_UClass_UDataprepGraphRecipeNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepGraphRecipeNode.OuterSingleton;
	}
	template<> DATAPREPEDITOR_API UClass* StaticClass<UDataprepGraphRecipeNode>()
	{
		return UDataprepGraphRecipeNode::StaticClass();
	}
	UDataprepGraphRecipeNode::UDataprepGraphRecipeNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepGraphRecipeNode);
	UDataprepGraphRecipeNode::~UDataprepGraphRecipeNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditor_Private_DataprepGraph_DataprepGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditor_Private_DataprepGraph_DataprepGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepGraph, UDataprepGraph::StaticClass, TEXT("UDataprepGraph"), &Z_Registration_Info_UClass_UDataprepGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepGraph), 3186191118U) },
		{ Z_Construct_UClass_UDataprepGraphRecipeNode, UDataprepGraphRecipeNode::StaticClass, TEXT("UDataprepGraphRecipeNode"), &Z_Registration_Info_UClass_UDataprepGraphRecipeNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepGraphRecipeNode), 40948294U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditor_Private_DataprepGraph_DataprepGraph_h_1829466211(TEXT("/Script/DataprepEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditor_Private_DataprepGraph_DataprepGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditor_Private_DataprepGraph_DataprepGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
