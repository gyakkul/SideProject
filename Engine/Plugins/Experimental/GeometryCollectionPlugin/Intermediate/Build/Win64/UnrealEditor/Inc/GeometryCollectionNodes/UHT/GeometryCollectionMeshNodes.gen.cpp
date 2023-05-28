// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/GeometryCollectionMeshNodes.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionMeshNodes() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	GEOMETRYCOLLECTIONNODES_API UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EMeshBooleanOperationEnum();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FBoxToMeshDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGetMeshDataDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMeshAppendDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMeshBooleanDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMeshInfoDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FPointsToMeshDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FPointsToMeshDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FPointsToMeshDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PointsToMeshDataflowNode;
class UScriptStruct* FPointsToMeshDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PointsToMeshDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PointsToMeshDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointsToMeshDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("PointsToMeshDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_PointsToMeshDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FPointsToMeshDataflowNode>()
{
	return FPointsToMeshDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriangleCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TriangleCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Converts points into a DynamicMesh\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Converts points into a DynamicMesh" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointsToMeshDataflowNode>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::NewProp_Points_MetaData[] = {
		{ "Comment", "/** Points input */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Points input" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPointsToMeshDataflowNode, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::NewProp_Points_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::NewProp_Mesh_MetaData[] = {
		{ "Comment", "/** Mesh output */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Mesh output" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPointsToMeshDataflowNode, Mesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::NewProp_TriangleCount_MetaData[] = {
		{ "Comment", "/** Mesh triangle count */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Mesh triangle count" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::NewProp_TriangleCount = { "TriangleCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPointsToMeshDataflowNode, TriangleCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::NewProp_TriangleCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::NewProp_TriangleCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::NewProp_TriangleCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"PointsToMeshDataflowNode",
		sizeof(FPointsToMeshDataflowNode),
		alignof(FPointsToMeshDataflowNode),
		Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPointsToMeshDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_PointsToMeshDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PointsToMeshDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PointsToMeshDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FBoxToMeshDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FBoxToMeshDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoxToMeshDataflowNode;
class UScriptStruct* FBoxToMeshDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoxToMeshDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoxToMeshDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoxToMeshDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("BoxToMeshDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_BoxToMeshDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FBoxToMeshDataflowNode>()
{
	return FBoxToMeshDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriangleCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TriangleCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Converts a BoundingBox into a DynamicMesh\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Converts a BoundingBox into a DynamicMesh" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoxToMeshDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::NewProp_Box_MetaData[] = {
		{ "Comment", "/** BoundingBox input */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "BoundingBox input" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoxToMeshDataflowNode, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::NewProp_Box_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::NewProp_Box_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::NewProp_Mesh_MetaData[] = {
		{ "Comment", "/** Mesh output */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Mesh output" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoxToMeshDataflowNode, Mesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::NewProp_TriangleCount_MetaData[] = {
		{ "Comment", "/** Mesh triangle count */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Mesh triangle count" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::NewProp_TriangleCount = { "TriangleCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoxToMeshDataflowNode, TriangleCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::NewProp_TriangleCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::NewProp_TriangleCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::NewProp_Box,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::NewProp_TriangleCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"BoxToMeshDataflowNode",
		sizeof(FBoxToMeshDataflowNode),
		alignof(FBoxToMeshDataflowNode),
		Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoxToMeshDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_BoxToMeshDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoxToMeshDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BoxToMeshDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMeshInfoDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMeshInfoDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshInfoDataflowNode;
class UScriptStruct* FMeshInfoDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshInfoDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshInfoDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshInfoDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("MeshInfoDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_MeshInfoDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FMeshInfoDataflowNode>()
{
	return FMeshInfoDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfoString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InfoString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Collects information from the DynamicMesh and outputs it into a formatted string\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Collects information from the DynamicMesh and outputs it into a formatted string" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshInfoDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics::NewProp_Mesh_MetaData[] = {
		{ "Comment", "/** DynamicMesh for the information */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "DynamicMesh for the information" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshInfoDataflowNode, Mesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics::NewProp_InfoString_MetaData[] = {
		{ "Comment", "/** Formatted output string */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Formatted output string" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics::NewProp_InfoString = { "InfoString", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshInfoDataflowNode, InfoString), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics::NewProp_InfoString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics::NewProp_InfoString_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics::NewProp_InfoString,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"MeshInfoDataflowNode",
		sizeof(FMeshInfoDataflowNode),
		alignof(FMeshInfoDataflowNode),
		Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshInfoDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_MeshInfoDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshInfoDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeshInfoDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMeshToCollectionDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMeshToCollectionDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshToCollectionDataflowNode;
class UScriptStruct* FMeshToCollectionDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshToCollectionDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshToCollectionDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("MeshToCollectionDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_MeshToCollectionDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FMeshToCollectionDataflowNode>()
{
	return FMeshToCollectionDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Converts a DynamicMesh to a Collection\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Converts a DynamicMesh to a Collection" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshToCollectionDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics::NewProp_Mesh_MetaData[] = {
		{ "Comment", "/** DynamicMesh to convert */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "DynamicMesh to convert" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshToCollectionDataflowNode, Mesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Output Collection */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Output Collection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshToCollectionDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics::NewProp_Collection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"MeshToCollectionDataflowNode",
		sizeof(FMeshToCollectionDataflowNode),
		alignof(FMeshToCollectionDataflowNode),
		Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_MeshToCollectionDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshToCollectionDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeshToCollectionDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCollectionToMeshDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCollectionToMeshDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionToMeshDataflowNode;
class UScriptStruct* FCollectionToMeshDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionToMeshDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionToMeshDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CollectionToMeshDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionToMeshDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCollectionToMeshDataflowNode>()
{
	return FCollectionToMeshDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCenterPivot_MetaData[];
#endif
		static void NewProp_bCenterPivot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCenterPivot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Converts a Collection to a DynamicMesh\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Converts a Collection to a DynamicMesh" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionToMeshDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Collection to convert*/" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Collection to convert" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionToMeshDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::NewProp_bCenterPivot_MetaData[] = {
		{ "Category", "General" },
		{ "DisplayName", "Center Pivot" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::NewProp_bCenterPivot_SetBit(void* Obj)
	{
		((FCollectionToMeshDataflowNode*)Obj)->bCenterPivot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::NewProp_bCenterPivot = { "bCenterPivot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCollectionToMeshDataflowNode), &Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::NewProp_bCenterPivot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::NewProp_bCenterPivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::NewProp_bCenterPivot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::NewProp_Mesh_MetaData[] = {
		{ "Comment", "/** Output DynamicMesh */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Output DynamicMesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionToMeshDataflowNode, Mesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::NewProp_Mesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::NewProp_bCenterPivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::NewProp_Mesh,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"CollectionToMeshDataflowNode",
		sizeof(FCollectionToMeshDataflowNode),
		alignof(FCollectionToMeshDataflowNode),
		Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionToMeshDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionToMeshDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionToMeshDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FStaticMeshToMeshDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FStaticMeshToMeshDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StaticMeshToMeshDataflowNode;
class UScriptStruct* FStaticMeshToMeshDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMeshToMeshDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StaticMeshToMeshDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("StaticMeshToMeshDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_StaticMeshToMeshDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FStaticMeshToMeshDataflowNode>()
{
	return FStaticMeshToMeshDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseHiRes_MetaData[];
#endif
		static void NewProp_bUseHiRes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHiRes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Converts a StaticMesh into a DynamicMesh\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Converts a StaticMesh into a DynamicMesh" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshToMeshDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** StaticMesh to convert */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "StaticMesh to convert" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStaticMeshToMeshDataflowNode, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewProp_bUseHiRes_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** Output the HiRes representation, if set to true and HiRes doesn't exist it will output empty mesh */" },
		{ "DisplayName", "Use HiRes" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Output the HiRes representation, if set to true and HiRes doesn't exist it will output empty mesh" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewProp_bUseHiRes_SetBit(void* Obj)
	{
		((FStaticMeshToMeshDataflowNode*)Obj)->bUseHiRes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewProp_bUseHiRes = { "bUseHiRes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FStaticMeshToMeshDataflowNode), &Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewProp_bUseHiRes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewProp_bUseHiRes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewProp_bUseHiRes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewProp_LODLevel_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** Specifies the LOD level to use */" },
		{ "DisplayName", "LOD Level" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Specifies the LOD level to use" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewProp_LODLevel = { "LODLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStaticMeshToMeshDataflowNode, LODLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewProp_LODLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewProp_LODLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewProp_Mesh_MetaData[] = {
		{ "Comment", "/** Output mesh */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Output mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStaticMeshToMeshDataflowNode, Mesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewProp_Mesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewProp_bUseHiRes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewProp_LODLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewProp_Mesh,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"StaticMeshToMeshDataflowNode",
		sizeof(FStaticMeshToMeshDataflowNode),
		alignof(FStaticMeshToMeshDataflowNode),
		Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_StaticMeshToMeshDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StaticMeshToMeshDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StaticMeshToMeshDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMeshAppendDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMeshAppendDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshAppendDataflowNode;
class UScriptStruct* FMeshAppendDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshAppendDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshAppendDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshAppendDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("MeshAppendDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_MeshAppendDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FMeshAppendDataflowNode>()
{
	return FMeshAppendDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Appends two meshes\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Appends two meshes" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshAppendDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::NewProp_Mesh1_MetaData[] = {
		{ "Comment", "/** Mesh input */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Mesh input" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::NewProp_Mesh1 = { "Mesh1", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshAppendDataflowNode, Mesh1), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::NewProp_Mesh1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::NewProp_Mesh1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::NewProp_Mesh2_MetaData[] = {
		{ "Comment", "/** Mesh input */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Mesh input" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::NewProp_Mesh2 = { "Mesh2", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshAppendDataflowNode, Mesh2), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::NewProp_Mesh2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::NewProp_Mesh2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::NewProp_Mesh_MetaData[] = {
		{ "Comment", "/** Output mesh */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Output mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshAppendDataflowNode, Mesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::NewProp_Mesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::NewProp_Mesh1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::NewProp_Mesh2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::NewProp_Mesh,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"MeshAppendDataflowNode",
		sizeof(FMeshAppendDataflowNode),
		alignof(FMeshAppendDataflowNode),
		Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshAppendDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_MeshAppendDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshAppendDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeshAppendDataflowNode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshBooleanOperationEnum;
	static UEnum* EMeshBooleanOperationEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshBooleanOperationEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshBooleanOperationEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionNodes_EMeshBooleanOperationEnum, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("EMeshBooleanOperationEnum"));
		}
		return Z_Registration_Info_UEnum_EMeshBooleanOperationEnum.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<EMeshBooleanOperationEnum>()
	{
		return EMeshBooleanOperationEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryCollectionNodes_EMeshBooleanOperationEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryCollectionNodes_EMeshBooleanOperationEnum_Statics::Enumerators[] = {
		{ "EMeshBooleanOperationEnum::Dataflow_MeshBoolean_Union", (int64)EMeshBooleanOperationEnum::Dataflow_MeshBoolean_Union },
		{ "EMeshBooleanOperationEnum::Dataflow_MeshBoolean_Intersect", (int64)EMeshBooleanOperationEnum::Dataflow_MeshBoolean_Intersect },
		{ "EMeshBooleanOperationEnum::Dataflow_MeshBoolean_Difference", (int64)EMeshBooleanOperationEnum::Dataflow_MeshBoolean_Difference },
		{ "EMeshBooleanOperationEnum::Dataflow_Max", (int64)EMeshBooleanOperationEnum::Dataflow_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryCollectionNodes_EMeshBooleanOperationEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dataflow_Max.Comment", "//~~~\n//256th entry\n" },
		{ "Dataflow_Max.Hidden", "" },
		{ "Dataflow_Max.Name", "EMeshBooleanOperationEnum::Dataflow_Max" },
		{ "Dataflow_Max.ToolTip", "256th entry" },
		{ "Dataflow_MeshBoolean_Difference.DisplayName", "Difference" },
		{ "Dataflow_MeshBoolean_Difference.Name", "EMeshBooleanOperationEnum::Dataflow_MeshBoolean_Difference" },
		{ "Dataflow_MeshBoolean_Intersect.DisplayName", "Intersect" },
		{ "Dataflow_MeshBoolean_Intersect.Name", "EMeshBooleanOperationEnum::Dataflow_MeshBoolean_Intersect" },
		{ "Dataflow_MeshBoolean_Union.DisplayName", "Union" },
		{ "Dataflow_MeshBoolean_Union.Name", "EMeshBooleanOperationEnum::Dataflow_MeshBoolean_Union" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionNodes_EMeshBooleanOperationEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		nullptr,
		"EMeshBooleanOperationEnum",
		"EMeshBooleanOperationEnum",
		Z_Construct_UEnum_GeometryCollectionNodes_EMeshBooleanOperationEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EMeshBooleanOperationEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryCollectionNodes_EMeshBooleanOperationEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EMeshBooleanOperationEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EMeshBooleanOperationEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshBooleanOperationEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshBooleanOperationEnum.InnerSingleton, Z_Construct_UEnum_GeometryCollectionNodes_EMeshBooleanOperationEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshBooleanOperationEnum.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMeshBooleanDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMeshBooleanDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshBooleanDataflowNode;
class UScriptStruct* FMeshBooleanDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshBooleanDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshBooleanDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshBooleanDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("MeshBooleanDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_MeshBooleanDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FMeshBooleanDataflowNode>()
{
	return FMeshBooleanDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Mesh boolean (Union, Intersect, Difference) between two meshes\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Mesh boolean (Union, Intersect, Difference) between two meshes" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshBooleanDataflowNode>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewProp_Operation_MetaData[] = {
		{ "Category", "Boolean" },
		{ "Comment", "/** Boolean operation */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Boolean operation" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshBooleanDataflowNode, Operation), Z_Construct_UEnum_GeometryCollectionNodes_EMeshBooleanOperationEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewProp_Operation_MetaData)) }; // 1783253049
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewProp_Mesh1_MetaData[] = {
		{ "Comment", "/** Mesh input */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Mesh input" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewProp_Mesh1 = { "Mesh1", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshBooleanDataflowNode, Mesh1), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewProp_Mesh1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewProp_Mesh1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewProp_Mesh2_MetaData[] = {
		{ "Comment", "/** Mesh input */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Mesh input" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewProp_Mesh2 = { "Mesh2", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshBooleanDataflowNode, Mesh2), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewProp_Mesh2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewProp_Mesh2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewProp_Mesh_MetaData[] = {
		{ "Comment", "/** Output mesh */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Output mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshBooleanDataflowNode, Mesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewProp_Mesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewProp_Operation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewProp_Operation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewProp_Mesh1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewProp_Mesh2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewProp_Mesh,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"MeshBooleanDataflowNode",
		sizeof(FMeshBooleanDataflowNode),
		alignof(FMeshBooleanDataflowNode),
		Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshBooleanDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_MeshBooleanDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshBooleanDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeshBooleanDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMeshCopyToPointsDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMeshCopyToPointsDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshCopyToPointsDataflowNode;
class UScriptStruct* FMeshCopyToPointsDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshCopyToPointsDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshCopyToPointsDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("MeshCopyToPointsDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_MeshCopyToPointsDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FMeshCopyToPointsDataflowNode>()
{
	return FMeshCopyToPointsDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshToCopy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshToCopy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Copies the same mesh with scale onto points\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Copies the same mesh with scale onto points" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshCopyToPointsDataflowNode>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewProp_Points_MetaData[] = {
		{ "Comment", "/** Points to copy meshes onto */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Points to copy meshes onto" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshCopyToPointsDataflowNode, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewProp_Points_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewProp_MeshToCopy_MetaData[] = {
		{ "Comment", "/** Mesh to copy onto points */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Mesh to copy onto points" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewProp_MeshToCopy = { "MeshToCopy", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshCopyToPointsDataflowNode, MeshToCopy), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewProp_MeshToCopy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewProp_MeshToCopy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Copy" },
		{ "Comment", "/** Scale appied to the mesh */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Scale appied to the mesh" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshCopyToPointsDataflowNode, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewProp_Mesh_MetaData[] = {
		{ "Comment", "/** Copied meshes */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Copied meshes" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshCopyToPointsDataflowNode, Mesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewProp_Mesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewProp_MeshToCopy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewProp_Mesh,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"MeshCopyToPointsDataflowNode",
		sizeof(FMeshCopyToPointsDataflowNode),
		alignof(FMeshCopyToPointsDataflowNode),
		Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_MeshCopyToPointsDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshCopyToPointsDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeshCopyToPointsDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGetMeshDataDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGetMeshDataDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetMeshDataDataflowNode;
class UScriptStruct* FGetMeshDataDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetMeshDataDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetMeshDataDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetMeshDataDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("GetMeshDataDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_GetMeshDataDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FGetMeshDataDataflowNode>()
{
	return FGetMeshDataDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VertexCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EdgeCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriangleCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TriangleCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Outputs Mesh data\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Outputs Mesh data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetMeshDataDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::NewProp_Mesh_MetaData[] = {
		{ "Comment", "/** Mesh for the data */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Mesh for the data" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGetMeshDataDataflowNode, Mesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::NewProp_VertexCount_MetaData[] = {
		{ "Comment", "/** Number of vertices */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Number of vertices" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::NewProp_VertexCount = { "VertexCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGetMeshDataDataflowNode, VertexCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::NewProp_VertexCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::NewProp_VertexCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::NewProp_EdgeCount_MetaData[] = {
		{ "Comment", "/** Number of edges */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Number of edges" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::NewProp_EdgeCount = { "EdgeCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGetMeshDataDataflowNode, EdgeCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::NewProp_EdgeCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::NewProp_EdgeCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::NewProp_TriangleCount_MetaData[] = {
		{ "Comment", "/** Number of triangles */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMeshNodes.h" },
		{ "ToolTip", "Number of triangles" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::NewProp_TriangleCount = { "TriangleCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGetMeshDataDataflowNode, TriangleCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::NewProp_TriangleCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::NewProp_TriangleCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::NewProp_VertexCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::NewProp_EdgeCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::NewProp_TriangleCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"GetMeshDataDataflowNode",
		sizeof(FGetMeshDataDataflowNode),
		alignof(FGetMeshDataDataflowNode),
		Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGetMeshDataDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_GetMeshDataDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetMeshDataDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GetMeshDataDataflowNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMeshNodes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMeshNodes_h_Statics::EnumInfo[] = {
		{ EMeshBooleanOperationEnum_StaticEnum, TEXT("EMeshBooleanOperationEnum"), &Z_Registration_Info_UEnum_EMeshBooleanOperationEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1783253049U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMeshNodes_h_Statics::ScriptStructInfo[] = {
		{ FPointsToMeshDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics::NewStructOps, TEXT("PointsToMeshDataflowNode"), &Z_Registration_Info_UScriptStruct_PointsToMeshDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPointsToMeshDataflowNode), 3731128861U) },
		{ FBoxToMeshDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics::NewStructOps, TEXT("BoxToMeshDataflowNode"), &Z_Registration_Info_UScriptStruct_BoxToMeshDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoxToMeshDataflowNode), 2743480089U) },
		{ FMeshInfoDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics::NewStructOps, TEXT("MeshInfoDataflowNode"), &Z_Registration_Info_UScriptStruct_MeshInfoDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshInfoDataflowNode), 1124138138U) },
		{ FMeshToCollectionDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics::NewStructOps, TEXT("MeshToCollectionDataflowNode"), &Z_Registration_Info_UScriptStruct_MeshToCollectionDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshToCollectionDataflowNode), 2273399827U) },
		{ FCollectionToMeshDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics::NewStructOps, TEXT("CollectionToMeshDataflowNode"), &Z_Registration_Info_UScriptStruct_CollectionToMeshDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionToMeshDataflowNode), 445634656U) },
		{ FStaticMeshToMeshDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics::NewStructOps, TEXT("StaticMeshToMeshDataflowNode"), &Z_Registration_Info_UScriptStruct_StaticMeshToMeshDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaticMeshToMeshDataflowNode), 1829042519U) },
		{ FMeshAppendDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics::NewStructOps, TEXT("MeshAppendDataflowNode"), &Z_Registration_Info_UScriptStruct_MeshAppendDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshAppendDataflowNode), 3707318469U) },
		{ FMeshBooleanDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics::NewStructOps, TEXT("MeshBooleanDataflowNode"), &Z_Registration_Info_UScriptStruct_MeshBooleanDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshBooleanDataflowNode), 4294928402U) },
		{ FMeshCopyToPointsDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics::NewStructOps, TEXT("MeshCopyToPointsDataflowNode"), &Z_Registration_Info_UScriptStruct_MeshCopyToPointsDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshCopyToPointsDataflowNode), 1297535408U) },
		{ FGetMeshDataDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics::NewStructOps, TEXT("GetMeshDataDataflowNode"), &Z_Registration_Info_UScriptStruct_GetMeshDataDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetMeshDataDataflowNode), 4201709513U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMeshNodes_h_2748832892(TEXT("/Script/GeometryCollectionNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMeshNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMeshNodes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMeshNodes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMeshNodes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
