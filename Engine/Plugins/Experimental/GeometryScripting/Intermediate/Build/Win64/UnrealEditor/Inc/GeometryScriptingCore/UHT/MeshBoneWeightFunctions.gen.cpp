// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/MeshBoneWeightFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshBoneWeightFunctions() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSmoothBoneWeightsType();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptBoneWeight();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptBoneWeight;
class UScriptStruct* FGeometryScriptBoneWeight::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptBoneWeight.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptBoneWeight.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptBoneWeight, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptBoneWeight"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptBoneWeight.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptBoneWeight>()
{
	return FGeometryScriptBoneWeight::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoneIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Bone Weights" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptBoneWeight>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::NewProp_BoneIndex_MetaData[] = {
		{ "Category", "BoneWeights" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::NewProp_BoneIndex = { "BoneIndex", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptBoneWeight, BoneIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::NewProp_BoneIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::NewProp_BoneIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "BoneWeights" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptBoneWeight, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::NewProp_Weight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::NewProp_BoneIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::NewProp_Weight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptBoneWeight",
		sizeof(FGeometryScriptBoneWeight),
		alignof(FGeometryScriptBoneWeight),
		Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptBoneWeight()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptBoneWeight.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptBoneWeight.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptBoneWeight.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptBoneWeightProfile;
class UScriptStruct* FGeometryScriptBoneWeightProfile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptBoneWeightProfile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptBoneWeightProfile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptBoneWeightProfile"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptBoneWeightProfile.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptBoneWeightProfile>()
{
	return FGeometryScriptBoneWeightProfile::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProfileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Bone Weights Profile" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptBoneWeightProfile>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics::NewProp_ProfileName_MetaData[] = {
		{ "Category", "BoneWeights" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptBoneWeightProfile, ProfileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics::NewProp_ProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics::NewProp_ProfileName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics::NewProp_ProfileName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptBoneWeightProfile",
		sizeof(FGeometryScriptBoneWeightProfile),
		alignof(FGeometryScriptBoneWeightProfile),
		Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptBoneWeightProfile.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptBoneWeightProfile.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptBoneWeightProfile.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptSmoothBoneWeightsType;
	static UEnum* EGeometryScriptSmoothBoneWeightsType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptSmoothBoneWeightsType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptSmoothBoneWeightsType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSmoothBoneWeightsType, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptSmoothBoneWeightsType"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptSmoothBoneWeightsType.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptSmoothBoneWeightsType>()
	{
		return EGeometryScriptSmoothBoneWeightsType_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSmoothBoneWeightsType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSmoothBoneWeightsType_Statics::Enumerators[] = {
		{ "EGeometryScriptSmoothBoneWeightsType::DirectDistance", (int64)EGeometryScriptSmoothBoneWeightsType::DirectDistance },
		{ "EGeometryScriptSmoothBoneWeightsType::GeodesicVoxel", (int64)EGeometryScriptSmoothBoneWeightsType::GeodesicVoxel },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSmoothBoneWeightsType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DirectDistance.Name", "EGeometryScriptSmoothBoneWeightsType::DirectDistance" },
		{ "GeodesicVoxel.Comment", "/** Compute weighting by using Euclidean distance from bone to vertex */" },
		{ "GeodesicVoxel.Name", "EGeometryScriptSmoothBoneWeightsType::GeodesicVoxel" },
		{ "GeodesicVoxel.ToolTip", "Compute weighting by using Euclidean distance from bone to vertex" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSmoothBoneWeightsType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptSmoothBoneWeightsType",
		"EGeometryScriptSmoothBoneWeightsType",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSmoothBoneWeightsType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSmoothBoneWeightsType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSmoothBoneWeightsType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSmoothBoneWeightsType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSmoothBoneWeightsType()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptSmoothBoneWeightsType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptSmoothBoneWeightsType.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSmoothBoneWeightsType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptSmoothBoneWeightsType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptSmoothBoneWeightsOptions;
class UScriptStruct* FGeometryScriptSmoothBoneWeightsOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptSmoothBoneWeightsOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptSmoothBoneWeightsOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptSmoothBoneWeightsOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptSmoothBoneWeightsOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptSmoothBoneWeightsOptions>()
{
	return FGeometryScriptSmoothBoneWeightsOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_DistanceWeighingType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceWeighingType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DistanceWeighingType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxInfluences_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxInfluences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VoxelResolution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptSmoothBoneWeightsOptions>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_DistanceWeighingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_DistanceWeighingType_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** The type of algorithm to use for computing the bone weight for each vertex */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ToolTip", "The type of algorithm to use for computing the bone weight for each vertex" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_DistanceWeighingType = { "DistanceWeighingType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSmoothBoneWeightsOptions, DistanceWeighingType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSmoothBoneWeightsType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_DistanceWeighingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_DistanceWeighingType_MetaData)) }; // 3392241739
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_Stiffness_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** How rigid the binding should be. Higher values result in a more rigid binding (greater influence by bones\n\x09 *  closer to the vertex than those further away).\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ToolTip", "How rigid the binding should be. Higher values result in a more rigid binding (greater influence by bones\ncloser to the vertex than those further away)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSmoothBoneWeightsOptions, Stiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_Stiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_Stiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_MaxInfluences_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Maximum number of bones that contribute to each weight. Set to 1 for a completely rigid binding. Higher values\n\x09 *  to have more distant bones make additional contributions to the deformation at each vertex. \n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ToolTip", "Maximum number of bones that contribute to each weight. Set to 1 for a completely rigid binding. Higher values\nto have more distant bones make additional contributions to the deformation at each vertex." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_MaxInfluences = { "MaxInfluences", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSmoothBoneWeightsOptions, MaxInfluences), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_MaxInfluences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_MaxInfluences_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_VoxelResolution_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** The resolution to build the voxelized representation of the mesh, for computing geodesic distance. Higher values\n\x09 *  result in greater fidelity and less chance of disconnected parts contributing, but slower rate of computation and\n\x09 *  more memory usage.\n\x09 */" },
		{ "EditCondition", "DistanceWeighingType==EGeometryScriptSmoothBoneWeightsType::GeodesicVoxel" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ToolTip", "The resolution to build the voxelized representation of the mesh, for computing geodesic distance. Higher values\nresult in greater fidelity and less chance of disconnected parts contributing, but slower rate of computation and\nmore memory usage." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_VoxelResolution = { "VoxelResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSmoothBoneWeightsOptions, VoxelResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_VoxelResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_VoxelResolution_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_DistanceWeighingType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_DistanceWeighingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_Stiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_MaxInfluences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_VoxelResolution,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptSmoothBoneWeightsOptions",
		sizeof(FGeometryScriptSmoothBoneWeightsOptions),
		alignof(FGeometryScriptSmoothBoneWeightsOptions),
		Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptSmoothBoneWeightsOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptSmoothBoneWeightsOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptSmoothBoneWeightsOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBoneWeightFunctions::execComputeSmoothBoneWeights)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_OBJECT(USkeleton,Z_Param_Skeleton);
		P_GET_STRUCT(FGeometryScriptSmoothBoneWeightsOptions,Z_Param_Options);
		P_GET_STRUCT(FGeometryScriptBoneWeightProfile,Z_Param_Profile);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBoneWeightFunctions::ComputeSmoothBoneWeights(Z_Param_TargetMesh,Z_Param_Skeleton,Z_Param_Options,Z_Param_Profile,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBoneWeightFunctions::execSetAllVertexBoneWeights)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_TARRAY_REF(FGeometryScriptBoneWeight,Z_Param_Out_BoneWeights);
		P_GET_STRUCT(FGeometryScriptBoneWeightProfile,Z_Param_Profile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBoneWeightFunctions::SetAllVertexBoneWeights(Z_Param_TargetMesh,Z_Param_Out_BoneWeights,Z_Param_Profile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBoneWeightFunctions::execSetVertexBoneWeights)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_VertexID);
		P_GET_TARRAY_REF(FGeometryScriptBoneWeight,Z_Param_Out_BoneWeights);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidVertexID);
		P_GET_STRUCT(FGeometryScriptBoneWeightProfile,Z_Param_Profile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBoneWeightFunctions::SetVertexBoneWeights(Z_Param_TargetMesh,Z_Param_VertexID,Z_Param_Out_BoneWeights,Z_Param_Out_bIsValidVertexID,Z_Param_Profile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBoneWeightFunctions::execGetLargestVertexBoneWeight)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_VertexID);
		P_GET_STRUCT_REF(FGeometryScriptBoneWeight,Z_Param_Out_BoneWeight);
		P_GET_UBOOL_REF(Z_Param_Out_bHasValidBoneWeights);
		P_GET_STRUCT(FGeometryScriptBoneWeightProfile,Z_Param_Profile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBoneWeightFunctions::GetLargestVertexBoneWeight(Z_Param_TargetMesh,Z_Param_VertexID,Z_Param_Out_BoneWeight,Z_Param_Out_bHasValidBoneWeights,Z_Param_Profile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBoneWeightFunctions::execGetVertexBoneWeights)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_VertexID);
		P_GET_TARRAY_REF(FGeometryScriptBoneWeight,Z_Param_Out_BoneWeights);
		P_GET_UBOOL_REF(Z_Param_Out_bHasValidBoneWeights);
		P_GET_STRUCT(FGeometryScriptBoneWeightProfile,Z_Param_Profile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBoneWeightFunctions::GetVertexBoneWeights(Z_Param_TargetMesh,Z_Param_VertexID,Z_Param_Out_BoneWeights,Z_Param_Out_bHasValidBoneWeights,Z_Param_Profile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBoneWeightFunctions::execGetMaxBoneWeightIndex)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_UBOOL_REF(Z_Param_Out_bHasBoneWeights);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MaxBoneIndex);
		P_GET_STRUCT(FGeometryScriptBoneWeightProfile,Z_Param_Profile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBoneWeightFunctions::GetMaxBoneWeightIndex(Z_Param_TargetMesh,Z_Param_Out_bHasBoneWeights,Z_Param_Out_MaxBoneIndex,Z_Param_Profile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBoneWeightFunctions::execMeshCreateBoneWeights)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_UBOOL_REF(Z_Param_Out_bProfileExisted);
		P_GET_UBOOL(Z_Param_bReplaceExistingProfile);
		P_GET_STRUCT(FGeometryScriptBoneWeightProfile,Z_Param_Profile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBoneWeightFunctions::MeshCreateBoneWeights(Z_Param_TargetMesh,Z_Param_Out_bProfileExisted,Z_Param_bReplaceExistingProfile,Z_Param_Profile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBoneWeightFunctions::execMeshHasBoneWeights)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_UBOOL_REF(Z_Param_Out_bHasBoneWeights);
		P_GET_STRUCT(FGeometryScriptBoneWeightProfile,Z_Param_Profile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBoneWeightFunctions::MeshHasBoneWeights(Z_Param_TargetMesh,Z_Param_Out_bHasBoneWeights,Z_Param_Profile);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_MeshBoneWeightFunctions::StaticRegisterNativesUGeometryScriptLibrary_MeshBoneWeightFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_MeshBoneWeightFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ComputeSmoothBoneWeights", &UGeometryScriptLibrary_MeshBoneWeightFunctions::execComputeSmoothBoneWeights },
			{ "GetLargestVertexBoneWeight", &UGeometryScriptLibrary_MeshBoneWeightFunctions::execGetLargestVertexBoneWeight },
			{ "GetMaxBoneWeightIndex", &UGeometryScriptLibrary_MeshBoneWeightFunctions::execGetMaxBoneWeightIndex },
			{ "GetVertexBoneWeights", &UGeometryScriptLibrary_MeshBoneWeightFunctions::execGetVertexBoneWeights },
			{ "MeshCreateBoneWeights", &UGeometryScriptLibrary_MeshBoneWeightFunctions::execMeshCreateBoneWeights },
			{ "MeshHasBoneWeights", &UGeometryScriptLibrary_MeshBoneWeightFunctions::execMeshHasBoneWeights },
			{ "SetAllVertexBoneWeights", &UGeometryScriptLibrary_MeshBoneWeightFunctions::execSetAllVertexBoneWeights },
			{ "SetVertexBoneWeights", &UGeometryScriptLibrary_MeshBoneWeightFunctions::execSetVertexBoneWeights },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics
	{
		struct GeometryScriptLibrary_MeshBoneWeightFunctions_eventComputeSmoothBoneWeights_Parms
		{
			UDynamicMesh* TargetMesh;
			USkeleton* Skeleton;
			FGeometryScriptSmoothBoneWeightsOptions Options;
			FGeometryScriptBoneWeightProfile Profile;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Profile;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventComputeSmoothBoneWeights_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventComputeSmoothBoneWeights_Parms, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventComputeSmoothBoneWeights_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions, METADATA_PARAMS(nullptr, 0) }; // 404063612
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventComputeSmoothBoneWeights_Parms, Profile), Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile, METADATA_PARAMS(nullptr, 0) }; // 2371372011
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventComputeSmoothBoneWeights_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventComputeSmoothBoneWeights_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::NewProp_Profile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries|BoneWeights" },
		{ "Comment", "/** \n\x09 *  Computes a smooth skin binding for the given mesh to the skeleton provided.\n\x09 *  @param Skeleton The skeleton to compute binding for the skin weights.\n\x09 *  @param Options The options to set for the binding algorithm.\n\x09 *  @param Profile The skin weight profile to update with the smooth binding.\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_Profile", "()" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Computes a smooth skin binding for the given mesh to the skeleton provided.\n@param Skeleton The skeleton to compute binding for the skin weights.\n@param Options The options to set for the binding algorithm.\n@param Profile The skin weight profile to update with the smooth binding." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions, nullptr, "ComputeSmoothBoneWeights", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventComputeSmoothBoneWeights_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics
	{
		struct GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetLargestVertexBoneWeight_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 VertexID;
			FGeometryScriptBoneWeight BoneWeight;
			bool bHasValidBoneWeights;
			FGeometryScriptBoneWeightProfile Profile;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_VertexID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneWeight;
		static void NewProp_bHasValidBoneWeights_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasValidBoneWeights;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Profile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetLargestVertexBoneWeight_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetLargestVertexBoneWeight_Parms, VertexID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_BoneWeight = { "BoneWeight", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetLargestVertexBoneWeight_Parms, BoneWeight), Z_Construct_UScriptStruct_FGeometryScriptBoneWeight, METADATA_PARAMS(nullptr, 0) }; // 1464608694
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_bHasValidBoneWeights_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetLargestVertexBoneWeight_Parms*)Obj)->bHasValidBoneWeights = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_bHasValidBoneWeights = { "bHasValidBoneWeights", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetLargestVertexBoneWeight_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_bHasValidBoneWeights_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetLargestVertexBoneWeight_Parms, Profile), Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile, METADATA_PARAMS(nullptr, 0) }; // 2371372011
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetLargestVertexBoneWeight_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_VertexID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_BoneWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_bHasValidBoneWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_Profile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries|BoneWeights" },
		{ "Comment", "/**\n\x09 * Return the Bone/Skin Weight with the maximum weight at a given vertex of TargetMesh\n\x09 * @param VertexID requested vertex\n\x09 * @param BoneWeight the bone index and weight that was found to have the maximum weight\n\x09 * @param bHasValidBoneWeights will be returned as true if the vertex has bone weights in the given profile and a largest weight was found\n\x09 * @param Profile identifier for the bone/skin weight profile\n\x09 */" },
		{ "CPP_Default_Profile", "()" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Return the Bone/Skin Weight with the maximum weight at a given vertex of TargetMesh\n@param VertexID requested vertex\n@param BoneWeight the bone index and weight that was found to have the maximum weight\n@param bHasValidBoneWeights will be returned as true if the vertex has bone weights in the given profile and a largest weight was found\n@param Profile identifier for the bone/skin weight profile" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions, nullptr, "GetLargestVertexBoneWeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetLargestVertexBoneWeight_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics
	{
		struct GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetMaxBoneWeightIndex_Parms
		{
			UDynamicMesh* TargetMesh;
			bool bHasBoneWeights;
			int32 MaxBoneIndex;
			FGeometryScriptBoneWeightProfile Profile;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static void NewProp_bHasBoneWeights_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBoneWeights;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxBoneIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Profile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetMaxBoneWeightIndex_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::NewProp_bHasBoneWeights_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetMaxBoneWeightIndex_Parms*)Obj)->bHasBoneWeights = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::NewProp_bHasBoneWeights = { "bHasBoneWeights", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetMaxBoneWeightIndex_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::NewProp_bHasBoneWeights_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::NewProp_MaxBoneIndex = { "MaxBoneIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetMaxBoneWeightIndex_Parms, MaxBoneIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetMaxBoneWeightIndex_Parms, Profile), Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile, METADATA_PARAMS(nullptr, 0) }; // 2371372011
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetMaxBoneWeightIndex_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::NewProp_bHasBoneWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::NewProp_MaxBoneIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::NewProp_Profile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries|BoneWeights" },
		{ "Comment", "/**\n\x09 * Determine the largest bone weight index that exists on the Mesh\n\x09 * @param bHasBoneWeights will be returned true if the requested bone weight profile exists\n\x09 * @param MaxBoneIndex maximum bone index will be returned here, or -1 if no bone indices exist\n\x09 * @param Profile identifier for the bone/skin weight profile\n\x09 */" },
		{ "CPP_Default_Profile", "()" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Determine the largest bone weight index that exists on the Mesh\n@param bHasBoneWeights will be returned true if the requested bone weight profile exists\n@param MaxBoneIndex maximum bone index will be returned here, or -1 if no bone indices exist\n@param Profile identifier for the bone/skin weight profile" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions, nullptr, "GetMaxBoneWeightIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetMaxBoneWeightIndex_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics
	{
		struct GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetVertexBoneWeights_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 VertexID;
			TArray<FGeometryScriptBoneWeight> BoneWeights;
			bool bHasValidBoneWeights;
			FGeometryScriptBoneWeightProfile Profile;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_VertexID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneWeights_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneWeights;
		static void NewProp_bHasValidBoneWeights_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasValidBoneWeights;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Profile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetVertexBoneWeights_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetVertexBoneWeights_Parms, VertexID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_BoneWeights_Inner = { "BoneWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGeometryScriptBoneWeight, METADATA_PARAMS(nullptr, 0) }; // 1464608694
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_BoneWeights = { "BoneWeights", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetVertexBoneWeights_Parms, BoneWeights), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1464608694
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_bHasValidBoneWeights_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetVertexBoneWeights_Parms*)Obj)->bHasValidBoneWeights = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_bHasValidBoneWeights = { "bHasValidBoneWeights", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetVertexBoneWeights_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_bHasValidBoneWeights_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetVertexBoneWeights_Parms, Profile), Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile, METADATA_PARAMS(nullptr, 0) }; // 2371372011
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetVertexBoneWeights_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_VertexID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_BoneWeights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_BoneWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_bHasValidBoneWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_Profile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries|BoneWeights" },
		{ "Comment", "/**\n\x09 * Return an array of Bone/Skin Weights at a given vertex of TargetMesh\n\x09 * @param VertexID requested vertex\n\x09 * @param BoneWeights output array of bone index/weight pairs for the given Vertex\n\x09 * @param bHasValidBoneWeights will be returned as true if the vertex has bone weights in the given profile, ie BoneWeights is valid\n\x09 * @param Profile identifier for the bone/skin weight profile\n\x09 */" },
		{ "CPP_Default_Profile", "()" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Return an array of Bone/Skin Weights at a given vertex of TargetMesh\n@param VertexID requested vertex\n@param BoneWeights output array of bone index/weight pairs for the given Vertex\n@param bHasValidBoneWeights will be returned as true if the vertex has bone weights in the given profile, ie BoneWeights is valid\n@param Profile identifier for the bone/skin weight profile" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions, nullptr, "GetVertexBoneWeights", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetVertexBoneWeights_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics
	{
		struct GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshCreateBoneWeights_Parms
		{
			UDynamicMesh* TargetMesh;
			bool bProfileExisted;
			bool bReplaceExistingProfile;
			FGeometryScriptBoneWeightProfile Profile;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static void NewProp_bProfileExisted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProfileExisted;
		static void NewProp_bReplaceExistingProfile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceExistingProfile;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Profile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshCreateBoneWeights_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_bProfileExisted_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshCreateBoneWeights_Parms*)Obj)->bProfileExisted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_bProfileExisted = { "bProfileExisted", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshCreateBoneWeights_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_bProfileExisted_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_bReplaceExistingProfile_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshCreateBoneWeights_Parms*)Obj)->bReplaceExistingProfile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_bReplaceExistingProfile = { "bReplaceExistingProfile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshCreateBoneWeights_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_bReplaceExistingProfile_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshCreateBoneWeights_Parms, Profile), Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile, METADATA_PARAMS(nullptr, 0) }; // 2371372011
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshCreateBoneWeights_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_bProfileExisted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_bReplaceExistingProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_Profile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries|BoneWeights" },
		{ "Comment", "/**\n\x09 * Create a new BoneWeights attribute on the TargetMesh, if it does not already exist. If it does exist, \n\x09 * and bReplaceExistingProfile is passed as true, the attribute will be removed and re-added, to reset it. \n\x09 * @param bProfileExisted will be returned true if the requested bone weight profile already existed\n\x09 * @param bReplaceExistingProfile if true, if the Profile already exists, it is reset\n\x09 * @param Profile identifier for the bone/skin weight profile\n\x09 */" },
		{ "CPP_Default_bReplaceExistingProfile", "false" },
		{ "CPP_Default_Profile", "()" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Create a new BoneWeights attribute on the TargetMesh, if it does not already exist. If it does exist,\nand bReplaceExistingProfile is passed as true, the attribute will be removed and re-added, to reset it.\n@param bProfileExisted will be returned true if the requested bone weight profile already existed\n@param bReplaceExistingProfile if true, if the Profile already exists, it is reset\n@param Profile identifier for the bone/skin weight profile" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions, nullptr, "MeshCreateBoneWeights", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshCreateBoneWeights_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics
	{
		struct GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshHasBoneWeights_Parms
		{
			UDynamicMesh* TargetMesh;
			bool bHasBoneWeights;
			FGeometryScriptBoneWeightProfile Profile;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static void NewProp_bHasBoneWeights_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBoneWeights;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Profile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshHasBoneWeights_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::NewProp_bHasBoneWeights_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshHasBoneWeights_Parms*)Obj)->bHasBoneWeights = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::NewProp_bHasBoneWeights = { "bHasBoneWeights", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshHasBoneWeights_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::NewProp_bHasBoneWeights_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshHasBoneWeights_Parms, Profile), Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile, METADATA_PARAMS(nullptr, 0) }; // 2371372011
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshHasBoneWeights_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::NewProp_bHasBoneWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::NewProp_Profile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries|BoneWeights" },
		{ "Comment", "/**\n\x09 * Check whether the TargetMesh has a per-vertex Bone/Skin Weight Attribute set\n\x09 * @param bHasBoneWeights will be returned true if the requested bone weight profile exists\n\x09 * @param Profile identifier for the bone/skin weight profile\n\x09 */" },
		{ "CPP_Default_Profile", "()" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Check whether the TargetMesh has a per-vertex Bone/Skin Weight Attribute set\n@param bHasBoneWeights will be returned true if the requested bone weight profile exists\n@param Profile identifier for the bone/skin weight profile" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions, nullptr, "MeshHasBoneWeights", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshHasBoneWeights_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics
	{
		struct GeometryScriptLibrary_MeshBoneWeightFunctions_eventSetAllVertexBoneWeights_Parms
		{
			UDynamicMesh* TargetMesh;
			TArray<FGeometryScriptBoneWeight> BoneWeights;
			FGeometryScriptBoneWeightProfile Profile;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneWeights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneWeights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneWeights;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Profile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventSetAllVertexBoneWeights_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::NewProp_BoneWeights_Inner = { "BoneWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGeometryScriptBoneWeight, METADATA_PARAMS(nullptr, 0) }; // 1464608694
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::NewProp_BoneWeights_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::NewProp_BoneWeights = { "BoneWeights", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventSetAllVertexBoneWeights_Parms, BoneWeights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::NewProp_BoneWeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::NewProp_BoneWeights_MetaData)) }; // 1464608694
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventSetAllVertexBoneWeights_Parms, Profile), Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile, METADATA_PARAMS(nullptr, 0) }; // 2371372011
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventSetAllVertexBoneWeights_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::NewProp_BoneWeights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::NewProp_BoneWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::NewProp_Profile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries|BoneWeights" },
		{ "Comment", "/**\n\x09 * Set all vertices of the TargetMesh to the given Bone/Skin Weights\n\x09 * @param BoneWeights input array of bone index/weight pairs for the Vertex\n\x09 * @param Profile identifier for the bone/skin weight profile\n\x09 */" },
		{ "CPP_Default_Profile", "()" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set all vertices of the TargetMesh to the given Bone/Skin Weights\n@param BoneWeights input array of bone index/weight pairs for the Vertex\n@param Profile identifier for the bone/skin weight profile" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions, nullptr, "SetAllVertexBoneWeights", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventSetAllVertexBoneWeights_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics
	{
		struct GeometryScriptLibrary_MeshBoneWeightFunctions_eventSetVertexBoneWeights_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 VertexID;
			TArray<FGeometryScriptBoneWeight> BoneWeights;
			bool bIsValidVertexID;
			FGeometryScriptBoneWeightProfile Profile;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_VertexID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneWeights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneWeights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneWeights;
		static void NewProp_bIsValidVertexID_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidVertexID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Profile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventSetVertexBoneWeights_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventSetVertexBoneWeights_Parms, VertexID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_BoneWeights_Inner = { "BoneWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGeometryScriptBoneWeight, METADATA_PARAMS(nullptr, 0) }; // 1464608694
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_BoneWeights_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_BoneWeights = { "BoneWeights", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventSetVertexBoneWeights_Parms, BoneWeights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_BoneWeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_BoneWeights_MetaData)) }; // 1464608694
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_bIsValidVertexID_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBoneWeightFunctions_eventSetVertexBoneWeights_Parms*)Obj)->bIsValidVertexID = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_bIsValidVertexID = { "bIsValidVertexID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBoneWeightFunctions_eventSetVertexBoneWeights_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_bIsValidVertexID_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventSetVertexBoneWeights_Parms, Profile), Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile, METADATA_PARAMS(nullptr, 0) }; // 2371372011
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventSetVertexBoneWeights_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_VertexID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_BoneWeights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_BoneWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_bIsValidVertexID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_Profile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries|BoneWeights" },
		{ "Comment", "/**\n\x09 * Set the Bone/Skin Weights at a given vertex of TargetMesh\n\x09 * @param VertexID vertex to update\n\x09 * @param BoneWeights input array of bone index/weight pairs for the Vertex\n\x09 * @param bIsValidVertexID will be returned as true if the vertex ID is valid\n\x09 * @param Profile identifier for the bone/skin weight profile\n\x09 */" },
		{ "CPP_Default_Profile", "()" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set the Bone/Skin Weights at a given vertex of TargetMesh\n@param VertexID vertex to update\n@param BoneWeights input array of bone index/weight pairs for the Vertex\n@param bIsValidVertexID will be returned as true if the vertex ID is valid\n@param Profile identifier for the bone/skin weight profile" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions, nullptr, "SetVertexBoneWeights", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventSetVertexBoneWeights_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_MeshBoneWeightFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_MeshBoneWeightFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights, "ComputeSmoothBoneWeights" }, // 2624203039
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight, "GetLargestVertexBoneWeight" }, // 602235492
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex, "GetMaxBoneWeightIndex" }, // 3557915377
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights, "GetVertexBoneWeights" }, // 445266585
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights, "MeshCreateBoneWeights" }, // 1584471968
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights, "MeshHasBoneWeights" }, // 283558775
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights, "SetAllVertexBoneWeights" }, // 907517451
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights, "SetVertexBoneWeights" }, // 3673780713
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ScriptName", "GeometryScript_BoneWeights" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_MeshBoneWeightFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_MeshBoneWeightFunctions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_MeshBoneWeightFunctions>()
	{
		return UGeometryScriptLibrary_MeshBoneWeightFunctions::StaticClass();
	}
	UGeometryScriptLibrary_MeshBoneWeightFunctions::UGeometryScriptLibrary_MeshBoneWeightFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_MeshBoneWeightFunctions);
	UGeometryScriptLibrary_MeshBoneWeightFunctions::~UGeometryScriptLibrary_MeshBoneWeightFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_Statics::EnumInfo[] = {
		{ EGeometryScriptSmoothBoneWeightsType_StaticEnum, TEXT("EGeometryScriptSmoothBoneWeightsType"), &Z_Registration_Info_UEnum_EGeometryScriptSmoothBoneWeightsType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3392241739U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_Statics::ScriptStructInfo[] = {
		{ FGeometryScriptBoneWeight::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::NewStructOps, TEXT("GeometryScriptBoneWeight"), &Z_Registration_Info_UScriptStruct_GeometryScriptBoneWeight, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptBoneWeight), 1464608694U) },
		{ FGeometryScriptBoneWeightProfile::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics::NewStructOps, TEXT("GeometryScriptBoneWeightProfile"), &Z_Registration_Info_UScriptStruct_GeometryScriptBoneWeightProfile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptBoneWeightProfile), 2371372011U) },
		{ FGeometryScriptSmoothBoneWeightsOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewStructOps, TEXT("GeometryScriptSmoothBoneWeightsOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptSmoothBoneWeightsOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptSmoothBoneWeightsOptions), 404063612U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions, UGeometryScriptLibrary_MeshBoneWeightFunctions::StaticClass, TEXT("UGeometryScriptLibrary_MeshBoneWeightFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_MeshBoneWeightFunctions), 3621230838U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_1883764418(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
