// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/DataflowContextOverridesNodes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowContextOverridesNodes() {}
// Cross Module References
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	DATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FFloatOverrideDataflowNode();
	UPackage* Z_Construct_UPackage__Script_DataflowNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FFloatOverrideDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FFloatOverrideDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FloatOverrideDataflowNode;
class UScriptStruct* FFloatOverrideDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FloatOverrideDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FloatOverrideDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloatOverrideDataflowNode, (UObject*)Z_Construct_UPackage__Script_DataflowNodes(), TEXT("FloatOverrideDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_FloatOverrideDataflowNode.OuterSingleton;
}
template<> DATAFLOWNODES_API UScriptStruct* StaticStruct<FFloatOverrideDataflowNode>()
{
	return FFloatOverrideDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueOut_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ValueOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "DataflowFlesh", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowContextOverridesNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloatOverrideDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Category", "Overrides" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowContextOverridesNodes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFloatOverrideDataflowNode, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::NewProp_KeyName_MetaData[] = {
		{ "Category", "Overrides" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowContextOverridesNodes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFloatOverrideDataflowNode, KeyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::NewProp_KeyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::NewProp_ValueOut_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "DisplayName", "Float" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowContextOverridesNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::NewProp_ValueOut = { "ValueOut", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFloatOverrideDataflowNode, ValueOut), METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::NewProp_ValueOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::NewProp_ValueOut_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::NewProp_KeyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::NewProp_ValueOut,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataflowNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"FloatOverrideDataflowNode",
		sizeof(FFloatOverrideDataflowNode),
		alignof(FFloatOverrideDataflowNode),
		Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFloatOverrideDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_FloatOverrideDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FloatOverrideDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FloatOverrideDataflowNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowContextOverridesNodes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowContextOverridesNodes_h_Statics::ScriptStructInfo[] = {
		{ FFloatOverrideDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::NewStructOps, TEXT("FloatOverrideDataflowNode"), &Z_Registration_Info_UScriptStruct_FloatOverrideDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFloatOverrideDataflowNode), 3011925459U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowContextOverridesNodes_h_3226076844(TEXT("/Script/DataflowNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowContextOverridesNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowContextOverridesNodes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
