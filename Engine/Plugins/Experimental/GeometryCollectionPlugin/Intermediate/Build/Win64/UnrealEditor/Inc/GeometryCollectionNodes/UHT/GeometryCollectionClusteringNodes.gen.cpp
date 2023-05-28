// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/GeometryCollectionClusteringNodes.h"
#include "Dataflow/DataflowSelection.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionClusteringNodes() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowTransformSelection();
	GEOMETRYCOLLECTIONNODES_API UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FAutoClusterDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FClusterFlattenDataflowNode();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClusterSizeMethodEnum;
	static UEnum* EClusterSizeMethodEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EClusterSizeMethodEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EClusterSizeMethodEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("EClusterSizeMethodEnum"));
		}
		return Z_Registration_Info_UEnum_EClusterSizeMethodEnum.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<EClusterSizeMethodEnum>()
	{
		return EClusterSizeMethodEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum_Statics::Enumerators[] = {
		{ "EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByNumber", (int64)EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByNumber },
		{ "EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByFractionOfInput", (int64)EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByFractionOfInput },
		{ "EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_BySize", (int64)EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_BySize },
		{ "EClusterSizeMethodEnum::Dataflow_Max", (int64)EClusterSizeMethodEnum::Dataflow_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dataflow_ClusterSizeMethod_ByFractionOfInput.DisplayName", "By Fraction Of Input" },
		{ "Dataflow_ClusterSizeMethod_ByFractionOfInput.Name", "EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByFractionOfInput" },
		{ "Dataflow_ClusterSizeMethod_ByNumber.DisplayName", "By Number" },
		{ "Dataflow_ClusterSizeMethod_ByNumber.Name", "EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByNumber" },
		{ "Dataflow_ClusterSizeMethod_BySize.DisplayName", "By Size" },
		{ "Dataflow_ClusterSizeMethod_BySize.Name", "EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_BySize" },
		{ "Dataflow_Max.Comment", "//~~~\n//256th entry\n" },
		{ "Dataflow_Max.Hidden", "" },
		{ "Dataflow_Max.Name", "EClusterSizeMethodEnum::Dataflow_Max" },
		{ "Dataflow_Max.ToolTip", "256th entry" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		nullptr,
		"EClusterSizeMethodEnum",
		"EClusterSizeMethodEnum",
		Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum()
	{
		if (!Z_Registration_Info_UEnum_EClusterSizeMethodEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClusterSizeMethodEnum.InnerSingleton, Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EClusterSizeMethodEnum.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAutoClusterDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FAutoClusterDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutoClusterDataflowNode;
class UScriptStruct* FAutoClusterDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutoClusterDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutoClusterDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutoClusterDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("AutoClusterDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_AutoClusterDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FAutoClusterDataflowNode>()
{
	return FAutoClusterDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClusterSizeMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterSizeMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ClusterSizeMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterSites_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClusterSites;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterFraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClusterFraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SiteSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SiteSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoCluster_MetaData[];
#endif
		static void NewProp_AutoCluster_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoCluster;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvoidIsolated_MetaData[];
#endif
		static void NewProp_AvoidIsolated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AvoidIsolated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Automatically group pieces of a fractured Collection into a specified number of clusters\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Automatically group pieces of a fractured Collection into a specified number of clusters" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutoClusterDataflowNode>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterSizeMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterSizeMethod_MetaData[] = {
		{ "Category", "Cluster Size" },
		{ "Comment", "/** How to choose the size of the clusters to create */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "How to choose the size of the clusters to create" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterSizeMethod = { "ClusterSizeMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutoClusterDataflowNode, ClusterSizeMethod), Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterSizeMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterSizeMethod_MetaData)) }; // 1623600397
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterSites_MetaData[] = {
		{ "Category", "Cluster Size" },
		{ "Comment", "/** Use a Voronoi diagram with this many Voronoi sites as a guide for deciding cluster boundaries */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "ClusterSizeMethod == EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByNumber" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Use a Voronoi diagram with this many Voronoi sites as a guide for deciding cluster boundaries" },
		{ "UIMax", "5000" },
		{ "UIMin", "2" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterSites = { "ClusterSites", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutoClusterDataflowNode, ClusterSites), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterSites_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterSites_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterFraction_MetaData[] = {
		{ "Category", "Cluster Size" },
		{ "Comment", "/** Choose the number of Voronoi sites used for clustering as a fraction of the number of child bones to process */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "ClusterSizeMethod == EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByFractionOfInput" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Choose the number of Voronoi sites used for clustering as a fraction of the number of child bones to process" },
		{ "UIMax", "0.500000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterFraction = { "ClusterFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutoClusterDataflowNode, ClusterFraction), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterFraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_SiteSize_MetaData[] = {
		{ "Category", "ClusterSize" },
		{ "ClampMax", "10000" },
		{ "ClampMin", ".0001" },
		{ "Comment", "/** Choose the Edge-Size of the cube used to groups bones under a cluster (in cm). */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Cluster Size" },
		{ "EditCondition", "ClusterSizeMethod == EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_BySize" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Choose the Edge-Size of the cube used to groups bones under a cluster (in cm)." },
		{ "UIMax", "100" },
		{ "UIMin", ".01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_SiteSize = { "SiteSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutoClusterDataflowNode, SiteSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_SiteSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_SiteSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AutoCluster_MetaData[] = {
		{ "Category", "Auto Cluster" },
		{ "Comment", "/** If true, bones will only be added to the same cluster if they are physically connected (either directly, or via other bones in the same cluster) */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "If true, bones will only be added to the same cluster if they are physically connected (either directly, or via other bones in the same cluster)" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AutoCluster_SetBit(void* Obj)
	{
		((FAutoClusterDataflowNode*)Obj)->AutoCluster = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AutoCluster = { "AutoCluster", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAutoClusterDataflowNode), &Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AutoCluster_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AutoCluster_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AutoCluster_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AvoidIsolated_MetaData[] = {
		{ "Category", "Auto Cluster" },
		{ "Comment", "/** If true, prevent the creation of clusters with only a single child. Either by merging into a neighboring cluster, or not creating the cluster. */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "If true, prevent the creation of clusters with only a single child. Either by merging into a neighboring cluster, or not creating the cluster." },
	};
#endif
	void Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AvoidIsolated_SetBit(void* Obj)
	{
		((FAutoClusterDataflowNode*)Obj)->AvoidIsolated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AvoidIsolated = { "AvoidIsolated", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAutoClusterDataflowNode), &Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AvoidIsolated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AvoidIsolated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AvoidIsolated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Fractured GeometryCollection to cluster */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Fractured GeometryCollection to cluster" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutoClusterDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Bone selection for the clustering */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Bone selection for the clustering" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutoClusterDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_TransformSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_TransformSelection_MetaData)) }; // 2616302354
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterSizeMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterSizeMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterSites,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_SiteSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AutoCluster,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AvoidIsolated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_TransformSelection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"AutoClusterDataflowNode",
		sizeof(FAutoClusterDataflowNode),
		alignof(FAutoClusterDataflowNode),
		Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutoClusterDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_AutoClusterDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutoClusterDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutoClusterDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FClusterFlattenDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FClusterFlattenDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClusterFlattenDataflowNode;
class UScriptStruct* FClusterFlattenDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterFlattenDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClusterFlattenDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClusterFlattenDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("ClusterFlattenDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_ClusterFlattenDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FClusterFlattenDataflowNode>()
{
	return FClusterFlattenDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Flattens all bones to level 1\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Flattens all bones to level 1" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClusterFlattenDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Fractured GeometryCollection to flatten */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Fractured GeometryCollection to flatten" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClusterFlattenDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::NewProp_Collection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"ClusterFlattenDataflowNode",
		sizeof(FClusterFlattenDataflowNode),
		alignof(FClusterFlattenDataflowNode),
		Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClusterFlattenDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ClusterFlattenDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClusterFlattenDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClusterFlattenDataflowNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h_Statics::EnumInfo[] = {
		{ EClusterSizeMethodEnum_StaticEnum, TEXT("EClusterSizeMethodEnum"), &Z_Registration_Info_UEnum_EClusterSizeMethodEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1623600397U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h_Statics::ScriptStructInfo[] = {
		{ FAutoClusterDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewStructOps, TEXT("AutoClusterDataflowNode"), &Z_Registration_Info_UScriptStruct_AutoClusterDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutoClusterDataflowNode), 2132466218U) },
		{ FClusterFlattenDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::NewStructOps, TEXT("ClusterFlattenDataflowNode"), &Z_Registration_Info_UScriptStruct_ClusterFlattenDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClusterFlattenDataflowNode), 2226829287U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h_1144843635(TEXT("/Script/GeometryCollectionNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
