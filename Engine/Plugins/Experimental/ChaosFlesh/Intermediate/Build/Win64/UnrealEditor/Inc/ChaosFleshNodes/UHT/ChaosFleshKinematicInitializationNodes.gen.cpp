// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/ChaosFleshKinematicInitializationNodes.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosFleshKinematicInitializationNodes() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	CHAOSFLESHNODES_API UEnum* Z_Construct_UEnum_ChaosFleshNodes_ESkeletalSeletionMode();
	CHAOSFLESHNODES_API UScriptStruct* Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode();
	CHAOSFLESHNODES_API UScriptStruct* Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates();
	CHAOSFLESHNODES_API UScriptStruct* Z_Construct_UScriptStruct_FBindVerticesToSkeleton();
	CHAOSFLESHNODES_API UScriptStruct* Z_Construct_UScriptStruct_FKinematicBodySetupInitializationDataflowNode();
	CHAOSFLESHNODES_API UScriptStruct* Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode();
	CHAOSFLESHNODES_API UScriptStruct* Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode();
	CHAOSFLESHNODES_API UScriptStruct* Z_Construct_UScriptStruct_FKinematicSkeletalMeshInitializationDataflowNode();
	CHAOSFLESHNODES_API UScriptStruct* Z_Construct_UScriptStruct_FKinematicTetrahedralBindingsDataflowNode();
	CHAOSFLESHNODES_API UScriptStruct* Z_Construct_UScriptStruct_FSetVerticesKinematicDataflowNode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ChaosFleshNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FKinematicTetrahedralBindingsDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FKinematicTetrahedralBindingsDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KinematicTetrahedralBindingsDataflowNode;
