// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/GeometryCollectionFracturingNodes.h"
#include "Dataflow/DataflowSelection.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionFracturingNodes() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowTransformSelection();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FExplodedViewDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FPlaneCutterDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FUniformScatterPointsDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FUniformScatterPointsDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UniformScatterPointsDataflowNode;
class UScriptStruct* FUniformScatterPointsDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UniformScatterPointsDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UniformScatterPointsDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("UniformScatterPointsDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_UniformScatterPointsDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FUniformScatterPointsDataflowNode>()
{
	return FUniformScatterPointsDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinNumberOfPoints_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinNumberOfPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfPoints_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBox_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBox;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUniformScatterPointsDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_MinNumberOfPoints_MetaData[] = {
		{ "Category", "Scatter" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_MinNumberOfPoints = { "MinNumberOfPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUniformScatterPointsDataflowNode, MinNumberOfPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_MinNumberOfPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_MinNumberOfPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_MaxNumberOfPoints_MetaData[] = {
		{ "Category", "Scatter" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_MaxNumberOfPoints = { "MaxNumberOfPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUniformScatterPointsDataflowNode, MaxNumberOfPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_MaxNumberOfPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_MaxNumberOfPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Scatter" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUniformScatterPointsDataflowNode, RandomSeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_RandomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_RandomSeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_BoundingBox_MetaData[] = {
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_BoundingBox = { "BoundingBox", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUniformScatterPointsDataflowNode, BoundingBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_BoundingBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_BoundingBox_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_Points_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUniformScatterPointsDataflowNode, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_Points_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_MinNumberOfPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_MaxNumberOfPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_RandomSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_BoundingBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewProp_Points,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"UniformScatterPointsDataflowNode",
		sizeof(FUniformScatterPointsDataflowNode),
		alignof(FUniformScatterPointsDataflowNode),
		Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_UniformScatterPointsDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UniformScatterPointsDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UniformScatterPointsDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRadialScatterPointsDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FRadialScatterPointsDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RadialScatterPointsDataflowNode;
class UScriptStruct* FRadialScatterPointsDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RadialScatterPointsDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RadialScatterPointsDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("RadialScatterPointsDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_RadialScatterPointsDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FRadialScatterPointsDataflowNode>()
{
	return FRadialScatterPointsDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularSteps_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AngularSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadialSteps_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RadialSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngleOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variability_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Variability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomSeed;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRadialScatterPointsDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "Scatter" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialScatterPointsDataflowNode, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "Scatter" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialScatterPointsDataflowNode, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Scatter" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.010000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialScatterPointsDataflowNode, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_AngularSteps_MetaData[] = {
		{ "Category", "Scatter" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMax", "50" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_AngularSteps = { "AngularSteps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialScatterPointsDataflowNode, AngularSteps), METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_AngularSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_AngularSteps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_RadialSteps_MetaData[] = {
		{ "Category", "Scatter" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMax", "50" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_RadialSteps = { "RadialSteps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialScatterPointsDataflowNode, RadialSteps), METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_RadialSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_RadialSteps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_AngleOffset_MetaData[] = {
		{ "Category", "Scatter" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_AngleOffset = { "AngleOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialScatterPointsDataflowNode, AngleOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_AngleOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_AngleOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Variability_MetaData[] = {
		{ "Category", "Scatter" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Variability = { "Variability", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialScatterPointsDataflowNode, Variability), METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Variability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Variability_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Scatter" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialScatterPointsDataflowNode, RandomSeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_RandomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_RandomSeed_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Points_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialScatterPointsDataflowNode, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Points_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_AngularSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_RadialSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_AngleOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Variability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_RandomSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewProp_Points,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"RadialScatterPointsDataflowNode",
		sizeof(FRadialScatterPointsDataflowNode),
		alignof(FRadialScatterPointsDataflowNode),
		Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_RadialScatterPointsDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RadialScatterPointsDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RadialScatterPointsDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVoronoiFractureDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FVoronoiFractureDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoronoiFractureDataflowNode;
class UScriptStruct* FVoronoiFractureDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoronoiFractureDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoronoiFractureDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("VoronoiFractureDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_VoronoiFractureDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FVoronoiFractureDataflowNode>()
{
	return FVoronoiFractureDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChanceToFracture_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChanceToFracture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupFracture_MetaData[];
#endif
		static void NewProp_GroupFracture_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_GroupFracture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Grout_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Grout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Persistence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Persistence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lacunarity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Lacunarity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OctaveNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OctaveNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PointSpacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddSamplesForCollision_MetaData[];
#endif
		static void NewProp_AddSamplesForCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AddSamplesForCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSampleSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionSampleSpacing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Generates a Voronoi fracture\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Generates a Voronoi fracture" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoronoiFractureDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoronoiFractureDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Points_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoronoiFractureDataflowNode, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Points_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/**   */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoronoiFractureDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_TransformSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_TransformSelection_MetaData)) }; // 2616302354
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Fracture" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoronoiFractureDataflowNode, RandomSeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_RandomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_RandomSeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_ChanceToFracture_MetaData[] = {
		{ "Category", "Fracture" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_ChanceToFracture = { "ChanceToFracture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoronoiFractureDataflowNode, ChanceToFracture), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_ChanceToFracture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_ChanceToFracture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_GroupFracture_MetaData[] = {
		{ "Category", "Fracture" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_GroupFracture_SetBit(void* Obj)
	{
		((FVoronoiFractureDataflowNode*)Obj)->GroupFracture = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_GroupFracture = { "GroupFracture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVoronoiFractureDataflowNode), &Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_GroupFracture_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_GroupFracture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_GroupFracture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Grout_MetaData[] = {
		{ "Category", "Fracture" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Grout = { "Grout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoronoiFractureDataflowNode, Grout), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Grout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Grout_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Amplitude_MetaData[] = {
		{ "Category", "Noise" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoronoiFractureDataflowNode, Amplitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Amplitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "Noise" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000010" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoronoiFractureDataflowNode, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Persistence_MetaData[] = {
		{ "Category", "Noise" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Persistence = { "Persistence", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoronoiFractureDataflowNode, Persistence), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Persistence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Persistence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Lacunarity_MetaData[] = {
		{ "Category", "Noise" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Lacunarity = { "Lacunarity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoronoiFractureDataflowNode, Lacunarity), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Lacunarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Lacunarity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_OctaveNumber_MetaData[] = {
		{ "Category", "Noise" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_OctaveNumber = { "OctaveNumber", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoronoiFractureDataflowNode, OctaveNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_OctaveNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_OctaveNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_PointSpacing_MetaData[] = {
		{ "Category", "Noise" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_PointSpacing = { "PointSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoronoiFractureDataflowNode, PointSpacing), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_PointSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_PointSpacing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_AddSamplesForCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_AddSamplesForCollision_SetBit(void* Obj)
	{
		((FVoronoiFractureDataflowNode*)Obj)->AddSamplesForCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_AddSamplesForCollision = { "AddSamplesForCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVoronoiFractureDataflowNode), &Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_AddSamplesForCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_AddSamplesForCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_AddSamplesForCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_CollisionSampleSpacing_MetaData[] = {
		{ "Category", "Collision" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_CollisionSampleSpacing = { "CollisionSampleSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoronoiFractureDataflowNode, CollisionSampleSpacing), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_CollisionSampleSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_CollisionSampleSpacing_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_TransformSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_RandomSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_ChanceToFracture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_GroupFracture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Grout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Amplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Persistence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_Lacunarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_OctaveNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_PointSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_AddSamplesForCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewProp_CollisionSampleSpacing,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"VoronoiFractureDataflowNode",
		sizeof(FVoronoiFractureDataflowNode),
		alignof(FVoronoiFractureDataflowNode),
		Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_VoronoiFractureDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoronoiFractureDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoronoiFractureDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPlaneCutterDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FPlaneCutterDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlaneCutterDataflowNode;
class UScriptStruct* FPlaneCutterDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlaneCutterDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlaneCutterDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("PlaneCutterDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_PlaneCutterDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FPlaneCutterDataflowNode>()
{
	return FPlaneCutterDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBox_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumPlanes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumPlanes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Grout_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Grout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Persistence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Persistence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lacunarity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Lacunarity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OctaveNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OctaveNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PointSpacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddSamplesForCollision_MetaData[];
#endif
		static void NewProp_AddSamplesForCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AddSamplesForCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSampleSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionSampleSpacing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Cuts geometry using a set of noised up planes\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "Cuts geometry using a set of noised up planes" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlaneCutterDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlaneCutterDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_BoundingBox_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_BoundingBox = { "BoundingBox", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlaneCutterDataflowNode, BoundingBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_BoundingBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_BoundingBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/**   */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlaneCutterDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_TransformSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_TransformSelection_MetaData)) }; // 2616302354
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_NumPlanes_MetaData[] = {
		{ "Category", "Fracture" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_NumPlanes = { "NumPlanes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlaneCutterDataflowNode, NumPlanes), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_NumPlanes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_NumPlanes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Fracture" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlaneCutterDataflowNode, RandomSeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_RandomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_RandomSeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Grout_MetaData[] = {
		{ "Category", "Fracture" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Grout = { "Grout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlaneCutterDataflowNode, Grout), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Grout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Grout_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Amplitude_MetaData[] = {
		{ "Category", "Noise" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlaneCutterDataflowNode, Amplitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Amplitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "Noise" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000010" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlaneCutterDataflowNode, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Persistence_MetaData[] = {
		{ "Category", "Noise" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Persistence = { "Persistence", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlaneCutterDataflowNode, Persistence), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Persistence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Persistence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Lacunarity_MetaData[] = {
		{ "Category", "Noise" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Lacunarity = { "Lacunarity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlaneCutterDataflowNode, Lacunarity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Lacunarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Lacunarity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_OctaveNumber_MetaData[] = {
		{ "Category", "Noise" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_OctaveNumber = { "OctaveNumber", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlaneCutterDataflowNode, OctaveNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_OctaveNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_OctaveNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_PointSpacing_MetaData[] = {
		{ "Category", "Noise" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_PointSpacing = { "PointSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlaneCutterDataflowNode, PointSpacing), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_PointSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_PointSpacing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_AddSamplesForCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_AddSamplesForCollision_SetBit(void* Obj)
	{
		((FPlaneCutterDataflowNode*)Obj)->AddSamplesForCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_AddSamplesForCollision = { "AddSamplesForCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPlaneCutterDataflowNode), &Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_AddSamplesForCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_AddSamplesForCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_AddSamplesForCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_CollisionSampleSpacing_MetaData[] = {
		{ "Category", "Collision" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_CollisionSampleSpacing = { "CollisionSampleSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlaneCutterDataflowNode, CollisionSampleSpacing), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_CollisionSampleSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_CollisionSampleSpacing_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_BoundingBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_TransformSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_NumPlanes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_RandomSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Grout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Amplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Persistence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_Lacunarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_OctaveNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_PointSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_AddSamplesForCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewProp_CollisionSampleSpacing,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"PlaneCutterDataflowNode",
		sizeof(FPlaneCutterDataflowNode),
		alignof(FPlaneCutterDataflowNode),
		Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlaneCutterDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_PlaneCutterDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlaneCutterDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlaneCutterDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FExplodedViewDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FExplodedViewDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExplodedViewDataflowNode;
class UScriptStruct* FExplodedViewDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExplodedViewDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExplodedViewDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExplodedViewDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("ExplodedViewDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_ExplodedViewDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FExplodedViewDataflowNode>()
{
	return FExplodedViewDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniformScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UniformScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * \"Explodes\" the pieces from the Collection for better visualization\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
		{ "ToolTip", "\"Explodes\" the pieces from the Collection for better visualization" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExplodedViewDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExplodedViewDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::NewProp_UniformScale_MetaData[] = {
		{ "Category", "Scale" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::NewProp_UniformScale = { "UniformScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExplodedViewDataflowNode, UniformScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::NewProp_UniformScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::NewProp_UniformScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Scale" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionFracturingNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExplodedViewDataflowNode, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::NewProp_Scale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::NewProp_UniformScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::NewProp_Scale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"ExplodedViewDataflowNode",
		sizeof(FExplodedViewDataflowNode),
		alignof(FExplodedViewDataflowNode),
		Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExplodedViewDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ExplodedViewDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExplodedViewDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExplodedViewDataflowNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionFracturingNodes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionFracturingNodes_h_Statics::ScriptStructInfo[] = {
		{ FUniformScatterPointsDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FUniformScatterPointsDataflowNode_Statics::NewStructOps, TEXT("UniformScatterPointsDataflowNode"), &Z_Registration_Info_UScriptStruct_UniformScatterPointsDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUniformScatterPointsDataflowNode), 2388013220U) },
		{ FRadialScatterPointsDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FRadialScatterPointsDataflowNode_Statics::NewStructOps, TEXT("RadialScatterPointsDataflowNode"), &Z_Registration_Info_UScriptStruct_RadialScatterPointsDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRadialScatterPointsDataflowNode), 714555272U) },
		{ FVoronoiFractureDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FVoronoiFractureDataflowNode_Statics::NewStructOps, TEXT("VoronoiFractureDataflowNode"), &Z_Registration_Info_UScriptStruct_VoronoiFractureDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoronoiFractureDataflowNode), 2390461826U) },
		{ FPlaneCutterDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FPlaneCutterDataflowNode_Statics::NewStructOps, TEXT("PlaneCutterDataflowNode"), &Z_Registration_Info_UScriptStruct_PlaneCutterDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlaneCutterDataflowNode), 2868352147U) },
		{ FExplodedViewDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FExplodedViewDataflowNode_Statics::NewStructOps, TEXT("ExplodedViewDataflowNode"), &Z_Registration_Info_UScriptStruct_ExplodedViewDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExplodedViewDataflowNode), 3454901155U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionFracturingNodes_h_101249670(TEXT("/Script/GeometryCollectionNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionFracturingNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionFracturingNodes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
