// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/DataflowTerminalNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowTerminalNode() {}
// Cross Module References
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowTerminalNode();
	UPackage* Z_Construct_UPackage__Script_DataflowCore();
// End Cross Module References

static_assert(std::is_polymorphic<FDataflowTerminalNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FDataflowTerminalNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowTerminalNode;
class UScriptStruct* FDataflowTerminalNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowTerminalNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowTerminalNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowTerminalNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowTerminalNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowTerminalNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowTerminalNode>()
{
	return FDataflowTerminalNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataflowTerminalNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataflowTerminalNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* FDataflowTerminalNode\n*\x09\x09""Base class for terminal nodes within the Dataflow graph. \n* \n*\x09\x09Terminal Nodes allow for non-const access to UObjects as\n*       edges in the graph. They are used to push data out to\n*       asset or the world from the calling client. Terminals\n*       may not have outputs, they are only leaf nodes in the \n*       evaluation graph. \n*/" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowTerminalNode.h" },
		{ "ToolTip", "FDataflowTerminalNode\n             Base class for terminal nodes within the Dataflow graph.\n\n             Terminal Nodes allow for non-const access to UObjects as\n      edges in the graph. They are used to push data out to\n      asset or the world from the calling client. Terminals\n      may not have outputs, they are only leaf nodes in the\n      evaluation graph." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataflowTerminalNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowTerminalNode>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowTerminalNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"DataflowTerminalNode",
		sizeof(FDataflowTerminalNode),
		alignof(FDataflowTerminalNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataflowTerminalNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowTerminalNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataflowTerminalNode()
	{
		if (!Z_Registration_Info_UScriptStruct_DataflowTerminalNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowTerminalNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowTerminalNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataflowTerminalNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowTerminalNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowTerminalNode_h_Statics::ScriptStructInfo[] = {
		{ FDataflowTerminalNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowTerminalNode_Statics::NewStructOps, TEXT("DataflowTerminalNode"), &Z_Registration_Info_UScriptStruct_DataflowTerminalNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowTerminalNode), 336666328U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowTerminalNode_h_1109069996(TEXT("/Script/DataflowCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowTerminalNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowTerminalNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
