// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/ChaosFleshPositionTargetInitializationNodes.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosFleshPositionTargetInitializationNodes() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	CHAOSFLESHNODES_API UEnum* Z_Construct_UEnum_ChaosFleshNodes_ESkeletalBindingMode();
	CHAOSFLESHNODES_API UEnum* Z_Construct_UEnum_ChaosFleshNodes_ESkeletalSeletionMode();
	CHAOSFLESHNODES_API UScriptStruct* Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode();
	CHAOSFLESHNODES_API UScriptStruct* Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode();
	CHAOSFLESHNODES_API UScriptStruct* Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode();
	CHAOSFLESHNODES_API UScriptStruct* Z_Construct_UScriptStruct_FSetVertexTrianglePositionTargetBindingDataflowNode();
	CHAOSFLESHNODES_API UScriptStruct* Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ChaosFleshNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FAddKinematicParticlesDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FAddKinematicParticlesDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AddKinematicParticlesDataflowNode;
class UScriptStruct* FAddKinematicParticlesDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AddKinematicParticlesDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AddKinematicParticlesDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode, (UObject*)Z_Construct_UPackage__Script_ChaosFleshNodes(), TEXT("AddKinematicParticlesDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_AddKinematicParticlesDataflowNode.OuterSingleton;
}
template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<FAddKinematicParticlesDataflowNode>()
{
	return FAddKinematicParticlesDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
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
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetIndicesOut_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetIndicesOut_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetIndicesOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "DataflowFlesh", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshPositionTargetInitializationNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAddKinematicParticlesDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshPositionTargetInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAddKinematicParticlesDataflowNode, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshPositionTargetInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAddKinematicParticlesDataflowNode, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_SkeletalSelectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_SkeletalSelectionMode_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshPositionTargetInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_SkeletalSelectionMode = { "SkeletalSelectionMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAddKinematicParticlesDataflowNode, SkeletalSelectionMode), Z_Construct_UEnum_ChaosFleshNodes_ESkeletalSeletionMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_SkeletalSelectionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_SkeletalSelectionMode_MetaData)) }; // 585864164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshPositionTargetInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAddKinematicParticlesDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_SkeletalMeshIn_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "SkeletalMesh" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshPositionTargetInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_SkeletalMeshIn = { "SkeletalMeshIn", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAddKinematicParticlesDataflowNode, SkeletalMeshIn), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_SkeletalMeshIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_SkeletalMeshIn_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_VertexIndicesIn_Inner = { "VertexIndicesIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_VertexIndicesIn_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "SelectionSet" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshPositionTargetInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_VertexIndicesIn = { "VertexIndicesIn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAddKinematicParticlesDataflowNode, VertexIndicesIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_VertexIndicesIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_VertexIndicesIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_BoneIndexIn_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "BoneIndex" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshPositionTargetInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_BoneIndexIn = { "BoneIndexIn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAddKinematicParticlesDataflowNode, BoneIndexIn), METADATA_PARAMS(Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_BoneIndexIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_BoneIndexIn_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_TargetIndicesOut_Inner = { "TargetIndicesOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_TargetIndicesOut_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "DisplayName", "TargetIndices" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshPositionTargetInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_TargetIndicesOut = { "TargetIndicesOut", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAddKinematicParticlesDataflowNode, TargetIndicesOut), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_TargetIndicesOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_TargetIndicesOut_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_SkeletalSelectionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_SkeletalSelectionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_SkeletalMeshIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_VertexIndicesIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_VertexIndicesIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_BoneIndexIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_TargetIndicesOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewProp_TargetIndicesOut,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"AddKinematicParticlesDataflowNode",
		sizeof(FAddKinematicParticlesDataflowNode),
		alignof(FAddKinematicParticlesDataflowNode),
		Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_AddKinematicParticlesDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AddKinematicParticlesDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AddKinematicParticlesDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSetVertexVertexPositionTargetBindingDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FSetVertexVertexPositionTargetBindingDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SetVertexVertexPositionTargetBindingDataflowNode;
class UScriptStruct* FSetVertexVertexPositionTargetBindingDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SetVertexVertexPositionTargetBindingDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SetVertexVertexPositionTargetBindingDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode, (UObject*)Z_Construct_UPackage__Script_ChaosFleshNodes(), TEXT("SetVertexVertexPositionTargetBindingDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_SetVertexVertexPositionTargetBindingDataflowNode.OuterSingleton;
}
template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<FSetVertexVertexPositionTargetBindingDataflowNode>()
{
	return FSetVertexVertexPositionTargetBindingDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadiusRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RadiusRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetIndicesIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetIndicesIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetIndicesIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionTargetStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionTargetStiffness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "DataflowFlesh", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshPositionTargetInitializationNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSetVertexVertexPositionTargetBindingDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics::NewProp_RadiusRatio_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshPositionTargetInitializationNodes.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics::NewProp_RadiusRatio = { "RadiusRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetVertexVertexPositionTargetBindingDataflowNode, RadiusRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics::NewProp_RadiusRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics::NewProp_RadiusRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshPositionTargetInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetVertexVertexPositionTargetBindingDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics::NewProp_TargetIndicesIn_Inner = { "TargetIndicesIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics::NewProp_TargetIndicesIn_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "TargetIndicesIn" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshPositionTargetInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics::NewProp_TargetIndicesIn = { "TargetIndicesIn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetVertexVertexPositionTargetBindingDataflowNode, TargetIndicesIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics::NewProp_TargetIndicesIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics::NewProp_TargetIndicesIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics::NewProp_PositionTargetStiffness_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshPositionTargetInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics::NewProp_PositionTargetStiffness = { "PositionTargetStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetVertexVertexPositionTargetBindingDataflowNode, PositionTargetStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics::NewProp_PositionTargetStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics::NewProp_PositionTargetStiffness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics::NewProp_RadiusRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics::NewProp_TargetIndicesIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics::NewProp_TargetIndicesIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics::NewProp_PositionTargetStiffness,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"SetVertexVertexPositionTargetBindingDataflowNode",
		sizeof(FSetVertexVertexPositionTargetBindingDataflowNode),
		alignof(FSetVertexVertexPositionTargetBindingDataflowNode),
		Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_SetVertexVertexPositionTargetBindingDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SetVertexVertexPositionTargetBindingDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SetVertexVertexPositionTargetBindingDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSetVertexTetrahedraPositionTargetBindingDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FSetVertexTetrahedraPositionTargetBindingDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SetVertexTetrahedraPositionTargetBindingDataflowNode;
class UScriptStruct* FSetVertexTetrahedraPositionTargetBindingDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SetVertexTetrahedraPositionTargetBindingDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SetVertexTetrahedraPositionTargetBindingDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode, (UObject*)Z_Construct_UPackage__Script_ChaosFleshNodes(), TEXT("SetVertexTetrahedraPositionTargetBindingDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_SetVertexTetrahedraPositionTargetBindingDataflowNode.OuterSingleton;
}
template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<FSetVertexTetrahedraPositionTargetBindingDataflowNode>()
{
	return FSetVertexTetrahedraPositionTargetBindingDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetIndicesIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetIndicesIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetIndicesIn;
		static const UECodeGen_Private::FStrPropertyParams NewProp_GeometryGroupGuidsIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryGroupGuidsIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GeometryGroupGuidsIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionTargetStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionTargetStiffness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//USTRUCT(meta = (DataflowFlesh))\n//struct FComputeVertexSphereBVHDataflowNode : public FDataflowNode\n//{\n//\x09GENERATED_USTRUCT_BODY()\n//\x09\x09""DATAFLOW_NODE_DEFINE_INTERNAL(FComputeVertexSphereBVHDataflowNode, \"ComputeVertexSphereBVH\", \"Flesh\", \"\")\n//\x09\x09""DATAFLOW_NODE_RENDER_TYPE(FGeometryCollection::StaticType(), \"Collection\")\n//\n//public:\n//\x09typedef FManagedArrayCollection DataType;\n//\n//\x09UPROPERTY(EditAnywhere, Category = \"Dataflow\")\n//\x09\x09""float Radius = 40.f;\n//\n//\x09UPROPERTY(meta = (DataflowInput, DataflowOutput, DisplayName = \"Collection\", DataflowPassthrough = \"Collection\"))\n//\x09\x09""FManagedArrayCollection Collection;\n//\n//\x09UPROPERTY(meta = (DataflowInput, DisplayName = \"TargetIndicesIn\"))\n//\x09\x09TArray<int32> TargetIndicesIn;\n//\n//\x09UPROPERTY(EditAnywhere, Category = \"Dataflow\")\n//\x09\x09""float PositionTargetStiffness = 10000.f;\n//\n//\x09UPROPERTY(meta = (DataflowOutput, DisplayName = \"VertexBVH\"))\n//\x09\x09TArray<int32> VertexBVHOut;\n//\n//\n//\n//\x09""FComputeVertexSphereBVHDataflowNode(const Dataflow::FNodeParameters& InParam, FGuid InGuid = FGuid::NewGuid())\n//\x09\x09: FDataflowNode(InParam, InGuid)\n//\x09{\n//\x09\x09RegisterInputConnection(&Collection);\n//\x09\x09RegisterOutputConnection(&Collection, &Collection);\n//\x09\x09RegisterInputConnection(&TargetIndicesIn);\n//\x09\x09RegisterOutputConnection(&VertexBVHOut);\n//\x09}\n//\n//\x09virtual void Evaluate(Dataflow::FContext& Context, const FDataflowOutput* Out) const override;\n//};\n" },
		{ "DataflowFlesh", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshPositionTargetInitializationNodes.h" },
		{ "ToolTip", "USTRUCT(meta = (DataflowFlesh))\nstruct FComputeVertexSphereBVHDataflowNode : public FDataflowNode\n{\n       GENERATED_USTRUCT_BODY()\n               DATAFLOW_NODE_DEFINE_INTERNAL(FComputeVertexSphereBVHDataflowNode, \"ComputeVertexSphereBVH\", \"Flesh\", \"\")\n               DATAFLOW_NODE_RENDER_TYPE(FGeometryCollection::StaticType(), \"Collection\")\n\npublic:\n       typedef FManagedArrayCollection DataType;\n\n       UPROPERTY(EditAnywhere, Category = \"Dataflow\")\n               float Radius = 40.f;\n\n       UPROPERTY(meta = (DataflowInput, DataflowOutput, DisplayName = \"Collection\", DataflowPassthrough = \"Collection\"))\n               FManagedArrayCollection Collection;\n\n       UPROPERTY(meta = (DataflowInput, DisplayName = \"TargetIndicesIn\"))\n               TArray<int32> TargetIndicesIn;\n\n       UPROPERTY(EditAnywhere, Category = \"Dataflow\")\n               float PositionTargetStiffness = 10000.f;\n\n       UPROPERTY(meta = (DataflowOutput, DisplayName = \"VertexBVH\"))\n               TArray<int32> VertexBVHOut;\n\n\n\n       FComputeVertexSphereBVHDataflowNode(const Dataflow::FNodeParameters& InParam, FGuid InGuid = FGuid::NewGuid())\n               : FDataflowNode(InParam, InGuid)\n       {\n               RegisterInputConnection(&Collection);\n               RegisterOutputConnection(&Collection, &Collection);\n               RegisterInputConnection(&TargetIndicesIn);\n               RegisterOutputConnection(&VertexBVHOut);\n       }\n\n       virtual void Evaluate(Dataflow::FContext& Context, const FDataflowOutput* Out) const override;\n};" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSetVertexTetrahedraPositionTargetBindingDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshPositionTargetInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetVertexTetrahedraPositionTargetBindingDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::NewProp_TargetIndicesIn_Inner = { "TargetIndicesIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::NewProp_TargetIndicesIn_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "TargetIndicesIn" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshPositionTargetInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::NewProp_TargetIndicesIn = { "TargetIndicesIn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetVertexTetrahedraPositionTargetBindingDataflowNode, TargetIndicesIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::NewProp_TargetIndicesIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::NewProp_TargetIndicesIn_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::NewProp_GeometryGroupGuidsIn_Inner = { "GeometryGroupGuidsIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::NewProp_GeometryGroupGuidsIn_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "GeometryGroupGuidsIn" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshPositionTargetInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::NewProp_GeometryGroupGuidsIn = { "GeometryGroupGuidsIn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetVertexTetrahedraPositionTargetBindingDataflowNode, GeometryGroupGuidsIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::NewProp_GeometryGroupGuidsIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::NewProp_GeometryGroupGuidsIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::NewProp_PositionTargetStiffness_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshPositionTargetInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::NewProp_PositionTargetStiffness = { "PositionTargetStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetVertexTetrahedraPositionTargetBindingDataflowNode, PositionTargetStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::NewProp_PositionTargetStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::NewProp_PositionTargetStiffness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::NewProp_TargetIndicesIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::NewProp_TargetIndicesIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::NewProp_GeometryGroupGuidsIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::NewProp_GeometryGroupGuidsIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::NewProp_PositionTargetStiffness,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"SetVertexTetrahedraPositionTargetBindingDataflowNode",
		sizeof(FSetVertexTetrahedraPositionTargetBindingDataflowNode),
		alignof(FSetVertexTetrahedraPositionTargetBindingDataflowNode),
		Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_SetVertexTetrahedraPositionTargetBindingDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SetVertexTetrahedraPositionTargetBindingDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SetVertexTetrahedraPositionTargetBindingDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSetVertexTrianglePositionTargetBindingDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FSetVertexTrianglePositionTargetBindingDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SetVertexTrianglePositionTargetBindingDataflowNode;
class UScriptStruct* FSetVertexTrianglePositionTargetBindingDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SetVertexTrianglePositionTargetBindingDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SetVertexTrianglePositionTargetBindingDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSetVertexTrianglePositionTargetBindingDataflowNode, (UObject*)Z_Construct_UPackage__Script_ChaosFleshNodes(), TEXT("SetVertexTrianglePositionTargetBindingDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_SetVertexTrianglePositionTargetBindingDataflowNode.OuterSingleton;
}
template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<FSetVertexTrianglePositionTargetBindingDataflowNode>()
{
	return FSetVertexTrianglePositionTargetBindingDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSetVertexTrianglePositionTargetBindingDataflowNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionTargetStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionTargetStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexRadiusRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VertexRadiusRatio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetVertexTrianglePositionTargetBindingDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "DataflowFlesh", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshPositionTargetInitializationNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSetVertexTrianglePositionTargetBindingDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSetVertexTrianglePositionTargetBindingDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetVertexTrianglePositionTargetBindingDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshPositionTargetInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSetVertexTrianglePositionTargetBindingDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetVertexTrianglePositionTargetBindingDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FSetVertexTrianglePositionTargetBindingDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVertexTrianglePositionTargetBindingDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetVertexTrianglePositionTargetBindingDataflowNode_Statics::NewProp_PositionTargetStiffness_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshPositionTargetInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSetVertexTrianglePositionTargetBindingDataflowNode_Statics::NewProp_PositionTargetStiffness = { "PositionTargetStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetVertexTrianglePositionTargetBindingDataflowNode, PositionTargetStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FSetVertexTrianglePositionTargetBindingDataflowNode_Statics::NewProp_PositionTargetStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVertexTrianglePositionTargetBindingDataflowNode_Statics::NewProp_PositionTargetStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetVertexTrianglePositionTargetBindingDataflowNode_Statics::NewProp_VertexRadiusRatio_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "//UPROPERTY(EditAnywhere, Category = \"Dataflow\", meta = (ClampMin = \"0.0\", ClampMax = \"1.0\", UIMin = \"0.0\", UIMax = \"1.0\"))\n//\x09""float TriangleRadiusPadding = .1f;\n" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshPositionTargetInitializationNodes.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = \"Dataflow\", meta = (ClampMin = \"0.0\", ClampMax = \"1.0\", UIMin = \"0.0\", UIMax = \"1.0\"))\n       float TriangleRadiusPadding = .1f;" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSetVertexTrianglePositionTargetBindingDataflowNode_Statics::NewProp_VertexRadiusRatio = { "VertexRadiusRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetVertexTrianglePositionTargetBindingDataflowNode, VertexRadiusRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FSetVertexTrianglePositionTargetBindingDataflowNode_Statics::NewProp_VertexRadiusRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVertexTrianglePositionTargetBindingDataflowNode_Statics::NewProp_VertexRadiusRatio_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSetVertexTrianglePositionTargetBindingDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexTrianglePositionTargetBindingDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexTrianglePositionTargetBindingDataflowNode_Statics::NewProp_PositionTargetStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVertexTrianglePositionTargetBindingDataflowNode_Statics::NewProp_VertexRadiusRatio,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSetVertexTrianglePositionTargetBindingDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"SetVertexTrianglePositionTargetBindingDataflowNode",
		sizeof(FSetVertexTrianglePositionTargetBindingDataflowNode),
		alignof(FSetVertexTrianglePositionTargetBindingDataflowNode),
		Z_Construct_UScriptStruct_FSetVertexTrianglePositionTargetBindingDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVertexTrianglePositionTargetBindingDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSetVertexTrianglePositionTargetBindingDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVertexTrianglePositionTargetBindingDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSetVertexTrianglePositionTargetBindingDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_SetVertexTrianglePositionTargetBindingDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SetVertexTrianglePositionTargetBindingDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FSetVertexTrianglePositionTargetBindingDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SetVertexTrianglePositionTargetBindingDataflowNode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESkeletalBindingMode;
	static UEnum* ESkeletalBindingMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESkeletalBindingMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESkeletalBindingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosFleshNodes_ESkeletalBindingMode, (UObject*)Z_Construct_UPackage__Script_ChaosFleshNodes(), TEXT("ESkeletalBindingMode"));
		}
		return Z_Registration_Info_UEnum_ESkeletalBindingMode.OuterSingleton;
	}
	template<> CHAOSFLESHNODES_API UEnum* StaticEnum<ESkeletalBindingMode>()
	{
		return ESkeletalBindingMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ChaosFleshNodes_ESkeletalBindingMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ChaosFleshNodes_ESkeletalBindingMode_Statics::Enumerators[] = {
		{ "ESkeletalBindingMode::Dataflow_SkeletalBinding_Kinematic", (int64)ESkeletalBindingMode::Dataflow_SkeletalBinding_Kinematic },
		{ "ESkeletalBindingMode::Dataflow_SkeletalBinding_PositionTarget", (int64)ESkeletalBindingMode::Dataflow_SkeletalBinding_PositionTarget },
		{ "ESkeletalBindingMode::Chaos_Max", (int64)ESkeletalBindingMode::Chaos_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ChaosFleshNodes_ESkeletalBindingMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Chaos_Max.Comment", "//\n" },
		{ "Chaos_Max.Hidden", "" },
		{ "Chaos_Max.Name", "ESkeletalBindingMode::Chaos_Max" },
		{ "Dataflow_SkeletalBinding_Kinematic.DisplayName", "Kinematic" },
		{ "Dataflow_SkeletalBinding_Kinematic.Name", "ESkeletalBindingMode::Dataflow_SkeletalBinding_Kinematic" },
		{ "Dataflow_SkeletalBinding_PositionTarget.DisplayName", "Position Target" },
		{ "Dataflow_SkeletalBinding_PositionTarget.Name", "ESkeletalBindingMode::Dataflow_SkeletalBinding_PositionTarget" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshPositionTargetInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosFleshNodes_ESkeletalBindingMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ChaosFleshNodes,
		nullptr,
		"ESkeletalBindingMode",
		"ESkeletalBindingMode",
		Z_Construct_UEnum_ChaosFleshNodes_ESkeletalBindingMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosFleshNodes_ESkeletalBindingMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ChaosFleshNodes_ESkeletalBindingMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosFleshNodes_ESkeletalBindingMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ChaosFleshNodes_ESkeletalBindingMode()
	{
		if (!Z_Registration_Info_UEnum_ESkeletalBindingMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESkeletalBindingMode.InnerSingleton, Z_Construct_UEnum_ChaosFleshNodes_ESkeletalBindingMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESkeletalBindingMode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSetFleshBonePositionTargetBindingDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FSetFleshBonePositionTargetBindingDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SetFleshBonePositionTargetBindingDataflowNode;
class UScriptStruct* FSetFleshBonePositionTargetBindingDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SetFleshBonePositionTargetBindingDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SetFleshBonePositionTargetBindingDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode, (UObject*)Z_Construct_UPackage__Script_ChaosFleshNodes(), TEXT("SetFleshBonePositionTargetBindingDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_SetFleshBonePositionTargetBindingDataflowNode.OuterSingleton;
}
template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<FSetFleshBonePositionTargetBindingDataflowNode>()
{
	return FSetFleshBonePositionTargetBindingDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SkeletalBindingMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalBindingMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SkeletalBindingMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionTargetStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionTargetStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshIn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletalMeshIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexRadiusRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VertexRadiusRatio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "DataflowFlesh", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshPositionTargetInitializationNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSetFleshBonePositionTargetBindingDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshPositionTargetInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetFleshBonePositionTargetBindingDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::NewProp_SkeletalBindingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::NewProp_SkeletalBindingMode_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshPositionTargetInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::NewProp_SkeletalBindingMode = { "SkeletalBindingMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetFleshBonePositionTargetBindingDataflowNode, SkeletalBindingMode), Z_Construct_UEnum_ChaosFleshNodes_ESkeletalBindingMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::NewProp_SkeletalBindingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::NewProp_SkeletalBindingMode_MetaData)) }; // 4009928972
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::NewProp_PositionTargetStiffness_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshPositionTargetInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::NewProp_PositionTargetStiffness = { "PositionTargetStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetFleshBonePositionTargetBindingDataflowNode, PositionTargetStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::NewProp_PositionTargetStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::NewProp_PositionTargetStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::NewProp_SkeletalMeshIn_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "SkeletalMesh" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshPositionTargetInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::NewProp_SkeletalMeshIn = { "SkeletalMeshIn", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetFleshBonePositionTargetBindingDataflowNode, SkeletalMeshIn), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::NewProp_SkeletalMeshIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::NewProp_SkeletalMeshIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::NewProp_VertexRadiusRatio_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshPositionTargetInitializationNodes.h" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::NewProp_VertexRadiusRatio = { "VertexRadiusRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetFleshBonePositionTargetBindingDataflowNode, VertexRadiusRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::NewProp_VertexRadiusRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::NewProp_VertexRadiusRatio_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::NewProp_SkeletalBindingMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::NewProp_SkeletalBindingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::NewProp_PositionTargetStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::NewProp_SkeletalMeshIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::NewProp_VertexRadiusRatio,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"SetFleshBonePositionTargetBindingDataflowNode",
		sizeof(FSetFleshBonePositionTargetBindingDataflowNode),
		alignof(FSetFleshBonePositionTargetBindingDataflowNode),
		Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_SetFleshBonePositionTargetBindingDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SetFleshBonePositionTargetBindingDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SetFleshBonePositionTargetBindingDataflowNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshPositionTargetInitializationNodes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshPositionTargetInitializationNodes_h_Statics::EnumInfo[] = {
		{ ESkeletalBindingMode_StaticEnum, TEXT("ESkeletalBindingMode"), &Z_Registration_Info_UEnum_ESkeletalBindingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4009928972U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshPositionTargetInitializationNodes_h_Statics::ScriptStructInfo[] = {
		{ FAddKinematicParticlesDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics::NewStructOps, TEXT("AddKinematicParticlesDataflowNode"), &Z_Registration_Info_UScriptStruct_AddKinematicParticlesDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAddKinematicParticlesDataflowNode), 429892689U) },
		{ FSetVertexVertexPositionTargetBindingDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics::NewStructOps, TEXT("SetVertexVertexPositionTargetBindingDataflowNode"), &Z_Registration_Info_UScriptStruct_SetVertexVertexPositionTargetBindingDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSetVertexVertexPositionTargetBindingDataflowNode), 2848735537U) },
		{ FSetVertexTetrahedraPositionTargetBindingDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics::NewStructOps, TEXT("SetVertexTetrahedraPositionTargetBindingDataflowNode"), &Z_Registration_Info_UScriptStruct_SetVertexTetrahedraPositionTargetBindingDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSetVertexTetrahedraPositionTargetBindingDataflowNode), 3873911660U) },
		{ FSetVertexTrianglePositionTargetBindingDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FSetVertexTrianglePositionTargetBindingDataflowNode_Statics::NewStructOps, TEXT("SetVertexTrianglePositionTargetBindingDataflowNode"), &Z_Registration_Info_UScriptStruct_SetVertexTrianglePositionTargetBindingDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSetVertexTrianglePositionTargetBindingDataflowNode), 643466108U) },
		{ FSetFleshBonePositionTargetBindingDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics::NewStructOps, TEXT("SetFleshBonePositionTargetBindingDataflowNode"), &Z_Registration_Info_UScriptStruct_SetFleshBonePositionTargetBindingDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSetFleshBonePositionTargetBindingDataflowNode), 209654465U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshPositionTargetInitializationNodes_h_95701259(TEXT("/Script/ChaosFleshNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshPositionTargetInitializationNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshPositionTargetInitializationNodes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshPositionTargetInitializationNodes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshPositionTargetInitializationNodes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
