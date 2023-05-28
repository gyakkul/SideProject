// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/AnimGraph/AnimNode_AnimNextInterfaceGraph.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_AnimNextInterfaceGraph() {}
// Cross Module References
	ANIMNEXTINTERFACEGRAPH_API UClass* Z_Construct_UClass_UAnimNextInterfaceGraph_NoRegister();
	ANIMNEXTINTERFACEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AnimNextInterfaceGraph();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CustomProperty();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	UPackage* Z_Construct_UPackage__Script_AnimNextInterfaceGraph();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_AnimNextInterfaceGraph>() == std::is_polymorphic<FAnimNode_CustomProperty>(), "USTRUCT FAnimNode_AnimNextInterfaceGraph cannot be polymorphic unless super FAnimNode_CustomProperty is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_AnimNextInterfaceGraph;
class UScriptStruct* FAnimNode_AnimNextInterfaceGraph::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_AnimNextInterfaceGraph.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_AnimNextInterfaceGraph.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AnimNextInterfaceGraph, (UObject*)Z_Construct_UPackage__Script_AnimNextInterfaceGraph(), TEXT("AnimNode_AnimNextInterfaceGraph"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_AnimNextInterfaceGraph.OuterSingleton;
}
template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<FAnimNode_AnimNextInterfaceGraph>()
{
	return FAnimNode_AnimNextInterfaceGraph::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_AnimNextInterfaceGraph_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimNextInterfaceGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimNextInterfaceGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimNextInterfaceGraph_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Animation node that allows a AnimNextInterfaceGraph output to be used in an animation graph\n */" },
		{ "ModuleRelativePath", "Internal/AnimGraph/AnimNode_AnimNextInterfaceGraph.h" },
		{ "ToolTip", "Animation node that allows a AnimNextInterfaceGraph output to be used in an animation graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_AnimNextInterfaceGraph_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_AnimNextInterfaceGraph>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimNextInterfaceGraph_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Links" },
		{ "Comment", "/** The input pose we will pass to the graph */" },
		{ "ModuleRelativePath", "Internal/AnimGraph/AnimNode_AnimNextInterfaceGraph.h" },
		{ "ToolTip", "The input pose we will pass to the graph" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimNextInterfaceGraph_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AnimNextInterfaceGraph, Source), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimNextInterfaceGraph_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimNextInterfaceGraph_Statics::NewProp_Source_MetaData)) }; // 2393943538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimNextInterfaceGraph_Statics::NewProp_AnimNextInterfaceGraph_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Internal/AnimGraph/AnimNode_AnimNextInterfaceGraph.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimNextInterfaceGraph_Statics::NewProp_AnimNextInterfaceGraph = { "AnimNextInterfaceGraph", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AnimNextInterfaceGraph, AnimNextInterfaceGraph), Z_Construct_UClass_UAnimNextInterfaceGraph_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimNextInterfaceGraph_Statics::NewProp_AnimNextInterfaceGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimNextInterfaceGraph_Statics::NewProp_AnimNextInterfaceGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimNextInterfaceGraph_Statics::NewProp_LODThreshold_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/*\n\x09 * Max LOD that this node is allowed to run\n\x09 * For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n\x09 * when the component LOD becomes 3, it will stop update/evaluate\n\x09 * currently transition would be issue and that has to be re-visited\n\x09 */" },
		{ "DisplayName", "LOD Threshold" },
		{ "ModuleRelativePath", "Internal/AnimGraph/AnimNode_AnimNextInterfaceGraph.h" },
		{ "ToolTip", "* Max LOD that this node is allowed to run\n* For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n* when the component LOD becomes 3, it will stop update/evaluate\n* currently transition would be issue and that has to be re-visited" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimNextInterfaceGraph_Statics::NewProp_LODThreshold = { "LODThreshold", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AnimNextInterfaceGraph, LODThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimNextInterfaceGraph_Statics::NewProp_LODThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimNextInterfaceGraph_Statics::NewProp_LODThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_AnimNextInterfaceGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimNextInterfaceGraph_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimNextInterfaceGraph_Statics::NewProp_AnimNextInterfaceGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimNextInterfaceGraph_Statics::NewProp_LODThreshold,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_AnimNextInterfaceGraph_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextInterfaceGraph,
		Z_Construct_UScriptStruct_FAnimNode_CustomProperty,
		&NewStructOps,
		"AnimNode_AnimNextInterfaceGraph",
		sizeof(FAnimNode_AnimNextInterfaceGraph),
		alignof(FAnimNode_AnimNextInterfaceGraph),
		Z_Construct_UScriptStruct_FAnimNode_AnimNextInterfaceGraph_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimNextInterfaceGraph_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimNextInterfaceGraph_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimNextInterfaceGraph_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AnimNextInterfaceGraph()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_AnimNextInterfaceGraph.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_AnimNextInterfaceGraph.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_AnimNextInterfaceGraph_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_AnimNextInterfaceGraph.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Internal_AnimGraph_AnimNode_AnimNextInterfaceGraph_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Internal_AnimGraph_AnimNode_AnimNextInterfaceGraph_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_AnimNextInterfaceGraph::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_AnimNextInterfaceGraph_Statics::NewStructOps, TEXT("AnimNode_AnimNextInterfaceGraph"), &Z_Registration_Info_UScriptStruct_AnimNode_AnimNextInterfaceGraph, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_AnimNextInterfaceGraph), 3895696355U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Internal_AnimGraph_AnimNode_AnimNextInterfaceGraph_h_3003716952(TEXT("/Script/AnimNextInterfaceGraph"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Internal_AnimGraph_AnimNode_AnimNextInterfaceGraph_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Internal_AnimGraph_AnimNode_AnimNextInterfaceGraph_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
