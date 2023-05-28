// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EntitySystem/MovieSceneEntitySystemGraphs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEntitySystemGraphs() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraphNode;
class UScriptStruct* FMovieSceneEntitySystemGraphNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraphNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraphNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEntitySystemGraphNode"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraphNode.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEntitySystemGraphNode>()
{
	return FMovieSceneEntitySystemGraphNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_System_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_System;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// namespace UE\n" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEntitySystemGraphs.h" },
		{ "ToolTip", "namespace UE" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEntitySystemGraphNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::NewProp_System_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEntitySystemGraphs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::NewProp_System = { "System", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEntitySystemGraphNode, System), Z_Construct_UClass_UMovieSceneEntitySystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::NewProp_System_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::NewProp_System_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::NewProp_System,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEntitySystemGraphNode",
		sizeof(FMovieSceneEntitySystemGraphNode),
		alignof(FMovieSceneEntitySystemGraphNode),
		Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraphNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraphNode.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraphNode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraphNodes;
class UScriptStruct* FMovieSceneEntitySystemGraphNodes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraphNodes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraphNodes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEntitySystemGraphNodes"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraphNodes.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEntitySystemGraphNodes>()
{
	return FMovieSceneEntitySystemGraphNodes::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEntitySystemGraphs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEntitySystemGraphNodes>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEntitySystemGraphNodes",
		sizeof(FMovieSceneEntitySystemGraphNodes),
		alignof(FMovieSceneEntitySystemGraphNodes),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraphNodes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraphNodes.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraphNodes.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraph;
class UScriptStruct* FMovieSceneEntitySystemGraph::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraph.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraph.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEntitySystemGraph"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraph.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEntitySystemGraph>()
{
	return FMovieSceneEntitySystemGraph::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Nodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEntitySystemGraphs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEntitySystemGraph>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::NewProp_Nodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEntitySystemGraphs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEntitySystemGraph, Nodes), Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::NewProp_Nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::NewProp_Nodes_MetaData)) }; // 797081821
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::NewProp_Nodes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEntitySystemGraph",
		sizeof(FMovieSceneEntitySystemGraph),
		alignof(FMovieSceneEntitySystemGraph),
		Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraph.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraph.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraph.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystemGraphs_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystemGraphs_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneEntitySystemGraphNode::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::NewStructOps, TEXT("MovieSceneEntitySystemGraphNode"), &Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEntitySystemGraphNode), 954955350U) },
		{ FMovieSceneEntitySystemGraphNodes::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes_Statics::NewStructOps, TEXT("MovieSceneEntitySystemGraphNodes"), &Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraphNodes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEntitySystemGraphNodes), 797081821U) },
		{ FMovieSceneEntitySystemGraph::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::NewStructOps, TEXT("MovieSceneEntitySystemGraph"), &Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraph, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEntitySystemGraph), 3754581303U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystemGraphs_h_2512158094(TEXT("/Script/MovieScene"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystemGraphs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystemGraphs_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
