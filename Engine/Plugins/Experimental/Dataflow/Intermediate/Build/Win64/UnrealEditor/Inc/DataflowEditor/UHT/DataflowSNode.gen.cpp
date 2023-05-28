// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/DataflowSNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowSNode() {}
// Cross Module References
	DATAFLOWEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAssetSchemaAction_Dataflow_CreateNode_DataflowEdNode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	UPackage* Z_Construct_UPackage__Script_DataflowEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FAssetSchemaAction_Dataflow_CreateNode_DataflowEdNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FAssetSchemaAction_Dataflow_CreateNode_DataflowEdNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AssetSchemaAction_Dataflow_CreateNode_DataflowEdNode;
class UScriptStruct* FAssetSchemaAction_Dataflow_CreateNode_DataflowEdNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AssetSchemaAction_Dataflow_CreateNode_DataflowEdNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AssetSchemaAction_Dataflow_CreateNode_DataflowEdNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetSchemaAction_Dataflow_CreateNode_DataflowEdNode, (UObject*)Z_Construct_UPackage__Script_DataflowEditor(), TEXT("AssetSchemaAction_Dataflow_CreateNode_DataflowEdNode"));
	}
	return Z_Registration_Info_UScriptStruct_AssetSchemaAction_Dataflow_CreateNode_DataflowEdNode.OuterSingleton;
}
template<> DATAFLOWEDITOR_API UScriptStruct* StaticStruct<FAssetSchemaAction_Dataflow_CreateNode_DataflowEdNode>()
{
	return FAssetSchemaAction_Dataflow_CreateNode_DataflowEdNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAssetSchemaAction_Dataflow_CreateNode_DataflowEdNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetSchemaAction_Dataflow_CreateNode_DataflowEdNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//\n// Action to add a node to the graph\n//\n" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSNode.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetSchemaAction_Dataflow_CreateNode_DataflowEdNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetSchemaAction_Dataflow_CreateNode_DataflowEdNode>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetSchemaAction_Dataflow_CreateNode_DataflowEdNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataflowEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"AssetSchemaAction_Dataflow_CreateNode_DataflowEdNode",
		sizeof(FAssetSchemaAction_Dataflow_CreateNode_DataflowEdNode),
		alignof(FAssetSchemaAction_Dataflow_CreateNode_DataflowEdNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetSchemaAction_Dataflow_CreateNode_DataflowEdNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetSchemaAction_Dataflow_CreateNode_DataflowEdNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetSchemaAction_Dataflow_CreateNode_DataflowEdNode()
	{
		if (!Z_Registration_Info_UScriptStruct_AssetSchemaAction_Dataflow_CreateNode_DataflowEdNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AssetSchemaAction_Dataflow_CreateNode_DataflowEdNode.InnerSingleton, Z_Construct_UScriptStruct_FAssetSchemaAction_Dataflow_CreateNode_DataflowEdNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AssetSchemaAction_Dataflow_CreateNode_DataflowEdNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSNode_h_Statics::ScriptStructInfo[] = {
		{ FAssetSchemaAction_Dataflow_CreateNode_DataflowEdNode::StaticStruct, Z_Construct_UScriptStruct_FAssetSchemaAction_Dataflow_CreateNode_DataflowEdNode_Statics::NewStructOps, TEXT("AssetSchemaAction_Dataflow_CreateNode_DataflowEdNode"), &Z_Registration_Info_UScriptStruct_AssetSchemaAction_Dataflow_CreateNode_DataflowEdNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetSchemaAction_Dataflow_CreateNode_DataflowEdNode), 1073905955U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSNode_h_1282546663(TEXT("/Script/DataflowEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
