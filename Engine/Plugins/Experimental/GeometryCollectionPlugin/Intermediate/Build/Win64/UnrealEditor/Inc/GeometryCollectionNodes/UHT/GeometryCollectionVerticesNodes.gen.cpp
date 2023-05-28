// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/GeometryCollectionVerticesNodes.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionVerticesNodes() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FTransformCollectionAttributeDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FTransformCollectionAttributeDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransformCollectionAttributeDataflowNode;
class UScriptStruct* FTransformCollectionAttributeDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransformCollectionAttributeDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransformCollectionAttributeDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("TransformCollectionAttributeDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_TransformCollectionAttributeDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FTransformCollectionAttributeDataflowNode>()
{
	return FTransformCollectionAttributeDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionVerticesNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformCollectionAttributeDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionVerticesNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransformCollectionAttributeDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::NewProp_TransformIn_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "Transform" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionVerticesNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::NewProp_TransformIn = { "TransformIn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransformCollectionAttributeDataflowNode, TransformIn), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::NewProp_TransformIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::NewProp_TransformIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::NewProp_LocalTransform_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionVerticesNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::NewProp_LocalTransform = { "LocalTransform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransformCollectionAttributeDataflowNode, LocalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::NewProp_LocalTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::NewProp_LocalTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionVerticesNodes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransformCollectionAttributeDataflowNode, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::NewProp_AttributeName_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionVerticesNodes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransformCollectionAttributeDataflowNode, AttributeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::NewProp_AttributeName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::NewProp_TransformIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::NewProp_LocalTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::NewProp_AttributeName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"TransformCollectionAttributeDataflowNode",
		sizeof(FTransformCollectionAttributeDataflowNode),
		alignof(FTransformCollectionAttributeDataflowNode),
		Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_TransformCollectionAttributeDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransformCollectionAttributeDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TransformCollectionAttributeDataflowNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionVerticesNodes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionVerticesNodes_h_Statics::ScriptStructInfo[] = {
		{ FTransformCollectionAttributeDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode_Statics::NewStructOps, TEXT("TransformCollectionAttributeDataflowNode"), &Z_Registration_Info_UScriptStruct_TransformCollectionAttributeDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransformCollectionAttributeDataflowNode), 3880128352U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionVerticesNodes_h_3657334014(TEXT("/Script/GeometryCollectionNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionVerticesNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionVerticesNodes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
