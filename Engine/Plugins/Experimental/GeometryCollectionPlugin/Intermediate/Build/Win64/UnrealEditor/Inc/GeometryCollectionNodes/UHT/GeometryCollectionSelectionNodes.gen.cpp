// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/GeometryCollectionSelectionNodes.h"
#include "Dataflow/DataflowSelection.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionSelectionNodes() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSphere();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowFaceSelection();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowTransformSelection();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowVertexSelection();
	GEOMETRYCOLLECTIONNODES_API UEnum* Z_Construct_UEnum_GeometryCollectionNodes_ERangeSettingEnum();
	GEOMETRYCOLLECTIONNODES_API UEnum* Z_Construct_UEnum_GeometryCollectionNodes_ESelectSubjectTypeEnum();
	GEOMETRYCOLLECTIONNODES_API UEnum* Z_Construct_UEnum_GeometryCollectionNodes_ESetOperationEnum();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionAllDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionChildrenDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionContactDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionInvertDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionLeafDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionNoneDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionParentDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionRootDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionSiblingsDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionVertexSelectionCustomDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FCollectionTransformSelectionAllDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCollectionTransformSelectionAllDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionTransformSelectionAllDataflowNode;
class UScriptStruct* FCollectionTransformSelectionAllDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionAllDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionTransformSelectionAllDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionAllDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CollectionTransformSelectionAllDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionAllDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCollectionTransformSelectionAllDataflowNode>()
{
	return FCollectionTransformSelectionAllDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionTransformSelectionAllDataflowNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionAllDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Selects all the bones for the Collection\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Selects all the bones for the Collection" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionTransformSelectionAllDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionTransformSelectionAllDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionAllDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** GeometryCollection for the selection */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "GeometryCollection for the selection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionAllDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionAllDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionAllDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionAllDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionAllDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Array of the selected bone indicies */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Array of the selected bone indicies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionAllDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionAllDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionAllDataflowNode_Statics::NewProp_TransformSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionAllDataflowNode_Statics::NewProp_TransformSelection_MetaData)) }; // 2616302354
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionTransformSelectionAllDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionAllDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionAllDataflowNode_Statics::NewProp_TransformSelection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionTransformSelectionAllDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"CollectionTransformSelectionAllDataflowNode",
		sizeof(FCollectionTransformSelectionAllDataflowNode),
		alignof(FCollectionTransformSelectionAllDataflowNode),
		Z_Construct_UScriptStruct_FCollectionTransformSelectionAllDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionAllDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionAllDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionAllDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionAllDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionAllDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionTransformSelectionAllDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCollectionTransformSelectionAllDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionAllDataflowNode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESetOperationEnum;
	static UEnum* ESetOperationEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESetOperationEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESetOperationEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionNodes_ESetOperationEnum, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("ESetOperationEnum"));
		}
		return Z_Registration_Info_UEnum_ESetOperationEnum.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<ESetOperationEnum>()
	{
		return ESetOperationEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryCollectionNodes_ESetOperationEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryCollectionNodes_ESetOperationEnum_Statics::Enumerators[] = {
		{ "ESetOperationEnum::Dataflow_SetOperation_AND", (int64)ESetOperationEnum::Dataflow_SetOperation_AND },
		{ "ESetOperationEnum::Dataflow_SetOperation_OR", (int64)ESetOperationEnum::Dataflow_SetOperation_OR },
		{ "ESetOperationEnum::Dataflow_SetOperation_XOR", (int64)ESetOperationEnum::Dataflow_SetOperation_XOR },
		{ "ESetOperationEnum::Dataflow_Max", (int64)ESetOperationEnum::Dataflow_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryCollectionNodes_ESetOperationEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dataflow_Max.Comment", "//~~~\n//256th entry\n" },
		{ "Dataflow_Max.Hidden", "" },
		{ "Dataflow_Max.Name", "ESetOperationEnum::Dataflow_Max" },
		{ "Dataflow_Max.ToolTip", "256th entry" },
		{ "Dataflow_SetOperation_AND.Comment", "/** Bitwise AND of incoming TransformSelections */" },
		{ "Dataflow_SetOperation_AND.DisplayName", "Intersect" },
		{ "Dataflow_SetOperation_AND.Name", "ESetOperationEnum::Dataflow_SetOperation_AND" },
		{ "Dataflow_SetOperation_AND.ToolTip", "Bitwise AND of incoming TransformSelections" },
		{ "Dataflow_SetOperation_OR.Comment", "/** Bitwise OR of incoming TransformSelections */" },
		{ "Dataflow_SetOperation_OR.DisplayName", "Union" },
		{ "Dataflow_SetOperation_OR.Name", "ESetOperationEnum::Dataflow_SetOperation_OR" },
		{ "Dataflow_SetOperation_OR.ToolTip", "Bitwise OR of incoming TransformSelections" },
		{ "Dataflow_SetOperation_XOR.Comment", "/** Bitwise XOR of incoming TransformSelections */" },
		{ "Dataflow_SetOperation_XOR.DisplayName", "Symmetric Difference" },
		{ "Dataflow_SetOperation_XOR.Name", "ESetOperationEnum::Dataflow_SetOperation_XOR" },
		{ "Dataflow_SetOperation_XOR.ToolTip", "Bitwise XOR of incoming TransformSelections" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionNodes_ESetOperationEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		nullptr,
		"ESetOperationEnum",
		"ESetOperationEnum",
		Z_Construct_UEnum_GeometryCollectionNodes_ESetOperationEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_ESetOperationEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryCollectionNodes_ESetOperationEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_ESetOperationEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryCollectionNodes_ESetOperationEnum()
	{
		if (!Z_Registration_Info_UEnum_ESetOperationEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESetOperationEnum.InnerSingleton, Z_Construct_UEnum_GeometryCollectionNodes_ESetOperationEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESetOperationEnum.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCollectionTransformSelectionSetOperationDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCollectionTransformSelectionSetOperationDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionTransformSelectionSetOperationDataflowNode;
class UScriptStruct* FCollectionTransformSelectionSetOperationDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionSetOperationDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionTransformSelectionSetOperationDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CollectionTransformSelectionSetOperationDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionSetOperationDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCollectionTransformSelectionSetOperationDataflowNode>()
{
	return FCollectionTransformSelectionSetOperationDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelectionA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelectionA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelectionB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelectionB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Runs boolean operation on TransformSelections\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Runs boolean operation on TransformSelections" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionTransformSelectionSetOperationDataflowNode>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode_Statics::NewProp_Operation_MetaData[] = {
		{ "Category", "Compare" },
		{ "Comment", "/** Boolean operation */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Boolean operation" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionSetOperationDataflowNode, Operation), Z_Construct_UEnum_GeometryCollectionNodes_ESetOperationEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode_Statics::NewProp_Operation_MetaData)) }; // 2926836988
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode_Statics::NewProp_TransformSelectionA_MetaData[] = {
		{ "Comment", "/** Array of the selected bone indicies */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DisplayName", "TransformSelectionA" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Array of the selected bone indicies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode_Statics::NewProp_TransformSelectionA = { "TransformSelectionA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionSetOperationDataflowNode, TransformSelectionA), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode_Statics::NewProp_TransformSelectionA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode_Statics::NewProp_TransformSelectionA_MetaData)) }; // 2616302354
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode_Statics::NewProp_TransformSelectionB_MetaData[] = {
		{ "Comment", "/** Array of the selected bone indicies */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DisplayName", "TransformSelectionB" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Array of the selected bone indicies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode_Statics::NewProp_TransformSelectionB = { "TransformSelectionB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionSetOperationDataflowNode, TransformSelectionB), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode_Statics::NewProp_TransformSelectionB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode_Statics::NewProp_TransformSelectionB_MetaData)) }; // 2616302354
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Array of the selected bone indicies after operation*/" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "TransformSelectionA" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Array of the selected bone indicies after operation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionSetOperationDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode_Statics::NewProp_TransformSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode_Statics::NewProp_TransformSelection_MetaData)) }; // 2616302354
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode_Statics::NewProp_Operation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode_Statics::NewProp_Operation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode_Statics::NewProp_TransformSelectionA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode_Statics::NewProp_TransformSelectionB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode_Statics::NewProp_TransformSelection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"CollectionTransformSelectionSetOperationDataflowNode",
		sizeof(FCollectionTransformSelectionSetOperationDataflowNode),
		alignof(FCollectionTransformSelectionSetOperationDataflowNode),
		Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionSetOperationDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionTransformSelectionSetOperationDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionSetOperationDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCollectionTransformSelectionInfoDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCollectionTransformSelectionInfoDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionTransformSelectionInfoDataflowNode;
class UScriptStruct* FCollectionTransformSelectionInfoDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionInfoDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionTransformSelectionInfoDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CollectionTransformSelectionInfoDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionInfoDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCollectionTransformSelectionInfoDataflowNode>()
{
	return FCollectionTransformSelectionInfoDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Generates a formatted string of the bones and the selection\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Generates a formatted string of the bones and the selection" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionTransformSelectionInfoDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Array of the selected bone indicies */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Array of the selected bone indicies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionInfoDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode_Statics::NewProp_TransformSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode_Statics::NewProp_TransformSelection_MetaData)) }; // 2616302354
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** GeometryCollection for the selection */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "GeometryCollection for the selection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionInfoDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode_Statics::NewProp_String_MetaData[] = {
		{ "Comment", "/** Formatted string of the bones and selection */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Formatted string of the bones and selection" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionInfoDataflowNode, String), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode_Statics::NewProp_String_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode_Statics::NewProp_TransformSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode_Statics::NewProp_String,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"CollectionTransformSelectionInfoDataflowNode",
		sizeof(FCollectionTransformSelectionInfoDataflowNode),
		alignof(FCollectionTransformSelectionInfoDataflowNode),
		Z_Construct_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionInfoDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionTransformSelectionInfoDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionInfoDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCollectionTransformSelectionNoneDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCollectionTransformSelectionNoneDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionTransformSelectionNoneDataflowNode;
class UScriptStruct* FCollectionTransformSelectionNoneDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionNoneDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionTransformSelectionNoneDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionNoneDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CollectionTransformSelectionNoneDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionNoneDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCollectionTransformSelectionNoneDataflowNode>()
{
	return FCollectionTransformSelectionNoneDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionTransformSelectionNoneDataflowNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionNoneDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Generates an empty bone selection for the Collection\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Generates an empty bone selection for the Collection" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionTransformSelectionNoneDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionTransformSelectionNoneDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionNoneDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** GeometryCollection for the selection */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "GeometryCollection for the selection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionNoneDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionNoneDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionNoneDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionNoneDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionNoneDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Array of the selected bone indicies */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Array of the selected bone indicies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionNoneDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionNoneDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionNoneDataflowNode_Statics::NewProp_TransformSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionNoneDataflowNode_Statics::NewProp_TransformSelection_MetaData)) }; // 2616302354
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionTransformSelectionNoneDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionNoneDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionNoneDataflowNode_Statics::NewProp_TransformSelection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionTransformSelectionNoneDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"CollectionTransformSelectionNoneDataflowNode",
		sizeof(FCollectionTransformSelectionNoneDataflowNode),
		alignof(FCollectionTransformSelectionNoneDataflowNode),
		Z_Construct_UScriptStruct_FCollectionTransformSelectionNoneDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionNoneDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionNoneDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionNoneDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionNoneDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionNoneDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionTransformSelectionNoneDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCollectionTransformSelectionNoneDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionNoneDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCollectionTransformSelectionInvertDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCollectionTransformSelectionInvertDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionTransformSelectionInvertDataflowNode;
class UScriptStruct* FCollectionTransformSelectionInvertDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionInvertDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionTransformSelectionInvertDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionInvertDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CollectionTransformSelectionInvertDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionInvertDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCollectionTransformSelectionInvertDataflowNode>()
{
	return FCollectionTransformSelectionInvertDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionTransformSelectionInvertDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionInvertDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Inverts selection of bones\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Inverts selection of bones" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionTransformSelectionInvertDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionTransformSelectionInvertDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionInvertDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Array of the selected bone indicies */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "TransformSelection" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Array of the selected bone indicies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionInvertDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionInvertDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionInvertDataflowNode_Statics::NewProp_TransformSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionInvertDataflowNode_Statics::NewProp_TransformSelection_MetaData)) }; // 2616302354
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionTransformSelectionInvertDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionInvertDataflowNode_Statics::NewProp_TransformSelection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionTransformSelectionInvertDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"CollectionTransformSelectionInvertDataflowNode",
		sizeof(FCollectionTransformSelectionInvertDataflowNode),
		alignof(FCollectionTransformSelectionInvertDataflowNode),
		Z_Construct_UScriptStruct_FCollectionTransformSelectionInvertDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionInvertDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionInvertDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionInvertDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionInvertDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionInvertDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionTransformSelectionInvertDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCollectionTransformSelectionInvertDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionInvertDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCollectionTransformSelectionRandomDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCollectionTransformSelectionRandomDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionTransformSelectionRandomDataflowNode;
class UScriptStruct* FCollectionTransformSelectionRandomDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionRandomDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionTransformSelectionRandomDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CollectionTransformSelectionRandomDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionRandomDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCollectionTransformSelectionRandomDataflowNode>()
{
	return FCollectionTransformSelectionRandomDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeterministic_MetaData[];
#endif
		static void NewProp_bDeterministic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeterministic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomThreshold;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Selects bones randomly in the Collection\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Selects bones randomly in the Collection" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionTransformSelectionRandomDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::NewProp_bDeterministic_MetaData[] = {
		{ "Category", "Random" },
		{ "Comment", "/** If true, it always generates the same result for the same RandomSeed */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "If true, it always generates the same result for the same RandomSeed" },
	};
#endif
	void Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::NewProp_bDeterministic_SetBit(void* Obj)
	{
		((FCollectionTransformSelectionRandomDataflowNode*)Obj)->bDeterministic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::NewProp_bDeterministic = { "bDeterministic", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCollectionTransformSelectionRandomDataflowNode), &Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::NewProp_bDeterministic_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::NewProp_bDeterministic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::NewProp_bDeterministic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Random" },
		{ "Comment", "/** Seed for the random generation, only used if Deterministic is on */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "bDeterministic" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Seed for the random generation, only used if Deterministic is on" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionRandomDataflowNode, RandomSeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::NewProp_RandomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::NewProp_RandomSeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::NewProp_RandomThreshold_MetaData[] = {
		{ "Category", "Random" },
		{ "Comment", "/** Bones get selected if RandomValue > RandomThreshold */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Bones get selected if RandomValue > RandomThreshold" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::NewProp_RandomThreshold = { "RandomThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionRandomDataflowNode, RandomThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::NewProp_RandomThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::NewProp_RandomThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** GeometryCollection for the selection */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "GeometryCollection for the selection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionRandomDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Array of the selected bone indicies */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Array of the selected bone indicies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionRandomDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::NewProp_TransformSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::NewProp_TransformSelection_MetaData)) }; // 2616302354
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::NewProp_bDeterministic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::NewProp_RandomSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::NewProp_RandomThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::NewProp_TransformSelection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"CollectionTransformSelectionRandomDataflowNode",
		sizeof(FCollectionTransformSelectionRandomDataflowNode),
		alignof(FCollectionTransformSelectionRandomDataflowNode),
		Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionRandomDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionTransformSelectionRandomDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionRandomDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCollectionTransformSelectionRootDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCollectionTransformSelectionRootDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionTransformSelectionRootDataflowNode;
class UScriptStruct* FCollectionTransformSelectionRootDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionRootDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionTransformSelectionRootDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionRootDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CollectionTransformSelectionRootDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionRootDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCollectionTransformSelectionRootDataflowNode>()
{
	return FCollectionTransformSelectionRootDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionTransformSelectionRootDataflowNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionRootDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Selects the root bones in the Collection\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Selects the root bones in the Collection" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionTransformSelectionRootDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionTransformSelectionRootDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionRootDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** GeometryCollection for the selection */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "GeometryCollection for the selection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionRootDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionRootDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionRootDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionRootDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionRootDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Array of the selected bone indicies */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Array of the selected bone indicies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionRootDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionRootDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionRootDataflowNode_Statics::NewProp_TransformSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionRootDataflowNode_Statics::NewProp_TransformSelection_MetaData)) }; // 2616302354
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionTransformSelectionRootDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionRootDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionRootDataflowNode_Statics::NewProp_TransformSelection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionTransformSelectionRootDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"CollectionTransformSelectionRootDataflowNode",
		sizeof(FCollectionTransformSelectionRootDataflowNode),
		alignof(FCollectionTransformSelectionRootDataflowNode),
		Z_Construct_UScriptStruct_FCollectionTransformSelectionRootDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionRootDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionRootDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionRootDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionRootDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionRootDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionTransformSelectionRootDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCollectionTransformSelectionRootDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionRootDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCollectionTransformSelectionCustomDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCollectionTransformSelectionCustomDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionTransformSelectionCustomDataflowNode;
class UScriptStruct* FCollectionTransformSelectionCustomDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionCustomDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionTransformSelectionCustomDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CollectionTransformSelectionCustomDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionCustomDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCollectionTransformSelectionCustomDataflowNode>()
{
	return FCollectionTransformSelectionCustomDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneIndicies_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BoneIndicies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n * Selects specified bones in the GeometryCollection by using a \n * space separated list\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Selects specified bones in the GeometryCollection by using a\nspace separated list" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionTransformSelectionCustomDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** GeometryCollection for the selection */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "GeometryCollection for the selection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionCustomDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_Statics::NewProp_BoneIndicies_MetaData[] = {
		{ "Category", "Selection" },
		{ "Comment", "/** Space separated list of bone indicies to specify the selection */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Space separated list of bone indicies to specify the selection" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_Statics::NewProp_BoneIndicies = { "BoneIndicies", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionCustomDataflowNode, BoneIndicies), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_Statics::NewProp_BoneIndicies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_Statics::NewProp_BoneIndicies_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Array of the selected bone indicies */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Array of the selected bone indicies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionCustomDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_Statics::NewProp_TransformSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_Statics::NewProp_TransformSelection_MetaData)) }; // 2616302354
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_Statics::NewProp_BoneIndicies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_Statics::NewProp_TransformSelection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"CollectionTransformSelectionCustomDataflowNode",
		sizeof(FCollectionTransformSelectionCustomDataflowNode),
		alignof(FCollectionTransformSelectionCustomDataflowNode),
		Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionCustomDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionTransformSelectionCustomDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionCustomDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCollectionTransformSelectionParentDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCollectionTransformSelectionParentDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionTransformSelectionParentDataflowNode;
class UScriptStruct* FCollectionTransformSelectionParentDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionParentDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionTransformSelectionParentDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionParentDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CollectionTransformSelectionParentDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionParentDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCollectionTransformSelectionParentDataflowNode>()
{
	return FCollectionTransformSelectionParentDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionTransformSelectionParentDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionParentDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Selects the parents of the currently selected bones\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Selects the parents of the currently selected bones" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionTransformSelectionParentDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionTransformSelectionParentDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionParentDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Array of the selected bone indicies */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "TransformSelection" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Array of the selected bone indicies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionParentDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionParentDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionParentDataflowNode_Statics::NewProp_TransformSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionParentDataflowNode_Statics::NewProp_TransformSelection_MetaData)) }; // 2616302354
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionParentDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** GeometryCollection for the selection */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "GeometryCollection for the selection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionParentDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionParentDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionParentDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionParentDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionTransformSelectionParentDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionParentDataflowNode_Statics::NewProp_TransformSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionParentDataflowNode_Statics::NewProp_Collection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionTransformSelectionParentDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"CollectionTransformSelectionParentDataflowNode",
		sizeof(FCollectionTransformSelectionParentDataflowNode),
		alignof(FCollectionTransformSelectionParentDataflowNode),
		Z_Construct_UScriptStruct_FCollectionTransformSelectionParentDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionParentDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionParentDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionParentDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionParentDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionParentDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionTransformSelectionParentDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCollectionTransformSelectionParentDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionParentDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCollectionTransformSelectionByPercentageDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCollectionTransformSelectionByPercentageDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionTransformSelectionByPercentageDataflowNode;
class UScriptStruct* FCollectionTransformSelectionByPercentageDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionByPercentageDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionTransformSelectionByPercentageDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CollectionTransformSelectionByPercentageDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionByPercentageDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCollectionTransformSelectionByPercentageDataflowNode>()
{
	return FCollectionTransformSelectionByPercentageDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Percentage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Percentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeterministic_MetaData[];
#endif
		static void NewProp_bDeterministic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeterministic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomSeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Outputs the specified percentage of the selected bones\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Outputs the specified percentage of the selected bones" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionTransformSelectionByPercentageDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Array of the selected bone indicies */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "TransformSelection" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Array of the selected bone indicies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionByPercentageDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode_Statics::NewProp_TransformSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode_Statics::NewProp_TransformSelection_MetaData)) }; // 2616302354
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode_Statics::NewProp_Percentage_MetaData[] = {
		{ "Category", "Selection" },
		{ "Comment", "/** Percentage to keep from the original selection */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Percentage to keep from the original selection" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode_Statics::NewProp_Percentage = { "Percentage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionByPercentageDataflowNode, Percentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode_Statics::NewProp_Percentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode_Statics::NewProp_Percentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode_Statics::NewProp_bDeterministic_MetaData[] = {
		{ "Category", "Random" },
		{ "Comment", "/** Sets the random generation to deterministic */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Sets the random generation to deterministic" },
	};
#endif
	void Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode_Statics::NewProp_bDeterministic_SetBit(void* Obj)
	{
		((FCollectionTransformSelectionByPercentageDataflowNode*)Obj)->bDeterministic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode_Statics::NewProp_bDeterministic = { "bDeterministic", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCollectionTransformSelectionByPercentageDataflowNode), &Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode_Statics::NewProp_bDeterministic_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode_Statics::NewProp_bDeterministic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode_Statics::NewProp_bDeterministic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode_Statics::NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Random" },
		{ "Comment", "/** Seed value for the random generation */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "bDeterministic" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Seed value for the random generation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionByPercentageDataflowNode, RandomSeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode_Statics::NewProp_RandomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode_Statics::NewProp_RandomSeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode_Statics::NewProp_TransformSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode_Statics::NewProp_Percentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode_Statics::NewProp_bDeterministic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode_Statics::NewProp_RandomSeed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"CollectionTransformSelectionByPercentageDataflowNode",
		sizeof(FCollectionTransformSelectionByPercentageDataflowNode),
		alignof(FCollectionTransformSelectionByPercentageDataflowNode),
		Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionByPercentageDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionTransformSelectionByPercentageDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionByPercentageDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCollectionTransformSelectionChildrenDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCollectionTransformSelectionChildrenDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionTransformSelectionChildrenDataflowNode;
class UScriptStruct* FCollectionTransformSelectionChildrenDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionChildrenDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionTransformSelectionChildrenDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionChildrenDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CollectionTransformSelectionChildrenDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionChildrenDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCollectionTransformSelectionChildrenDataflowNode>()
{
	return FCollectionTransformSelectionChildrenDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionTransformSelectionChildrenDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionChildrenDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Selects the children of the selected bones\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Selects the children of the selected bones" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionTransformSelectionChildrenDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionTransformSelectionChildrenDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionChildrenDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Array of the selected bone indicies */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "TransformSelection" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Array of the selected bone indicies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionChildrenDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionChildrenDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionChildrenDataflowNode_Statics::NewProp_TransformSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionChildrenDataflowNode_Statics::NewProp_TransformSelection_MetaData)) }; // 2616302354
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionChildrenDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** GeometryCollection for the selection */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "GeometryCollection for the selection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionChildrenDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionChildrenDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionChildrenDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionChildrenDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionTransformSelectionChildrenDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionChildrenDataflowNode_Statics::NewProp_TransformSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionChildrenDataflowNode_Statics::NewProp_Collection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionTransformSelectionChildrenDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"CollectionTransformSelectionChildrenDataflowNode",
		sizeof(FCollectionTransformSelectionChildrenDataflowNode),
		alignof(FCollectionTransformSelectionChildrenDataflowNode),
		Z_Construct_UScriptStruct_FCollectionTransformSelectionChildrenDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionChildrenDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionChildrenDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionChildrenDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionChildrenDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionChildrenDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionTransformSelectionChildrenDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCollectionTransformSelectionChildrenDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionChildrenDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCollectionTransformSelectionSiblingsDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCollectionTransformSelectionSiblingsDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionTransformSelectionSiblingsDataflowNode;
class UScriptStruct* FCollectionTransformSelectionSiblingsDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionSiblingsDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionTransformSelectionSiblingsDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionSiblingsDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CollectionTransformSelectionSiblingsDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionSiblingsDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCollectionTransformSelectionSiblingsDataflowNode>()
{
	return FCollectionTransformSelectionSiblingsDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionTransformSelectionSiblingsDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionSiblingsDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Selects the siblings of the selected bones\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Selects the siblings of the selected bones" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionTransformSelectionSiblingsDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionTransformSelectionSiblingsDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionSiblingsDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Array of the selected bone indicies */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "TransformSelection" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Array of the selected bone indicies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionSiblingsDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionSiblingsDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionSiblingsDataflowNode_Statics::NewProp_TransformSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionSiblingsDataflowNode_Statics::NewProp_TransformSelection_MetaData)) }; // 2616302354
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionSiblingsDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** GeometryCollection for the selection */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "GeometryCollection for the selection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionSiblingsDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionSiblingsDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionSiblingsDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionSiblingsDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionTransformSelectionSiblingsDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionSiblingsDataflowNode_Statics::NewProp_TransformSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionSiblingsDataflowNode_Statics::NewProp_Collection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionTransformSelectionSiblingsDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"CollectionTransformSelectionSiblingsDataflowNode",
		sizeof(FCollectionTransformSelectionSiblingsDataflowNode),
		alignof(FCollectionTransformSelectionSiblingsDataflowNode),
		Z_Construct_UScriptStruct_FCollectionTransformSelectionSiblingsDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionSiblingsDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionSiblingsDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionSiblingsDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionSiblingsDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionSiblingsDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionTransformSelectionSiblingsDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCollectionTransformSelectionSiblingsDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionSiblingsDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCollectionTransformSelectionLevelDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCollectionTransformSelectionLevelDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionTransformSelectionLevelDataflowNode;
class UScriptStruct* FCollectionTransformSelectionLevelDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionLevelDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionTransformSelectionLevelDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CollectionTransformSelectionLevelDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionLevelDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCollectionTransformSelectionLevelDataflowNode>()
{
	return FCollectionTransformSelectionLevelDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Selects the level of the selected bones\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Selects the level of the selected bones" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionTransformSelectionLevelDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Array of the selected bone indicies */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "TransformSelection" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Array of the selected bone indicies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionLevelDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode_Statics::NewProp_TransformSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode_Statics::NewProp_TransformSelection_MetaData)) }; // 2616302354
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** GeometryCollection for the selection */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "GeometryCollection for the selection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionLevelDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode_Statics::NewProp_TransformSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode_Statics::NewProp_Collection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"CollectionTransformSelectionLevelDataflowNode",
		sizeof(FCollectionTransformSelectionLevelDataflowNode),
		alignof(FCollectionTransformSelectionLevelDataflowNode),
		Z_Construct_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionLevelDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionTransformSelectionLevelDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionLevelDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCollectionTransformSelectionContactDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCollectionTransformSelectionContactDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionTransformSelectionContactDataflowNode;
class UScriptStruct* FCollectionTransformSelectionContactDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionContactDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionTransformSelectionContactDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionContactDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CollectionTransformSelectionContactDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionContactDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCollectionTransformSelectionContactDataflowNode>()
{
	return FCollectionTransformSelectionContactDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionTransformSelectionContactDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionContactDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Selects the contact(s) of the selected bones\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Selects the contact(s) of the selected bones" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionTransformSelectionContactDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionTransformSelectionContactDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionContactDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Array of the selected bone indicies */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "TransformSelection" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Array of the selected bone indicies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionContactDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionContactDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionContactDataflowNode_Statics::NewProp_TransformSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionContactDataflowNode_Statics::NewProp_TransformSelection_MetaData)) }; // 2616302354
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionContactDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** GeometryCollection for the selection */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "GeometryCollection for the selection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionContactDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionContactDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionContactDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionContactDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionTransformSelectionContactDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionContactDataflowNode_Statics::NewProp_TransformSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionContactDataflowNode_Statics::NewProp_Collection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionTransformSelectionContactDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"CollectionTransformSelectionContactDataflowNode",
		sizeof(FCollectionTransformSelectionContactDataflowNode),
		alignof(FCollectionTransformSelectionContactDataflowNode),
		Z_Construct_UScriptStruct_FCollectionTransformSelectionContactDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionContactDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionContactDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionContactDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionContactDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionContactDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionTransformSelectionContactDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCollectionTransformSelectionContactDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionContactDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCollectionTransformSelectionLeafDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCollectionTransformSelectionLeafDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionTransformSelectionLeafDataflowNode;
class UScriptStruct* FCollectionTransformSelectionLeafDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionLeafDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionTransformSelectionLeafDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionLeafDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CollectionTransformSelectionLeafDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionLeafDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCollectionTransformSelectionLeafDataflowNode>()
{
	return FCollectionTransformSelectionLeafDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionTransformSelectionLeafDataflowNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionLeafDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Selects the leaves in the Collection\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Selects the leaves in the Collection" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionTransformSelectionLeafDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionTransformSelectionLeafDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionLeafDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** GeometryCollection for the selection */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "GeometryCollection for the selection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionLeafDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionLeafDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionLeafDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionLeafDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionLeafDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Array of the selected bone indicies */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Array of the selected bone indicies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionLeafDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionLeafDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionLeafDataflowNode_Statics::NewProp_TransformSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionLeafDataflowNode_Statics::NewProp_TransformSelection_MetaData)) }; // 2616302354
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionTransformSelectionLeafDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionLeafDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionLeafDataflowNode_Statics::NewProp_TransformSelection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionTransformSelectionLeafDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"CollectionTransformSelectionLeafDataflowNode",
		sizeof(FCollectionTransformSelectionLeafDataflowNode),
		alignof(FCollectionTransformSelectionLeafDataflowNode),
		Z_Construct_UScriptStruct_FCollectionTransformSelectionLeafDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionLeafDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionLeafDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionLeafDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionLeafDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionLeafDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionTransformSelectionLeafDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCollectionTransformSelectionLeafDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionLeafDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCollectionTransformSelectionClusterDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCollectionTransformSelectionClusterDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionTransformSelectionClusterDataflowNode;
class UScriptStruct* FCollectionTransformSelectionClusterDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionClusterDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionTransformSelectionClusterDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CollectionTransformSelectionClusterDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionClusterDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCollectionTransformSelectionClusterDataflowNode>()
{
	return FCollectionTransformSelectionClusterDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Selects the clusters in the Collection\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Selects the clusters in the Collection" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionTransformSelectionClusterDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** GeometryCollection for the selection */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "GeometryCollection for the selection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionClusterDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Array of the selected bone indicies */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Array of the selected bone indicies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionClusterDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode_Statics::NewProp_TransformSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode_Statics::NewProp_TransformSelection_MetaData)) }; // 2616302354
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode_Statics::NewProp_TransformSelection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"CollectionTransformSelectionClusterDataflowNode",
		sizeof(FCollectionTransformSelectionClusterDataflowNode),
		alignof(FCollectionTransformSelectionClusterDataflowNode),
		Z_Construct_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionClusterDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionTransformSelectionClusterDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionClusterDataflowNode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERangeSettingEnum;
	static UEnum* ERangeSettingEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERangeSettingEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERangeSettingEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionNodes_ERangeSettingEnum, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("ERangeSettingEnum"));
		}
		return Z_Registration_Info_UEnum_ERangeSettingEnum.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<ERangeSettingEnum>()
	{
		return ERangeSettingEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryCollectionNodes_ERangeSettingEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryCollectionNodes_ERangeSettingEnum_Statics::Enumerators[] = {
		{ "ERangeSettingEnum::Dataflow_RangeSetting_InsideRange", (int64)ERangeSettingEnum::Dataflow_RangeSetting_InsideRange },
		{ "ERangeSettingEnum::Dataflow_RangeSetting_OutsideRange", (int64)ERangeSettingEnum::Dataflow_RangeSetting_OutsideRange },
		{ "ERangeSettingEnum::Dataflow_Max", (int64)ERangeSettingEnum::Dataflow_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryCollectionNodes_ERangeSettingEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dataflow_Max.Comment", "//~~~\n//256th entry\n" },
		{ "Dataflow_Max.Hidden", "" },
		{ "Dataflow_Max.Name", "ERangeSettingEnum::Dataflow_Max" },
		{ "Dataflow_Max.ToolTip", "256th entry" },
		{ "Dataflow_RangeSetting_InsideRange.Comment", "/** Values for selection must be inside of the specified range */" },
		{ "Dataflow_RangeSetting_InsideRange.DisplayName", "Inside Range" },
		{ "Dataflow_RangeSetting_InsideRange.Name", "ERangeSettingEnum::Dataflow_RangeSetting_InsideRange" },
		{ "Dataflow_RangeSetting_InsideRange.ToolTip", "Values for selection must be inside of the specified range" },
		{ "Dataflow_RangeSetting_OutsideRange.Comment", "/** Values for selection must be outside of the specified range */" },
		{ "Dataflow_RangeSetting_OutsideRange.DisplayName", "Outside Range" },
		{ "Dataflow_RangeSetting_OutsideRange.Name", "ERangeSettingEnum::Dataflow_RangeSetting_OutsideRange" },
		{ "Dataflow_RangeSetting_OutsideRange.ToolTip", "Values for selection must be outside of the specified range" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionNodes_ERangeSettingEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		nullptr,
		"ERangeSettingEnum",
		"ERangeSettingEnum",
		Z_Construct_UEnum_GeometryCollectionNodes_ERangeSettingEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_ERangeSettingEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryCollectionNodes_ERangeSettingEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_ERangeSettingEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryCollectionNodes_ERangeSettingEnum()
	{
		if (!Z_Registration_Info_UEnum_ERangeSettingEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERangeSettingEnum.InnerSingleton, Z_Construct_UEnum_GeometryCollectionNodes_ERangeSettingEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERangeSettingEnum.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCollectionTransformSelectionBySizeDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCollectionTransformSelectionBySizeDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionTransformSelectionBySizeDataflowNode;
class UScriptStruct* FCollectionTransformSelectionBySizeDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionBySizeDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionTransformSelectionBySizeDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CollectionTransformSelectionBySizeDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionBySizeDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCollectionTransformSelectionBySizeDataflowNode>()
{
	return FCollectionTransformSelectionBySizeDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SizeMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SizeMax;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RangeSetting_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RangeSetting_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RangeSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInclusive_MetaData[];
#endif
		static void NewProp_bInclusive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInclusive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Selects pieces based on their size\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Selects pieces based on their size" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionTransformSelectionBySizeDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** GeometryCollection for the selection */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "GeometryCollection for the selection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionBySizeDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_SizeMin_MetaData[] = {
		{ "Category", "Size" },
		{ "Comment", "/** Minimum size for the selection */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Minimum size for the selection" },
		{ "UIMax", "1000000000.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_SizeMin = { "SizeMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionBySizeDataflowNode, SizeMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_SizeMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_SizeMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_SizeMax_MetaData[] = {
		{ "Category", "Size" },
		{ "Comment", "/** Maximum size for the selection */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Maximum size for the selection" },
		{ "UIMax", "1000000000.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_SizeMax = { "SizeMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionBySizeDataflowNode, SizeMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_SizeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_SizeMax_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_RangeSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_RangeSetting_MetaData[] = {
		{ "Category", "Size" },
		{ "Comment", "/** Values for the selection has to be inside or outside [Min, Max] range */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Values for the selection has to be inside or outside [Min, Max] range" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_RangeSetting = { "RangeSetting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionBySizeDataflowNode, RangeSetting), Z_Construct_UEnum_GeometryCollectionNodes_ERangeSettingEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_RangeSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_RangeSetting_MetaData)) }; // 3023430103
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_bInclusive_MetaData[] = {
		{ "Category", "Size" },
		{ "Comment", "/** If true then range includes Min and Max values */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "If true then range includes Min and Max values" },
	};
#endif
	void Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_bInclusive_SetBit(void* Obj)
	{
		((FCollectionTransformSelectionBySizeDataflowNode*)Obj)->bInclusive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_bInclusive = { "bInclusive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCollectionTransformSelectionBySizeDataflowNode), &Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_bInclusive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_bInclusive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_bInclusive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Array of the selected bone indicies */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Array of the selected bone indicies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionBySizeDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_TransformSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_TransformSelection_MetaData)) }; // 2616302354
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_SizeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_SizeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_RangeSetting_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_RangeSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_bInclusive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewProp_TransformSelection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"CollectionTransformSelectionBySizeDataflowNode",
		sizeof(FCollectionTransformSelectionBySizeDataflowNode),
		alignof(FCollectionTransformSelectionBySizeDataflowNode),
		Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionBySizeDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionTransformSelectionBySizeDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionBySizeDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCollectionTransformSelectionByVolumeDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCollectionTransformSelectionByVolumeDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionTransformSelectionByVolumeDataflowNode;
class UScriptStruct* FCollectionTransformSelectionByVolumeDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionByVolumeDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionTransformSelectionByVolumeDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CollectionTransformSelectionByVolumeDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionByVolumeDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCollectionTransformSelectionByVolumeDataflowNode>()
{
	return FCollectionTransformSelectionByVolumeDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMax;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RangeSetting_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RangeSetting_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RangeSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInclusive_MetaData[];
#endif
		static void NewProp_bInclusive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInclusive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Selects pieces based on their volume\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Selects pieces based on their volume" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionTransformSelectionByVolumeDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** GeometryCollection for the selection */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "GeometryCollection for the selection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionByVolumeDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_VolumeMin_MetaData[] = {
		{ "Category", "Volume" },
		{ "Comment", "/** Minimum volume for the selection */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Minimum volume for the selection" },
		{ "UIMax", "1000000000.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_VolumeMin = { "VolumeMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionByVolumeDataflowNode, VolumeMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_VolumeMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_VolumeMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_VolumeMax_MetaData[] = {
		{ "Category", "Volume" },
		{ "Comment", "/** Maximum volume for the selection */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Maximum volume for the selection" },
		{ "UIMax", "1000000000.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_VolumeMax = { "VolumeMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionByVolumeDataflowNode, VolumeMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_VolumeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_VolumeMax_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_RangeSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_RangeSetting_MetaData[] = {
		{ "Category", "Volume" },
		{ "Comment", "/** Values for the selection has to be inside or outside [Min, Max] range */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Values for the selection has to be inside or outside [Min, Max] range" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_RangeSetting = { "RangeSetting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionByVolumeDataflowNode, RangeSetting), Z_Construct_UEnum_GeometryCollectionNodes_ERangeSettingEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_RangeSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_RangeSetting_MetaData)) }; // 3023430103
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_bInclusive_MetaData[] = {
		{ "Category", "Volume" },
		{ "Comment", "/** If true then range includes Min and Max values */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "If true then range includes Min and Max values" },
	};
#endif
	void Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_bInclusive_SetBit(void* Obj)
	{
		((FCollectionTransformSelectionByVolumeDataflowNode*)Obj)->bInclusive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_bInclusive = { "bInclusive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCollectionTransformSelectionByVolumeDataflowNode), &Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_bInclusive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_bInclusive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_bInclusive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Array of the selected bone indicies */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Array of the selected bone indicies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionByVolumeDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_TransformSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_TransformSelection_MetaData)) }; // 2616302354
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_VolumeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_VolumeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_RangeSetting_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_RangeSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_bInclusive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewProp_TransformSelection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"CollectionTransformSelectionByVolumeDataflowNode",
		sizeof(FCollectionTransformSelectionByVolumeDataflowNode),
		alignof(FCollectionTransformSelectionByVolumeDataflowNode),
		Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionByVolumeDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionTransformSelectionByVolumeDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionByVolumeDataflowNode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESelectSubjectTypeEnum;
	static UEnum* ESelectSubjectTypeEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESelectSubjectTypeEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESelectSubjectTypeEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionNodes_ESelectSubjectTypeEnum, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("ESelectSubjectTypeEnum"));
		}
		return Z_Registration_Info_UEnum_ESelectSubjectTypeEnum.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<ESelectSubjectTypeEnum>()
	{
		return ESelectSubjectTypeEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryCollectionNodes_ESelectSubjectTypeEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryCollectionNodes_ESelectSubjectTypeEnum_Statics::Enumerators[] = {
		{ "ESelectSubjectTypeEnum::Dataflow_SelectSubjectType_Vertices", (int64)ESelectSubjectTypeEnum::Dataflow_SelectSubjectType_Vertices },
		{ "ESelectSubjectTypeEnum::Dataflow_SelectSubjectType_BoundingBox", (int64)ESelectSubjectTypeEnum::Dataflow_SelectSubjectType_BoundingBox },
		{ "ESelectSubjectTypeEnum::Dataflow_SelectSubjectType_Centroid", (int64)ESelectSubjectTypeEnum::Dataflow_SelectSubjectType_Centroid },
		{ "ESelectSubjectTypeEnum::Dataflow_Max", (int64)ESelectSubjectTypeEnum::Dataflow_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryCollectionNodes_ESelectSubjectTypeEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dataflow_Max.Comment", "//~~~\n//256th entry\n" },
		{ "Dataflow_Max.Hidden", "" },
		{ "Dataflow_Max.Name", "ESelectSubjectTypeEnum::Dataflow_Max" },
		{ "Dataflow_Max.ToolTip", "256th entry" },
		{ "Dataflow_SelectSubjectType_BoundingBox.Comment", "/** InBox must contain the BoundingBox of the bone */" },
		{ "Dataflow_SelectSubjectType_BoundingBox.DisplayName", "BoundingBox" },
		{ "Dataflow_SelectSubjectType_BoundingBox.Name", "ESelectSubjectTypeEnum::Dataflow_SelectSubjectType_BoundingBox" },
		{ "Dataflow_SelectSubjectType_BoundingBox.ToolTip", "InBox must contain the BoundingBox of the bone" },
		{ "Dataflow_SelectSubjectType_Centroid.Comment", "/** InBox must contain the centroid of the bone */" },
		{ "Dataflow_SelectSubjectType_Centroid.DisplayName", "Centroid" },
		{ "Dataflow_SelectSubjectType_Centroid.Name", "ESelectSubjectTypeEnum::Dataflow_SelectSubjectType_Centroid" },
		{ "Dataflow_SelectSubjectType_Centroid.ToolTip", "InBox must contain the centroid of the bone" },
		{ "Dataflow_SelectSubjectType_Vertices.Comment", "/** InBox must contain the vertices of the bone */" },
		{ "Dataflow_SelectSubjectType_Vertices.DisplayName", "Vertices" },
		{ "Dataflow_SelectSubjectType_Vertices.Name", "ESelectSubjectTypeEnum::Dataflow_SelectSubjectType_Vertices" },
		{ "Dataflow_SelectSubjectType_Vertices.ToolTip", "InBox must contain the vertices of the bone" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionNodes_ESelectSubjectTypeEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		nullptr,
		"ESelectSubjectTypeEnum",
		"ESelectSubjectTypeEnum",
		Z_Construct_UEnum_GeometryCollectionNodes_ESelectSubjectTypeEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_ESelectSubjectTypeEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryCollectionNodes_ESelectSubjectTypeEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_ESelectSubjectTypeEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryCollectionNodes_ESelectSubjectTypeEnum()
	{
		if (!Z_Registration_Info_UEnum_ESelectSubjectTypeEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESelectSubjectTypeEnum.InnerSingleton, Z_Construct_UEnum_GeometryCollectionNodes_ESelectSubjectTypeEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESelectSubjectTypeEnum.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCollectionTransformSelectionInBoxDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCollectionTransformSelectionInBoxDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionTransformSelectionInBoxDataflowNode;
class UScriptStruct* FCollectionTransformSelectionInBoxDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionInBoxDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionTransformSelectionInBoxDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CollectionTransformSelectionInBoxDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionInBoxDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCollectionTransformSelectionInBoxDataflowNode>()
{
	return FCollectionTransformSelectionInBoxDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllVerticesMustContainedInBox_MetaData[];
#endif
		static void NewProp_bAllVerticesMustContainedInBox_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllVerticesMustContainedInBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Selects bones if their Vertices/BoundingBox/Centroid in a box\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Selects bones if their Vertices/BoundingBox/Centroid in a box" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionTransformSelectionInBoxDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** GeometryCollection for the selection */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "GeometryCollection for the selection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionInBoxDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_Box_MetaData[] = {
		{ "Comment", "/** Box to contain Vertices/BoundingBox/Centroid */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Box to contain Vertices/BoundingBox/Centroid" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionInBoxDataflowNode, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_Box_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_Box_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Select" },
		{ "Comment", "/** Transform for the box */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Transform for the box" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionInBoxDataflowNode, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Select" },
		{ "Comment", "/** Subject (Vertices/BoundingBox/Centroid) to check against box */" },
		{ "DisplayName", "Type to Check in Box" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Subject (Vertices/BoundingBox/Centroid) to check against box" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionInBoxDataflowNode, Type), Z_Construct_UEnum_GeometryCollectionNodes_ESelectSubjectTypeEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_Type_MetaData)) }; // 3314851554
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_bAllVerticesMustContainedInBox_MetaData[] = {
		{ "Category", "Select" },
		{ "Comment", "/** If true all the vertices of the piece must be inside of box */" },
		{ "EditCondition", "Type == ESelectSubjectTypeEnum::Dataflow_SelectSubjectType_Vertices" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "If true all the vertices of the piece must be inside of box" },
	};
#endif
	void Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_bAllVerticesMustContainedInBox_SetBit(void* Obj)
	{
		((FCollectionTransformSelectionInBoxDataflowNode*)Obj)->bAllVerticesMustContainedInBox = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_bAllVerticesMustContainedInBox = { "bAllVerticesMustContainedInBox", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCollectionTransformSelectionInBoxDataflowNode), &Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_bAllVerticesMustContainedInBox_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_bAllVerticesMustContainedInBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_bAllVerticesMustContainedInBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Array of the selected bone indicies */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Array of the selected bone indicies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionInBoxDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_TransformSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_TransformSelection_MetaData)) }; // 2616302354
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_Box,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_bAllVerticesMustContainedInBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewProp_TransformSelection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"CollectionTransformSelectionInBoxDataflowNode",
		sizeof(FCollectionTransformSelectionInBoxDataflowNode),
		alignof(FCollectionTransformSelectionInBoxDataflowNode),
		Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionInBoxDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionTransformSelectionInBoxDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionInBoxDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCollectionTransformSelectionInSphereDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCollectionTransformSelectionInSphereDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionTransformSelectionInSphereDataflowNode;
class UScriptStruct* FCollectionTransformSelectionInSphereDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionInSphereDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionTransformSelectionInSphereDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CollectionTransformSelectionInSphereDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionInSphereDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCollectionTransformSelectionInSphereDataflowNode>()
{
	return FCollectionTransformSelectionInSphereDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sphere_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllVerticesMustContainedInSphere_MetaData[];
#endif
		static void NewProp_bAllVerticesMustContainedInSphere_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllVerticesMustContainedInSphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Selects bones if their Vertices/BoundingBox/Centroid in a sphere\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Selects bones if their Vertices/BoundingBox/Centroid in a sphere" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionTransformSelectionInSphereDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** GeometryCollection for the selection */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "GeometryCollection for the selection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionInSphereDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_Sphere_MetaData[] = {
		{ "Comment", "/** Sphere to contain Vertices/BoundingBox/Centroid */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Sphere to contain Vertices/BoundingBox/Centroid" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_Sphere = { "Sphere", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionInSphereDataflowNode, Sphere), Z_Construct_UScriptStruct_FSphere, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_Sphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_Sphere_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Select" },
		{ "Comment", "/** Transform for the sphere */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Transform for the sphere" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionInSphereDataflowNode, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Select" },
		{ "Comment", "/** Subject (Vertices/BoundingBox/Centroid) to check against box */" },
		{ "DisplayName", "Type to Check in Sphere" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Subject (Vertices/BoundingBox/Centroid) to check against box" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionInSphereDataflowNode, Type), Z_Construct_UEnum_GeometryCollectionNodes_ESelectSubjectTypeEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_Type_MetaData)) }; // 3314851554
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_bAllVerticesMustContainedInSphere_MetaData[] = {
		{ "Category", "Select" },
		{ "Comment", "/** If true all the vertices of the piece must be inside of box */" },
		{ "EditCondition", "Type == ESelectSubjectTypeEnum::Dataflow_SelectSubjectType_Vertices" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "If true all the vertices of the piece must be inside of box" },
	};
#endif
	void Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_bAllVerticesMustContainedInSphere_SetBit(void* Obj)
	{
		((FCollectionTransformSelectionInSphereDataflowNode*)Obj)->bAllVerticesMustContainedInSphere = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_bAllVerticesMustContainedInSphere = { "bAllVerticesMustContainedInSphere", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCollectionTransformSelectionInSphereDataflowNode), &Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_bAllVerticesMustContainedInSphere_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_bAllVerticesMustContainedInSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_bAllVerticesMustContainedInSphere_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Array of the selected bone indicies */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Array of the selected bone indicies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionInSphereDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_TransformSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_TransformSelection_MetaData)) }; // 2616302354
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_Sphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_bAllVerticesMustContainedInSphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewProp_TransformSelection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"CollectionTransformSelectionInSphereDataflowNode",
		sizeof(FCollectionTransformSelectionInSphereDataflowNode),
		alignof(FCollectionTransformSelectionInSphereDataflowNode),
		Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionInSphereDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionTransformSelectionInSphereDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionInSphereDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCollectionTransformSelectionByFloatAttrDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCollectionTransformSelectionByFloatAttrDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionTransformSelectionByFloatAttrDataflowNode;
class UScriptStruct* FCollectionTransformSelectionByFloatAttrDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionByFloatAttrDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionTransformSelectionByFloatAttrDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CollectionTransformSelectionByFloatAttrDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionByFloatAttrDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCollectionTransformSelectionByFloatAttrDataflowNode>()
{
	return FCollectionTransformSelectionByFloatAttrDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttrName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttrName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RangeSetting_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RangeSetting_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RangeSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInclusive_MetaData[];
#endif
		static void NewProp_bInclusive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInclusive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Selects bones by a float attribute\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Selects bones by a float attribute" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionTransformSelectionByFloatAttrDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** GeometryCollection for the selection */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "GeometryCollection for the selection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionByFloatAttrDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "Attribute" },
		{ "Comment", "/** Group name for the attr */" },
		{ "DisplayName", "Group" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Group name for the attr" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionByFloatAttrDataflowNode, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_AttrName_MetaData[] = {
		{ "Category", "Attribute" },
		{ "Comment", "/** Attribute name */" },
		{ "DisplayName", "Attribute" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Attribute name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_AttrName = { "AttrName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionByFloatAttrDataflowNode, AttrName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_AttrName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_AttrName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Attribute" },
		{ "Comment", "/** Minimum value for the selection */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Minimum value for the selection" },
		{ "UIMax", "1000000000.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionByFloatAttrDataflowNode, Min), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Attribute" },
		{ "Comment", "/** Maximum value for the selection */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Maximum value for the selection" },
		{ "UIMax", "1000000000.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionByFloatAttrDataflowNode, Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_Max_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_RangeSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_RangeSetting_MetaData[] = {
		{ "Category", "Attribute" },
		{ "Comment", "/** Values for the selection has to be inside or outside [Min, Max] range */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Values for the selection has to be inside or outside [Min, Max] range" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_RangeSetting = { "RangeSetting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionByFloatAttrDataflowNode, RangeSetting), Z_Construct_UEnum_GeometryCollectionNodes_ERangeSettingEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_RangeSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_RangeSetting_MetaData)) }; // 3023430103
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_bInclusive_MetaData[] = {
		{ "Category", "Attribute" },
		{ "Comment", "/** If true then range includes Min and Max values */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "If true then range includes Min and Max values" },
	};
#endif
	void Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_bInclusive_SetBit(void* Obj)
	{
		((FCollectionTransformSelectionByFloatAttrDataflowNode*)Obj)->bInclusive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_bInclusive = { "bInclusive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCollectionTransformSelectionByFloatAttrDataflowNode), &Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_bInclusive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_bInclusive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_bInclusive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Array of the selected bone indicies */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Array of the selected bone indicies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionByFloatAttrDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_TransformSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_TransformSelection_MetaData)) }; // 2616302354
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_AttrName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_RangeSetting_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_RangeSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_bInclusive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewProp_TransformSelection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"CollectionTransformSelectionByFloatAttrDataflowNode",
		sizeof(FCollectionTransformSelectionByFloatAttrDataflowNode),
		alignof(FCollectionTransformSelectionByFloatAttrDataflowNode),
		Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionByFloatAttrDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionTransformSelectionByFloatAttrDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionByFloatAttrDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCollectionTransformSelectionByIntAttrDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCollectionTransformSelectionByIntAttrDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionTransformSelectionByIntAttrDataflowNode;
class UScriptStruct* FCollectionTransformSelectionByIntAttrDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionByIntAttrDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionTransformSelectionByIntAttrDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CollectionTransformSelectionByIntAttrDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionByIntAttrDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCollectionTransformSelectionByIntAttrDataflowNode>()
{
	return FCollectionTransformSelectionByIntAttrDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttrName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttrName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Max;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RangeSetting_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RangeSetting_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RangeSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInclusive_MetaData[];
#endif
		static void NewProp_bInclusive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInclusive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Selects bones by an int attribute\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Selects bones by an int attribute" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionTransformSelectionByIntAttrDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** GeometryCollection for the selection */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "GeometryCollection for the selection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionByIntAttrDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "Attribute" },
		{ "Comment", "/** Group name for the attr */" },
		{ "DisplayName", "Group" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Group name for the attr" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionByIntAttrDataflowNode, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_AttrName_MetaData[] = {
		{ "Category", "Attribute" },
		{ "Comment", "/** Attribute name */" },
		{ "DisplayName", "Attribute" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Attribute name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_AttrName = { "AttrName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionByIntAttrDataflowNode, AttrName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_AttrName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_AttrName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Attribute" },
		{ "Comment", "/** Minimum value for the selection */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Minimum value for the selection" },
		{ "UIMax", "1000000000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionByIntAttrDataflowNode, Min), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Attribute" },
		{ "Comment", "/** Maximum value for the selection */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Maximum value for the selection" },
		{ "UIMax", "1000000000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionByIntAttrDataflowNode, Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_Max_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_RangeSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_RangeSetting_MetaData[] = {
		{ "Category", "Attribute" },
		{ "Comment", "/** Values for the selection has to be inside or outside [Min, Max] range */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Values for the selection has to be inside or outside [Min, Max] range" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_RangeSetting = { "RangeSetting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionByIntAttrDataflowNode, RangeSetting), Z_Construct_UEnum_GeometryCollectionNodes_ERangeSettingEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_RangeSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_RangeSetting_MetaData)) }; // 3023430103
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_bInclusive_MetaData[] = {
		{ "Category", "Attribute" },
		{ "Comment", "/** If true then range includes Min and Max values */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "If true then range includes Min and Max values" },
	};
#endif
	void Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_bInclusive_SetBit(void* Obj)
	{
		((FCollectionTransformSelectionByIntAttrDataflowNode*)Obj)->bInclusive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_bInclusive = { "bInclusive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCollectionTransformSelectionByIntAttrDataflowNode), &Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_bInclusive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_bInclusive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_bInclusive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Transform selection including the new indicies */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Transform selection including the new indicies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionTransformSelectionByIntAttrDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_TransformSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_TransformSelection_MetaData)) }; // 2616302354
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_AttrName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_RangeSetting_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_RangeSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_bInclusive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewProp_TransformSelection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"CollectionTransformSelectionByIntAttrDataflowNode",
		sizeof(FCollectionTransformSelectionByIntAttrDataflowNode),
		alignof(FCollectionTransformSelectionByIntAttrDataflowNode),
		Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionTransformSelectionByIntAttrDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionTransformSelectionByIntAttrDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionTransformSelectionByIntAttrDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCollectionVertexSelectionCustomDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCollectionVertexSelectionCustomDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionVertexSelectionCustomDataflowNode;
class UScriptStruct* FCollectionVertexSelectionCustomDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionVertexSelectionCustomDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionVertexSelectionCustomDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionVertexSelectionCustomDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CollectionVertexSelectionCustomDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionVertexSelectionCustomDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCollectionVertexSelectionCustomDataflowNode>()
{
	return FCollectionVertexSelectionCustomDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionVertexSelectionCustomDataflowNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexIndicies_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VertexIndicies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionVertexSelectionCustomDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Selects specified vertices in the GeometryCollection by using a\n * space separated list\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Selects specified vertices in the GeometryCollection by using a\nspace separated list" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionVertexSelectionCustomDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionVertexSelectionCustomDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionVertexSelectionCustomDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** GeometryCollection for the selection */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "GeometryCollection for the selection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionVertexSelectionCustomDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionVertexSelectionCustomDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionVertexSelectionCustomDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionVertexSelectionCustomDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionVertexSelectionCustomDataflowNode_Statics::NewProp_VertexIndicies_MetaData[] = {
		{ "Category", "Selection" },
		{ "Comment", "/** Space separated list of vertex indicies to specify the selection */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Space separated list of vertex indicies to specify the selection" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCollectionVertexSelectionCustomDataflowNode_Statics::NewProp_VertexIndicies = { "VertexIndicies", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionVertexSelectionCustomDataflowNode, VertexIndicies), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionVertexSelectionCustomDataflowNode_Statics::NewProp_VertexIndicies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionVertexSelectionCustomDataflowNode_Statics::NewProp_VertexIndicies_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionVertexSelectionCustomDataflowNode_Statics::NewProp_VertexSelection_MetaData[] = {
		{ "Comment", "/** Vertex selection including the new indicies */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "VertexSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Vertex selection including the new indicies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionVertexSelectionCustomDataflowNode_Statics::NewProp_VertexSelection = { "VertexSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionVertexSelectionCustomDataflowNode, VertexSelection), Z_Construct_UScriptStruct_FDataflowVertexSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionVertexSelectionCustomDataflowNode_Statics::NewProp_VertexSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionVertexSelectionCustomDataflowNode_Statics::NewProp_VertexSelection_MetaData)) }; // 227078363
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionVertexSelectionCustomDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionVertexSelectionCustomDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionVertexSelectionCustomDataflowNode_Statics::NewProp_VertexIndicies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionVertexSelectionCustomDataflowNode_Statics::NewProp_VertexSelection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionVertexSelectionCustomDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"CollectionVertexSelectionCustomDataflowNode",
		sizeof(FCollectionVertexSelectionCustomDataflowNode),
		alignof(FCollectionVertexSelectionCustomDataflowNode),
		Z_Construct_UScriptStruct_FCollectionVertexSelectionCustomDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionVertexSelectionCustomDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionVertexSelectionCustomDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionVertexSelectionCustomDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionVertexSelectionCustomDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionVertexSelectionCustomDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionVertexSelectionCustomDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCollectionVertexSelectionCustomDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionVertexSelectionCustomDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCollectionFaceSelectionCustomDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCollectionFaceSelectionCustomDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionFaceSelectionCustomDataflowNode;
class UScriptStruct* FCollectionFaceSelectionCustomDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionFaceSelectionCustomDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionFaceSelectionCustomDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CollectionFaceSelectionCustomDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionFaceSelectionCustomDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCollectionFaceSelectionCustomDataflowNode>()
{
	return FCollectionFaceSelectionCustomDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaceIndicies_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FaceIndicies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaceSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FaceSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Selects specified faces in the GeometryCollection by using a\n * space separated list\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Selects specified faces in the GeometryCollection by using a\nspace separated list" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionFaceSelectionCustomDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** GeometryCollection for the selection */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "GeometryCollection for the selection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionFaceSelectionCustomDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode_Statics::NewProp_FaceIndicies_MetaData[] = {
		{ "Category", "Selection" },
		{ "Comment", "/** Space separated list of face indicies to specify the selection */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Space separated list of face indicies to specify the selection" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode_Statics::NewProp_FaceIndicies = { "FaceIndicies", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionFaceSelectionCustomDataflowNode, FaceIndicies), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode_Statics::NewProp_FaceIndicies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode_Statics::NewProp_FaceIndicies_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode_Statics::NewProp_FaceSelection_MetaData[] = {
		{ "Comment", "/** Face selection including the new indicies */" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "FaceSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Face selection including the new indicies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode_Statics::NewProp_FaceSelection = { "FaceSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionFaceSelectionCustomDataflowNode, FaceSelection), Z_Construct_UScriptStruct_FDataflowFaceSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode_Statics::NewProp_FaceSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode_Statics::NewProp_FaceSelection_MetaData)) }; // 3632086580
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode_Statics::NewProp_FaceIndicies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode_Statics::NewProp_FaceSelection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"CollectionFaceSelectionCustomDataflowNode",
		sizeof(FCollectionFaceSelectionCustomDataflowNode),
		alignof(FCollectionFaceSelectionCustomDataflowNode),
		Z_Construct_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionFaceSelectionCustomDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionFaceSelectionCustomDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionFaceSelectionCustomDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCollectionSelectionConvertDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCollectionSelectionConvertDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionSelectionConvertDataflowNode;
class UScriptStruct* FCollectionSelectionConvertDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionSelectionConvertDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionSelectionConvertDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CollectionSelectionConvertDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionSelectionConvertDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCollectionSelectionConvertDataflowNode>()
{
	return FCollectionSelectionConvertDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaceSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FaceSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllElementsMustBeSelected_MetaData[];
#endif
		static void NewProp_bAllElementsMustBeSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllElementsMustBeSelected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Converts Vertex/Face/Transform selection into Vertex/Face/Transform selection\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Converts Vertex/Face/Transform selection into Vertex/Face/Transform selection" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionSelectionConvertDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** GeometryCollection for the selection */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "GeometryCollection for the selection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionSelectionConvertDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Transform selection including the new indicies */" },
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "TransformSelection" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Transform selection including the new indicies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionSelectionConvertDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::NewProp_TransformSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::NewProp_TransformSelection_MetaData)) }; // 2616302354
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::NewProp_FaceSelection_MetaData[] = {
		{ "Comment", "/** Face selection including the new indicies */" },
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "FaceSelection" },
		{ "DisplayName", "FaceSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Face selection including the new indicies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::NewProp_FaceSelection = { "FaceSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionSelectionConvertDataflowNode, FaceSelection), Z_Construct_UScriptStruct_FDataflowFaceSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::NewProp_FaceSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::NewProp_FaceSelection_MetaData)) }; // 3632086580
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::NewProp_VertexSelection_MetaData[] = {
		{ "Comment", "/** Vertex selection including the new indicies */" },
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "VertexSelection" },
		{ "DisplayName", "VertexSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Vertex selection including the new indicies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::NewProp_VertexSelection = { "VertexSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionSelectionConvertDataflowNode, VertexSelection), Z_Construct_UScriptStruct_FDataflowVertexSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::NewProp_VertexSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::NewProp_VertexSelection_MetaData)) }; // 227078363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::NewProp_bAllElementsMustBeSelected_MetaData[] = {
		{ "Category", "Selection" },
		{ "Comment", "/** If true then for converting vertex/face selection to transform selection all vertex/face must be selected for selecting the associated transform */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "If true then for converting vertex/face selection to transform selection all vertex/face must be selected for selecting the associated transform" },
	};
#endif
	void Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::NewProp_bAllElementsMustBeSelected_SetBit(void* Obj)
	{
		((FCollectionSelectionConvertDataflowNode*)Obj)->bAllElementsMustBeSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::NewProp_bAllElementsMustBeSelected = { "bAllElementsMustBeSelected", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCollectionSelectionConvertDataflowNode), &Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::NewProp_bAllElementsMustBeSelected_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::NewProp_bAllElementsMustBeSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::NewProp_bAllElementsMustBeSelected_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::NewProp_TransformSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::NewProp_FaceSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::NewProp_VertexSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::NewProp_bAllElementsMustBeSelected,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"CollectionSelectionConvertDataflowNode",
		sizeof(FCollectionSelectionConvertDataflowNode),
		alignof(FCollectionSelectionConvertDataflowNode),
		Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionSelectionConvertDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionSelectionConvertDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionSelectionConvertDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCollectionFaceSelectionInvertDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCollectionFaceSelectionInvertDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionFaceSelectionInvertDataflowNode;
class UScriptStruct* FCollectionFaceSelectionInvertDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionFaceSelectionInvertDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionFaceSelectionInvertDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CollectionFaceSelectionInvertDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionFaceSelectionInvertDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCollectionFaceSelectionInvertDataflowNode>()
{
	return FCollectionFaceSelectionInvertDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaceSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FaceSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Inverts selection of faces\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Inverts selection of faces" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionFaceSelectionInvertDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode_Statics::NewProp_FaceSelection_MetaData[] = {
		{ "Comment", "/** Array of the selected bone indicies */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "FaceSelection" },
		{ "DisplayName", "FaceSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Array of the selected bone indicies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode_Statics::NewProp_FaceSelection = { "FaceSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionFaceSelectionInvertDataflowNode, FaceSelection), Z_Construct_UScriptStruct_FDataflowFaceSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode_Statics::NewProp_FaceSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode_Statics::NewProp_FaceSelection_MetaData)) }; // 3632086580
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode_Statics::NewProp_FaceSelection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"CollectionFaceSelectionInvertDataflowNode",
		sizeof(FCollectionFaceSelectionInvertDataflowNode),
		alignof(FCollectionFaceSelectionInvertDataflowNode),
		Z_Construct_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionFaceSelectionInvertDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionFaceSelectionInvertDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionFaceSelectionInvertDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCollectionVertexSelectionByPercentageDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCollectionVertexSelectionByPercentageDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionVertexSelectionByPercentageDataflowNode;
class UScriptStruct* FCollectionVertexSelectionByPercentageDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionVertexSelectionByPercentageDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionVertexSelectionByPercentageDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CollectionVertexSelectionByPercentageDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionVertexSelectionByPercentageDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCollectionVertexSelectionByPercentageDataflowNode>()
{
	return FCollectionVertexSelectionByPercentageDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Percentage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Percentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeterministic_MetaData[];
#endif
		static void NewProp_bDeterministic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeterministic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomSeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Outputs the specified percentage of the selected vertices\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Outputs the specified percentage of the selected vertices" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionVertexSelectionByPercentageDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode_Statics::NewProp_VertexSelection_MetaData[] = {
		{ "Comment", "/** Array of the selected bone indicies */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "VertexSelection" },
		{ "DisplayName", "VertexSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Array of the selected bone indicies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode_Statics::NewProp_VertexSelection = { "VertexSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionVertexSelectionByPercentageDataflowNode, VertexSelection), Z_Construct_UScriptStruct_FDataflowVertexSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode_Statics::NewProp_VertexSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode_Statics::NewProp_VertexSelection_MetaData)) }; // 227078363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode_Statics::NewProp_Percentage_MetaData[] = {
		{ "Category", "Selection" },
		{ "Comment", "/** Percentage to keep from the original selection */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Percentage to keep from the original selection" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode_Statics::NewProp_Percentage = { "Percentage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionVertexSelectionByPercentageDataflowNode, Percentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode_Statics::NewProp_Percentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode_Statics::NewProp_Percentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode_Statics::NewProp_bDeterministic_MetaData[] = {
		{ "Category", "Random" },
		{ "Comment", "/** Sets the random generation to deterministic */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Sets the random generation to deterministic" },
	};
#endif
	void Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode_Statics::NewProp_bDeterministic_SetBit(void* Obj)
	{
		((FCollectionVertexSelectionByPercentageDataflowNode*)Obj)->bDeterministic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode_Statics::NewProp_bDeterministic = { "bDeterministic", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCollectionVertexSelectionByPercentageDataflowNode), &Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode_Statics::NewProp_bDeterministic_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode_Statics::NewProp_bDeterministic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode_Statics::NewProp_bDeterministic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode_Statics::NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Random" },
		{ "Comment", "/** Seed value for the random generation */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "bDeterministic" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Seed value for the random generation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionVertexSelectionByPercentageDataflowNode, RandomSeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode_Statics::NewProp_RandomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode_Statics::NewProp_RandomSeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode_Statics::NewProp_VertexSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode_Statics::NewProp_Percentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode_Statics::NewProp_bDeterministic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode_Statics::NewProp_RandomSeed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"CollectionVertexSelectionByPercentageDataflowNode",
		sizeof(FCollectionVertexSelectionByPercentageDataflowNode),
		alignof(FCollectionVertexSelectionByPercentageDataflowNode),
		Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionVertexSelectionByPercentageDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionVertexSelectionByPercentageDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionVertexSelectionByPercentageDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCollectionVertexSelectionSetOperationDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCollectionVertexSelectionSetOperationDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionVertexSelectionSetOperationDataflowNode;
class UScriptStruct* FCollectionVertexSelectionSetOperationDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionVertexSelectionSetOperationDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionVertexSelectionSetOperationDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CollectionVertexSelectionSetOperationDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionVertexSelectionSetOperationDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCollectionVertexSelectionSetOperationDataflowNode>()
{
	return FCollectionVertexSelectionSetOperationDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexSelectionA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexSelectionA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexSelectionB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexSelectionB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Runs boolean operation on VertexSelections\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Runs boolean operation on VertexSelections" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionVertexSelectionSetOperationDataflowNode>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode_Statics::NewProp_Operation_MetaData[] = {
		{ "Category", "Compare" },
		{ "Comment", "/** Boolean operation */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Boolean operation" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionVertexSelectionSetOperationDataflowNode, Operation), Z_Construct_UEnum_GeometryCollectionNodes_ESetOperationEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode_Statics::NewProp_Operation_MetaData)) }; // 2926836988
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode_Statics::NewProp_VertexSelectionA_MetaData[] = {
		{ "Comment", "/** Array of the selected vertex indicies */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DisplayName", "VertexSelectionA" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Array of the selected vertex indicies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode_Statics::NewProp_VertexSelectionA = { "VertexSelectionA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionVertexSelectionSetOperationDataflowNode, VertexSelectionA), Z_Construct_UScriptStruct_FDataflowVertexSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode_Statics::NewProp_VertexSelectionA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode_Statics::NewProp_VertexSelectionA_MetaData)) }; // 227078363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode_Statics::NewProp_VertexSelectionB_MetaData[] = {
		{ "Comment", "/** Array of the selected vertex indicies */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DisplayName", "VertexSelectionB" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Array of the selected vertex indicies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode_Statics::NewProp_VertexSelectionB = { "VertexSelectionB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionVertexSelectionSetOperationDataflowNode, VertexSelectionB), Z_Construct_UScriptStruct_FDataflowVertexSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode_Statics::NewProp_VertexSelectionB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode_Statics::NewProp_VertexSelectionB_MetaData)) }; // 227078363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode_Statics::NewProp_VertexSelection_MetaData[] = {
		{ "Comment", "/** Array of the selected vertex indicies after operation */" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "VertexSelectionA" },
		{ "DisplayName", "VertexSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSelectionNodes.h" },
		{ "ToolTip", "Array of the selected vertex indicies after operation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode_Statics::NewProp_VertexSelection = { "VertexSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionVertexSelectionSetOperationDataflowNode, VertexSelection), Z_Construct_UScriptStruct_FDataflowVertexSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode_Statics::NewProp_VertexSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode_Statics::NewProp_VertexSelection_MetaData)) }; // 227078363
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode_Statics::NewProp_Operation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode_Statics::NewProp_Operation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode_Statics::NewProp_VertexSelectionA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode_Statics::NewProp_VertexSelectionB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode_Statics::NewProp_VertexSelection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"CollectionVertexSelectionSetOperationDataflowNode",
		sizeof(FCollectionVertexSelectionSetOperationDataflowNode),
		alignof(FCollectionVertexSelectionSetOperationDataflowNode),
		Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionVertexSelectionSetOperationDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionVertexSelectionSetOperationDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionVertexSelectionSetOperationDataflowNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionSelectionNodes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionSelectionNodes_h_Statics::EnumInfo[] = {
		{ ESetOperationEnum_StaticEnum, TEXT("ESetOperationEnum"), &Z_Registration_Info_UEnum_ESetOperationEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2926836988U) },
		{ ERangeSettingEnum_StaticEnum, TEXT("ERangeSettingEnum"), &Z_Registration_Info_UEnum_ERangeSettingEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3023430103U) },
		{ ESelectSubjectTypeEnum_StaticEnum, TEXT("ESelectSubjectTypeEnum"), &Z_Registration_Info_UEnum_ESelectSubjectTypeEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3314851554U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionSelectionNodes_h_Statics::ScriptStructInfo[] = {
		{ FCollectionTransformSelectionAllDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCollectionTransformSelectionAllDataflowNode_Statics::NewStructOps, TEXT("CollectionTransformSelectionAllDataflowNode"), &Z_Registration_Info_UScriptStruct_CollectionTransformSelectionAllDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionTransformSelectionAllDataflowNode), 84808961U) },
		{ FCollectionTransformSelectionSetOperationDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCollectionTransformSelectionSetOperationDataflowNode_Statics::NewStructOps, TEXT("CollectionTransformSelectionSetOperationDataflowNode"), &Z_Registration_Info_UScriptStruct_CollectionTransformSelectionSetOperationDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionTransformSelectionSetOperationDataflowNode), 2327239218U) },
		{ FCollectionTransformSelectionInfoDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode_Statics::NewStructOps, TEXT("CollectionTransformSelectionInfoDataflowNode"), &Z_Registration_Info_UScriptStruct_CollectionTransformSelectionInfoDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionTransformSelectionInfoDataflowNode), 1492514627U) },
		{ FCollectionTransformSelectionNoneDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCollectionTransformSelectionNoneDataflowNode_Statics::NewStructOps, TEXT("CollectionTransformSelectionNoneDataflowNode"), &Z_Registration_Info_UScriptStruct_CollectionTransformSelectionNoneDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionTransformSelectionNoneDataflowNode), 2944494420U) },
		{ FCollectionTransformSelectionInvertDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCollectionTransformSelectionInvertDataflowNode_Statics::NewStructOps, TEXT("CollectionTransformSelectionInvertDataflowNode"), &Z_Registration_Info_UScriptStruct_CollectionTransformSelectionInvertDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionTransformSelectionInvertDataflowNode), 1678381779U) },
		{ FCollectionTransformSelectionRandomDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode_Statics::NewStructOps, TEXT("CollectionTransformSelectionRandomDataflowNode"), &Z_Registration_Info_UScriptStruct_CollectionTransformSelectionRandomDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionTransformSelectionRandomDataflowNode), 4245629228U) },
		{ FCollectionTransformSelectionRootDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCollectionTransformSelectionRootDataflowNode_Statics::NewStructOps, TEXT("CollectionTransformSelectionRootDataflowNode"), &Z_Registration_Info_UScriptStruct_CollectionTransformSelectionRootDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionTransformSelectionRootDataflowNode), 518778822U) },
		{ FCollectionTransformSelectionCustomDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_Statics::NewStructOps, TEXT("CollectionTransformSelectionCustomDataflowNode"), &Z_Registration_Info_UScriptStruct_CollectionTransformSelectionCustomDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionTransformSelectionCustomDataflowNode), 3865179905U) },
		{ FCollectionTransformSelectionParentDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCollectionTransformSelectionParentDataflowNode_Statics::NewStructOps, TEXT("CollectionTransformSelectionParentDataflowNode"), &Z_Registration_Info_UScriptStruct_CollectionTransformSelectionParentDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionTransformSelectionParentDataflowNode), 1988216692U) },
		{ FCollectionTransformSelectionByPercentageDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCollectionTransformSelectionByPercentageDataflowNode_Statics::NewStructOps, TEXT("CollectionTransformSelectionByPercentageDataflowNode"), &Z_Registration_Info_UScriptStruct_CollectionTransformSelectionByPercentageDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionTransformSelectionByPercentageDataflowNode), 3145880681U) },
		{ FCollectionTransformSelectionChildrenDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCollectionTransformSelectionChildrenDataflowNode_Statics::NewStructOps, TEXT("CollectionTransformSelectionChildrenDataflowNode"), &Z_Registration_Info_UScriptStruct_CollectionTransformSelectionChildrenDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionTransformSelectionChildrenDataflowNode), 1616802553U) },
		{ FCollectionTransformSelectionSiblingsDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCollectionTransformSelectionSiblingsDataflowNode_Statics::NewStructOps, TEXT("CollectionTransformSelectionSiblingsDataflowNode"), &Z_Registration_Info_UScriptStruct_CollectionTransformSelectionSiblingsDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionTransformSelectionSiblingsDataflowNode), 274167163U) },
		{ FCollectionTransformSelectionLevelDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode_Statics::NewStructOps, TEXT("CollectionTransformSelectionLevelDataflowNode"), &Z_Registration_Info_UScriptStruct_CollectionTransformSelectionLevelDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionTransformSelectionLevelDataflowNode), 58937163U) },
		{ FCollectionTransformSelectionContactDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCollectionTransformSelectionContactDataflowNode_Statics::NewStructOps, TEXT("CollectionTransformSelectionContactDataflowNode"), &Z_Registration_Info_UScriptStruct_CollectionTransformSelectionContactDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionTransformSelectionContactDataflowNode), 3573242317U) },
		{ FCollectionTransformSelectionLeafDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCollectionTransformSelectionLeafDataflowNode_Statics::NewStructOps, TEXT("CollectionTransformSelectionLeafDataflowNode"), &Z_Registration_Info_UScriptStruct_CollectionTransformSelectionLeafDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionTransformSelectionLeafDataflowNode), 2112710068U) },
		{ FCollectionTransformSelectionClusterDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCollectionTransformSelectionClusterDataflowNode_Statics::NewStructOps, TEXT("CollectionTransformSelectionClusterDataflowNode"), &Z_Registration_Info_UScriptStruct_CollectionTransformSelectionClusterDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionTransformSelectionClusterDataflowNode), 1915728687U) },
		{ FCollectionTransformSelectionBySizeDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCollectionTransformSelectionBySizeDataflowNode_Statics::NewStructOps, TEXT("CollectionTransformSelectionBySizeDataflowNode"), &Z_Registration_Info_UScriptStruct_CollectionTransformSelectionBySizeDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionTransformSelectionBySizeDataflowNode), 2421456778U) },
		{ FCollectionTransformSelectionByVolumeDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode_Statics::NewStructOps, TEXT("CollectionTransformSelectionByVolumeDataflowNode"), &Z_Registration_Info_UScriptStruct_CollectionTransformSelectionByVolumeDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionTransformSelectionByVolumeDataflowNode), 3112080732U) },
		{ FCollectionTransformSelectionInBoxDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode_Statics::NewStructOps, TEXT("CollectionTransformSelectionInBoxDataflowNode"), &Z_Registration_Info_UScriptStruct_CollectionTransformSelectionInBoxDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionTransformSelectionInBoxDataflowNode), 3864775360U) },
		{ FCollectionTransformSelectionInSphereDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCollectionTransformSelectionInSphereDataflowNode_Statics::NewStructOps, TEXT("CollectionTransformSelectionInSphereDataflowNode"), &Z_Registration_Info_UScriptStruct_CollectionTransformSelectionInSphereDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionTransformSelectionInSphereDataflowNode), 3222533010U) },
		{ FCollectionTransformSelectionByFloatAttrDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode_Statics::NewStructOps, TEXT("CollectionTransformSelectionByFloatAttrDataflowNode"), &Z_Registration_Info_UScriptStruct_CollectionTransformSelectionByFloatAttrDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionTransformSelectionByFloatAttrDataflowNode), 1129083967U) },
		{ FCollectionTransformSelectionByIntAttrDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode_Statics::NewStructOps, TEXT("CollectionTransformSelectionByIntAttrDataflowNode"), &Z_Registration_Info_UScriptStruct_CollectionTransformSelectionByIntAttrDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionTransformSelectionByIntAttrDataflowNode), 1908754431U) },
		{ FCollectionVertexSelectionCustomDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCollectionVertexSelectionCustomDataflowNode_Statics::NewStructOps, TEXT("CollectionVertexSelectionCustomDataflowNode"), &Z_Registration_Info_UScriptStruct_CollectionVertexSelectionCustomDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionVertexSelectionCustomDataflowNode), 1298180841U) },
		{ FCollectionFaceSelectionCustomDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCollectionFaceSelectionCustomDataflowNode_Statics::NewStructOps, TEXT("CollectionFaceSelectionCustomDataflowNode"), &Z_Registration_Info_UScriptStruct_CollectionFaceSelectionCustomDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionFaceSelectionCustomDataflowNode), 1463308603U) },
		{ FCollectionSelectionConvertDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCollectionSelectionConvertDataflowNode_Statics::NewStructOps, TEXT("CollectionSelectionConvertDataflowNode"), &Z_Registration_Info_UScriptStruct_CollectionSelectionConvertDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionSelectionConvertDataflowNode), 1216231600U) },
		{ FCollectionFaceSelectionInvertDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCollectionFaceSelectionInvertDataflowNode_Statics::NewStructOps, TEXT("CollectionFaceSelectionInvertDataflowNode"), &Z_Registration_Info_UScriptStruct_CollectionFaceSelectionInvertDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionFaceSelectionInvertDataflowNode), 2113601315U) },
		{ FCollectionVertexSelectionByPercentageDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCollectionVertexSelectionByPercentageDataflowNode_Statics::NewStructOps, TEXT("CollectionVertexSelectionByPercentageDataflowNode"), &Z_Registration_Info_UScriptStruct_CollectionVertexSelectionByPercentageDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionVertexSelectionByPercentageDataflowNode), 1031622830U) },
		{ FCollectionVertexSelectionSetOperationDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCollectionVertexSelectionSetOperationDataflowNode_Statics::NewStructOps, TEXT("CollectionVertexSelectionSetOperationDataflowNode"), &Z_Registration_Info_UScriptStruct_CollectionVertexSelectionSetOperationDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionVertexSelectionSetOperationDataflowNode), 3791484766U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionSelectionNodes_h_435075358(TEXT("/Script/GeometryCollectionNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionSelectionNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionSelectionNodes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionSelectionNodes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionSelectionNodes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
