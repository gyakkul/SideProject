// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsAssetUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsAssetUtils() {}
// Cross Module References
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion();
	PHYSICSUTILITIES_API UEnum* Z_Construct_UEnum_PhysicsUtilities_EPhysAssetFitGeomType();
	PHYSICSUTILITIES_API UEnum* Z_Construct_UEnum_PhysicsUtilities_EPhysAssetFitVertWeight();
	PHYSICSUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FPhysAssetCreateParams();
	UPackage* Z_Construct_UPackage__Script_PhysicsUtilities();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPhysAssetFitGeomType;
	static UEnum* EPhysAssetFitGeomType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPhysAssetFitGeomType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPhysAssetFitGeomType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PhysicsUtilities_EPhysAssetFitGeomType, (UObject*)Z_Construct_UPackage__Script_PhysicsUtilities(), TEXT("EPhysAssetFitGeomType"));
		}
		return Z_Registration_Info_UEnum_EPhysAssetFitGeomType.OuterSingleton;
	}
	template<> PHYSICSUTILITIES_API UEnum* StaticEnum<EPhysAssetFitGeomType>()
	{
		return EPhysAssetFitGeomType_StaticEnum();
	}
	struct Z_Construct_UEnum_PhysicsUtilities_EPhysAssetFitGeomType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PhysicsUtilities_EPhysAssetFitGeomType_Statics::Enumerators[] = {
		{ "EFG_Box", (int64)EFG_Box },
		{ "EFG_Sphyl", (int64)EFG_Sphyl },
		{ "EFG_Sphere", (int64)EFG_Sphere },
		{ "EFG_TaperedCapsule", (int64)EFG_TaperedCapsule },
		{ "EFG_SingleConvexHull", (int64)EFG_SingleConvexHull },
		{ "EFG_MultiConvexHull", (int64)EFG_MultiConvexHull },
		{ "EFG_LevelSet", (int64)EFG_LevelSet },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PhysicsUtilities_EPhysAssetFitGeomType_Statics::Enum_MetaDataParams[] = {
		{ "EFG_Box.DisplayName", "Box" },
		{ "EFG_Box.Name", "EFG_Box" },
		{ "EFG_LevelSet.DisplayName", "Level Set" },
		{ "EFG_LevelSet.Name", "EFG_LevelSet" },
		{ "EFG_MultiConvexHull.DisplayName", "Multi Convex Hull" },
		{ "EFG_MultiConvexHull.Name", "EFG_MultiConvexHull" },
		{ "EFG_SingleConvexHull.DisplayName", "Single Convex Hull" },
		{ "EFG_SingleConvexHull.Name", "EFG_SingleConvexHull" },
		{ "EFG_Sphere.DisplayName", "Sphere" },
		{ "EFG_Sphere.Name", "EFG_Sphere" },
		{ "EFG_Sphyl.DisplayName", "Capsule" },
		{ "EFG_Sphyl.Name", "EFG_Sphyl" },
		{ "EFG_TaperedCapsule.DisplayName", "Tapered Capsule (Cloth Only)" },
		{ "EFG_TaperedCapsule.Name", "EFG_TaperedCapsule" },
		{ "ModuleRelativePath", "Public/PhysicsAssetUtils.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PhysicsUtilities_EPhysAssetFitGeomType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PhysicsUtilities,
		nullptr,
		"EPhysAssetFitGeomType",
		"EPhysAssetFitGeomType",
		Z_Construct_UEnum_PhysicsUtilities_EPhysAssetFitGeomType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PhysicsUtilities_EPhysAssetFitGeomType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_PhysicsUtilities_EPhysAssetFitGeomType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PhysicsUtilities_EPhysAssetFitGeomType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PhysicsUtilities_EPhysAssetFitGeomType()
	{
		if (!Z_Registration_Info_UEnum_EPhysAssetFitGeomType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPhysAssetFitGeomType.InnerSingleton, Z_Construct_UEnum_PhysicsUtilities_EPhysAssetFitGeomType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPhysAssetFitGeomType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPhysAssetFitVertWeight;
	static UEnum* EPhysAssetFitVertWeight_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPhysAssetFitVertWeight.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPhysAssetFitVertWeight.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PhysicsUtilities_EPhysAssetFitVertWeight, (UObject*)Z_Construct_UPackage__Script_PhysicsUtilities(), TEXT("EPhysAssetFitVertWeight"));
		}
		return Z_Registration_Info_UEnum_EPhysAssetFitVertWeight.OuterSingleton;
	}
	template<> PHYSICSUTILITIES_API UEnum* StaticEnum<EPhysAssetFitVertWeight>()
	{
		return EPhysAssetFitVertWeight_StaticEnum();
	}
	struct Z_Construct_UEnum_PhysicsUtilities_EPhysAssetFitVertWeight_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PhysicsUtilities_EPhysAssetFitVertWeight_Statics::Enumerators[] = {
		{ "EVW_AnyWeight", (int64)EVW_AnyWeight },
		{ "EVW_DominantWeight", (int64)EVW_DominantWeight },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PhysicsUtilities_EPhysAssetFitVertWeight_Statics::Enum_MetaDataParams[] = {
		{ "EVW_AnyWeight.DisplayName", "Any Weight" },
		{ "EVW_AnyWeight.Name", "EVW_AnyWeight" },
		{ "EVW_DominantWeight.DisplayName", "Dominant Weight" },
		{ "EVW_DominantWeight.Name", "EVW_DominantWeight" },
		{ "ModuleRelativePath", "Public/PhysicsAssetUtils.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PhysicsUtilities_EPhysAssetFitVertWeight_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PhysicsUtilities,
		nullptr,
		"EPhysAssetFitVertWeight",
		"EPhysAssetFitVertWeight",
		Z_Construct_UEnum_PhysicsUtilities_EPhysAssetFitVertWeight_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PhysicsUtilities_EPhysAssetFitVertWeight_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_PhysicsUtilities_EPhysAssetFitVertWeight_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PhysicsUtilities_EPhysAssetFitVertWeight_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PhysicsUtilities_EPhysAssetFitVertWeight()
	{
		if (!Z_Registration_Info_UEnum_EPhysAssetFitVertWeight.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPhysAssetFitVertWeight.InnerSingleton, Z_Construct_UEnum_PhysicsUtilities_EPhysAssetFitVertWeight_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPhysAssetFitVertWeight.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysAssetCreateParams;
class UScriptStruct* FPhysAssetCreateParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysAssetCreateParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysAssetCreateParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysAssetCreateParams, (UObject*)Z_Construct_UPackage__Script_PhysicsUtilities(), TEXT("PhysAssetCreateParams"));
	}
	return Z_Registration_Info_UScriptStruct_PhysAssetCreateParams.OuterSingleton;
}
template<> PHYSICSUTILITIES_API UScriptStruct* StaticStruct<FPhysAssetCreateParams>()
{
	return FPhysAssetCreateParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinBoneSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinBoneSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinWeldSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinWeldSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeomType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GeomType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertWeight_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VertWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoOrientToBone_MetaData[];
#endif
		static void NewProp_bAutoOrientToBone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoOrientToBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateConstraints_MetaData[];
#endif
		static void NewProp_bCreateConstraints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateConstraints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWalkPastSmall_MetaData[];
#endif
		static void NewProp_bWalkPastSmall_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWalkPastSmall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBodyForAll_MetaData[];
#endif
		static void NewProp_bBodyForAll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBodyForAll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableCollisionsByDefault_MetaData[];
#endif
		static void NewProp_bDisableCollisionsByDefault_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableCollisionsByDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularConstraintMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AngularConstraintMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HullCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HullCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHullVerts_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHullVerts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelSetResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LevelSetResolution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Parameters for PhysicsAsset creation */" },
		{ "ModuleRelativePath", "Public/PhysicsAssetUtils.h" },
		{ "ToolTip", "Parameters for PhysicsAsset creation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysAssetCreateParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_MinBoneSize_MetaData[] = {
		{ "Category", "Body Creation" },
		{ "Comment", "/** Bones that are shorter than this value will be ignored for body creation */" },
		{ "ModuleRelativePath", "Public/PhysicsAssetUtils.h" },
		{ "ToolTip", "Bones that are shorter than this value will be ignored for body creation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_MinBoneSize = { "MinBoneSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysAssetCreateParams, MinBoneSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_MinBoneSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_MinBoneSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_MinWeldSize_MetaData[] = {
		{ "Category", "Body Creation" },
		{ "Comment", "/** Bones that are smaller than this value will be merged together for body creation */" },
		{ "ModuleRelativePath", "Public/PhysicsAssetUtils.h" },
		{ "ToolTip", "Bones that are smaller than this value will be merged together for body creation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_MinWeldSize = { "MinWeldSize", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysAssetCreateParams, MinWeldSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_MinWeldSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_MinWeldSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_GeomType_MetaData[] = {
		{ "Category", "Body Creation" },
		{ "Comment", "/** The geometry type that should be used when creating bodies */" },
		{ "DisplayName", "Primitive Type" },
		{ "ModuleRelativePath", "Public/PhysicsAssetUtils.h" },
		{ "ToolTip", "The geometry type that should be used when creating bodies" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_GeomType = { "GeomType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysAssetCreateParams, GeomType), Z_Construct_UEnum_PhysicsUtilities_EPhysAssetFitGeomType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_GeomType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_GeomType_MetaData)) }; // 3280527445
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_VertWeight_MetaData[] = {
		{ "Category", "Body Creation" },
		{ "Comment", "/** How vertices are mapped to bones when approximating them with bodies */" },
		{ "DisplayName", "Vertex Weighting Type" },
		{ "ModuleRelativePath", "Public/PhysicsAssetUtils.h" },
		{ "ToolTip", "How vertices are mapped to bones when approximating them with bodies" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_VertWeight = { "VertWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysAssetCreateParams, VertWeight), Z_Construct_UEnum_PhysicsUtilities_EPhysAssetFitVertWeight, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_VertWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_VertWeight_MetaData)) }; // 2590639667
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bAutoOrientToBone_MetaData[] = {
		{ "Category", "Body Creation" },
		{ "Comment", "/** Whether to automatically orient the created bodies to their corresponding bones */" },
		{ "ModuleRelativePath", "Public/PhysicsAssetUtils.h" },
		{ "ToolTip", "Whether to automatically orient the created bodies to their corresponding bones" },
	};
#endif
	void Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bAutoOrientToBone_SetBit(void* Obj)
	{
		((FPhysAssetCreateParams*)Obj)->bAutoOrientToBone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bAutoOrientToBone = { "bAutoOrientToBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPhysAssetCreateParams), &Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bAutoOrientToBone_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bAutoOrientToBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bAutoOrientToBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bCreateConstraints_MetaData[] = {
		{ "Category", "Constraint Creation" },
		{ "Comment", "/** Whether to create constraints between adjacent created bodies */" },
		{ "ModuleRelativePath", "Public/PhysicsAssetUtils.h" },
		{ "ToolTip", "Whether to create constraints between adjacent created bodies" },
	};
#endif
	void Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bCreateConstraints_SetBit(void* Obj)
	{
		((FPhysAssetCreateParams*)Obj)->bCreateConstraints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bCreateConstraints = { "bCreateConstraints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPhysAssetCreateParams), &Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bCreateConstraints_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bCreateConstraints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bCreateConstraints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bWalkPastSmall_MetaData[] = {
		{ "Category", "Body Creation" },
		{ "Comment", "/** Whether to skip small bones entirely (rather than merge them with adjacent bones) */" },
		{ "DisplayName", "Walk Past Small Bones" },
		{ "ModuleRelativePath", "Public/PhysicsAssetUtils.h" },
		{ "ToolTip", "Whether to skip small bones entirely (rather than merge them with adjacent bones)" },
	};
#endif
	void Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bWalkPastSmall_SetBit(void* Obj)
	{
		((FPhysAssetCreateParams*)Obj)->bWalkPastSmall = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bWalkPastSmall = { "bWalkPastSmall", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPhysAssetCreateParams), &Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bWalkPastSmall_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bWalkPastSmall_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bWalkPastSmall_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bBodyForAll_MetaData[] = {
		{ "Category", "Body Creation" },
		{ "Comment", "/** Forces creation of a body for each bone */" },
		{ "DisplayName", "Create Body for All Bones" },
		{ "ModuleRelativePath", "Public/PhysicsAssetUtils.h" },
		{ "ToolTip", "Forces creation of a body for each bone" },
	};
#endif
	void Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bBodyForAll_SetBit(void* Obj)
	{
		((FPhysAssetCreateParams*)Obj)->bBodyForAll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bBodyForAll = { "bBodyForAll", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPhysAssetCreateParams), &Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bBodyForAll_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bBodyForAll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bBodyForAll_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bDisableCollisionsByDefault_MetaData[] = {
		{ "Category", "Body Creation" },
		{ "Comment", "/** Whether to disable collision of body with other bodies on creation */" },
		{ "ModuleRelativePath", "Public/PhysicsAssetUtils.h" },
		{ "ToolTip", "Whether to disable collision of body with other bodies on creation" },
	};
#endif
	void Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bDisableCollisionsByDefault_SetBit(void* Obj)
	{
		((FPhysAssetCreateParams*)Obj)->bDisableCollisionsByDefault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bDisableCollisionsByDefault = { "bDisableCollisionsByDefault", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPhysAssetCreateParams), &Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bDisableCollisionsByDefault_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bDisableCollisionsByDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bDisableCollisionsByDefault_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_AngularConstraintMode_MetaData[] = {
		{ "Category", "Constraint Creation" },
		{ "Comment", "/** The type of angular constraint to create between bodies */" },
		{ "EditCondition", "bCreateConstraints" },
		{ "ModuleRelativePath", "Public/PhysicsAssetUtils.h" },
		{ "ToolTip", "The type of angular constraint to create between bodies" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_AngularConstraintMode = { "AngularConstraintMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysAssetCreateParams, AngularConstraintMode), Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_AngularConstraintMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_AngularConstraintMode_MetaData)) }; // 2540577704
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_HullCount_MetaData[] = {
		{ "Category", "Body Creation" },
		{ "Comment", "/** When creating multiple convex hulls, the maximum number that will be created. */" },
		{ "ModuleRelativePath", "Public/PhysicsAssetUtils.h" },
		{ "ToolTip", "When creating multiple convex hulls, the maximum number that will be created." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_HullCount = { "HullCount", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysAssetCreateParams, HullCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_HullCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_HullCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_MaxHullVerts_MetaData[] = {
		{ "Category", "Body Creation" },
		{ "Comment", "/** When creating convex hulls, the maximum verts that should be created */" },
		{ "ModuleRelativePath", "Public/PhysicsAssetUtils.h" },
		{ "ToolTip", "When creating convex hulls, the maximum verts that should be created" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_MaxHullVerts = { "MaxHullVerts", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysAssetCreateParams, MaxHullVerts), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_MaxHullVerts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_MaxHullVerts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_LevelSetResolution_MetaData[] = {
		{ "Category", "Body Creation" },
		{ "ClampMax", "500" },
		{ "ClampMin", "1" },
		{ "Comment", "/** When creating level sets, the grid resolution to use */" },
		{ "EditCondition", "GeomType == EPhysAssetFitGeomType::EFG_LevelSet" },
		{ "ModuleRelativePath", "Public/PhysicsAssetUtils.h" },
		{ "ToolTip", "When creating level sets, the grid resolution to use" },
		{ "UIMax", "100" },
		{ "UIMin", "10" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_LevelSetResolution = { "LevelSetResolution", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysAssetCreateParams, LevelSetResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_LevelSetResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_LevelSetResolution_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_MinBoneSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_MinWeldSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_GeomType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_VertWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bAutoOrientToBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bCreateConstraints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bWalkPastSmall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bBodyForAll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_bDisableCollisionsByDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_AngularConstraintMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_HullCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_MaxHullVerts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewProp_LevelSetResolution,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsUtilities,
		nullptr,
		&NewStructOps,
		"PhysAssetCreateParams",
		sizeof(FPhysAssetCreateParams),
		alignof(FPhysAssetCreateParams),
		Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysAssetCreateParams()
	{
		if (!Z_Registration_Info_UScriptStruct_PhysAssetCreateParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysAssetCreateParams.InnerSingleton, Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PhysAssetCreateParams.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_PhysicsUtilities_Public_PhysicsAssetUtils_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_PhysicsUtilities_Public_PhysicsAssetUtils_h_Statics::EnumInfo[] = {
		{ EPhysAssetFitGeomType_StaticEnum, TEXT("EPhysAssetFitGeomType"), &Z_Registration_Info_UEnum_EPhysAssetFitGeomType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3280527445U) },
		{ EPhysAssetFitVertWeight_StaticEnum, TEXT("EPhysAssetFitVertWeight"), &Z_Registration_Info_UEnum_EPhysAssetFitVertWeight, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2590639667U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_PhysicsUtilities_Public_PhysicsAssetUtils_h_Statics::ScriptStructInfo[] = {
		{ FPhysAssetCreateParams::StaticStruct, Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics::NewStructOps, TEXT("PhysAssetCreateParams"), &Z_Registration_Info_UScriptStruct_PhysAssetCreateParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysAssetCreateParams), 439064708U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_PhysicsUtilities_Public_PhysicsAssetUtils_h_2055057010(TEXT("/Script/PhysicsUtilities"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_PhysicsUtilities_Public_PhysicsAssetUtils_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_PhysicsUtilities_Public_PhysicsAssetUtils_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_PhysicsUtilities_Public_PhysicsAssetUtils_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_PhysicsUtilities_Public_PhysicsAssetUtils_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
