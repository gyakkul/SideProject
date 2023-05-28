// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/MeshSpatialFunctions.h"
#include "GeometryScript/GeometryScriptTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshSpatialFunctions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptContainmentOutcomePins();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSearchOutcomePins();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptDynamicMeshBVH();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptRayHitResult();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptSpatialQueryOptions;
class UScriptStruct* FGeometryScriptSpatialQueryOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptSpatialQueryOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptSpatialQueryOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptSpatialQueryOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptSpatialQueryOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptSpatialQueryOptions>()
{
	return FGeometryScriptSpatialQueryOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowUnsafeModifiedQueries_MetaData[];
#endif
		static void NewProp_bAllowUnsafeModifiedQueries_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowUnsafeModifiedQueries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindingIsoThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WindingIsoThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "BVH Query Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSpatialFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptSpatialQueryOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSpatialFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSpatialQueryOptions, MaxDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics::NewProp_MaxDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics::NewProp_bAllowUnsafeModifiedQueries_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSpatialFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics::NewProp_bAllowUnsafeModifiedQueries_SetBit(void* Obj)
	{
		((FGeometryScriptSpatialQueryOptions*)Obj)->bAllowUnsafeModifiedQueries = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics::NewProp_bAllowUnsafeModifiedQueries = { "bAllowUnsafeModifiedQueries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptSpatialQueryOptions), &Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics::NewProp_bAllowUnsafeModifiedQueries_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics::NewProp_bAllowUnsafeModifiedQueries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics::NewProp_bAllowUnsafeModifiedQueries_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics::NewProp_WindingIsoThreshold_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSpatialFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics::NewProp_WindingIsoThreshold = { "WindingIsoThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSpatialQueryOptions, WindingIsoThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics::NewProp_WindingIsoThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics::NewProp_WindingIsoThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics::NewProp_MaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics::NewProp_bAllowUnsafeModifiedQueries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics::NewProp_WindingIsoThreshold,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptSpatialQueryOptions",
		sizeof(FGeometryScriptSpatialQueryOptions),
		alignof(FGeometryScriptSpatialQueryOptions),
		Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptSpatialQueryOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptSpatialQueryOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptSpatialQueryOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptRayHitResult;
class UScriptStruct* FGeometryScriptRayHitResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptRayHitResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptRayHitResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptRayHitResult, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptRayHitResult"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptRayHitResult.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptRayHitResult>()
{
	return FGeometryScriptRayHitResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHit_MetaData[];
#endif
		static void NewProp_bHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayParameter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RayParameter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitTriangleID_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_HitTriangleID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitBaryCoords_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitBaryCoords;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Ray Hit Result" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSpatialFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptRayHitResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::NewProp_bHit_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSpatialFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::NewProp_bHit_SetBit(void* Obj)
	{
		((FGeometryScriptRayHitResult*)Obj)->bHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::NewProp_bHit = { "bHit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptRayHitResult), &Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::NewProp_bHit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::NewProp_bHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::NewProp_bHit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::NewProp_RayParameter_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSpatialFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::NewProp_RayParameter = { "RayParameter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptRayHitResult, RayParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::NewProp_RayParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::NewProp_RayParameter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::NewProp_HitTriangleID_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSpatialFunctions.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::NewProp_HitTriangleID = { "HitTriangleID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptRayHitResult, HitTriangleID), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::NewProp_HitTriangleID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::NewProp_HitTriangleID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::NewProp_HitPosition_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSpatialFunctions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::NewProp_HitPosition = { "HitPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptRayHitResult, HitPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::NewProp_HitPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::NewProp_HitPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::NewProp_HitBaryCoords_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSpatialFunctions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::NewProp_HitBaryCoords = { "HitBaryCoords", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptRayHitResult, HitBaryCoords), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::NewProp_HitBaryCoords_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::NewProp_HitBaryCoords_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::NewProp_bHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::NewProp_RayParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::NewProp_HitTriangleID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::NewProp_HitPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::NewProp_HitBaryCoords,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptRayHitResult",
		sizeof(FGeometryScriptRayHitResult),
		alignof(FGeometryScriptRayHitResult),
		Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptRayHitResult()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptRayHitResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptRayHitResult.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptRayHitResult.InnerSingleton;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSpatial::execIsPointInsideMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT_REF(FGeometryScriptDynamicMeshBVH,Z_Param_Out_QueryBVH);
		P_GET_STRUCT(FVector,Z_Param_QueryPoint);
		P_GET_STRUCT(FGeometryScriptSpatialQueryOptions,Z_Param_Options);
		P_GET_UBOOL_REF(Z_Param_Out_bIsInside);
		P_GET_ENUM_REF(EGeometryScriptContainmentOutcomePins,Z_Param_Out_Outcome);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSpatial::IsPointInsideMesh(Z_Param_TargetMesh,Z_Param_Out_QueryBVH,Z_Param_QueryPoint,Z_Param_Options,Z_Param_Out_bIsInside,(EGeometryScriptContainmentOutcomePins&)(Z_Param_Out_Outcome),Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSpatial::execFindNearestRayIntersectionWithMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT_REF(FGeometryScriptDynamicMeshBVH,Z_Param_Out_QueryBVH);
		P_GET_STRUCT(FVector,Z_Param_RayOrigin);
		P_GET_STRUCT(FVector,Z_Param_RayDirection);
		P_GET_STRUCT(FGeometryScriptSpatialQueryOptions,Z_Param_Options);
		P_GET_STRUCT_REF(FGeometryScriptRayHitResult,Z_Param_Out_HitResult);
		P_GET_ENUM_REF(EGeometryScriptSearchOutcomePins,Z_Param_Out_Outcome);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSpatial::FindNearestRayIntersectionWithMesh(Z_Param_TargetMesh,Z_Param_Out_QueryBVH,Z_Param_RayOrigin,Z_Param_RayDirection,Z_Param_Options,Z_Param_Out_HitResult,(EGeometryScriptSearchOutcomePins&)(Z_Param_Out_Outcome),Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSpatial::execFindNearestPointOnMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT_REF(FGeometryScriptDynamicMeshBVH,Z_Param_Out_QueryBVH);
		P_GET_STRUCT(FVector,Z_Param_QueryPoint);
		P_GET_STRUCT(FGeometryScriptSpatialQueryOptions,Z_Param_Options);
		P_GET_STRUCT_REF(FGeometryScriptTrianglePoint,Z_Param_Out_NearestResult);
		P_GET_ENUM_REF(EGeometryScriptSearchOutcomePins,Z_Param_Out_Outcome);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSpatial::FindNearestPointOnMesh(Z_Param_TargetMesh,Z_Param_Out_QueryBVH,Z_Param_QueryPoint,Z_Param_Options,Z_Param_Out_NearestResult,(EGeometryScriptSearchOutcomePins&)(Z_Param_Out_Outcome),Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSpatial::execRebuildBVHForMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT_REF(FGeometryScriptDynamicMeshBVH,Z_Param_Out_UpdateBVH);
		P_GET_UBOOL(Z_Param_bOnlyIfInvalid);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSpatial::RebuildBVHForMesh(Z_Param_TargetMesh,Z_Param_Out_UpdateBVH,Z_Param_bOnlyIfInvalid,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSpatial::execIsBVHValidForMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT_REF(FGeometryScriptDynamicMeshBVH,Z_Param_Out_TestBVH);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValid);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSpatial::IsBVHValidForMesh(Z_Param_TargetMesh,Z_Param_Out_TestBVH,Z_Param_Out_bIsValid,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSpatial::execBuildBVHForMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT_REF(FGeometryScriptDynamicMeshBVH,Z_Param_Out_OutputBVH);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSpatial::BuildBVHForMesh(Z_Param_TargetMesh,Z_Param_Out_OutputBVH,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSpatial::execResetBVH)
	{
		P_GET_STRUCT_REF(FGeometryScriptDynamicMeshBVH,Z_Param_Out_ResetBVH);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_MeshSpatial::ResetBVH(Z_Param_Out_ResetBVH);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_MeshSpatial::StaticRegisterNativesUGeometryScriptLibrary_MeshSpatial()
	{
		UClass* Class = UGeometryScriptLibrary_MeshSpatial::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildBVHForMesh", &UGeometryScriptLibrary_MeshSpatial::execBuildBVHForMesh },
			{ "FindNearestPointOnMesh", &UGeometryScriptLibrary_MeshSpatial::execFindNearestPointOnMesh },
			{ "FindNearestRayIntersectionWithMesh", &UGeometryScriptLibrary_MeshSpatial::execFindNearestRayIntersectionWithMesh },
			{ "IsBVHValidForMesh", &UGeometryScriptLibrary_MeshSpatial::execIsBVHValidForMesh },
			{ "IsPointInsideMesh", &UGeometryScriptLibrary_MeshSpatial::execIsPointInsideMesh },
			{ "RebuildBVHForMesh", &UGeometryScriptLibrary_MeshSpatial::execRebuildBVHForMesh },
			{ "ResetBVH", &UGeometryScriptLibrary_MeshSpatial::execResetBVH },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh_Statics
	{
		struct GeometryScriptLibrary_MeshSpatial_eventBuildBVHForMesh_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptDynamicMeshBVH OutputBVH;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputBVH;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventBuildBVHForMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh_Statics::NewProp_OutputBVH = { "OutputBVH", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventBuildBVHForMesh_Parms, OutputBVH), Z_Construct_UScriptStruct_FGeometryScriptDynamicMeshBVH, METADATA_PARAMS(nullptr, 0) }; // 830645978
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventBuildBVHForMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventBuildBVHForMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh_Statics::NewProp_OutputBVH,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Spatial" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSpatialFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial, nullptr, "BuildBVHForMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh_Statics::GeometryScriptLibrary_MeshSpatial_eventBuildBVHForMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics
	{
		struct GeometryScriptLibrary_MeshSpatial_eventFindNearestPointOnMesh_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptDynamicMeshBVH QueryBVH;
			FVector QueryPoint;
			FGeometryScriptSpatialQueryOptions Options;
			FGeometryScriptTrianglePoint NearestResult;
			EGeometryScriptSearchOutcomePins Outcome;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryBVH_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryBVH;
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryPoint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NearestResult;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Outcome_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Outcome;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventFindNearestPointOnMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics::NewProp_QueryBVH_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics::NewProp_QueryBVH = { "QueryBVH", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventFindNearestPointOnMesh_Parms, QueryBVH), Z_Construct_UScriptStruct_FGeometryScriptDynamicMeshBVH, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics::NewProp_QueryBVH_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics::NewProp_QueryBVH_MetaData)) }; // 830645978
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics::NewProp_QueryPoint = { "QueryPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventFindNearestPointOnMesh_Parms, QueryPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventFindNearestPointOnMesh_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions, METADATA_PARAMS(nullptr, 0) }; // 1056980428
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics::NewProp_NearestResult = { "NearestResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventFindNearestPointOnMesh_Parms, NearestResult), Z_Construct_UScriptStruct_FGeometryScriptTrianglePoint, METADATA_PARAMS(nullptr, 0) }; // 3281470363
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics::NewProp_Outcome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventFindNearestPointOnMesh_Parms, Outcome), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSearchOutcomePins, METADATA_PARAMS(nullptr, 0) }; // 1303551219
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventFindNearestPointOnMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventFindNearestPointOnMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics::NewProp_QueryBVH,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics::NewProp_QueryPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics::NewProp_NearestResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics::NewProp_Outcome_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics::NewProp_Outcome,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Spatial" },
		{ "CPP_Default_Debug", "None" },
		{ "ExpandEnumAsExecs", "Outcome" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSpatialFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial, nullptr, "FindNearestPointOnMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics::GeometryScriptLibrary_MeshSpatial_eventFindNearestPointOnMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics
	{
		struct GeometryScriptLibrary_MeshSpatial_eventFindNearestRayIntersectionWithMesh_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptDynamicMeshBVH QueryBVH;
			FVector RayOrigin;
			FVector RayDirection;
			FGeometryScriptSpatialQueryOptions Options;
			FGeometryScriptRayHitResult HitResult;
			EGeometryScriptSearchOutcomePins Outcome;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryBVH_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryBVH;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RayOrigin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RayDirection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Outcome_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Outcome;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventFindNearestRayIntersectionWithMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::NewProp_QueryBVH_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::NewProp_QueryBVH = { "QueryBVH", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventFindNearestRayIntersectionWithMesh_Parms, QueryBVH), Z_Construct_UScriptStruct_FGeometryScriptDynamicMeshBVH, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::NewProp_QueryBVH_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::NewProp_QueryBVH_MetaData)) }; // 830645978
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::NewProp_RayOrigin = { "RayOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventFindNearestRayIntersectionWithMesh_Parms, RayOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::NewProp_RayDirection = { "RayDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventFindNearestRayIntersectionWithMesh_Parms, RayDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventFindNearestRayIntersectionWithMesh_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions, METADATA_PARAMS(nullptr, 0) }; // 1056980428
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventFindNearestRayIntersectionWithMesh_Parms, HitResult), Z_Construct_UScriptStruct_FGeometryScriptRayHitResult, METADATA_PARAMS(nullptr, 0) }; // 2488489417
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::NewProp_Outcome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventFindNearestRayIntersectionWithMesh_Parms, Outcome), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSearchOutcomePins, METADATA_PARAMS(nullptr, 0) }; // 1303551219
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventFindNearestRayIntersectionWithMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventFindNearestRayIntersectionWithMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::NewProp_QueryBVH,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::NewProp_RayOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::NewProp_RayDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::NewProp_HitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::NewProp_Outcome_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::NewProp_Outcome,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Spatial" },
		{ "CPP_Default_Debug", "None" },
		{ "ExpandEnumAsExecs", "Outcome" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSpatialFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial, nullptr, "FindNearestRayIntersectionWithMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::GeometryScriptLibrary_MeshSpatial_eventFindNearestRayIntersectionWithMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Statics
	{
		struct GeometryScriptLibrary_MeshSpatial_eventIsBVHValidForMesh_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptDynamicMeshBVH TestBVH;
			bool bIsValid;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestBVH_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TestBVH;
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventIsBVHValidForMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Statics::NewProp_TestBVH_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Statics::NewProp_TestBVH = { "TestBVH", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventIsBVHValidForMesh_Parms, TestBVH), Z_Construct_UScriptStruct_FGeometryScriptDynamicMeshBVH, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Statics::NewProp_TestBVH_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Statics::NewProp_TestBVH_MetaData)) }; // 830645978
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshSpatial_eventIsBVHValidForMesh_Parms*)Obj)->bIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshSpatial_eventIsBVHValidForMesh_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventIsBVHValidForMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventIsBVHValidForMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Statics::NewProp_TestBVH,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Statics::NewProp_bIsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Spatial" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSpatialFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial, nullptr, "IsBVHValidForMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Statics::GeometryScriptLibrary_MeshSpatial_eventIsBVHValidForMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics
	{
		struct GeometryScriptLibrary_MeshSpatial_eventIsPointInsideMesh_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptDynamicMeshBVH QueryBVH;
			FVector QueryPoint;
			FGeometryScriptSpatialQueryOptions Options;
			bool bIsInside;
			EGeometryScriptContainmentOutcomePins Outcome;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryBVH_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryBVH;
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryPoint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static void NewProp_bIsInside_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInside;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Outcome_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Outcome;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventIsPointInsideMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::NewProp_QueryBVH_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::NewProp_QueryBVH = { "QueryBVH", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventIsPointInsideMesh_Parms, QueryBVH), Z_Construct_UScriptStruct_FGeometryScriptDynamicMeshBVH, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::NewProp_QueryBVH_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::NewProp_QueryBVH_MetaData)) }; // 830645978
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::NewProp_QueryPoint = { "QueryPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventIsPointInsideMesh_Parms, QueryPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventIsPointInsideMesh_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions, METADATA_PARAMS(nullptr, 0) }; // 1056980428
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::NewProp_bIsInside_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshSpatial_eventIsPointInsideMesh_Parms*)Obj)->bIsInside = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::NewProp_bIsInside = { "bIsInside", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshSpatial_eventIsPointInsideMesh_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::NewProp_bIsInside_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::NewProp_Outcome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventIsPointInsideMesh_Parms, Outcome), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptContainmentOutcomePins, METADATA_PARAMS(nullptr, 0) }; // 2045701573
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventIsPointInsideMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventIsPointInsideMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::NewProp_QueryBVH,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::NewProp_QueryPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::NewProp_bIsInside,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::NewProp_Outcome_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::NewProp_Outcome,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Spatial" },
		{ "CPP_Default_Debug", "None" },
		{ "ExpandEnumAsExecs", "Outcome" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSpatialFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial, nullptr, "IsPointInsideMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::GeometryScriptLibrary_MeshSpatial_eventIsPointInsideMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Statics
	{
		struct GeometryScriptLibrary_MeshSpatial_eventRebuildBVHForMesh_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptDynamicMeshBVH UpdateBVH;
			bool bOnlyIfInvalid;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateBVH;
		static void NewProp_bOnlyIfInvalid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyIfInvalid;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventRebuildBVHForMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Statics::NewProp_UpdateBVH = { "UpdateBVH", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventRebuildBVHForMesh_Parms, UpdateBVH), Z_Construct_UScriptStruct_FGeometryScriptDynamicMeshBVH, METADATA_PARAMS(nullptr, 0) }; // 830645978
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Statics::NewProp_bOnlyIfInvalid_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshSpatial_eventRebuildBVHForMesh_Parms*)Obj)->bOnlyIfInvalid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Statics::NewProp_bOnlyIfInvalid = { "bOnlyIfInvalid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshSpatial_eventRebuildBVHForMesh_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Statics::NewProp_bOnlyIfInvalid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventRebuildBVHForMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventRebuildBVHForMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Statics::NewProp_UpdateBVH,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Statics::NewProp_bOnlyIfInvalid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Spatial" },
		{ "CPP_Default_bOnlyIfInvalid", "true" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSpatialFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial, nullptr, "RebuildBVHForMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Statics::GeometryScriptLibrary_MeshSpatial_eventRebuildBVHForMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_ResetBVH_Statics
	{
		struct GeometryScriptLibrary_MeshSpatial_eventResetBVH_Parms
		{
			FGeometryScriptDynamicMeshBVH ResetBVH;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResetBVH;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_ResetBVH_Statics::NewProp_ResetBVH = { "ResetBVH", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSpatial_eventResetBVH_Parms, ResetBVH), Z_Construct_UScriptStruct_FGeometryScriptDynamicMeshBVH, METADATA_PARAMS(nullptr, 0) }; // 830645978
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_ResetBVH_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_ResetBVH_Statics::NewProp_ResetBVH,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_ResetBVH_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Spatial" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSpatialFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_ResetBVH_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial, nullptr, "ResetBVH", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_ResetBVH_Statics::GeometryScriptLibrary_MeshSpatial_eventResetBVH_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_ResetBVH_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_ResetBVH_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_ResetBVH_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_ResetBVH_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_ResetBVH()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_ResetBVH_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_MeshSpatial);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial_NoRegister()
	{
		return UGeometryScriptLibrary_MeshSpatial::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh, "BuildBVHForMesh" }, // 3934847832
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh, "FindNearestPointOnMesh" }, // 620999131
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh, "FindNearestRayIntersectionWithMesh" }, // 3880287462
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh, "IsBVHValidForMesh" }, // 4081043422
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh, "IsPointInsideMesh" }, // 2411725103
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh, "RebuildBVHForMesh" }, // 1995901443
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSpatial_ResetBVH, "ResetBVH" }, // 2159950357
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/MeshSpatialFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSpatialFunctions.h" },
		{ "ScriptName", "GeometryScript_MeshSpatial" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_MeshSpatial>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial_Statics::ClassParams = {
		&UGeometryScriptLibrary_MeshSpatial::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSpatial.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSpatial.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSpatial.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_MeshSpatial>()
	{
		return UGeometryScriptLibrary_MeshSpatial::StaticClass();
	}
	UGeometryScriptLibrary_MeshSpatial::UGeometryScriptLibrary_MeshSpatial(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_MeshSpatial);
	UGeometryScriptLibrary_MeshSpatial::~UGeometryScriptLibrary_MeshSpatial() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_Statics::ScriptStructInfo[] = {
		{ FGeometryScriptSpatialQueryOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics::NewStructOps, TEXT("GeometryScriptSpatialQueryOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptSpatialQueryOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptSpatialQueryOptions), 1056980428U) },
		{ FGeometryScriptRayHitResult::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics::NewStructOps, TEXT("GeometryScriptRayHitResult"), &Z_Registration_Info_UScriptStruct_GeometryScriptRayHitResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptRayHitResult), 2488489417U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial, UGeometryScriptLibrary_MeshSpatial::StaticClass, TEXT("UGeometryScriptLibrary_MeshSpatial"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSpatial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_MeshSpatial), 3900380773U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_3440588130(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
