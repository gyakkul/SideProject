// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ChaosClothAsset/ClothSimulationModel.h"
#include "ClothVertBoneData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothSimulationModel() {}
// Cross Module References
	CHAOSCLOTHASSETENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothSimulationLodModel();
	CHAOSCLOTHASSETENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothSimulationModel();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothVertBoneData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetEngine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosClothSimulationLodModel;
class UScriptStruct* FChaosClothSimulationLodModel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosClothSimulationLodModel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosClothSimulationLodModel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothSimulationLodModel, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetEngine(), TEXT("ChaosClothSimulationLodModel"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosClothSimulationLodModel.OuterSingleton;
}
template<> CHAOSCLOTHASSETENGINE_API UScriptStruct* StaticStruct<FChaosClothSimulationLodModel>()
{
	return FChaosClothSimulationLodModel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Indices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Indices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneData;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaxDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Cloth simulation LOD model.\n * Contains the LOD data as fed to the solver for constraints creation.\n */" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothSimulationModel.h" },
		{ "ToolTip", "Cloth simulation LOD model.\nContains the LOD data as fed to the solver for constraints creation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosClothSimulationLodModel>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_Positions_MetaData[] = {
		{ "Comment", "/** Vertex positions. */" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothSimulationModel.h" },
		{ "ToolTip", "Vertex positions." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosClothSimulationLodModel, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_Positions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_Positions_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_Normals_MetaData[] = {
		{ "Comment", "/** Vertex Normals. */" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothSimulationModel.h" },
		{ "ToolTip", "Vertex Normals." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosClothSimulationLodModel, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_Normals_MetaData)) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_Indices_Inner = { "Indices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_Indices_MetaData[] = {
		{ "Comment", "/** Triangles indices. */" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothSimulationModel.h" },
		{ "ToolTip", "Triangles indices." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosClothSimulationLodModel, Indices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_Indices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_Indices_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_BoneData_Inner = { "BoneData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FClothVertBoneData, METADATA_PARAMS(nullptr, 0) }; // 2288293486
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_BoneData_MetaData[] = {
		{ "Comment", "/** Skinning weights. */" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothSimulationModel.h" },
		{ "ToolTip", "Skinning weights." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_BoneData = { "BoneData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosClothSimulationLodModel, BoneData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_BoneData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_BoneData_MetaData)) }; // 2288293486
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_MaxDistance_Inner = { "MaxDistance", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothSimulationModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosClothSimulationLodModel, MaxDistance), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_MaxDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_Positions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_Positions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_Normals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_Normals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_Indices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_Indices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_BoneData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_BoneData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_MaxDistance_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewProp_MaxDistance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEngine,
		nullptr,
		&NewStructOps,
		"ChaosClothSimulationLodModel",
		sizeof(FChaosClothSimulationLodModel),
		alignof(FChaosClothSimulationLodModel),
		Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChaosClothSimulationLodModel()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosClothSimulationLodModel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosClothSimulationLodModel.InnerSingleton, Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosClothSimulationLodModel.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosClothSimulationModel;
class UScriptStruct* FChaosClothSimulationModel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosClothSimulationModel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosClothSimulationModel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothSimulationModel, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetEngine(), TEXT("ChaosClothSimulationModel"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosClothSimulationModel.OuterSingleton;
}
template<> CHAOSCLOTHASSETENGINE_API UScriptStruct* StaticStruct<FChaosClothSimulationModel>()
{
	return FChaosClothSimulationModel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClothSimulationLodModels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClothSimulationLodModels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClothSimulationLodModels;
		static const UECodeGen_Private::FNamePropertyParams NewProp_UsedBoneNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsedBoneNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UsedBoneNames;
		static const UECodeGen_Private::FIntPropertyParams NewProp_UsedBoneIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsedBoneIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UsedBoneIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceBoneIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReferenceBoneIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Cloth simulation model.\n * Contains the LOD models.\n */" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothSimulationModel.h" },
		{ "ToolTip", "Cloth simulation model.\nContains the LOD models." },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosClothSimulationModel>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::NewProp_ClothSimulationLodModels_Inner = { "ClothSimulationLodModels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FChaosClothSimulationLodModel, METADATA_PARAMS(nullptr, 0) }; // 2322251194
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::NewProp_ClothSimulationLodModels_MetaData[] = {
		{ "Comment", "/** LOD data. */" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothSimulationModel.h" },
		{ "ToolTip", "LOD data." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::NewProp_ClothSimulationLodModels = { "ClothSimulationLodModels", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosClothSimulationModel, ClothSimulationLodModels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::NewProp_ClothSimulationLodModels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::NewProp_ClothSimulationLodModels_MetaData)) }; // 2322251194
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::NewProp_UsedBoneNames_Inner = { "UsedBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::NewProp_UsedBoneNames_MetaData[] = {
		{ "Comment", "/** List of bones this asset uses from the reference skeleton. */" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothSimulationModel.h" },
		{ "ToolTip", "List of bones this asset uses from the reference skeleton." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::NewProp_UsedBoneNames = { "UsedBoneNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosClothSimulationModel, UsedBoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::NewProp_UsedBoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::NewProp_UsedBoneNames_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::NewProp_UsedBoneIndices_Inner = { "UsedBoneIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::NewProp_UsedBoneIndices_MetaData[] = {
		{ "Comment", "/** List of the indices for the bones in UsedBoneNames, used for remapping. */" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothSimulationModel.h" },
		{ "ToolTip", "List of the indices for the bones in UsedBoneNames, used for remapping." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::NewProp_UsedBoneIndices = { "UsedBoneIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosClothSimulationModel, UsedBoneIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::NewProp_UsedBoneIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::NewProp_UsedBoneIndices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::NewProp_ReferenceBoneIndex_MetaData[] = {
		{ "Comment", "/** Bone to treat as the root of the simulation space. */" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothSimulationModel.h" },
		{ "ToolTip", "Bone to treat as the root of the simulation space." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::NewProp_ReferenceBoneIndex = { "ReferenceBoneIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChaosClothSimulationModel, ReferenceBoneIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::NewProp_ReferenceBoneIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::NewProp_ReferenceBoneIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::NewProp_ClothSimulationLodModels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::NewProp_ClothSimulationLodModels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::NewProp_UsedBoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::NewProp_UsedBoneNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::NewProp_UsedBoneIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::NewProp_UsedBoneIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::NewProp_ReferenceBoneIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEngine,
		nullptr,
		&NewStructOps,
		"ChaosClothSimulationModel",
		sizeof(FChaosClothSimulationModel),
		alignof(FChaosClothSimulationModel),
		Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChaosClothSimulationModel()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosClothSimulationModel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosClothSimulationModel.InnerSingleton, Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosClothSimulationModel.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Private_ChaosClothAsset_ClothSimulationModel_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Private_ChaosClothAsset_ClothSimulationModel_h_Statics::ScriptStructInfo[] = {
		{ FChaosClothSimulationLodModel::StaticStruct, Z_Construct_UScriptStruct_FChaosClothSimulationLodModel_Statics::NewStructOps, TEXT("ChaosClothSimulationLodModel"), &Z_Registration_Info_UScriptStruct_ChaosClothSimulationLodModel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosClothSimulationLodModel), 2322251194U) },
		{ FChaosClothSimulationModel::StaticStruct, Z_Construct_UScriptStruct_FChaosClothSimulationModel_Statics::NewStructOps, TEXT("ChaosClothSimulationModel"), &Z_Registration_Info_UScriptStruct_ChaosClothSimulationModel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosClothSimulationModel), 2291142935U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Private_ChaosClothAsset_ClothSimulationModel_h_2304357356(TEXT("/Script/ChaosClothAssetEngine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Private_ChaosClothAsset_ClothSimulationModel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Private_ChaosClothAsset_ClothSimulationModel_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