class UScriptStruct* FKinematicTetrahedralBindingsDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KinematicTetrahedralBindingsDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KinematicTetrahedralBindingsDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKinematicTetrahedralBindingsDataflowNode, (UObject*)Z_Construct_UPackage__Script_ChaosFleshNodes(), TEXT("KinematicTetrahedralBindingsDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_KinematicTetrahedralBindingsDataflowNode.OuterSingleton;
}
template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<FKinematicTetrahedralBindingsDataflowNode>()
{
	return FKinematicTetrahedralBindingsDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKinematicTetrahedralBindingsDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshIn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletalMeshIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExclusionList_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExclusionList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinematicTetrahedralBindingsDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "DataflowFlesh", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKinematicTetrahedralBindingsDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKinematicTetrahedralBindingsDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinematicTetrahedralBindingsDataflowNode_Statics::NewProp_SkeletalMeshIn_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "SkeletalMesh" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FKinematicTetrahedralBindingsDataflowNode_Statics::NewProp_SkeletalMeshIn = { "SkeletalMeshIn", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKinematicTetrahedralBindingsDataflowNode, SkeletalMeshIn), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinematicTetrahedralBindingsDataflowNode_Statics::NewProp_SkeletalMeshIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinematicTetrahedralBindingsDataflowNode_Statics::NewProp_SkeletalMeshIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinematicTetrahedralBindingsDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKinematicTetrahedralBindingsDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKinematicTetrahedralBindingsDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinematicTetrahedralBindingsDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinematicTetrahedralBindingsDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinematicTetrahedralBindingsDataflowNode_Statics::NewProp_ExclusionList_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FKinematicTetrahedralBindingsDataflowNode_Statics::NewProp_ExclusionList = { "ExclusionList", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKinematicTetrahedralBindingsDataflowNode, ExclusionList), METADATA_PARAMS(Z_Construct_UScriptStruct_FKinematicTetrahedralBindingsDataflowNode_Statics::NewProp_ExclusionList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinematicTetrahedralBindingsDataflowNode_Statics::NewProp_ExclusionList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKinematicTetrahedralBindingsDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinematicTetrahedralBindingsDataflowNode_Statics::NewProp_SkeletalMeshIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinematicTetrahedralBindingsDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinematicTetrahedralBindingsDataflowNode_Statics::NewProp_ExclusionList,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKinematicTetrahedralBindingsDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"KinematicTetrahedralBindingsDataflowNode",
		sizeof(FKinematicTetrahedralBindingsDataflowNode),
		alignof(FKinematicTetrahedralBindingsDataflowNode),
		Z_Construct_UScriptStruct_FKinematicTetrahedralBindingsDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinematicTetrahedralBindingsDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKinematicTetrahedralBindingsDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinematicTetrahedralBindingsDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKinematicTetrahedralBindingsDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_KinematicTetrahedralBindingsDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KinematicTetrahedralBindingsDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FKinematicTetrahedralBindingsDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KinematicTetrahedralBindingsDataflowNode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESkeletalSeletionMode;
	static UEnum* ESkeletalSeletionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESkeletalSeletionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESkeletalSeletionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosFleshNodes_ESkeletalSeletionMode, (UObject*)Z_Construct_UPackage__Script_ChaosFleshNodes(), TEXT("ESkeletalSeletionMode"));
		}
		return Z_Registration_Info_UEnum_ESkeletalSeletionMode.OuterSingleton;
	}
	template<> CHAOSFLESHNODES_API UEnum* StaticEnum<ESkeletalSeletionMode>()
	{
		return ESkeletalSeletionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ChaosFleshNodes_ESkeletalSeletionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ChaosFleshNodes_ESkeletalSeletionMode_Statics::Enumerators[] = {
		{ "ESkeletalSeletionMode::Dataflow_SkeletalSelection_Single", (int64)ESkeletalSeletionMode::Dataflow_SkeletalSelection_Single },
		{ "ESkeletalSeletionMode::Dataflow_SkeletalSelection_Branch", (int64)ESkeletalSeletionMode::Dataflow_SkeletalSelection_Branch },
		{ "ESkeletalSeletionMode::Chaos_Max", (int64)ESkeletalSeletionMode::Chaos_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ChaosFleshNodes_ESkeletalSeletionMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Chaos_Max.Comment", "//\n" },
		{ "Chaos_Max.Hidden", "" },
		{ "Chaos_Max.Name", "ESkeletalSeletionMode::Chaos_Max" },
		{ "Dataflow_SkeletalSelection_Branch.DisplayName", "Sub-Branch" },
		{ "Dataflow_SkeletalSelection_Branch.Name", "ESkeletalSeletionMode::Dataflow_SkeletalSelection_Branch" },
		{ "Dataflow_SkeletalSelection_Single.DisplayName", "Single" },
		{ "Dataflow_SkeletalSelection_Single.Name", "ESkeletalSeletionMode::Dataflow_SkeletalSelection_Single" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosFleshNodes_ESkeletalSeletionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ChaosFleshNodes,
		nullptr,
		"ESkeletalSeletionMode",
		"ESkeletalSeletionMode",
		Z_Construct_UEnum_ChaosFleshNodes_ESkeletalSeletionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosFleshNodes_ESkeletalSeletionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ChaosFleshNodes_ESkeletalSeletionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosFleshNodes_ESkeletalSeletionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ChaosFleshNodes_ESkeletalSeletionMode()
	{
		if (!Z_Registration_Info_UEnum_ESkeletalSeletionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESkeletalSeletionMode.InnerSingleton, Z_Construct_UEnum_ChaosFleshNodes_ESkeletalSeletionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESkeletalSeletionMode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FKinematicInitializationDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FKinematicInitializationDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KinematicInitializationDataflowNode;
class UScriptStruct* FKinematicInitializationDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KinematicInitializationDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KinematicInitializationDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode, (UObject*)Z_Construct_UPackage__Script_ChaosFleshNodes(), TEXT("KinematicInitializationDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_KinematicInitializationDataflowNode.OuterSingleton;
}
template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<FKinematicInitializationDataflowNode>()
{
	return FKinematicInitializationDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SkeletalSelectionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalSelectionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SkeletalSelectionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshIn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletalMeshIn;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VertexIndicesIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexIndicesIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexIndicesIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneIndexIn_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoneIndexIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "DataflowFlesh", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKinematicInitializationDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKinematicInitializationDataflowNode, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_Radius_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_SkeletalSelectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_SkeletalSelectionMode_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_SkeletalSelectionMode = { "SkeletalSelectionMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKinematicInitializationDataflowNode, SkeletalSelectionMode), Z_Construct_UEnum_ChaosFleshNodes_ESkeletalSeletionMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_SkeletalSelectionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_SkeletalSelectionMode_MetaData)) }; // 585864164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKinematicInitializationDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_SkeletalMeshIn_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "SkeletalMesh" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_SkeletalMeshIn = { "SkeletalMeshIn", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKinematicInitializationDataflowNode, SkeletalMeshIn), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_SkeletalMeshIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_SkeletalMeshIn_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_VertexIndicesIn_Inner = { "VertexIndicesIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_VertexIndicesIn_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "SelectionSet" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_VertexIndicesIn = { "VertexIndicesIn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKinematicInitializationDataflowNode, VertexIndicesIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_VertexIndicesIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_VertexIndicesIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_BoneIndexIn_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "BoneIndex" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_BoneIndexIn = { "BoneIndexIn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKinematicInitializationDataflowNode, BoneIndexIn), METADATA_PARAMS(Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_BoneIndexIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_BoneIndexIn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_SkeletalSelectionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_SkeletalSelectionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_SkeletalMeshIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_VertexIndicesIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_VertexIndicesIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewProp_BoneIndexIn,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"KinematicInitializationDataflowNode",
		sizeof(FKinematicInitializationDataflowNode),
		alignof(FKinematicInitializationDataflowNode),
		Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_KinematicInitializationDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KinematicInitializationDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KinematicInitializationDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FKinematicOriginInsertionInitializationDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FKinematicOriginInsertionInitializationDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KinematicOriginInsertionInitializationDataflowNode;
class UScriptStruct* FKinematicOriginInsertionInitializationDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KinematicOriginInsertionInitializationDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KinematicOriginInsertionInitializationDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode, (UObject*)Z_Construct_UPackage__Script_ChaosFleshNodes(), TEXT("KinematicOriginInsertionInitializationDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_KinematicOriginInsertionInitializationDataflowNode.OuterSingleton;
}
template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<FKinematicOriginInsertionInitializationDataflowNode>()
{
	return FKinematicOriginInsertionInitializationDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OriginVertexIndicesIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginVertexIndicesIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginVertexIndicesIn;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InsertionVertexIndicesIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InsertionVertexIndicesIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InsertionVertexIndicesIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneSkeletalMeshIn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BoneSkeletalMeshIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "DataflowFlesh", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKinematicOriginInsertionInitializationDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKinematicOriginInsertionInitializationDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::NewProp_OriginVertexIndicesIn_Inner = { "OriginVertexIndicesIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::NewProp_OriginVertexIndicesIn_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "OriginSelectionSet" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::NewProp_OriginVertexIndicesIn = { "OriginVertexIndicesIn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKinematicOriginInsertionInitializationDataflowNode, OriginVertexIndicesIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::NewProp_OriginVertexIndicesIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::NewProp_OriginVertexIndicesIn_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::NewProp_InsertionVertexIndicesIn_Inner = { "InsertionVertexIndicesIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::NewProp_InsertionVertexIndicesIn_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "InsertionSelectionSet" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::NewProp_InsertionVertexIndicesIn = { "InsertionVertexIndicesIn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKinematicOriginInsertionInitializationDataflowNode, InsertionVertexIndicesIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::NewProp_InsertionVertexIndicesIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::NewProp_InsertionVertexIndicesIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::NewProp_BoneSkeletalMeshIn_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "BoneSkeletalMesh" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::NewProp_BoneSkeletalMeshIn = { "BoneSkeletalMeshIn", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKinematicOriginInsertionInitializationDataflowNode, BoneSkeletalMeshIn), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::NewProp_BoneSkeletalMeshIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::NewProp_BoneSkeletalMeshIn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::NewProp_OriginVertexIndicesIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::NewProp_OriginVertexIndicesIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::NewProp_InsertionVertexIndicesIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::NewProp_InsertionVertexIndicesIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::NewProp_BoneSkeletalMeshIn,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"KinematicOriginInsertionInitializationDataflowNode",
		sizeof(FKinematicOriginInsertionInitializationDataflowNode),
		alignof(FKinematicOriginInsertionInitializationDataflowNode),
		Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_KinematicOriginInsertionInitializationDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KinematicOriginInsertionInitializationDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KinematicOriginInsertionInitializationDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSetVerticesKinematicDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FSetVerticesKinematicDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SetVerticesKinematicDataflowNode;
class UScriptStruct* FSetVerticesKinematicDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SetVerticesKinematicDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SetVerticesKinematicDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSetVerticesKinematicDataflowNode, (UObject*)Z_Construct_UPackage__Script_ChaosFleshNodes(), TEXT("SetVerticesKinematicDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_SetVerticesKinematicDataflowNode.OuterSingleton;
}
template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<FSetVerticesKinematicDataflowNode>()
{
	return FSetVerticesKinematicDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSetVerticesKinematicDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VertexIndicesIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexIndicesIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexIndicesIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetVerticesKinematicDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "DataflowFlesh", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSetVerticesKinematicDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSetVerticesKinematicDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetVerticesKinematicDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSetVerticesKinematicDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetVerticesKinematicDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FSetVerticesKinematicDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVerticesKinematicDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSetVerticesKinematicDataflowNode_Statics::NewProp_VertexIndicesIn_Inner = { "VertexIndicesIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetVerticesKinematicDataflowNode_Statics::NewProp_VertexIndicesIn_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "SelectionSet" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSetVerticesKinematicDataflowNode_Statics::NewProp_VertexIndicesIn = { "VertexIndicesIn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetVerticesKinematicDataflowNode, VertexIndicesIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSetVerticesKinematicDataflowNode_Statics::NewProp_VertexIndicesIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVerticesKinematicDataflowNode_Statics::NewProp_VertexIndicesIn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSetVerticesKinematicDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVerticesKinematicDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVerticesKinematicDataflowNode_Statics::NewProp_VertexIndicesIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVerticesKinematicDataflowNode_Statics::NewProp_VertexIndicesIn,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSetVerticesKinematicDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"SetVerticesKinematicDataflowNode",
		sizeof(FSetVerticesKinematicDataflowNode),
		alignof(FSetVerticesKinematicDataflowNode),
		Z_Construct_UScriptStruct_FSetVerticesKinematicDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVerticesKinematicDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSetVerticesKinematicDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVerticesKinematicDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSetVerticesKinematicDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_SetVerticesKinematicDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SetVerticesKinematicDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FSetVerticesKinematicDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SetVerticesKinematicDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FKinematicBodySetupInitializationDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FKinematicBodySetupInitializationDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KinematicBodySetupInitializationDataflowNode;
class UScriptStruct* FKinematicBodySetupInitializationDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KinematicBodySetupInitializationDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KinematicBodySetupInitializationDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKinematicBodySetupInitializationDataflowNode, (UObject*)Z_Construct_UPackage__Script_ChaosFleshNodes(), TEXT("KinematicBodySetupInitializationDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_KinematicBodySetupInitializationDataflowNode.OuterSingleton;
}
template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<FKinematicBodySetupInitializationDataflowNode>()
{
	return FKinematicBodySetupInitializationDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKinematicBodySetupInitializationDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshIn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletalMeshIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinematicBodySetupInitializationDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "DataflowFlesh", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKinematicBodySetupInitializationDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKinematicBodySetupInitializationDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinematicBodySetupInitializationDataflowNode_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKinematicBodySetupInitializationDataflowNode_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKinematicBodySetupInitializationDataflowNode, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinematicBodySetupInitializationDataflowNode_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinematicBodySetupInitializationDataflowNode_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinematicBodySetupInitializationDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKinematicBodySetupInitializationDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKinematicBodySetupInitializationDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinematicBodySetupInitializationDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinematicBodySetupInitializationDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinematicBodySetupInitializationDataflowNode_Statics::NewProp_SkeletalMeshIn_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "SkeletalMesh" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FKinematicBodySetupInitializationDataflowNode_Statics::NewProp_SkeletalMeshIn = { "SkeletalMeshIn", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKinematicBodySetupInitializationDataflowNode, SkeletalMeshIn), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinematicBodySetupInitializationDataflowNode_Statics::NewProp_SkeletalMeshIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinematicBodySetupInitializationDataflowNode_Statics::NewProp_SkeletalMeshIn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKinematicBodySetupInitializationDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinematicBodySetupInitializationDataflowNode_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinematicBodySetupInitializationDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinematicBodySetupInitializationDataflowNode_Statics::NewProp_SkeletalMeshIn,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKinematicBodySetupInitializationDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"KinematicBodySetupInitializationDataflowNode",
		sizeof(FKinematicBodySetupInitializationDataflowNode),
		alignof(FKinematicBodySetupInitializationDataflowNode),
		Z_Construct_UScriptStruct_FKinematicBodySetupInitializationDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinematicBodySetupInitializationDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKinematicBodySetupInitializationDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinematicBodySetupInitializationDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKinematicBodySetupInitializationDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_KinematicBodySetupInitializationDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KinematicBodySetupInitializationDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FKinematicBodySetupInitializationDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KinematicBodySetupInitializationDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FKinematicSkeletalMeshInitializationDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FKinematicSkeletalMeshInitializationDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KinematicSkeletalMeshInitializationDataflowNode;
class UScriptStruct* FKinematicSkeletalMeshInitializationDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KinematicSkeletalMeshInitializationDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KinematicSkeletalMeshInitializationDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKinematicSkeletalMeshInitializationDataflowNode, (UObject*)Z_Construct_UPackage__Script_ChaosFleshNodes(), TEXT("KinematicSkeletalMeshInitializationDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_KinematicSkeletalMeshInitializationDataflowNode.OuterSingleton;
}
template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<FKinematicSkeletalMeshInitializationDataflowNode>()
{
	return FKinematicSkeletalMeshInitializationDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKinematicSkeletalMeshInitializationDataflowNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshIn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletalMeshIn;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IndicesOut_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndicesOut_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IndicesOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinematicSkeletalMeshInitializationDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "DataflowFlesh", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKinematicSkeletalMeshInitializationDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKinematicSkeletalMeshInitializationDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinematicSkeletalMeshInitializationDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKinematicSkeletalMeshInitializationDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKinematicSkeletalMeshInitializationDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinematicSkeletalMeshInitializationDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinematicSkeletalMeshInitializationDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinematicSkeletalMeshInitializationDataflowNode_Statics::NewProp_SkeletalMeshIn_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "SkeletalMesh" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FKinematicSkeletalMeshInitializationDataflowNode_Statics::NewProp_SkeletalMeshIn = { "SkeletalMeshIn", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKinematicSkeletalMeshInitializationDataflowNode, SkeletalMeshIn), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinematicSkeletalMeshInitializationDataflowNode_Statics::NewProp_SkeletalMeshIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinematicSkeletalMeshInitializationDataflowNode_Statics::NewProp_SkeletalMeshIn_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKinematicSkeletalMeshInitializationDataflowNode_Statics::NewProp_IndicesOut_Inner = { "IndicesOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKinematicSkeletalMeshInitializationDataflowNode_Statics::NewProp_IndicesOut_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "DisplayName", "SelectionSet" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKinematicSkeletalMeshInitializationDataflowNode_Statics::NewProp_IndicesOut = { "IndicesOut", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKinematicSkeletalMeshInitializationDataflowNode, IndicesOut), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKinematicSkeletalMeshInitializationDataflowNode_Statics::NewProp_IndicesOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinematicSkeletalMeshInitializationDataflowNode_Statics::NewProp_IndicesOut_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKinematicSkeletalMeshInitializationDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinematicSkeletalMeshInitializationDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinematicSkeletalMeshInitializationDataflowNode_Statics::NewProp_SkeletalMeshIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinematicSkeletalMeshInitializationDataflowNode_Statics::NewProp_IndicesOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKinematicSkeletalMeshInitializationDataflowNode_Statics::NewProp_IndicesOut,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKinematicSkeletalMeshInitializationDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"KinematicSkeletalMeshInitializationDataflowNode",
		sizeof(FKinematicSkeletalMeshInitializationDataflowNode),
		alignof(FKinematicSkeletalMeshInitializationDataflowNode),
		Z_Construct_UScriptStruct_FKinematicSkeletalMeshInitializationDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinematicSkeletalMeshInitializationDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKinematicSkeletalMeshInitializationDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKinematicSkeletalMeshInitializationDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKinematicSkeletalMeshInitializationDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_KinematicSkeletalMeshInitializationDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KinematicSkeletalMeshInitializationDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FKinematicSkeletalMeshInitializationDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KinematicSkeletalMeshInitializationDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FBindVerticesToSkeleton>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FBindVerticesToSkeleton cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BindVerticesToSkeleton;
class UScriptStruct* FBindVerticesToSkeleton::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BindVerticesToSkeleton.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BindVerticesToSkeleton.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBindVerticesToSkeleton, (UObject*)Z_Construct_UPackage__Script_ChaosFleshNodes(), TEXT("BindVerticesToSkeleton"));
	}
	return Z_Registration_Info_UScriptStruct_BindVerticesToSkeleton.OuterSingleton;
}
template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<FBindVerticesToSkeleton>()
{
	return FBindVerticesToSkeleton::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBindVerticesToSkeleton_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VertexIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginBoneIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OriginBoneIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBindVerticesToSkeleton_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Connects vertices to a rig so that the vertices can be animated\n*/" },
		{ "DataflowFlesh", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
		{ "ToolTip", "Connects vertices to a rig so that the vertices can be animated" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBindVerticesToSkeleton_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBindVerticesToSkeleton>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBindVerticesToSkeleton_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBindVerticesToSkeleton_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBindVerticesToSkeleton, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FBindVerticesToSkeleton_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBindVerticesToSkeleton_Statics::NewProp_Collection_MetaData)) }; // 4011818293
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBindVerticesToSkeleton_Statics::NewProp_VertexIndices_Inner = { "VertexIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBindVerticesToSkeleton_Statics::NewProp_VertexIndices_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "Comment", "//! Indices to use with environment collisions.  If this input is not connected, then all \n//! indicies are used.\n" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Vertex Indices" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
		{ "ToolTip", "! Indices to use with environment collisions.  If this input is not connected, then all\n! indicies are used." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBindVerticesToSkeleton_Statics::NewProp_VertexIndices = { "VertexIndices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBindVerticesToSkeleton, VertexIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBindVerticesToSkeleton_Statics::NewProp_VertexIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBindVerticesToSkeleton_Statics::NewProp_VertexIndices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBindVerticesToSkeleton_Statics::NewProp_OriginBoneIndex_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "Comment", "//! Bone index to use as the world raycast origin.  -1 denotes the component transform.\n" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Raycast Origin Bone Index" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
		{ "ToolTip", "! Bone index to use as the world raycast origin.  -1 denotes the component transform." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBindVerticesToSkeleton_Statics::NewProp_OriginBoneIndex = { "OriginBoneIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBindVerticesToSkeleton, OriginBoneIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FBindVerticesToSkeleton_Statics::NewProp_OriginBoneIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBindVerticesToSkeleton_Statics::NewProp_OriginBoneIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBindVerticesToSkeleton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBindVerticesToSkeleton_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBindVerticesToSkeleton_Statics::NewProp_VertexIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBindVerticesToSkeleton_Statics::NewProp_VertexIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBindVerticesToSkeleton_Statics::NewProp_OriginBoneIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBindVerticesToSkeleton_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"BindVerticesToSkeleton",
		sizeof(FBindVerticesToSkeleton),
		alignof(FBindVerticesToSkeleton),
		Z_Construct_UScriptStruct_FBindVerticesToSkeleton_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBindVerticesToSkeleton_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBindVerticesToSkeleton_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBindVerticesToSkeleton_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBindVerticesToSkeleton()
	{
		if (!Z_Registration_Info_UScriptStruct_BindVerticesToSkeleton.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BindVerticesToSkeleton.InnerSingleton, Z_Construct_UScriptStruct_FBindVerticesToSkeleton_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BindVerticesToSkeleton.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAuthorSceneCollisionCandidates>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FAuthorSceneCollisionCandidates cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AuthorSceneCollisionCandidates;
class UScriptStruct* FAuthorSceneCollisionCandidates::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AuthorSceneCollisionCandidates.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AuthorSceneCollisionCandidates.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates, (UObject*)Z_Construct_UPackage__Script_ChaosFleshNodes(), TEXT("AuthorSceneCollisionCandidates"));
	}
	return Z_Registration_Info_UScriptStruct_AuthorSceneCollisionCandidates.OuterSingleton;
}
template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<FAuthorSceneCollisionCandidates>()
{
	return FAuthorSceneCollisionCandidates::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSurfaceVerticesOnly_MetaData[];
#endif
		static void NewProp_bSurfaceVerticesOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSurfaceVerticesOnly;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VertexIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginBoneIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OriginBoneIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Marks mesh vertices as candidates for scene collision raycasts.  Each vertex has an associated \n* bone index to use as the origin of the raycast.  The runtime distance between the vertex and the\n* bone designates the range of the scene query depth.\n*/" },
		{ "DataflowFlesh", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
		{ "ToolTip", "Marks mesh vertices as candidates for scene collision raycasts.  Each vertex has an associated\nbone index to use as the origin of the raycast.  The runtime distance between the vertex and the\nbone designates the range of the scene query depth." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuthorSceneCollisionCandidates>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAuthorSceneCollisionCandidates, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::NewProp_bSurfaceVerticesOnly_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "Comment", "//! Restricts vertices to only ones on the surface.  All vertices otherwise.\n" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
		{ "ToolTip", "! Restricts vertices to only ones on the surface.  All vertices otherwise." },
	};
#endif
	void Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::NewProp_bSurfaceVerticesOnly_SetBit(void* Obj)
	{
		((FAuthorSceneCollisionCandidates*)Obj)->bSurfaceVerticesOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::NewProp_bSurfaceVerticesOnly = { "bSurfaceVerticesOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAuthorSceneCollisionCandidates), &Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::NewProp_bSurfaceVerticesOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::NewProp_bSurfaceVerticesOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::NewProp_bSurfaceVerticesOnly_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::NewProp_VertexIndices_Inner = { "VertexIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::NewProp_VertexIndices_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "Comment", "//! Indices to use with environment collisions.  If this input is not connected, then all \n//! indicies are used.\n" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Vertex Indices" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
		{ "ToolTip", "! Indices to use with environment collisions.  If this input is not connected, then all\n! indicies are used." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::NewProp_VertexIndices = { "VertexIndices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAuthorSceneCollisionCandidates, VertexIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::NewProp_VertexIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::NewProp_VertexIndices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::NewProp_OriginBoneIndex_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "Comment", "//! Bone index to use as the world raycast origin.  -1 denotes the component transform.\n" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Raycast Origin Bone Index" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
		{ "ToolTip", "! Bone index to use as the world raycast origin.  -1 denotes the component transform." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::NewProp_OriginBoneIndex = { "OriginBoneIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAuthorSceneCollisionCandidates, OriginBoneIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::NewProp_OriginBoneIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::NewProp_OriginBoneIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::NewProp_bSurfaceVerticesOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::NewProp_VertexIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::NewProp_VertexIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::NewProp_OriginBoneIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"AuthorSceneCollisionCandidates",
		sizeof(FAuthorSceneCollisionCandidates),
		alignof(FAuthorSceneCollisionCandidates),
		Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates()
	{
		if (!Z_Registration_Info_UScriptStruct_AuthorSceneCollisionCandidates.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AuthorSceneCollisionCandidates.InnerSingleton, Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AuthorSceneCollisionCandidates.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAppendToCollectionTransformAttributeDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FAppendToCollectionTransformAttributeDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AppendToCollectionTransformAttributeDataflowNode;
class UScriptStruct* FAppendToCollectionTransformAttributeDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AppendToCollectionTransformAttributeDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AppendToCollectionTransformAttributeDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode, (UObject*)Z_Construct_UPackage__Script_ChaosFleshNodes(), TEXT("AppendToCollectionTransformAttributeDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_AppendToCollectionTransformAttributeDataflowNode.OuterSingleton;
}
template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<FAppendToCollectionTransformAttributeDataflowNode>()
{
	return FAppendToCollectionTransformAttributeDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GroupName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "DataflowFlesh", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAppendToCollectionTransformAttributeDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAppendToCollectionTransformAttributeDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode_Statics::NewProp_TransformIn_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "Transform" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode_Statics::NewProp_TransformIn = { "TransformIn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAppendToCollectionTransformAttributeDataflowNode, TransformIn), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode_Statics::NewProp_TransformIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode_Statics::NewProp_TransformIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode_Statics::NewProp_AttributeName_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAppendToCollectionTransformAttributeDataflowNode, AttributeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode_Statics::NewProp_AttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshKinematicInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAppendToCollectionTransformAttributeDataflowNode, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode_Statics::NewProp_GroupName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode_Statics::NewProp_TransformIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode_Statics::NewProp_GroupName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"AppendToCollectionTransformAttributeDataflowNode",
		sizeof(FAppendToCollectionTransformAttributeDataflowNode),
		alignof(FAppendToCollectionTransformAttributeDataflowNode),
		Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_AppendToCollectionTransformAttributeDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AppendToCollectionTransformAttributeDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AppendToCollectionTransformAttributeDataflowNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshKinematicInitializationNodes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshKinematicInitializationNodes_h_Statics::EnumInfo[] = {
		{ ESkeletalSeletionMode_StaticEnum, TEXT("ESkeletalSeletionMode"), &Z_Registration_Info_UEnum_ESkeletalSeletionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 585864164U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshKinematicInitializationNodes_h_Statics::ScriptStructInfo[] = {
		{ FKinematicTetrahedralBindingsDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FKinematicTetrahedralBindingsDataflowNode_Statics::NewStructOps, TEXT("KinematicTetrahedralBindingsDataflowNode"), &Z_Registration_Info_UScriptStruct_KinematicTetrahedralBindingsDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKinematicTetrahedralBindingsDataflowNode), 1432298321U) },
		{ FKinematicInitializationDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics::NewStructOps, TEXT("KinematicInitializationDataflowNode"), &Z_Registration_Info_UScriptStruct_KinematicInitializationDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKinematicInitializationDataflowNode), 3665089296U) },
		{ FKinematicOriginInsertionInitializationDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics::NewStructOps, TEXT("KinematicOriginInsertionInitializationDataflowNode"), &Z_Registration_Info_UScriptStruct_KinematicOriginInsertionInitializationDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKinematicOriginInsertionInitializationDataflowNode), 908725663U) },
		{ FSetVerticesKinematicDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FSetVerticesKinematicDataflowNode_Statics::NewStructOps, TEXT("SetVerticesKinematicDataflowNode"), &Z_Registration_Info_UScriptStruct_SetVerticesKinematicDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSetVerticesKinematicDataflowNode), 3334677078U) },
		{ FKinematicBodySetupInitializationDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FKinematicBodySetupInitializationDataflowNode_Statics::NewStructOps, TEXT("KinematicBodySetupInitializationDataflowNode"), &Z_Registration_Info_UScriptStruct_KinematicBodySetupInitializationDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKinematicBodySetupInitializationDataflowNode), 3967965137U) },
		{ FKinematicSkeletalMeshInitializationDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FKinematicSkeletalMeshInitializationDataflowNode_Statics::NewStructOps, TEXT("KinematicSkeletalMeshInitializationDataflowNode"), &Z_Registration_Info_UScriptStruct_KinematicSkeletalMeshInitializationDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKinematicSkeletalMeshInitializationDataflowNode), 136062381U) },
		{ FBindVerticesToSkeleton::StaticStruct, Z_Construct_UScriptStruct_FBindVerticesToSkeleton_Statics::NewStructOps, TEXT("BindVerticesToSkeleton"), &Z_Registration_Info_UScriptStruct_BindVerticesToSkeleton, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBindVerticesToSkeleton), 1068741737U) },
		{ FAuthorSceneCollisionCandidates::StaticStruct, Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics::NewStructOps, TEXT("AuthorSceneCollisionCandidates"), &Z_Registration_Info_UScriptStruct_AuthorSceneCollisionCandidates, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAuthorSceneCollisionCandidates), 1199006927U) },
		{ FAppendToCollectionTransformAttributeDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode_Statics::NewStructOps, TEXT("AppendToCollectionTransformAttributeDataflowNode"), &Z_Registration_Info_UScriptStruct_AppendToCollectionTransformAttributeDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAppendToCollectionTransformAttributeDataflowNode), 2830256963U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshKinematicInitializationNodes_h_4257995891(TEXT("/Script/ChaosFleshNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshKinematicInitializationNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshKinematicInitializationNodes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshKinematicInitializationNodes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshKinematicInitializationNodes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
