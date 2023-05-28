// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/GeometryCollectionUtilityNodes.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionUtilityNodes() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConvexOverlapRemovalMethodEnum;
	static UEnum* EConvexOverlapRemovalMethodEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConvexOverlapRemovalMethodEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConvexOverlapRemovalMethodEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("EConvexOverlapRemovalMethodEnum"));
		}
		return Z_Registration_Info_UEnum_EConvexOverlapRemovalMethodEnum.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<EConvexOverlapRemovalMethodEnum>()
	{
		return EConvexOverlapRemovalMethodEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum_Statics::Enumerators[] = {
		{ "EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_None", (int64)EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_None },
		{ "EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_All", (int64)EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_All },
		{ "EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_OnlyClusters", (int64)EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_OnlyClusters },
		{ "EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_OnlyClustersVsClusters", (int64)EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_OnlyClustersVsClusters },
		{ "EConvexOverlapRemovalMethodEnum::Dataflow_Max", (int64)EConvexOverlapRemovalMethodEnum::Dataflow_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dataflow_EConvexOverlapRemovalMethod_All.DisplayName", "All" },
		{ "Dataflow_EConvexOverlapRemovalMethod_All.Name", "EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_All" },
		{ "Dataflow_EConvexOverlapRemovalMethod_None.DisplayName", "None" },
		{ "Dataflow_EConvexOverlapRemovalMethod_None.Name", "EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_None" },
		{ "Dataflow_EConvexOverlapRemovalMethod_OnlyClusters.DisplayName", "Only Clusters" },
		{ "Dataflow_EConvexOverlapRemovalMethod_OnlyClusters.Name", "EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_OnlyClusters" },
		{ "Dataflow_EConvexOverlapRemovalMethod_OnlyClustersVsClusters.DisplayName", "Only Clusters vs Clusters" },
		{ "Dataflow_EConvexOverlapRemovalMethod_OnlyClustersVsClusters.Name", "EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_OnlyClustersVsClusters" },
		{ "Dataflow_Max.Comment", "//~~~\n//256th entry\n" },
		{ "Dataflow_Max.Hidden", "" },
		{ "Dataflow_Max.Name", "EConvexOverlapRemovalMethodEnum::Dataflow_Max" },
		{ "Dataflow_Max.ToolTip", "256th entry" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		nullptr,
		"EConvexOverlapRemovalMethodEnum",
		"EConvexOverlapRemovalMethodEnum",
		Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum()
	{
		if (!Z_Registration_Info_UEnum_EConvexOverlapRemovalMethodEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConvexOverlapRemovalMethodEnum.InnerSingleton, Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConvexOverlapRemovalMethodEnum.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCreateNonOverlappingConvexHullsDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCreateNonOverlappingConvexHullsDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateNonOverlappingConvexHullsDataflowNode;
class UScriptStruct* FCreateNonOverlappingConvexHullsDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateNonOverlappingConvexHullsDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateNonOverlappingConvexHullsDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CreateNonOverlappingConvexHullsDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CreateNonOverlappingConvexHullsDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCreateNonOverlappingConvexHullsDataflowNode>()
{
	return FCreateNonOverlappingConvexHullsDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanRemoveFraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CanRemoveFraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimplificationDistanceThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SimplificationDistanceThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanExceedFraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CanExceedFraction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OverlapRemovalMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlapRemovalMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OverlapRemovalMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlapRemovalShrinkPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverlapRemovalShrinkPercent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Generates convex hull representation for the bones for simulation\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Generates convex hull representation for the bones for simulation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateNonOverlappingConvexHullsDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateNonOverlappingConvexHullsDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_CanRemoveFraction_MetaData[] = {
		{ "Category", "Convex" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.010000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_CanRemoveFraction = { "CanRemoveFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateNonOverlappingConvexHullsDataflowNode, CanRemoveFraction), METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_CanRemoveFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_CanRemoveFraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_SimplificationDistanceThreshold_MetaData[] = {
		{ "Category", "Convex" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_SimplificationDistanceThreshold = { "SimplificationDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateNonOverlappingConvexHullsDataflowNode, SimplificationDistanceThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_SimplificationDistanceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_SimplificationDistanceThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_CanExceedFraction_MetaData[] = {
		{ "Category", "Convex" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_CanExceedFraction = { "CanExceedFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateNonOverlappingConvexHullsDataflowNode, CanExceedFraction), METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_CanExceedFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_CanExceedFraction_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_OverlapRemovalMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_OverlapRemovalMethod_MetaData[] = {
		{ "Category", "Convex" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_OverlapRemovalMethod = { "OverlapRemovalMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateNonOverlappingConvexHullsDataflowNode, OverlapRemovalMethod), Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_OverlapRemovalMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_OverlapRemovalMethod_MetaData)) }; // 3942874617
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_OverlapRemovalShrinkPercent_MetaData[] = {
		{ "Category", "Convex" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "UIMax", "100.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_OverlapRemovalShrinkPercent = { "OverlapRemovalShrinkPercent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateNonOverlappingConvexHullsDataflowNode, OverlapRemovalShrinkPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_OverlapRemovalShrinkPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_OverlapRemovalShrinkPercent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_CanRemoveFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_SimplificationDistanceThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_CanExceedFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_OverlapRemovalMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_OverlapRemovalMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_OverlapRemovalShrinkPercent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"CreateNonOverlappingConvexHullsDataflowNode",
		sizeof(FCreateNonOverlappingConvexHullsDataflowNode),
		alignof(FCreateNonOverlappingConvexHullsDataflowNode),
		Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CreateNonOverlappingConvexHullsDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateNonOverlappingConvexHullsDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CreateNonOverlappingConvexHullsDataflowNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionUtilityNodes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionUtilityNodes_h_Statics::EnumInfo[] = {
		{ EConvexOverlapRemovalMethodEnum_StaticEnum, TEXT("EConvexOverlapRemovalMethodEnum"), &Z_Registration_Info_UEnum_EConvexOverlapRemovalMethodEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3942874617U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionUtilityNodes_h_Statics::ScriptStructInfo[] = {
		{ FCreateNonOverlappingConvexHullsDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewStructOps, TEXT("CreateNonOverlappingConvexHullsDataflowNode"), &Z_Registration_Info_UScriptStruct_CreateNonOverlappingConvexHullsDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateNonOverlappingConvexHullsDataflowNode), 107659080U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionUtilityNodes_h_364933875(TEXT("/Script/GeometryCollectionNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionUtilityNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionUtilityNodes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionUtilityNodes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionUtilityNodes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
