// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/ChaosFleshTetrahedralNodes.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosFleshTetrahedralNodes() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	CHAOSFLESHNODES_API UEnum* Z_Construct_UEnum_ChaosFleshNodes_TetMeshingMethod();
	CHAOSFLESHNODES_API UScriptStruct* Z_Construct_UScriptStruct_FConstructTetGridNode();
	CHAOSFLESHNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ChaosFleshNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FConstructTetGridNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FConstructTetGridNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstructTetGridNode;
class UScriptStruct* FConstructTetGridNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstructTetGridNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstructTetGridNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstructTetGridNode, (UObject*)Z_Construct_UPackage__Script_ChaosFleshNodes(), TEXT("ConstructTetGridNode"));
	}
	return Z_Registration_Info_UScriptStruct_ConstructTetGridNode.OuterSingleton;
}
template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<FConstructTetGridNode>()
{
	return FConstructTetGridNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConstructTetGridNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridCellCount_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridCellCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridDomain_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridDomain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstructTetGridNode_Statics::Struct_MetaDataParams[] = {
		{ "DataflowFlesh", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshTetrahedralNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstructTetGridNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstructTetGridNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstructTetGridNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshTetrahedralNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstructTetGridNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConstructTetGridNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstructTetGridNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructTetGridNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstructTetGridNode_Statics::NewProp_GridCellCount_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshTetrahedralNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstructTetGridNode_Statics::NewProp_GridCellCount = { "GridCellCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConstructTetGridNode, GridCellCount), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstructTetGridNode_Statics::NewProp_GridCellCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructTetGridNode_Statics::NewProp_GridCellCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstructTetGridNode_Statics::NewProp_GridDomain_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshTetrahedralNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstructTetGridNode_Statics::NewProp_GridDomain = { "GridDomain", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConstructTetGridNode, GridDomain), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstructTetGridNode_Statics::NewProp_GridDomain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructTetGridNode_Statics::NewProp_GridDomain_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstructTetGridNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstructTetGridNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstructTetGridNode_Statics::NewProp_GridCellCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstructTetGridNode_Statics::NewProp_GridDomain,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstructTetGridNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"ConstructTetGridNode",
		sizeof(FConstructTetGridNode),
		alignof(FConstructTetGridNode),
		Z_Construct_UScriptStruct_FConstructTetGridNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructTetGridNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstructTetGridNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstructTetGridNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstructTetGridNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ConstructTetGridNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstructTetGridNode.InnerSingleton, Z_Construct_UScriptStruct_FConstructTetGridNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConstructTetGridNode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_TetMeshingMethod;
	static UEnum* TetMeshingMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_TetMeshingMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_TetMeshingMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosFleshNodes_TetMeshingMethod, (UObject*)Z_Construct_UPackage__Script_ChaosFleshNodes(), TEXT("TetMeshingMethod"));
		}
		return Z_Registration_Info_UEnum_TetMeshingMethod.OuterSingleton;
	}
	template<> CHAOSFLESHNODES_API UEnum* StaticEnum<TetMeshingMethod>()
	{
		return TetMeshingMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_ChaosFleshNodes_TetMeshingMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ChaosFleshNodes_TetMeshingMethod_Statics::Enumerators[] = {
		{ "IsoStuffing", (int64)IsoStuffing },
		{ "TetWild", (int64)TetWild },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ChaosFleshNodes_TetMeshingMethod_Statics::Enum_MetaDataParams[] = {
		{ "IsoStuffing.DisplayName", "IsoStuffing" },
		{ "IsoStuffing.Name", "IsoStuffing" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshTetrahedralNodes.h" },
		{ "TetWild.DisplayName", "TetWild" },
		{ "TetWild.Name", "TetWild" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosFleshNodes_TetMeshingMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ChaosFleshNodes,
		nullptr,
		"TetMeshingMethod",
		"TetMeshingMethod",
		Z_Construct_UEnum_ChaosFleshNodes_TetMeshingMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosFleshNodes_TetMeshingMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_ChaosFleshNodes_TetMeshingMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosFleshNodes_TetMeshingMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ChaosFleshNodes_TetMeshingMethod()
	{
		if (!Z_Registration_Info_UEnum_TetMeshingMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_TetMeshingMethod.InnerSingleton, Z_Construct_UEnum_ChaosFleshNodes_TetMeshingMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_TetMeshingMethod.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGenerateTetrahedralCollectionDataflowNodes>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGenerateTetrahedralCollectionDataflowNodes cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GenerateTetrahedralCollectionDataflowNodes;
class UScriptStruct* FGenerateTetrahedralCollectionDataflowNodes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GenerateTetrahedralCollectionDataflowNodes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GenerateTetrahedralCollectionDataflowNodes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes, (UObject*)Z_Construct_UPackage__Script_ChaosFleshNodes(), TEXT("GenerateTetrahedralCollectionDataflowNodes"));
	}
	return Z_Registration_Info_UScriptStruct_GenerateTetrahedralCollectionDataflowNodes.OuterSingleton;
}
template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<FGenerateTetrahedralCollectionDataflowNodes>()
{
	return FGenerateTetrahedralCollectionDataflowNodes::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCells_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCells;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetPercent_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_OffsetPercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdealEdgeLength_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_IdealEdgeLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StopEnergy_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_StopEnergy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EpsRel_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_EpsRel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCoarsen_MetaData[];
#endif
		static void NewProp_bCoarsen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCoarsen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExtractManifoldBoundarySurface_MetaData[];
#endif
		static void NewProp_bExtractManifoldBoundarySurface_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExtractManifoldBoundarySurface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipSimplification_MetaData[];
#endif
		static void NewProp_bSkipSimplification_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipSimplification;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvertOutputTets_MetaData[];
#endif
		static void NewProp_bInvertOutputTets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertOutputTets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bComputeByComponent_MetaData[];
#endif
		static void NewProp_bComputeByComponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeByComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::Struct_MetaDataParams[] = {
		{ "DataflowFlesh", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshTetrahedralNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenerateTetrahedralCollectionDataflowNodes>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_Method_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshTetrahedralNodes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateTetrahedralCollectionDataflowNodes, Method), Z_Construct_UEnum_ChaosFleshNodes_TetMeshingMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_Method_MetaData)) }; // 4221261397
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_NumCells_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ClampMin", "1" },
		{ "Comment", "//\n// IsoStuffing\n//\n" },
		{ "EditCondition", "Method == TetMeshingMethod::IsoStuffing" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshTetrahedralNodes.h" },
		{ "ToolTip", "IsoStuffing" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_NumCells = { "NumCells", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateTetrahedralCollectionDataflowNodes, NumCells), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_NumCells_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_NumCells_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_OffsetPercent_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ClampMax", "0.5" },
		{ "ClampMin", "-0.5" },
		{ "EditCondition", "Method == TetMeshingMethod::IsoStuffing" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshTetrahedralNodes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_OffsetPercent = { "OffsetPercent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateTetrahedralCollectionDataflowNodes, OffsetPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_OffsetPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_OffsetPercent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_IdealEdgeLength_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ClampMin", "0.0" },
		{ "Comment", "//! Energy at which to stop optimizing tet quality and accept the result.\n" },
		{ "EditCondition", "Method == TetMeshingMethod::TetWild" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshTetrahedralNodes.h" },
		{ "ToolTip", "! Energy at which to stop optimizing tet quality and accept the result." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_IdealEdgeLength = { "IdealEdgeLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateTetrahedralCollectionDataflowNodes, IdealEdgeLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_IdealEdgeLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_IdealEdgeLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_MaxIterations_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ClampMin", "1" },
		{ "Comment", "//! Maximum number of optimization iterations.\n" },
		{ "EditCondition", "Method == TetMeshingMethod::TetWild" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshTetrahedralNodes.h" },
		{ "ToolTip", "! Maximum number of optimization iterations." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateTetrahedralCollectionDataflowNodes, MaxIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_MaxIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_MaxIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_StopEnergy_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ClampMin", "0.0" },
		{ "Comment", "//! Energy at which to stop optimizing tet quality and accept the result.\n" },
		{ "EditCondition", "Method == TetMeshingMethod::TetWild" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshTetrahedralNodes.h" },
		{ "ToolTip", "! Energy at which to stop optimizing tet quality and accept the result." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_StopEnergy = { "StopEnergy", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateTetrahedralCollectionDataflowNodes, StopEnergy), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_StopEnergy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_StopEnergy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_EpsRel_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ClampMin", "0.0" },
		{ "Comment", "//! Relative tolerance, controlling how closely the mesh must follow the input surface.\n" },
		{ "EditCondition", "Method == TetMeshingMethod::TetWild" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshTetrahedralNodes.h" },
		{ "ToolTip", "! Relative tolerance, controlling how closely the mesh must follow the input surface." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_EpsRel = { "EpsRel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateTetrahedralCollectionDataflowNodes, EpsRel), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_EpsRel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_EpsRel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bCoarsen_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "Comment", "//! Coarsen the tet mesh result.\n" },
		{ "EditCondition", "Method == TetMeshingMethod::TetWild" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshTetrahedralNodes.h" },
		{ "ToolTip", "! Coarsen the tet mesh result." },
	};
#endif
	void Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bCoarsen_SetBit(void* Obj)
	{
		((FGenerateTetrahedralCollectionDataflowNodes*)Obj)->bCoarsen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bCoarsen = { "bCoarsen", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGenerateTetrahedralCollectionDataflowNodes), &Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bCoarsen_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bCoarsen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bCoarsen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bExtractManifoldBoundarySurface_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "Comment", "//! Enforce that the output boundary surface should be manifold.\n" },
		{ "EditCondition", "Method == TetMeshingMethod::TetWild" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshTetrahedralNodes.h" },
		{ "ToolTip", "! Enforce that the output boundary surface should be manifold." },
	};
#endif
	void Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bExtractManifoldBoundarySurface_SetBit(void* Obj)
	{
		((FGenerateTetrahedralCollectionDataflowNodes*)Obj)->bExtractManifoldBoundarySurface = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bExtractManifoldBoundarySurface = { "bExtractManifoldBoundarySurface", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGenerateTetrahedralCollectionDataflowNodes), &Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bExtractManifoldBoundarySurface_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bExtractManifoldBoundarySurface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bExtractManifoldBoundarySurface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bSkipSimplification_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "Comment", "//! Skip the initial simplification step.\n" },
		{ "EditCondition", "Method == TetMeshingMethod::TetWild" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshTetrahedralNodes.h" },
		{ "ToolTip", "! Skip the initial simplification step." },
	};
#endif
	void Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bSkipSimplification_SetBit(void* Obj)
	{
		((FGenerateTetrahedralCollectionDataflowNodes*)Obj)->bSkipSimplification = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bSkipSimplification = { "bSkipSimplification", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGenerateTetrahedralCollectionDataflowNodes), &Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bSkipSimplification_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bSkipSimplification_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bSkipSimplification_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bInvertOutputTets_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "Comment", "//! Invert tetrahedra.\n" },
		{ "EditCondition", "Method == TetMeshingMethod::TetWild" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshTetrahedralNodes.h" },
		{ "ToolTip", "! Invert tetrahedra." },
	};
#endif
	void Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bInvertOutputTets_SetBit(void* Obj)
	{
		((FGenerateTetrahedralCollectionDataflowNodes*)Obj)->bInvertOutputTets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bInvertOutputTets = { "bInvertOutputTets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGenerateTetrahedralCollectionDataflowNodes), &Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bInvertOutputTets_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bInvertOutputTets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bInvertOutputTets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "Comment", "//\n// Common\n//\n" },
		{ "DataflowInput", "" },
		{ "DisplayName", "StaticMesh" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshTetrahedralNodes.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Common" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateTetrahedralCollectionDataflowNodes, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "DataflowInput", "" },
		{ "DisplayName", "SkeletalMesh" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshTetrahedralNodes.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateTetrahedralCollectionDataflowNodes, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bComputeByComponent_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshTetrahedralNodes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bComputeByComponent_SetBit(void* Obj)
	{
		((FGenerateTetrahedralCollectionDataflowNodes*)Obj)->bComputeByComponent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bComputeByComponent = { "bComputeByComponent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGenerateTetrahedralCollectionDataflowNodes), &Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bComputeByComponent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bComputeByComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bComputeByComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshTetrahedralNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateTetrahedralCollectionDataflowNodes, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_Collection_MetaData)) }; // 4011818293
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_NumCells,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_OffsetPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_IdealEdgeLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_MaxIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_StopEnergy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_EpsRel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bCoarsen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bExtractManifoldBoundarySurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bSkipSimplification,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bInvertOutputTets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_bComputeByComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_Collection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"GenerateTetrahedralCollectionDataflowNodes",
		sizeof(FGenerateTetrahedralCollectionDataflowNodes),
		alignof(FGenerateTetrahedralCollectionDataflowNodes),
		Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes()
	{
		if (!Z_Registration_Info_UScriptStruct_GenerateTetrahedralCollectionDataflowNodes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GenerateTetrahedralCollectionDataflowNodes.InnerSingleton, Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GenerateTetrahedralCollectionDataflowNodes.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshTetrahedralNodes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshTetrahedralNodes_h_Statics::EnumInfo[] = {
		{ TetMeshingMethod_StaticEnum, TEXT("TetMeshingMethod"), &Z_Registration_Info_UEnum_TetMeshingMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4221261397U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshTetrahedralNodes_h_Statics::ScriptStructInfo[] = {
		{ FConstructTetGridNode::StaticStruct, Z_Construct_UScriptStruct_FConstructTetGridNode_Statics::NewStructOps, TEXT("ConstructTetGridNode"), &Z_Registration_Info_UScriptStruct_ConstructTetGridNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstructTetGridNode), 1978496271U) },
		{ FGenerateTetrahedralCollectionDataflowNodes::StaticStruct, Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewStructOps, TEXT("GenerateTetrahedralCollectionDataflowNodes"), &Z_Registration_Info_UScriptStruct_GenerateTetrahedralCollectionDataflowNodes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenerateTetrahedralCollectionDataflowNodes), 1342346041U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshTetrahedralNodes_h_3292789484(TEXT("/Script/ChaosFleshNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshTetrahedralNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshTetrahedralNodes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshTetrahedralNodes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshTetrahedralNodes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
