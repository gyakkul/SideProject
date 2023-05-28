// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NearestNeighborModel.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNearestNeighborModel() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCache_NoRegister();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerMorphModel();
	NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UNearestNeighborModel();
	NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UNearestNeighborModel_NoRegister();
	NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UNearestNeighborOptimizedNetwork_NoRegister();
	NEARESTNEIGHBORMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FClothPartData();
	NEARESTNEIGHBORMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FClothPartEditorData();
	NEARESTNEIGHBORMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletonCachePair();
	NEURALNETWORKINFERENCE_API UClass* Z_Construct_UClass_UNeuralNetwork_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NearestNeighborModel();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletonCachePair;
class UScriptStruct* FSkeletonCachePair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletonCachePair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletonCachePair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletonCachePair, (UObject*)Z_Construct_UPackage__Script_NearestNeighborModel(), TEXT("SkeletonCachePair"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletonCachePair.OuterSingleton;
}
template<> NEARESTNEIGHBORMODEL_API UScriptStruct* StaticStruct<FSkeletonCachePair>()
{
	return FSkeletonCachePair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkeletonCachePair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skeletons_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Skeletons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cache_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Cache;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletonCachePair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletonCachePair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletonCachePair>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletonCachePair_Statics::NewProp_Skeletons_MetaData[] = {
		{ "Category", "Nearest Neighbors" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSkeletonCachePair_Statics::NewProp_Skeletons = { "Skeletons", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletonCachePair, Skeletons), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletonCachePair_Statics::NewProp_Skeletons_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonCachePair_Statics::NewProp_Skeletons_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletonCachePair_Statics::NewProp_Cache_MetaData[] = {
		{ "Category", "Nearest Neighbors" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSkeletonCachePair_Statics::NewProp_Cache = { "Cache", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletonCachePair, Cache), Z_Construct_UClass_UGeometryCache_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletonCachePair_Statics::NewProp_Cache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonCachePair_Statics::NewProp_Cache_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletonCachePair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonCachePair_Statics::NewProp_Skeletons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonCachePair_Statics::NewProp_Cache,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletonCachePair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NearestNeighborModel,
		nullptr,
		&NewStructOps,
		"SkeletonCachePair",
		sizeof(FSkeletonCachePair),
		alignof(FSkeletonCachePair),
		Z_Construct_UScriptStruct_FSkeletonCachePair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonCachePair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletonCachePair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonCachePair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletonCachePair()
	{
		if (!Z_Registration_Info_UScriptStruct_SkeletonCachePair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletonCachePair.InnerSingleton, Z_Construct_UScriptStruct_FSkeletonCachePair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkeletonCachePair.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClothPartEditorData;
class UScriptStruct* FClothPartEditorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClothPartEditorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClothPartEditorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothPartEditorData, (UObject*)Z_Construct_UPackage__Script_NearestNeighborModel(), TEXT("ClothPartEditorData"));
	}
	return Z_Registration_Info_UScriptStruct_ClothPartEditorData.OuterSingleton;
}
template<> NEARESTNEIGHBORMODEL_API UScriptStruct* StaticStruct<FClothPartEditorData>()
{
	return FClothPartEditorData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClothPartEditorData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PCACoeffNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PCACoeffNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexMapPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VertexMapPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MeshIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPartEditorData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothPartEditorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothPartEditorData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPartEditorData_Statics::NewProp_PCACoeffNum_MetaData[] = {
		{ "Category", "Nearest Neighbors" },
		{ "ClampMax", "128" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClothPartEditorData_Statics::NewProp_PCACoeffNum = { "PCACoeffNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothPartEditorData, PCACoeffNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPartEditorData_Statics::NewProp_PCACoeffNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPartEditorData_Statics::NewProp_PCACoeffNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPartEditorData_Statics::NewProp_VertexMapPath_MetaData[] = {
		{ "Category", "Nearest Neighbors" },
		{ "DisplayName", "Vertex Map Path (Optional)" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClothPartEditorData_Statics::NewProp_VertexMapPath = { "VertexMapPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothPartEditorData, VertexMapPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPartEditorData_Statics::NewProp_VertexMapPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPartEditorData_Statics::NewProp_VertexMapPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPartEditorData_Statics::NewProp_MeshIndex_MetaData[] = {
		{ "Category", "Nearest Neighbors" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClothPartEditorData_Statics::NewProp_MeshIndex = { "MeshIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothPartEditorData, MeshIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPartEditorData_Statics::NewProp_MeshIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPartEditorData_Statics::NewProp_MeshIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothPartEditorData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPartEditorData_Statics::NewProp_PCACoeffNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPartEditorData_Statics::NewProp_VertexMapPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPartEditorData_Statics::NewProp_MeshIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothPartEditorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NearestNeighborModel,
		nullptr,
		&NewStructOps,
		"ClothPartEditorData",
		sizeof(FClothPartEditorData),
		alignof(FClothPartEditorData),
		Z_Construct_UScriptStruct_FClothPartEditorData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPartEditorData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPartEditorData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPartEditorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothPartEditorData()
	{
		if (!Z_Registration_Info_UScriptStruct_ClothPartEditorData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClothPartEditorData.InnerSingleton, Z_Construct_UScriptStruct_FClothPartEditorData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClothPartEditorData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClothPartData;
class UScriptStruct* FClothPartData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClothPartData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClothPartData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothPartData, (UObject*)Z_Construct_UPackage__Script_NearestNeighborModel(), TEXT("ClothPartData"));
	}
	return Z_Registration_Info_UScriptStruct_ClothPartData.OuterSingleton;
}
template<> NEARESTNEIGHBORMODEL_API UScriptStruct* StaticStruct<FClothPartData>()
{
	return FClothPartData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClothPartData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PCACoeffNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PCACoeffNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PCACoeffStart_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_PCACoeffStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumVertices_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumVertices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumNeighbors_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumNeighbors;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_VertexMap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexMap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexMap;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PCABasis_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PCABasis_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PCABasis;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VertexMean_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexMean_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexMean;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NeighborCoeffs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NeighborCoeffs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NeighborCoeffs;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NeighborOffsets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NeighborOffsets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NeighborOffsets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPartData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothPartData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothPartData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_PCACoeffNum_MetaData[] = {
		{ "Comment", "/** Number of PCA coefficients for this cloth part. */" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
		{ "ToolTip", "Number of PCA coefficients for this cloth part." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_PCACoeffNum = { "PCACoeffNum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothPartData, PCACoeffNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_PCACoeffNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_PCACoeffNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_PCACoeffStart_MetaData[] = {
		{ "Comment", "/** The start index of PCA coeffcients of this cloth part */" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
		{ "ToolTip", "The start index of PCA coeffcients of this cloth part" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_PCACoeffStart = { "PCACoeffStart", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothPartData, PCACoeffStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_PCACoeffStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_PCACoeffStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_NumVertices_MetaData[] = {
		{ "Comment", "/** Number of vertices in this cloth part */" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
		{ "ToolTip", "Number of vertices in this cloth part" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_NumVertices = { "NumVertices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothPartData, NumVertices), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_NumVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_NumVertices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_NumNeighbors_MetaData[] = {
		{ "Comment", "/** Number of neighbors used for this cloth part */" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
		{ "ToolTip", "Number of neighbors used for this cloth part" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_NumNeighbors = { "NumNeighbors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothPartData, NumNeighbors), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_NumNeighbors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_NumNeighbors_MetaData)) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_VertexMap_Inner = { "VertexMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_VertexMap_MetaData[] = {
		{ "Comment", "/** Vertex indices for this cloth part */" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
		{ "ToolTip", "Vertex indices for this cloth part" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_VertexMap = { "VertexMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothPartData, VertexMap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_VertexMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_VertexMap_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_PCABasis_Inner = { "PCABasis", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_PCABasis_MetaData[] = {
		{ "Comment", "/** PCA basis for this cloth part. This is a flattened array of size (PCACoeffNum, NumVertices * 3)  */" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
		{ "ToolTip", "PCA basis for this cloth part. This is a flattened array of size (PCACoeffNum, NumVertices * 3)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_PCABasis = { "PCABasis", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothPartData, PCABasis), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_PCABasis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_PCABasis_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_VertexMean_Inner = { "VertexMean", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_VertexMean_MetaData[] = {
		{ "Comment", "/** Vertex mean for PCA computation. This has the size of NumVertices * 3 */" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
		{ "ToolTip", "Vertex mean for PCA computation. This has the size of NumVertices * 3" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_VertexMean = { "VertexMean", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothPartData, VertexMean), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_VertexMean_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_VertexMean_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_NeighborCoeffs_Inner = { "NeighborCoeffs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_NeighborCoeffs_MetaData[] = {
		{ "Comment", "/** PCA coefficients of the nearest neighbors. This is a flattened array of size (NumNeighbors, PCACoeffNum) */" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
		{ "ToolTip", "PCA coefficients of the nearest neighbors. This is a flattened array of size (NumNeighbors, PCACoeffNum)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_NeighborCoeffs = { "NeighborCoeffs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothPartData, NeighborCoeffs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_NeighborCoeffs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_NeighborCoeffs_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_NeighborOffsets_Inner = { "NeighborOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_NeighborOffsets_MetaData[] = {
		{ "Comment", "/** The remaining offsets of the nearest neighbor shapes (after reducing PCA offsets). This is a flattened array of size (NumNeighbors, PCACoeffNum) */" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
		{ "ToolTip", "The remaining offsets of the nearest neighbor shapes (after reducing PCA offsets). This is a flattened array of size (NumNeighbors, PCACoeffNum)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_NeighborOffsets = { "NeighborOffsets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothPartData, NeighborOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_NeighborOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_NeighborOffsets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothPartData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_PCACoeffNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_PCACoeffStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_NumVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_NumNeighbors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_VertexMap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_VertexMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_PCABasis_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_PCABasis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_VertexMean_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_VertexMean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_NeighborCoeffs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_NeighborCoeffs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_NeighborOffsets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPartData_Statics::NewProp_NeighborOffsets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothPartData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NearestNeighborModel,
		nullptr,
		&NewStructOps,
		"ClothPartData",
		sizeof(FClothPartData),
		alignof(FClothPartData),
		Z_Construct_UScriptStruct_FClothPartData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPartData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPartData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPartData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothPartData()
	{
		if (!Z_Registration_Info_UScriptStruct_ClothPartData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClothPartData.InnerSingleton, Z_Construct_UScriptStruct_FClothPartData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClothPartData.InnerSingleton;
	}
	DEFINE_FUNCTION(UNearestNeighborModel::execClipInputs)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->ClipInputs(Z_Param_Out_Input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborModel::execSetNeighborOffsets)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PartId);
		P_GET_TARRAY_REF(float,Z_Param_Out_NeighborOffsets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNeighborOffsets(Z_Param_PartId,Z_Param_Out_NeighborOffsets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborModel::execNeighborOffsets)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PartId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->NeighborOffsets(Z_Param_PartId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborModel::execSetNeighborCoeffs)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PartId);
		P_GET_TARRAY_REF(float,Z_Param_Out_NeighborCoeffs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNeighborCoeffs(Z_Param_PartId,Z_Param_Out_NeighborCoeffs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborModel::execNeighborCoeffs)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PartId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->NeighborCoeffs(Z_Param_PartId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborModel::execSetNumNeighbors)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PartId);
		P_GET_PROPERTY(FIntProperty,Z_Param_InNumNeighbors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNumNeighbors(Z_Param_PartId,Z_Param_InNumNeighbors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborModel::execSetVertexMean)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PartId);
		P_GET_TARRAY_REF(float,Z_Param_Out_VertexMean);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVertexMean(Z_Param_PartId,Z_Param_Out_VertexMean);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborModel::execVertexMean)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PartId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->VertexMean(Z_Param_PartId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborModel::execSetPCABasis)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PartId);
		P_GET_TARRAY_REF(float,Z_Param_Out_PCABasis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPCABasis(Z_Param_PartId,Z_Param_Out_PCABasis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborModel::execPCABasis)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PartId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->PCABasis(Z_Param_PartId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborModel::execGetNumNeighbors)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PartId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumNeighbors(Z_Param_PartId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborModel::execGetPCACoeffNum)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PartId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPCACoeffNum(Z_Param_PartId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborModel::execGetPCACoeffStart)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PartId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPCACoeffStart(Z_Param_PartId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborModel::execGetPartNumVerts)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PartId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPartNumVerts(Z_Param_PartId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborModel::execGetNumParts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumParts();
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UNearestNeighborModel::execGetModelDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetModelDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborModel::execGetNearestNeighborData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSkeletonCachePair>*)Z_Param__Result=P_THIS->GetNearestNeighborData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborModel::execGetClothPartEditorData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FClothPartEditorData>*)Z_Param__Result=P_THIS->GetClothPartEditorData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborModel::execGetLearningRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLearningRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborModel::execGetBatchSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetBatchSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborModel::execGetNumEpochs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumEpochs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborModel::execGetOutputDim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetOutputDim();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborModel::execGetHiddenLayerDims)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetHiddenLayerDims();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNearestNeighborModel::execGetInputDim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInputDim();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UNearestNeighborModel::StaticRegisterNativesUNearestNeighborModel()
	{
		UClass* Class = UNearestNeighborModel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClipInputs", &UNearestNeighborModel::execClipInputs },
#if WITH_EDITOR
			{ "GetBatchSize", &UNearestNeighborModel::execGetBatchSize },
			{ "GetClothPartEditorData", &UNearestNeighborModel::execGetClothPartEditorData },
			{ "GetHiddenLayerDims", &UNearestNeighborModel::execGetHiddenLayerDims },
			{ "GetInputDim", &UNearestNeighborModel::execGetInputDim },
			{ "GetLearningRate", &UNearestNeighborModel::execGetLearningRate },
			{ "GetModelDir", &UNearestNeighborModel::execGetModelDir },
			{ "GetNearestNeighborData", &UNearestNeighborModel::execGetNearestNeighborData },
			{ "GetNumEpochs", &UNearestNeighborModel::execGetNumEpochs },
#endif // WITH_EDITOR
			{ "GetNumNeighbors", &UNearestNeighborModel::execGetNumNeighbors },
			{ "GetNumParts", &UNearestNeighborModel::execGetNumParts },
#if WITH_EDITOR
			{ "GetOutputDim", &UNearestNeighborModel::execGetOutputDim },
#endif // WITH_EDITOR
			{ "GetPartNumVerts", &UNearestNeighborModel::execGetPartNumVerts },
			{ "GetPCACoeffNum", &UNearestNeighborModel::execGetPCACoeffNum },
			{ "GetPCACoeffStart", &UNearestNeighborModel::execGetPCACoeffStart },
			{ "NeighborCoeffs", &UNearestNeighborModel::execNeighborCoeffs },
			{ "NeighborOffsets", &UNearestNeighborModel::execNeighborOffsets },
			{ "PCABasis", &UNearestNeighborModel::execPCABasis },
			{ "SetNeighborCoeffs", &UNearestNeighborModel::execSetNeighborCoeffs },
			{ "SetNeighborOffsets", &UNearestNeighborModel::execSetNeighborOffsets },
			{ "SetNumNeighbors", &UNearestNeighborModel::execSetNumNeighbors },
			{ "SetPCABasis", &UNearestNeighborModel::execSetPCABasis },
			{ "SetVertexMean", &UNearestNeighborModel::execSetVertexMean },
			{ "VertexMean", &UNearestNeighborModel::execVertexMean },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNearestNeighborModel_ClipInputs_Statics
	{
		struct NearestNeighborModel_eventClipInputs_Parms
		{
			TArray<float> Input;
			TArray<float> ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Input_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Input;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNearestNeighborModel_ClipInputs_Statics::NewProp_Input_Inner = { "Input", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_ClipInputs_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNearestNeighborModel_ClipInputs_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventClipInputs_Parms, Input), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_ClipInputs_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_ClipInputs_Statics::NewProp_Input_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNearestNeighborModel_ClipInputs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNearestNeighborModel_ClipInputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventClipInputs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborModel_ClipInputs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_ClipInputs_Statics::NewProp_Input_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_ClipInputs_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_ClipInputs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_ClipInputs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_ClipInputs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nearest Neighbor Model" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborModel_ClipInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborModel, nullptr, "ClipInputs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborModel_ClipInputs_Statics::NearestNeighborModel_eventClipInputs_Parms), Z_Construct_UFunction_UNearestNeighborModel_ClipInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_ClipInputs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_ClipInputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_ClipInputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborModel_ClipInputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborModel_ClipInputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UNearestNeighborModel_GetBatchSize_Statics
	{
		struct NearestNeighborModel_eventGetBatchSize_Parms
		{
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_GetBatchSize_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborModel_GetBatchSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventGetBatchSize_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_GetBatchSize_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetBatchSize_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborModel_GetBatchSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_GetBatchSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_GetBatchSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nearest Neighbor Model" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborModel_GetBatchSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborModel, nullptr, "GetBatchSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborModel_GetBatchSize_Statics::NearestNeighborModel_eventGetBatchSize_Parms), Z_Construct_UFunction_UNearestNeighborModel_GetBatchSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetBatchSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_GetBatchSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetBatchSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborModel_GetBatchSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborModel_GetBatchSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UNearestNeighborModel_GetClothPartEditorData_Statics
	{
		struct NearestNeighborModel_eventGetClothPartEditorData_Parms
		{
			TArray<FClothPartEditorData> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNearestNeighborModel_GetClothPartEditorData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FClothPartEditorData, METADATA_PARAMS(nullptr, 0) }; // 1814142444
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_GetClothPartEditorData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNearestNeighborModel_GetClothPartEditorData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventGetClothPartEditorData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_GetClothPartEditorData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetClothPartEditorData_Statics::NewProp_ReturnValue_MetaData)) }; // 1814142444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborModel_GetClothPartEditorData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_GetClothPartEditorData_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_GetClothPartEditorData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_GetClothPartEditorData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nearest Neighbor Model" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborModel_GetClothPartEditorData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborModel, nullptr, "GetClothPartEditorData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborModel_GetClothPartEditorData_Statics::NearestNeighborModel_eventGetClothPartEditorData_Parms), Z_Construct_UFunction_UNearestNeighborModel_GetClothPartEditorData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetClothPartEditorData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_GetClothPartEditorData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetClothPartEditorData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborModel_GetClothPartEditorData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborModel_GetClothPartEditorData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UNearestNeighborModel_GetHiddenLayerDims_Statics
	{
		struct NearestNeighborModel_eventGetHiddenLayerDims_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborModel_GetHiddenLayerDims_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_GetHiddenLayerDims_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNearestNeighborModel_GetHiddenLayerDims_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventGetHiddenLayerDims_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_GetHiddenLayerDims_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetHiddenLayerDims_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborModel_GetHiddenLayerDims_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_GetHiddenLayerDims_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_GetHiddenLayerDims_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_GetHiddenLayerDims_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nearest Neighbor Model" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborModel_GetHiddenLayerDims_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborModel, nullptr, "GetHiddenLayerDims", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborModel_GetHiddenLayerDims_Statics::NearestNeighborModel_eventGetHiddenLayerDims_Parms), Z_Construct_UFunction_UNearestNeighborModel_GetHiddenLayerDims_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetHiddenLayerDims_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_GetHiddenLayerDims_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetHiddenLayerDims_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborModel_GetHiddenLayerDims()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborModel_GetHiddenLayerDims_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UNearestNeighborModel_GetInputDim_Statics
	{
		struct NearestNeighborModel_eventGetInputDim_Parms
		{
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_GetInputDim_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborModel_GetInputDim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventGetInputDim_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_GetInputDim_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetInputDim_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborModel_GetInputDim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_GetInputDim_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_GetInputDim_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nearest Neighbor Model" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborModel_GetInputDim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborModel, nullptr, "GetInputDim", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborModel_GetInputDim_Statics::NearestNeighborModel_eventGetInputDim_Parms), Z_Construct_UFunction_UNearestNeighborModel_GetInputDim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetInputDim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_GetInputDim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetInputDim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborModel_GetInputDim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborModel_GetInputDim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UNearestNeighborModel_GetLearningRate_Statics
	{
		struct NearestNeighborModel_eventGetLearningRate_Parms
		{
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_GetLearningRate_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNearestNeighborModel_GetLearningRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventGetLearningRate_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_GetLearningRate_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetLearningRate_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborModel_GetLearningRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_GetLearningRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_GetLearningRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nearest Neighbor Model" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborModel_GetLearningRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborModel, nullptr, "GetLearningRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborModel_GetLearningRate_Statics::NearestNeighborModel_eventGetLearningRate_Parms), Z_Construct_UFunction_UNearestNeighborModel_GetLearningRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetLearningRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_GetLearningRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetLearningRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborModel_GetLearningRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborModel_GetLearningRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UNearestNeighborModel_GetModelDir_Statics
	{
		struct NearestNeighborModel_eventGetModelDir_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNearestNeighborModel_GetModelDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventGetModelDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborModel_GetModelDir_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_GetModelDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_GetModelDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nearest Neighbor Model" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborModel_GetModelDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborModel, nullptr, "GetModelDir", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborModel_GetModelDir_Statics::NearestNeighborModel_eventGetModelDir_Parms), Z_Construct_UFunction_UNearestNeighborModel_GetModelDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetModelDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_GetModelDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetModelDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborModel_GetModelDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborModel_GetModelDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UNearestNeighborModel_GetNearestNeighborData_Statics
	{
		struct NearestNeighborModel_eventGetNearestNeighborData_Parms
		{
			TArray<FSkeletonCachePair> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNearestNeighborModel_GetNearestNeighborData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSkeletonCachePair, METADATA_PARAMS(nullptr, 0) }; // 3423627907
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_GetNearestNeighborData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNearestNeighborModel_GetNearestNeighborData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventGetNearestNeighborData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_GetNearestNeighborData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetNearestNeighborData_Statics::NewProp_ReturnValue_MetaData)) }; // 3423627907
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborModel_GetNearestNeighborData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_GetNearestNeighborData_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_GetNearestNeighborData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_GetNearestNeighborData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nearest Neighbor Model" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborModel_GetNearestNeighborData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborModel, nullptr, "GetNearestNeighborData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborModel_GetNearestNeighborData_Statics::NearestNeighborModel_eventGetNearestNeighborData_Parms), Z_Construct_UFunction_UNearestNeighborModel_GetNearestNeighborData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetNearestNeighborData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_GetNearestNeighborData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetNearestNeighborData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborModel_GetNearestNeighborData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborModel_GetNearestNeighborData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UNearestNeighborModel_GetNumEpochs_Statics
	{
		struct NearestNeighborModel_eventGetNumEpochs_Parms
		{
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_GetNumEpochs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborModel_GetNumEpochs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventGetNumEpochs_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_GetNumEpochs_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetNumEpochs_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborModel_GetNumEpochs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_GetNumEpochs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_GetNumEpochs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nearest Neighbor Model" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborModel_GetNumEpochs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborModel, nullptr, "GetNumEpochs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborModel_GetNumEpochs_Statics::NearestNeighborModel_eventGetNumEpochs_Parms), Z_Construct_UFunction_UNearestNeighborModel_GetNumEpochs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetNumEpochs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_GetNumEpochs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetNumEpochs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborModel_GetNumEpochs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborModel_GetNumEpochs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UNearestNeighborModel_GetNumNeighbors_Statics
	{
		struct NearestNeighborModel_eventGetNumNeighbors_Parms
		{
			int32 PartId;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PartId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborModel_GetNumNeighbors_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventGetNumNeighbors_Parms, PartId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborModel_GetNumNeighbors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventGetNumNeighbors_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborModel_GetNumNeighbors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_GetNumNeighbors_Statics::NewProp_PartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_GetNumNeighbors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_GetNumNeighbors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nearest Neighbor Model" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborModel_GetNumNeighbors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborModel, nullptr, "GetNumNeighbors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborModel_GetNumNeighbors_Statics::NearestNeighborModel_eventGetNumNeighbors_Parms), Z_Construct_UFunction_UNearestNeighborModel_GetNumNeighbors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetNumNeighbors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_GetNumNeighbors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetNumNeighbors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborModel_GetNumNeighbors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborModel_GetNumNeighbors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNearestNeighborModel_GetNumParts_Statics
	{
		struct NearestNeighborModel_eventGetNumParts_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborModel_GetNumParts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventGetNumParts_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborModel_GetNumParts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_GetNumParts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_GetNumParts_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nearest Neighbor Model" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborModel_GetNumParts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborModel, nullptr, "GetNumParts", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborModel_GetNumParts_Statics::NearestNeighborModel_eventGetNumParts_Parms), Z_Construct_UFunction_UNearestNeighborModel_GetNumParts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetNumParts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_GetNumParts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetNumParts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborModel_GetNumParts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborModel_GetNumParts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UNearestNeighborModel_GetOutputDim_Statics
	{
		struct NearestNeighborModel_eventGetOutputDim_Parms
		{
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_GetOutputDim_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborModel_GetOutputDim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventGetOutputDim_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_GetOutputDim_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetOutputDim_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborModel_GetOutputDim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_GetOutputDim_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_GetOutputDim_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nearest Neighbor Model" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborModel_GetOutputDim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborModel, nullptr, "GetOutputDim", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborModel_GetOutputDim_Statics::NearestNeighborModel_eventGetOutputDim_Parms), Z_Construct_UFunction_UNearestNeighborModel_GetOutputDim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetOutputDim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_GetOutputDim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetOutputDim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborModel_GetOutputDim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborModel_GetOutputDim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UNearestNeighborModel_GetPartNumVerts_Statics
	{
		struct NearestNeighborModel_eventGetPartNumVerts_Parms
		{
			int32 PartId;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PartId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborModel_GetPartNumVerts_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventGetPartNumVerts_Parms, PartId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborModel_GetPartNumVerts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventGetPartNumVerts_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborModel_GetPartNumVerts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_GetPartNumVerts_Statics::NewProp_PartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_GetPartNumVerts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_GetPartNumVerts_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nearest Neighbor Model" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborModel_GetPartNumVerts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborModel, nullptr, "GetPartNumVerts", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborModel_GetPartNumVerts_Statics::NearestNeighborModel_eventGetPartNumVerts_Parms), Z_Construct_UFunction_UNearestNeighborModel_GetPartNumVerts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetPartNumVerts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_GetPartNumVerts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetPartNumVerts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborModel_GetPartNumVerts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborModel_GetPartNumVerts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNearestNeighborModel_GetPCACoeffNum_Statics
	{
		struct NearestNeighborModel_eventGetPCACoeffNum_Parms
		{
			int32 PartId;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PartId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborModel_GetPCACoeffNum_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventGetPCACoeffNum_Parms, PartId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborModel_GetPCACoeffNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventGetPCACoeffNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborModel_GetPCACoeffNum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_GetPCACoeffNum_Statics::NewProp_PartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_GetPCACoeffNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_GetPCACoeffNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nearest Neighbor Model" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborModel_GetPCACoeffNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborModel, nullptr, "GetPCACoeffNum", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborModel_GetPCACoeffNum_Statics::NearestNeighborModel_eventGetPCACoeffNum_Parms), Z_Construct_UFunction_UNearestNeighborModel_GetPCACoeffNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetPCACoeffNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_GetPCACoeffNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetPCACoeffNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborModel_GetPCACoeffNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborModel_GetPCACoeffNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNearestNeighborModel_GetPCACoeffStart_Statics
	{
		struct NearestNeighborModel_eventGetPCACoeffStart_Parms
		{
			int32 PartId;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PartId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborModel_GetPCACoeffStart_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventGetPCACoeffStart_Parms, PartId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborModel_GetPCACoeffStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventGetPCACoeffStart_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborModel_GetPCACoeffStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_GetPCACoeffStart_Statics::NewProp_PartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_GetPCACoeffStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_GetPCACoeffStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nearest Neighbor Model" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborModel_GetPCACoeffStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborModel, nullptr, "GetPCACoeffStart", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborModel_GetPCACoeffStart_Statics::NearestNeighborModel_eventGetPCACoeffStart_Parms), Z_Construct_UFunction_UNearestNeighborModel_GetPCACoeffStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetPCACoeffStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_GetPCACoeffStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_GetPCACoeffStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborModel_GetPCACoeffStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborModel_GetPCACoeffStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNearestNeighborModel_NeighborCoeffs_Statics
	{
		struct NearestNeighborModel_eventNeighborCoeffs_Parms
		{
			int32 PartId;
			TArray<float> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PartId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborModel_NeighborCoeffs_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventNeighborCoeffs_Parms, PartId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNearestNeighborModel_NeighborCoeffs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_NeighborCoeffs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNearestNeighborModel_NeighborCoeffs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventNeighborCoeffs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_NeighborCoeffs_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_NeighborCoeffs_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborModel_NeighborCoeffs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_NeighborCoeffs_Statics::NewProp_PartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_NeighborCoeffs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_NeighborCoeffs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_NeighborCoeffs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nearest Neighbor Model" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborModel_NeighborCoeffs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborModel, nullptr, "NeighborCoeffs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborModel_NeighborCoeffs_Statics::NearestNeighborModel_eventNeighborCoeffs_Parms), Z_Construct_UFunction_UNearestNeighborModel_NeighborCoeffs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_NeighborCoeffs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_NeighborCoeffs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_NeighborCoeffs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborModel_NeighborCoeffs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborModel_NeighborCoeffs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNearestNeighborModel_NeighborOffsets_Statics
	{
		struct NearestNeighborModel_eventNeighborOffsets_Parms
		{
			int32 PartId;
			TArray<float> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PartId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborModel_NeighborOffsets_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventNeighborOffsets_Parms, PartId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNearestNeighborModel_NeighborOffsets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_NeighborOffsets_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNearestNeighborModel_NeighborOffsets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventNeighborOffsets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_NeighborOffsets_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_NeighborOffsets_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborModel_NeighborOffsets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_NeighborOffsets_Statics::NewProp_PartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_NeighborOffsets_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_NeighborOffsets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_NeighborOffsets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nearest Neighbor Model" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborModel_NeighborOffsets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborModel, nullptr, "NeighborOffsets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborModel_NeighborOffsets_Statics::NearestNeighborModel_eventNeighborOffsets_Parms), Z_Construct_UFunction_UNearestNeighborModel_NeighborOffsets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_NeighborOffsets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_NeighborOffsets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_NeighborOffsets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborModel_NeighborOffsets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborModel_NeighborOffsets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNearestNeighborModel_PCABasis_Statics
	{
		struct NearestNeighborModel_eventPCABasis_Parms
		{
			int32 PartId;
			TArray<float> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PartId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborModel_PCABasis_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventPCABasis_Parms, PartId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNearestNeighborModel_PCABasis_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_PCABasis_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNearestNeighborModel_PCABasis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventPCABasis_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_PCABasis_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_PCABasis_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborModel_PCABasis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_PCABasis_Statics::NewProp_PartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_PCABasis_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_PCABasis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_PCABasis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nearest Neighbor Model" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborModel_PCABasis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborModel, nullptr, "PCABasis", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborModel_PCABasis_Statics::NearestNeighborModel_eventPCABasis_Parms), Z_Construct_UFunction_UNearestNeighborModel_PCABasis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_PCABasis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_PCABasis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_PCABasis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborModel_PCABasis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborModel_PCABasis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNearestNeighborModel_SetNeighborCoeffs_Statics
	{
		struct NearestNeighborModel_eventSetNeighborCoeffs_Parms
		{
			int32 PartId;
			TArray<float> NeighborCoeffs;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PartId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NeighborCoeffs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NeighborCoeffs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NeighborCoeffs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborModel_SetNeighborCoeffs_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventSetNeighborCoeffs_Parms, PartId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNearestNeighborModel_SetNeighborCoeffs_Statics::NewProp_NeighborCoeffs_Inner = { "NeighborCoeffs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_SetNeighborCoeffs_Statics::NewProp_NeighborCoeffs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNearestNeighborModel_SetNeighborCoeffs_Statics::NewProp_NeighborCoeffs = { "NeighborCoeffs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventSetNeighborCoeffs_Parms, NeighborCoeffs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_SetNeighborCoeffs_Statics::NewProp_NeighborCoeffs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_SetNeighborCoeffs_Statics::NewProp_NeighborCoeffs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborModel_SetNeighborCoeffs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_SetNeighborCoeffs_Statics::NewProp_PartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_SetNeighborCoeffs_Statics::NewProp_NeighborCoeffs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_SetNeighborCoeffs_Statics::NewProp_NeighborCoeffs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_SetNeighborCoeffs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nearest Neighbor Model" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborModel_SetNeighborCoeffs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborModel, nullptr, "SetNeighborCoeffs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborModel_SetNeighborCoeffs_Statics::NearestNeighborModel_eventSetNeighborCoeffs_Parms), Z_Construct_UFunction_UNearestNeighborModel_SetNeighborCoeffs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_SetNeighborCoeffs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_SetNeighborCoeffs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_SetNeighborCoeffs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborModel_SetNeighborCoeffs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborModel_SetNeighborCoeffs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNearestNeighborModel_SetNeighborOffsets_Statics
	{
		struct NearestNeighborModel_eventSetNeighborOffsets_Parms
		{
			int32 PartId;
			TArray<float> NeighborOffsets;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PartId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NeighborOffsets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NeighborOffsets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NeighborOffsets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborModel_SetNeighborOffsets_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventSetNeighborOffsets_Parms, PartId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNearestNeighborModel_SetNeighborOffsets_Statics::NewProp_NeighborOffsets_Inner = { "NeighborOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_SetNeighborOffsets_Statics::NewProp_NeighborOffsets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNearestNeighborModel_SetNeighborOffsets_Statics::NewProp_NeighborOffsets = { "NeighborOffsets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventSetNeighborOffsets_Parms, NeighborOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_SetNeighborOffsets_Statics::NewProp_NeighborOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_SetNeighborOffsets_Statics::NewProp_NeighborOffsets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborModel_SetNeighborOffsets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_SetNeighborOffsets_Statics::NewProp_PartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_SetNeighborOffsets_Statics::NewProp_NeighborOffsets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_SetNeighborOffsets_Statics::NewProp_NeighborOffsets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_SetNeighborOffsets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nearest Neighbor Model" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborModel_SetNeighborOffsets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborModel, nullptr, "SetNeighborOffsets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborModel_SetNeighborOffsets_Statics::NearestNeighborModel_eventSetNeighborOffsets_Parms), Z_Construct_UFunction_UNearestNeighborModel_SetNeighborOffsets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_SetNeighborOffsets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_SetNeighborOffsets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_SetNeighborOffsets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborModel_SetNeighborOffsets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborModel_SetNeighborOffsets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNearestNeighborModel_SetNumNeighbors_Statics
	{
		struct NearestNeighborModel_eventSetNumNeighbors_Parms
		{
			int32 PartId;
			int32 InNumNeighbors;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PartId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InNumNeighbors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborModel_SetNumNeighbors_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventSetNumNeighbors_Parms, PartId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborModel_SetNumNeighbors_Statics::NewProp_InNumNeighbors = { "InNumNeighbors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventSetNumNeighbors_Parms, InNumNeighbors), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborModel_SetNumNeighbors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_SetNumNeighbors_Statics::NewProp_PartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_SetNumNeighbors_Statics::NewProp_InNumNeighbors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_SetNumNeighbors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nearest Neighbor Model" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborModel_SetNumNeighbors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborModel, nullptr, "SetNumNeighbors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborModel_SetNumNeighbors_Statics::NearestNeighborModel_eventSetNumNeighbors_Parms), Z_Construct_UFunction_UNearestNeighborModel_SetNumNeighbors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_SetNumNeighbors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_SetNumNeighbors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_SetNumNeighbors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborModel_SetNumNeighbors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborModel_SetNumNeighbors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNearestNeighborModel_SetPCABasis_Statics
	{
		struct NearestNeighborModel_eventSetPCABasis_Parms
		{
			int32 PartId;
			TArray<float> PCABasis;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PartId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PCABasis_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PCABasis_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PCABasis;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborModel_SetPCABasis_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventSetPCABasis_Parms, PartId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNearestNeighborModel_SetPCABasis_Statics::NewProp_PCABasis_Inner = { "PCABasis", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_SetPCABasis_Statics::NewProp_PCABasis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNearestNeighborModel_SetPCABasis_Statics::NewProp_PCABasis = { "PCABasis", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventSetPCABasis_Parms, PCABasis), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_SetPCABasis_Statics::NewProp_PCABasis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_SetPCABasis_Statics::NewProp_PCABasis_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborModel_SetPCABasis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_SetPCABasis_Statics::NewProp_PartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_SetPCABasis_Statics::NewProp_PCABasis_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_SetPCABasis_Statics::NewProp_PCABasis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_SetPCABasis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nearest Neighbor Model" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborModel_SetPCABasis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborModel, nullptr, "SetPCABasis", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborModel_SetPCABasis_Statics::NearestNeighborModel_eventSetPCABasis_Parms), Z_Construct_UFunction_UNearestNeighborModel_SetPCABasis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_SetPCABasis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_SetPCABasis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_SetPCABasis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborModel_SetPCABasis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborModel_SetPCABasis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNearestNeighborModel_SetVertexMean_Statics
	{
		struct NearestNeighborModel_eventSetVertexMean_Parms
		{
			int32 PartId;
			TArray<float> VertexMean;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PartId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VertexMean_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexMean_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexMean;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborModel_SetVertexMean_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventSetVertexMean_Parms, PartId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNearestNeighborModel_SetVertexMean_Statics::NewProp_VertexMean_Inner = { "VertexMean", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_SetVertexMean_Statics::NewProp_VertexMean_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNearestNeighborModel_SetVertexMean_Statics::NewProp_VertexMean = { "VertexMean", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventSetVertexMean_Parms, VertexMean), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_SetVertexMean_Statics::NewProp_VertexMean_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_SetVertexMean_Statics::NewProp_VertexMean_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborModel_SetVertexMean_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_SetVertexMean_Statics::NewProp_PartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_SetVertexMean_Statics::NewProp_VertexMean_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_SetVertexMean_Statics::NewProp_VertexMean,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_SetVertexMean_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nearest Neighbor Model" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborModel_SetVertexMean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborModel, nullptr, "SetVertexMean", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborModel_SetVertexMean_Statics::NearestNeighborModel_eventSetVertexMean_Parms), Z_Construct_UFunction_UNearestNeighborModel_SetVertexMean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_SetVertexMean_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_SetVertexMean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_SetVertexMean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborModel_SetVertexMean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborModel_SetVertexMean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNearestNeighborModel_VertexMean_Statics
	{
		struct NearestNeighborModel_eventVertexMean_Parms
		{
			int32 PartId;
			TArray<float> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PartId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNearestNeighborModel_VertexMean_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventVertexMean_Parms, PartId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNearestNeighborModel_VertexMean_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_VertexMean_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNearestNeighborModel_VertexMean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborModel_eventVertexMean_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_VertexMean_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_VertexMean_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborModel_VertexMean_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_VertexMean_Statics::NewProp_PartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_VertexMean_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModel_VertexMean_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModel_VertexMean_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nearest Neighbor Model" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborModel_VertexMean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborModel, nullptr, "VertexMean", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborModel_VertexMean_Statics::NearestNeighborModel_eventVertexMean_Parms), Z_Construct_UFunction_UNearestNeighborModel_VertexMean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_VertexMean_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborModel_VertexMean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModel_VertexMean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborModel_VertexMean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborModel_VertexMean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNearestNeighborModel);
	UClass* Z_Construct_UClass_UNearestNeighborModel_NoRegister()
	{
		return UNearestNeighborModel::StaticClass();
	}
	struct Z_Construct_UClass_UNearestNeighborModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputDim_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputDim;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HiddenLayerDims_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HiddenLayerDims_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HiddenLayerDims;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputDim_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutputDim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumEpochs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumEpochs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BatchSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BatchSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LearningRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LearningRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClothPartDataValid_MetaData[];
#endif
		static void NewProp_bClothPartDataValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClothPartDataValid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClothPartEditorData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClothPartEditorData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClothPartEditorData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasisSmoothIter_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BasisSmoothIter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDualQuaternionDeltas_MetaData[];
#endif
		static void NewProp_bUseDualQuaternionDeltas_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDualQuaternionDeltas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNearestNeighborDataValid_MetaData[];
#endif
		static void NewProp_bNearestNeighborDataValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNearestNeighborDataValid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMorphTargetDataValid_MetaData[];
#endif
		static void NewProp_bMorphTargetDataValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMorphTargetDataValid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePartOnlyMesh_MetaData[];
#endif
		static void NewProp_bUsePartOnlyMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePartOnlyMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NearestNeighborData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NearestNeighborData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NearestNeighborData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedNetworkSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SavedNetworkSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphDataSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MorphDataSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFileCache_MetaData[];
#endif
		static void NewProp_bUseFileCache_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFileCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileCacheDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileCacheDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecomputeDeltas_MetaData[];
#endif
		static void NewProp_bRecomputeDeltas_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecomputeDeltas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecomputePCA_MetaData[];
#endif
		static void NewProp_bRecomputePCA_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecomputePCA;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceAnims_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAnims_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceAnims;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumClusters_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumClusters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KMeansPartId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_KMeansPartId;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseInputMultipliers_MetaData[];
#endif
		static void NewProp_bUseInputMultipliers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseInputMultipliers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputMultipliers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMultipliers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputMultipliers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClothPartData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClothPartData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClothPartData;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputsMin_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputsMin_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputsMin;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputsMax_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputsMax_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputsMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecayFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DecayFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NearestNeighborOffsetWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NearestNeighborOffsetWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptimizedNetwork_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OptimizedNetwork;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NNINetwork_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NNINetwork;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoesMeetOptimizedNetworkPrerequisites_MetaData[];
#endif
		static void NewProp_bDoesMeetOptimizedNetworkPrerequisites_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoesMeetOptimizedNetworkPrerequisites;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseOptimizedNetwork_MetaData[];
#endif
		static void NewProp_bUseOptimizedNetwork_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOptimizedNetwork;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNearestNeighborModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLDeformerMorphModel,
		(UObject* (*)())Z_Construct_UPackage__Script_NearestNeighborModel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNearestNeighborModel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNearestNeighborModel_ClipInputs, "ClipInputs" }, // 327657194
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UNearestNeighborModel_GetBatchSize, "GetBatchSize" }, // 1767471721
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UNearestNeighborModel_GetClothPartEditorData, "GetClothPartEditorData" }, // 3489088687
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UNearestNeighborModel_GetHiddenLayerDims, "GetHiddenLayerDims" }, // 3940337265
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UNearestNeighborModel_GetInputDim, "GetInputDim" }, // 2808993225
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UNearestNeighborModel_GetLearningRate, "GetLearningRate" }, // 3702365278
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UNearestNeighborModel_GetModelDir, "GetModelDir" }, // 1268503128
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UNearestNeighborModel_GetNearestNeighborData, "GetNearestNeighborData" }, // 504031247
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UNearestNeighborModel_GetNumEpochs, "GetNumEpochs" }, // 3817598357
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UNearestNeighborModel_GetNumNeighbors, "GetNumNeighbors" }, // 174134985
		{ &Z_Construct_UFunction_UNearestNeighborModel_GetNumParts, "GetNumParts" }, // 185383538
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UNearestNeighborModel_GetOutputDim, "GetOutputDim" }, // 4106103136
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UNearestNeighborModel_GetPartNumVerts, "GetPartNumVerts" }, // 3543040683
		{ &Z_Construct_UFunction_UNearestNeighborModel_GetPCACoeffNum, "GetPCACoeffNum" }, // 2102885766
		{ &Z_Construct_UFunction_UNearestNeighborModel_GetPCACoeffStart, "GetPCACoeffStart" }, // 3054912135
		{ &Z_Construct_UFunction_UNearestNeighborModel_NeighborCoeffs, "NeighborCoeffs" }, // 226986897
		{ &Z_Construct_UFunction_UNearestNeighborModel_NeighborOffsets, "NeighborOffsets" }, // 891232340
		{ &Z_Construct_UFunction_UNearestNeighborModel_PCABasis, "PCABasis" }, // 3338362121
		{ &Z_Construct_UFunction_UNearestNeighborModel_SetNeighborCoeffs, "SetNeighborCoeffs" }, // 776545601
		{ &Z_Construct_UFunction_UNearestNeighborModel_SetNeighborOffsets, "SetNeighborOffsets" }, // 3074106072
		{ &Z_Construct_UFunction_UNearestNeighborModel_SetNumNeighbors, "SetNumNeighbors" }, // 1695234650
		{ &Z_Construct_UFunction_UNearestNeighborModel_SetPCABasis, "SetPCABasis" }, // 307429869
		{ &Z_Construct_UFunction_UNearestNeighborModel_SetVertexMean, "SetVertexMean" }, // 2205625707
		{ &Z_Construct_UFunction_UNearestNeighborModel_VertexMean, "VertexMean" }, // 1302336276
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The nearest neighbor model.\n * This model contains the PCA basis of the cloth vertex deltas and a small set of cloth for nearest neighbor search. \n * Given a new pose, the pre-trained neural network first predicts the PCA coefficients of the vertex deltas. \n * Then this model uses the predicted PCA coeffcients to find a nearest neighbor in the small cloth set.\n * The total vertex delta is computed by\n * \x09\x09vertex_delta = mean_delta + pca_basis * pca_coeff + nearest_neighbor_delta\n * To prevent popping, a time filtering is applied on predicted vertex deltas. The vertex delta at time t is computed by  \n * \x09\x09vertex_delta(t) = decay_factor * vertex_delta(t-1) + (1 - decay_factor) * vertex_delta \n * The cloth can be separated into several parts (e.g. shirt, pants...). The nearest neighbor search is carried out separately for each part. \n * The pca basis and the nearest neighbor data are compressed into morph targets.\n */" },
		{ "IncludePath", "NearestNeighborModel.h" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The nearest neighbor model.\nThis model contains the PCA basis of the cloth vertex deltas and a small set of cloth for nearest neighbor search.\nGiven a new pose, the pre-trained neural network first predicts the PCA coefficients of the vertex deltas.\nThen this model uses the predicted PCA coeffcients to find a nearest neighbor in the small cloth set.\nThe total vertex delta is computed by\n            vertex_delta = mean_delta + pca_basis * pca_coeff + nearest_neighbor_delta\nTo prevent popping, a time filtering is applied on predicted vertex deltas. The vertex delta at time t is computed by\n            vertex_delta(t) = decay_factor * vertex_delta(t-1) + (1 - decay_factor) * vertex_delta\nThe cloth can be separated into several parts (e.g. shirt, pants...). The nearest neighbor search is carried out separately for each part.\nThe pca basis and the nearest neighbor data are compressed into morph targets." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_InputDim_MetaData[] = {
		{ "Category", "Training Settings" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_InputDim = { "InputDim", nullptr, (EPropertyFlags)0x0020080800020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNearestNeighborModel, InputDim), METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_InputDim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_InputDim_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_HiddenLayerDims_Inner = { "HiddenLayerDims", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_HiddenLayerDims_MetaData[] = {
		{ "Category", "Training Settings" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_HiddenLayerDims = { "HiddenLayerDims", nullptr, (EPropertyFlags)0x0020080800000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNearestNeighborModel, HiddenLayerDims), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_HiddenLayerDims_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_HiddenLayerDims_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_OutputDim_MetaData[] = {
		{ "Category", "Training Settings" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_OutputDim = { "OutputDim", nullptr, (EPropertyFlags)0x0020080800020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNearestNeighborModel, OutputDim), METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_OutputDim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_OutputDim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_NumEpochs_MetaData[] = {
		{ "Category", "Training Settings" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_NumEpochs = { "NumEpochs", nullptr, (EPropertyFlags)0x0020080800000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNearestNeighborModel, NumEpochs), METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_NumEpochs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_NumEpochs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_BatchSize_MetaData[] = {
		{ "Category", "Training Settings" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_BatchSize = { "BatchSize", nullptr, (EPropertyFlags)0x0020080800000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNearestNeighborModel, BatchSize), METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_BatchSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_BatchSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_LearningRate_MetaData[] = {
		{ "Category", "Training Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.000001" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_LearningRate = { "LearningRate", nullptr, (EPropertyFlags)0x0020080800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNearestNeighborModel, LearningRate), METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_LearningRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_LearningRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bClothPartDataValid_MetaData[] = {
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	void Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bClothPartDataValid_SetBit(void* Obj)
	{
		((UNearestNeighborModel*)Obj)->bClothPartDataValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bClothPartDataValid = { "bClothPartDataValid", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNearestNeighborModel), &Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bClothPartDataValid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bClothPartDataValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bClothPartDataValid_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_ClothPartEditorData_Inner = { "ClothPartEditorData", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FClothPartEditorData, METADATA_PARAMS(nullptr, 0) }; // 1814142444
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_ClothPartEditorData_MetaData[] = {
		{ "Category", "Cloth Parts" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_ClothPartEditorData = { "ClothPartEditorData", nullptr, (EPropertyFlags)0x0020080800000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNearestNeighborModel, ClothPartEditorData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_ClothPartEditorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_ClothPartEditorData_MetaData)) }; // 1814142444
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_BasisSmoothIter_MetaData[] = {
		{ "Category", "Cloth Parts" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_BasisSmoothIter = { "BasisSmoothIter", nullptr, (EPropertyFlags)0x0020080800000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNearestNeighborModel, BasisSmoothIter), METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_BasisSmoothIter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_BasisSmoothIter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUseDualQuaternionDeltas_MetaData[] = {
		{ "Category", "Cloth Parts" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	void Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUseDualQuaternionDeltas_SetBit(void* Obj)
	{
		((UNearestNeighborModel*)Obj)->bUseDualQuaternionDeltas = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUseDualQuaternionDeltas = { "bUseDualQuaternionDeltas", nullptr, (EPropertyFlags)0x0020080800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNearestNeighborModel), &Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUseDualQuaternionDeltas_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUseDualQuaternionDeltas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUseDualQuaternionDeltas_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bNearestNeighborDataValid_MetaData[] = {
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	void Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bNearestNeighborDataValid_SetBit(void* Obj)
	{
		((UNearestNeighborModel*)Obj)->bNearestNeighborDataValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bNearestNeighborDataValid = { "bNearestNeighborDataValid", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNearestNeighborModel), &Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bNearestNeighborDataValid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bNearestNeighborDataValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bNearestNeighborDataValid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bMorphTargetDataValid_MetaData[] = {
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	void Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bMorphTargetDataValid_SetBit(void* Obj)
	{
		((UNearestNeighborModel*)Obj)->bMorphTargetDataValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bMorphTargetDataValid = { "bMorphTargetDataValid", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNearestNeighborModel), &Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bMorphTargetDataValid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bMorphTargetDataValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bMorphTargetDataValid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUsePartOnlyMesh_MetaData[] = {
		{ "Category", "Nearest Neighbors" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	void Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUsePartOnlyMesh_SetBit(void* Obj)
	{
		((UNearestNeighborModel*)Obj)->bUsePartOnlyMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUsePartOnlyMesh = { "bUsePartOnlyMesh", nullptr, (EPropertyFlags)0x0020080800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNearestNeighborModel), &Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUsePartOnlyMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUsePartOnlyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUsePartOnlyMesh_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_NearestNeighborData_Inner = { "NearestNeighborData", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSkeletonCachePair, METADATA_PARAMS(nullptr, 0) }; // 3423627907
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_NearestNeighborData_MetaData[] = {
		{ "Category", "Nearest Neighbors" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_NearestNeighborData = { "NearestNeighborData", nullptr, (EPropertyFlags)0x0020080800000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNearestNeighborModel, NearestNeighborData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_NearestNeighborData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_NearestNeighborData_MetaData)) }; // 3423627907
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_SavedNetworkSize_MetaData[] = {
		{ "Category", "Training Settings" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_SavedNetworkSize = { "SavedNetworkSize", nullptr, (EPropertyFlags)0x0020080800020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNearestNeighborModel, SavedNetworkSize), METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_SavedNetworkSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_SavedNetworkSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_MorphDataSize_MetaData[] = {
		{ "Category", "Morph Targets" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_MorphDataSize = { "MorphDataSize", nullptr, (EPropertyFlags)0x0020080800020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNearestNeighborModel, MorphDataSize), METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_MorphDataSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_MorphDataSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUseFileCache_MetaData[] = {
		{ "Category", "File Cache" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	void Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUseFileCache_SetBit(void* Obj)
	{
		((UNearestNeighborModel*)Obj)->bUseFileCache = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUseFileCache = { "bUseFileCache", nullptr, (EPropertyFlags)0x0020080800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNearestNeighborModel), &Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUseFileCache_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUseFileCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUseFileCache_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_FileCacheDirectory_MetaData[] = {
		{ "Category", "File Cache" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_FileCacheDirectory = { "FileCacheDirectory", nullptr, (EPropertyFlags)0x0020080800000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNearestNeighborModel, FileCacheDirectory), METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_FileCacheDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_FileCacheDirectory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bRecomputeDeltas_MetaData[] = {
		{ "Category", "File Cache" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	void Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bRecomputeDeltas_SetBit(void* Obj)
	{
		((UNearestNeighborModel*)Obj)->bRecomputeDeltas = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bRecomputeDeltas = { "bRecomputeDeltas", nullptr, (EPropertyFlags)0x0020080800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNearestNeighborModel), &Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bRecomputeDeltas_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bRecomputeDeltas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bRecomputeDeltas_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bRecomputePCA_MetaData[] = {
		{ "Category", "File Cache" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	void Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bRecomputePCA_SetBit(void* Obj)
	{
		((UNearestNeighborModel*)Obj)->bRecomputePCA = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bRecomputePCA = { "bRecomputePCA", nullptr, (EPropertyFlags)0x0020080800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNearestNeighborModel), &Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bRecomputePCA_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bRecomputePCA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bRecomputePCA_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_SourceAnims_Inner = { "SourceAnims", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_SourceAnims_MetaData[] = {
		{ "Category", "KMeans Pose Generator" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_SourceAnims = { "SourceAnims", nullptr, (EPropertyFlags)0x0024080800000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNearestNeighborModel, SourceAnims), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_SourceAnims_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_SourceAnims_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_NumClusters_MetaData[] = {
		{ "Category", "KMeans Pose Generator" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_NumClusters = { "NumClusters", nullptr, (EPropertyFlags)0x0020080800000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNearestNeighborModel, NumClusters), METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_NumClusters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_NumClusters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_KMeansPartId_MetaData[] = {
		{ "Category", "KMeans Pose Generator" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_KMeansPartId = { "KMeansPartId", nullptr, (EPropertyFlags)0x0020080800000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNearestNeighborModel, KMeansPartId), METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_KMeansPartId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_KMeansPartId_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUseInputMultipliers_MetaData[] = {
		{ "Category", "Debugging" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	void Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUseInputMultipliers_SetBit(void* Obj)
	{
		((UNearestNeighborModel*)Obj)->bUseInputMultipliers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUseInputMultipliers = { "bUseInputMultipliers", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNearestNeighborModel), &Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUseInputMultipliers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUseInputMultipliers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUseInputMultipliers_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_InputMultipliers_Inner = { "InputMultipliers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_InputMultipliers_MetaData[] = {
		{ "Category", "Debugging" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_InputMultipliers = { "InputMultipliers", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNearestNeighborModel, InputMultipliers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_InputMultipliers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_InputMultipliers_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_ClothPartData_Inner = { "ClothPartData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FClothPartData, METADATA_PARAMS(nullptr, 0) }; // 1691375872
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_ClothPartData_MetaData[] = {
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_ClothPartData = { "ClothPartData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNearestNeighborModel, ClothPartData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_ClothPartData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_ClothPartData_MetaData)) }; // 1691375872
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_InputsMin_Inner = { "InputsMin", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_InputsMin_MetaData[] = {
		{ "Category", "Network IO" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_InputsMin = { "InputsMin", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNearestNeighborModel, InputsMin), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_InputsMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_InputsMin_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_InputsMax_Inner = { "InputsMax", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_InputsMax_MetaData[] = {
		{ "Category", "Network IO" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_InputsMax = { "InputsMax", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNearestNeighborModel, InputsMax), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_InputsMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_InputsMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_DecayFactor_MetaData[] = {
		{ "Category", "Nearest Neighbors" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_DecayFactor = { "DecayFactor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNearestNeighborModel, DecayFactor), METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_DecayFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_DecayFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_NearestNeighborOffsetWeight_MetaData[] = {
		{ "Category", "Nearest Neighbors" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_NearestNeighborOffsetWeight = { "NearestNeighborOffsetWeight", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNearestNeighborModel, NearestNeighborOffsetWeight), METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_NearestNeighborOffsetWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_NearestNeighborOffsetWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_OptimizedNetwork_MetaData[] = {
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_OptimizedNetwork = { "OptimizedNetwork", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNearestNeighborModel, OptimizedNetwork), Z_Construct_UClass_UNearestNeighborOptimizedNetwork_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_OptimizedNetwork_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_OptimizedNetwork_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_NNINetwork_MetaData[] = {
		{ "Comment", "/** The NNI neural network. */" },
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
		{ "ToolTip", "The NNI neural network." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_NNINetwork = { "NNINetwork", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNearestNeighborModel, NNINetwork), Z_Construct_UClass_UNeuralNetwork_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_NNINetwork_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_NNINetwork_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bDoesMeetOptimizedNetworkPrerequisites_MetaData[] = {
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	void Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bDoesMeetOptimizedNetworkPrerequisites_SetBit(void* Obj)
	{
		((UNearestNeighborModel*)Obj)->bDoesMeetOptimizedNetworkPrerequisites = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bDoesMeetOptimizedNetworkPrerequisites = { "bDoesMeetOptimizedNetworkPrerequisites", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNearestNeighborModel), &Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bDoesMeetOptimizedNetworkPrerequisites_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bDoesMeetOptimizedNetworkPrerequisites_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bDoesMeetOptimizedNetworkPrerequisites_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUseOptimizedNetwork_MetaData[] = {
		{ "ModuleRelativePath", "Public/NearestNeighborModel.h" },
	};
#endif
	void Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUseOptimizedNetwork_SetBit(void* Obj)
	{
		((UNearestNeighborModel*)Obj)->bUseOptimizedNetwork = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUseOptimizedNetwork = { "bUseOptimizedNetwork", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNearestNeighborModel), &Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUseOptimizedNetwork_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUseOptimizedNetwork_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUseOptimizedNetwork_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNearestNeighborModel_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_InputDim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_HiddenLayerDims_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_HiddenLayerDims,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_OutputDim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_NumEpochs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_BatchSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_LearningRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bClothPartDataValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_ClothPartEditorData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_ClothPartEditorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_BasisSmoothIter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUseDualQuaternionDeltas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bNearestNeighborDataValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bMorphTargetDataValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUsePartOnlyMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_NearestNeighborData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_NearestNeighborData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_SavedNetworkSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_MorphDataSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUseFileCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_FileCacheDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bRecomputeDeltas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bRecomputePCA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_SourceAnims_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_SourceAnims,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_NumClusters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_KMeansPartId,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUseInputMultipliers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_InputMultipliers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_InputMultipliers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_ClothPartData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_ClothPartData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_InputsMin_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_InputsMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_InputsMax_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_InputsMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_DecayFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_NearestNeighborOffsetWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_OptimizedNetwork,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_NNINetwork,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bDoesMeetOptimizedNetworkPrerequisites,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModel_Statics::NewProp_bUseOptimizedNetwork,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNearestNeighborModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNearestNeighborModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNearestNeighborModel_Statics::ClassParams = {
		&UNearestNeighborModel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNearestNeighborModel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNearestNeighborModel()
	{
		if (!Z_Registration_Info_UClass_UNearestNeighborModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNearestNeighborModel.OuterSingleton, Z_Construct_UClass_UNearestNeighborModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNearestNeighborModel.OuterSingleton;
	}
	template<> NEARESTNEIGHBORMODEL_API UClass* StaticClass<UNearestNeighborModel>()
	{
		return UNearestNeighborModel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNearestNeighborModel);
	UNearestNeighborModel::~UNearestNeighborModel() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNearestNeighborModel)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_Statics::ScriptStructInfo[] = {
		{ FSkeletonCachePair::StaticStruct, Z_Construct_UScriptStruct_FSkeletonCachePair_Statics::NewStructOps, TEXT("SkeletonCachePair"), &Z_Registration_Info_UScriptStruct_SkeletonCachePair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletonCachePair), 3423627907U) },
		{ FClothPartEditorData::StaticStruct, Z_Construct_UScriptStruct_FClothPartEditorData_Statics::NewStructOps, TEXT("ClothPartEditorData"), &Z_Registration_Info_UScriptStruct_ClothPartEditorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClothPartEditorData), 1814142444U) },
		{ FClothPartData::StaticStruct, Z_Construct_UScriptStruct_FClothPartData_Statics::NewStructOps, TEXT("ClothPartData"), &Z_Registration_Info_UScriptStruct_ClothPartData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClothPartData), 1691375872U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNearestNeighborModel, UNearestNeighborModel::StaticClass, TEXT("UNearestNeighborModel"), &Z_Registration_Info_UClass_UNearestNeighborModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNearestNeighborModel), 2105427273U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_3968244920(TEXT("/Script/NearestNeighborModel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
