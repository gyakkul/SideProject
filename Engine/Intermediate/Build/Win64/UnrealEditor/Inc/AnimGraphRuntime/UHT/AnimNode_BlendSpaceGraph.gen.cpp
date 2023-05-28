// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNodes/AnimNode_BlendSpaceGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BlendSpaceGraph() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraph();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_BlendSpaceGraph>() == std::is_polymorphic<FAnimNode_BlendSpaceGraphBase>(), "USTRUCT FAnimNode_BlendSpaceGraph cannot be polymorphic unless super FAnimNode_BlendSpaceGraphBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceGraph;
class UScriptStruct* FAnimNode_BlendSpaceGraph::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceGraph.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceGraph.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraph, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_BlendSpaceGraph"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceGraph.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_BlendSpaceGraph>()
{
	return FAnimNode_BlendSpaceGraph::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraph_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraph_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Allows multiple animations to be blended between based on input parameters\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpaceGraph.h" },
		{ "ToolTip", "Allows multiple animations to be blended between based on input parameters" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraph_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendSpaceGraph>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraph_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase,
		&NewStructOps,
		"AnimNode_BlendSpaceGraph",
		sizeof(FAnimNode_BlendSpaceGraph),
		alignof(FAnimNode_BlendSpaceGraph),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraph_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraph_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraph()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceGraph.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceGraph.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraph_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceGraph.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpaceGraph_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpaceGraph_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_BlendSpaceGraph::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraph_Statics::NewStructOps, TEXT("AnimNode_BlendSpaceGraph"), &Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceGraph, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_BlendSpaceGraph), 1152273432U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpaceGraph_h_722688770(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpaceGraph_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpaceGraph_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
