// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/Nodes/GeometryCollectionAssetNodes.h"
#include "GeometryCollection/GeometryCollectionObject.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionAssetNodes() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowTerminalNode();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollection_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionSource();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FGeometryCollectionTerminalDataflowNode>() == std::is_polymorphic<FDataflowTerminalNode>(), "USTRUCT FGeometryCollectionTerminalDataflowNode cannot be polymorphic unless super FDataflowTerminalNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCollectionTerminalDataflowNode;
class UScriptStruct* FGeometryCollectionTerminalDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionTerminalDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCollectionTerminalDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("GeometryCollectionTerminalDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionTerminalDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FGeometryCollectionTerminalDataflowNode>()
{
	return FGeometryCollectionTerminalDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstancedMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancedMeshes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "DataflowGeometryCollection", "" },
		{ "DataflowTerminal", "" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionTerminalDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionTerminalDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::NewProp_Materials_MetaData[] = {
		{ "Comment", "/** Materials array to use for this asset */" },
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Materials" },
		{ "DisplayName", "Materials" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
		{ "ToolTip", "Materials array to use for this asset" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionTerminalDataflowNode, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::NewProp_Materials_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::NewProp_InstancedMeshes_Inner = { "InstancedMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh, METADATA_PARAMS(nullptr, 0) }; // 592194073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::NewProp_InstancedMeshes_MetaData[] = {
		{ "Comment", "/** array of instanced meshes*/" },
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "InstancedMeshes" },
		{ "DisplayName", "InstancedMeshes" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
		{ "ToolTip", "array of instanced meshes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::NewProp_InstancedMeshes = { "InstancedMeshes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionTerminalDataflowNode, InstancedMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::NewProp_InstancedMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::NewProp_InstancedMeshes_MetaData)) }; // 592194073
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::NewProp_Materials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::NewProp_Materials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::NewProp_InstancedMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::NewProp_InstancedMeshes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowTerminalNode,
		&NewStructOps,
		"GeometryCollectionTerminalDataflowNode",
		sizeof(FGeometryCollectionTerminalDataflowNode),
		alignof(FGeometryCollectionTerminalDataflowNode),
		Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryCollectionTerminalDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCollectionTerminalDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryCollectionTerminalDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGetGeometryCollectionAssetDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGetGeometryCollectionAssetDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetGeometryCollectionAssetDataflowNode;
class UScriptStruct* FGetGeometryCollectionAssetDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetGeometryCollectionAssetDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetGeometryCollectionAssetDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("GetGeometryCollectionAssetDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_GetGeometryCollectionAssetDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FGetGeometryCollectionAssetDataflowNode>()
{
	return FGetGeometryCollectionAssetDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Get Current geometry collection asset \n * Note : Use with caution as this may get replaced in a near future for a more generic getAsset node\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
		{ "ToolTip", "Get Current geometry collection asset\nNote : Use with caution as this may get replaced in a near future for a more generic getAsset node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetGeometryCollectionAssetDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode_Statics::NewProp_Asset_MetaData[] = {
		{ "Comment", "/** Asset this data flow graph instance is assigned to */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "Asset" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
		{ "ToolTip", "Asset this data flow graph instance is assigned to" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGetGeometryCollectionAssetDataflowNode, Asset), Z_Construct_UClass_UGeometryCollection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode_Statics::NewProp_Asset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode_Statics::NewProp_Asset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"GetGeometryCollectionAssetDataflowNode",
		sizeof(FGetGeometryCollectionAssetDataflowNode),
		alignof(FGetGeometryCollectionAssetDataflowNode),
		Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_GetGeometryCollectionAssetDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetGeometryCollectionAssetDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GetGeometryCollectionAssetDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGetGeometryCollectionSourcesDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGetGeometryCollectionSourcesDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetGeometryCollectionSourcesDataflowNode;
class UScriptStruct* FGetGeometryCollectionSourcesDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetGeometryCollectionSourcesDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetGeometryCollectionSourcesDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("GetGeometryCollectionSourcesDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_GetGeometryCollectionSourcesDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FGetGeometryCollectionSourcesDataflowNode>()
{
	return FGetGeometryCollectionSourcesDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sources;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Get the list of the original mesh information used to create a specific geometryc collection asset\n * each entry contains a mesh, a transform and a list of override materials\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
		{ "ToolTip", "Get the list of the original mesh information used to create a specific geometryc collection asset\neach entry contains a mesh, a transform and a list of override materials" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetGeometryCollectionSourcesDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::NewProp_Asset_MetaData[] = {
		{ "Comment", "/** Asset to get geometry sources from */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Asset" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
		{ "ToolTip", "Asset to get geometry sources from" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGetGeometryCollectionSourcesDataflowNode, Asset), Z_Construct_UClass_UGeometryCollection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::NewProp_Asset_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::NewProp_Sources_Inner = { "Sources", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGeometryCollectionSource, METADATA_PARAMS(nullptr, 0) }; // 463373050
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::NewProp_Sources_MetaData[] = {
		{ "Comment", "/** array of geometry sources */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "Sources" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
		{ "ToolTip", "array of geometry sources" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::NewProp_Sources = { "Sources", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGetGeometryCollectionSourcesDataflowNode, Sources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::NewProp_Sources_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::NewProp_Sources_MetaData)) }; // 463373050
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::NewProp_Sources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::NewProp_Sources,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"GetGeometryCollectionSourcesDataflowNode",
		sizeof(FGetGeometryCollectionSourcesDataflowNode),
		alignof(FGetGeometryCollectionSourcesDataflowNode),
		Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_GetGeometryCollectionSourcesDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetGeometryCollectionSourcesDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GetGeometryCollectionSourcesDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCreateGeometryCollectionFromSourcesDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCreateGeometryCollectionFromSourcesDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateGeometryCollectionFromSourcesDataflowNode;
class UScriptStruct* FCreateGeometryCollectionFromSourcesDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateGeometryCollectionFromSourcesDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateGeometryCollectionFromSourcesDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CreateGeometryCollectionFromSourcesDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CreateGeometryCollectionFromSourcesDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCreateGeometryCollectionFromSourcesDataflowNode>()
{
	return FCreateGeometryCollectionFromSourcesDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sources;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstancedMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancedMeshes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * create a geometry collection from a set of geometry sources    \n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
		{ "ToolTip", "create a geometry collection from a set of geometry sources" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateGeometryCollectionFromSourcesDataflowNode>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_Sources_Inner = { "Sources", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGeometryCollectionSource, METADATA_PARAMS(nullptr, 0) }; // 463373050
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_Sources_MetaData[] = {
		{ "Comment", "/** array of geometry sources */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Sources" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
		{ "ToolTip", "array of geometry sources" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_Sources = { "Sources", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateGeometryCollectionFromSourcesDataflowNode, Sources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_Sources_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_Sources_MetaData)) }; // 463373050
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Geometry collection newly created */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
		{ "ToolTip", "Geometry collection newly created" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateGeometryCollectionFromSourcesDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_Materials_MetaData[] = {
		{ "Comment", "/** Geometry collection newly created */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "Materials" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
		{ "ToolTip", "Geometry collection newly created" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateGeometryCollectionFromSourcesDataflowNode, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_Materials_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_InstancedMeshes_Inner = { "InstancedMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGeometryCollectionAutoInstanceMesh, METADATA_PARAMS(nullptr, 0) }; // 592194073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_InstancedMeshes_MetaData[] = {
		{ "Comment", "/** array of instanced meshes*/" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "InstancedMeshes" },
		{ "ModuleRelativePath", "Public/Dataflow/Nodes/GeometryCollectionAssetNodes.h" },
		{ "ToolTip", "array of instanced meshes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_InstancedMeshes = { "InstancedMeshes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateGeometryCollectionFromSourcesDataflowNode, InstancedMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_InstancedMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_InstancedMeshes_MetaData)) }; // 592194073
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_Sources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_Sources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_Materials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_Materials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_InstancedMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewProp_InstancedMeshes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"CreateGeometryCollectionFromSourcesDataflowNode",
		sizeof(FCreateGeometryCollectionFromSourcesDataflowNode),
		alignof(FCreateGeometryCollectionFromSourcesDataflowNode),
		Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CreateGeometryCollectionFromSourcesDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateGeometryCollectionFromSourcesDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CreateGeometryCollectionFromSourcesDataflowNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_Nodes_GeometryCollectionAssetNodes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_Nodes_GeometryCollectionAssetNodes_h_Statics::ScriptStructInfo[] = {
		{ FGeometryCollectionTerminalDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode_Statics::NewStructOps, TEXT("GeometryCollectionTerminalDataflowNode"), &Z_Registration_Info_UScriptStruct_GeometryCollectionTerminalDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCollectionTerminalDataflowNode), 3077013361U) },
		{ FGetGeometryCollectionAssetDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FGetGeometryCollectionAssetDataflowNode_Statics::NewStructOps, TEXT("GetGeometryCollectionAssetDataflowNode"), &Z_Registration_Info_UScriptStruct_GetGeometryCollectionAssetDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetGeometryCollectionAssetDataflowNode), 3233181750U) },
		{ FGetGeometryCollectionSourcesDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FGetGeometryCollectionSourcesDataflowNode_Statics::NewStructOps, TEXT("GetGeometryCollectionSourcesDataflowNode"), &Z_Registration_Info_UScriptStruct_GetGeometryCollectionSourcesDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetGeometryCollectionSourcesDataflowNode), 4195174622U) },
		{ FCreateGeometryCollectionFromSourcesDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_Statics::NewStructOps, TEXT("CreateGeometryCollectionFromSourcesDataflowNode"), &Z_Registration_Info_UScriptStruct_CreateGeometryCollectionFromSourcesDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateGeometryCollectionFromSourcesDataflowNode), 2926896089U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_Nodes_GeometryCollectionAssetNodes_h_3767920260(TEXT("/Script/GeometryCollectionNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_Nodes_GeometryCollectionAssetNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_Nodes_GeometryCollectionAssetNodes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
