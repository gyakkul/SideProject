// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/CollisionFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollisionFunctions() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_CollisionFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_CollisionFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCollisionGenerationMethod();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSweptHullAxis();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptSetSimpleCollisionOptions();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptCollisionGenerationMethod;
	static UEnum* EGeometryScriptCollisionGenerationMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptCollisionGenerationMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptCollisionGenerationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCollisionGenerationMethod, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptCollisionGenerationMethod"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptCollisionGenerationMethod.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptCollisionGenerationMethod>()
	{
		return EGeometryScriptCollisionGenerationMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCollisionGenerationMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCollisionGenerationMethod_Statics::Enumerators[] = {
		{ "EGeometryScriptCollisionGenerationMethod::AlignedBoxes", (int64)EGeometryScriptCollisionGenerationMethod::AlignedBoxes },
		{ "EGeometryScriptCollisionGenerationMethod::OrientedBoxes", (int64)EGeometryScriptCollisionGenerationMethod::OrientedBoxes },
		{ "EGeometryScriptCollisionGenerationMethod::MinimalSpheres", (int64)EGeometryScriptCollisionGenerationMethod::MinimalSpheres },
		{ "EGeometryScriptCollisionGenerationMethod::Capsules", (int64)EGeometryScriptCollisionGenerationMethod::Capsules },
		{ "EGeometryScriptCollisionGenerationMethod::ConvexHulls", (int64)EGeometryScriptCollisionGenerationMethod::ConvexHulls },
		{ "EGeometryScriptCollisionGenerationMethod::SweptHulls", (int64)EGeometryScriptCollisionGenerationMethod::SweptHulls },
		{ "EGeometryScriptCollisionGenerationMethod::MinVolumeShapes", (int64)EGeometryScriptCollisionGenerationMethod::MinVolumeShapes },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCollisionGenerationMethod_Statics::Enum_MetaDataParams[] = {
		{ "AlignedBoxes.Name", "EGeometryScriptCollisionGenerationMethod::AlignedBoxes" },
		{ "BlueprintType", "true" },
		{ "Capsules.Name", "EGeometryScriptCollisionGenerationMethod::Capsules" },
		{ "ConvexHulls.Name", "EGeometryScriptCollisionGenerationMethod::ConvexHulls" },
		{ "MinimalSpheres.Name", "EGeometryScriptCollisionGenerationMethod::MinimalSpheres" },
		{ "MinVolumeShapes.Name", "EGeometryScriptCollisionGenerationMethod::MinVolumeShapes" },
		{ "ModuleRelativePath", "Public/GeometryScript/CollisionFunctions.h" },
		{ "OrientedBoxes.Name", "EGeometryScriptCollisionGenerationMethod::OrientedBoxes" },
		{ "SweptHulls.Name", "EGeometryScriptCollisionGenerationMethod::SweptHulls" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCollisionGenerationMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptCollisionGenerationMethod",
		"EGeometryScriptCollisionGenerationMethod",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCollisionGenerationMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCollisionGenerationMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCollisionGenerationMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCollisionGenerationMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCollisionGenerationMethod()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptCollisionGenerationMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptCollisionGenerationMethod.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCollisionGenerationMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptCollisionGenerationMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptSweptHullAxis;
	static UEnum* EGeometryScriptSweptHullAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptSweptHullAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptSweptHullAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSweptHullAxis, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptSweptHullAxis"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptSweptHullAxis.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptSweptHullAxis>()
	{
		return EGeometryScriptSweptHullAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSweptHullAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSweptHullAxis_Statics::Enumerators[] = {
		{ "EGeometryScriptSweptHullAxis::X", (int64)EGeometryScriptSweptHullAxis::X },
		{ "EGeometryScriptSweptHullAxis::Y", (int64)EGeometryScriptSweptHullAxis::Y },
		{ "EGeometryScriptSweptHullAxis::Z", (int64)EGeometryScriptSweptHullAxis::Z },
		{ "EGeometryScriptSweptHullAxis::SmallestBoxDimension", (int64)EGeometryScriptSweptHullAxis::SmallestBoxDimension },
		{ "EGeometryScriptSweptHullAxis::SmallestVolume", (int64)EGeometryScriptSweptHullAxis::SmallestVolume },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSweptHullAxis_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/CollisionFunctions.h" },
		{ "SmallestBoxDimension.Comment", "/** Use X/Y/Z axis with smallest axis-aligned-bounding-box dimension */" },
		{ "SmallestBoxDimension.Name", "EGeometryScriptSweptHullAxis::SmallestBoxDimension" },
		{ "SmallestBoxDimension.ToolTip", "Use X/Y/Z axis with smallest axis-aligned-bounding-box dimension" },
		{ "SmallestVolume.Comment", "/** Compute projected hull for each of X/Y/Z axes and use the one that has the smallest volume  */" },
		{ "SmallestVolume.Name", "EGeometryScriptSweptHullAxis::SmallestVolume" },
		{ "SmallestVolume.ToolTip", "Compute projected hull for each of X/Y/Z axes and use the one that has the smallest volume" },
		{ "X.Name", "EGeometryScriptSweptHullAxis::X" },
		{ "Y.Name", "EGeometryScriptSweptHullAxis::Y" },
		{ "Z.Name", "EGeometryScriptSweptHullAxis::Z" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSweptHullAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptSweptHullAxis",
		"EGeometryScriptSweptHullAxis",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSweptHullAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSweptHullAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSweptHullAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSweptHullAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSweptHullAxis()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptSweptHullAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptSweptHullAxis.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSweptHullAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptSweptHullAxis.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptCollisionFromMeshOptions;
class UScriptStruct* FGeometryScriptCollisionFromMeshOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptCollisionFromMeshOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptCollisionFromMeshOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptCollisionFromMeshOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptCollisionFromMeshOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptCollisionFromMeshOptions>()
{
	return FGeometryScriptCollisionFromMeshOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEmitTransaction_MetaData[];
#endif
		static void NewProp_bEmitTransaction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmitTransaction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDetectSpheres_MetaData[];
#endif
		static void NewProp_bAutoDetectSpheres_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDetectSpheres;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDetectBoxes_MetaData[];
#endif
		static void NewProp_bAutoDetectBoxes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDetectBoxes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDetectCapsules_MetaData[];
#endif
		static void NewProp_bAutoDetectCapsules_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDetectCapsules;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSimplifyHulls_MetaData[];
#endif
		static void NewProp_bSimplifyHulls_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimplifyHulls;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConvexHullTargetFaceCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ConvexHullTargetFaceCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxConvexHullsPerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxConvexHullsPerMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConvexDecompositionSearchFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConvexDecompositionSearchFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConvexDecompositionErrorTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConvexDecompositionErrorTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConvexDecompositionMinPartThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConvexDecompositionMinPartThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweptHullSimplifyTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SweptHullSimplifyTolerance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SweptHullAxis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweptHullAxis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SweptHullAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveFullyContainedShapes_MetaData[];
#endif
		static void NewProp_bRemoveFullyContainedShapes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveFullyContainedShapes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxShapeCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxShapeCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/CollisionFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptCollisionFromMeshOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bEmitTransaction_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/CollisionFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bEmitTransaction_SetBit(void* Obj)
	{
		((FGeometryScriptCollisionFromMeshOptions*)Obj)->bEmitTransaction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bEmitTransaction = { "bEmitTransaction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptCollisionFromMeshOptions), &Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bEmitTransaction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bEmitTransaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bEmitTransaction_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_Method_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/CollisionFunctions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptCollisionFromMeshOptions, Method), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCollisionGenerationMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_Method_MetaData)) }; // 2248174376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bAutoDetectSpheres_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/CollisionFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bAutoDetectSpheres_SetBit(void* Obj)
	{
		((FGeometryScriptCollisionFromMeshOptions*)Obj)->bAutoDetectSpheres = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bAutoDetectSpheres = { "bAutoDetectSpheres", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptCollisionFromMeshOptions), &Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bAutoDetectSpheres_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bAutoDetectSpheres_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bAutoDetectSpheres_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bAutoDetectBoxes_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/CollisionFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bAutoDetectBoxes_SetBit(void* Obj)
	{
		((FGeometryScriptCollisionFromMeshOptions*)Obj)->bAutoDetectBoxes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bAutoDetectBoxes = { "bAutoDetectBoxes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptCollisionFromMeshOptions), &Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bAutoDetectBoxes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bAutoDetectBoxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bAutoDetectBoxes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bAutoDetectCapsules_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/CollisionFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bAutoDetectCapsules_SetBit(void* Obj)
	{
		((FGeometryScriptCollisionFromMeshOptions*)Obj)->bAutoDetectCapsules = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bAutoDetectCapsules = { "bAutoDetectCapsules", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptCollisionFromMeshOptions), &Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bAutoDetectCapsules_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bAutoDetectCapsules_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bAutoDetectCapsules_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_MinThickness_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/CollisionFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_MinThickness = { "MinThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptCollisionFromMeshOptions, MinThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_MinThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_MinThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bSimplifyHulls_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/CollisionFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bSimplifyHulls_SetBit(void* Obj)
	{
		((FGeometryScriptCollisionFromMeshOptions*)Obj)->bSimplifyHulls = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bSimplifyHulls = { "bSimplifyHulls", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptCollisionFromMeshOptions), &Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bSimplifyHulls_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bSimplifyHulls_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bSimplifyHulls_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_ConvexHullTargetFaceCount_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/CollisionFunctions.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_ConvexHullTargetFaceCount = { "ConvexHullTargetFaceCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptCollisionFromMeshOptions, ConvexHullTargetFaceCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_ConvexHullTargetFaceCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_ConvexHullTargetFaceCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_MaxConvexHullsPerMesh_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/CollisionFunctions.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_MaxConvexHullsPerMesh = { "MaxConvexHullsPerMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptCollisionFromMeshOptions, MaxConvexHullsPerMesh), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_MaxConvexHullsPerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_MaxConvexHullsPerMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_ConvexDecompositionSearchFactor_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/CollisionFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_ConvexDecompositionSearchFactor = { "ConvexDecompositionSearchFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptCollisionFromMeshOptions, ConvexDecompositionSearchFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_ConvexDecompositionSearchFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_ConvexDecompositionSearchFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_ConvexDecompositionErrorTolerance_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/CollisionFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_ConvexDecompositionErrorTolerance = { "ConvexDecompositionErrorTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptCollisionFromMeshOptions, ConvexDecompositionErrorTolerance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_ConvexDecompositionErrorTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_ConvexDecompositionErrorTolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_ConvexDecompositionMinPartThickness_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/CollisionFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_ConvexDecompositionMinPartThickness = { "ConvexDecompositionMinPartThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptCollisionFromMeshOptions, ConvexDecompositionMinPartThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_ConvexDecompositionMinPartThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_ConvexDecompositionMinPartThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_SweptHullSimplifyTolerance_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/CollisionFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_SweptHullSimplifyTolerance = { "SweptHullSimplifyTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptCollisionFromMeshOptions, SweptHullSimplifyTolerance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_SweptHullSimplifyTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_SweptHullSimplifyTolerance_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_SweptHullAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_SweptHullAxis_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/CollisionFunctions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_SweptHullAxis = { "SweptHullAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptCollisionFromMeshOptions, SweptHullAxis), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSweptHullAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_SweptHullAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_SweptHullAxis_MetaData)) }; // 861492358
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bRemoveFullyContainedShapes_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/CollisionFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bRemoveFullyContainedShapes_SetBit(void* Obj)
	{
		((FGeometryScriptCollisionFromMeshOptions*)Obj)->bRemoveFullyContainedShapes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bRemoveFullyContainedShapes = { "bRemoveFullyContainedShapes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptCollisionFromMeshOptions), &Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bRemoveFullyContainedShapes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bRemoveFullyContainedShapes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bRemoveFullyContainedShapes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_MaxShapeCount_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/CollisionFunctions.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_MaxShapeCount = { "MaxShapeCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptCollisionFromMeshOptions, MaxShapeCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_MaxShapeCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_MaxShapeCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bEmitTransaction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bAutoDetectSpheres,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bAutoDetectBoxes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bAutoDetectCapsules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_MinThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bSimplifyHulls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_ConvexHullTargetFaceCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_MaxConvexHullsPerMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_ConvexDecompositionSearchFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_ConvexDecompositionErrorTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_ConvexDecompositionMinPartThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_SweptHullSimplifyTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_SweptHullAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_SweptHullAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_bRemoveFullyContainedShapes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewProp_MaxShapeCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptCollisionFromMeshOptions",
		sizeof(FGeometryScriptCollisionFromMeshOptions),
		alignof(FGeometryScriptCollisionFromMeshOptions),
		Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptCollisionFromMeshOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptCollisionFromMeshOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptCollisionFromMeshOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptSetSimpleCollisionOptions;
class UScriptStruct* FGeometryScriptSetSimpleCollisionOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptSetSimpleCollisionOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptSetSimpleCollisionOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptSetSimpleCollisionOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptSetSimpleCollisionOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptSetSimpleCollisionOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptSetSimpleCollisionOptions>()
{
	return FGeometryScriptSetSimpleCollisionOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptSetSimpleCollisionOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEmitTransaction_MetaData[];
#endif
		static void NewProp_bEmitTransaction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmitTransaction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSetSimpleCollisionOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/CollisionFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptSetSimpleCollisionOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptSetSimpleCollisionOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSetSimpleCollisionOptions_Statics::NewProp_bEmitTransaction_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/CollisionFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptSetSimpleCollisionOptions_Statics::NewProp_bEmitTransaction_SetBit(void* Obj)
	{
		((FGeometryScriptSetSimpleCollisionOptions*)Obj)->bEmitTransaction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSetSimpleCollisionOptions_Statics::NewProp_bEmitTransaction = { "bEmitTransaction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptSetSimpleCollisionOptions), &Z_Construct_UScriptStruct_FGeometryScriptSetSimpleCollisionOptions_Statics::NewProp_bEmitTransaction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSetSimpleCollisionOptions_Statics::NewProp_bEmitTransaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSetSimpleCollisionOptions_Statics::NewProp_bEmitTransaction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptSetSimpleCollisionOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSetSimpleCollisionOptions_Statics::NewProp_bEmitTransaction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptSetSimpleCollisionOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptSetSimpleCollisionOptions",
		sizeof(FGeometryScriptSetSimpleCollisionOptions),
		alignof(FGeometryScriptSetSimpleCollisionOptions),
		Z_Construct_UScriptStruct_FGeometryScriptSetSimpleCollisionOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSetSimpleCollisionOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSetSimpleCollisionOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSetSimpleCollisionOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptSetSimpleCollisionOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptSetSimpleCollisionOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptSetSimpleCollisionOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptSetSimpleCollisionOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptSetSimpleCollisionOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_CollisionFunctions::execResetDynamicMeshCollision)
	{
		P_GET_OBJECT(UDynamicMeshComponent,Z_Param_Component);
		P_GET_UBOOL(Z_Param_bEmitTransaction);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_CollisionFunctions::ResetDynamicMeshCollision(Z_Param_Component,Z_Param_bEmitTransaction,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_CollisionFunctions::execSetDynamicMeshCollisionFromMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_FromDynamicMesh);
		P_GET_OBJECT(UDynamicMeshComponent,Z_Param_ToDynamicMeshComponent);
		P_GET_STRUCT(FGeometryScriptCollisionFromMeshOptions,Z_Param_Options);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_CollisionFunctions::SetDynamicMeshCollisionFromMesh(Z_Param_FromDynamicMesh,Z_Param_ToDynamicMeshComponent,Z_Param_Options,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_CollisionFunctions::execSetStaticMeshCollisionFromComponent)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMeshAsset);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_SourceComponent);
		P_GET_STRUCT(FGeometryScriptSetSimpleCollisionOptions,Z_Param_Options);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_CollisionFunctions::SetStaticMeshCollisionFromComponent(Z_Param_StaticMeshAsset,Z_Param_SourceComponent,Z_Param_Options,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_CollisionFunctions::execSetStaticMeshCollisionFromMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_FromDynamicMesh);
		P_GET_OBJECT(UStaticMesh,Z_Param_ToStaticMeshAsset);
		P_GET_STRUCT(FGeometryScriptCollisionFromMeshOptions,Z_Param_Options);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_CollisionFunctions::SetStaticMeshCollisionFromMesh(Z_Param_FromDynamicMesh,Z_Param_ToStaticMeshAsset,Z_Param_Options,Z_Param_Debug);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_CollisionFunctions::StaticRegisterNativesUGeometryScriptLibrary_CollisionFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_CollisionFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetDynamicMeshCollision", &UGeometryScriptLibrary_CollisionFunctions::execResetDynamicMeshCollision },
			{ "SetDynamicMeshCollisionFromMesh", &UGeometryScriptLibrary_CollisionFunctions::execSetDynamicMeshCollisionFromMesh },
			{ "SetStaticMeshCollisionFromComponent", &UGeometryScriptLibrary_CollisionFunctions::execSetStaticMeshCollisionFromComponent },
			{ "SetStaticMeshCollisionFromMesh", &UGeometryScriptLibrary_CollisionFunctions::execSetStaticMeshCollisionFromMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_ResetDynamicMeshCollision_Statics
	{
		struct GeometryScriptLibrary_CollisionFunctions_eventResetDynamicMeshCollision_Parms
		{
			UDynamicMeshComponent* Component;
			bool bEmitTransaction;
			UGeometryScriptDebug* Debug;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static void NewProp_bEmitTransaction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmitTransaction;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_ResetDynamicMeshCollision_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_ResetDynamicMeshCollision_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CollisionFunctions_eventResetDynamicMeshCollision_Parms, Component), Z_Construct_UClass_UDynamicMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_ResetDynamicMeshCollision_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_ResetDynamicMeshCollision_Statics::NewProp_Component_MetaData)) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_ResetDynamicMeshCollision_Statics::NewProp_bEmitTransaction_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_CollisionFunctions_eventResetDynamicMeshCollision_Parms*)Obj)->bEmitTransaction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_ResetDynamicMeshCollision_Statics::NewProp_bEmitTransaction = { "bEmitTransaction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_CollisionFunctions_eventResetDynamicMeshCollision_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_ResetDynamicMeshCollision_Statics::NewProp_bEmitTransaction_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_ResetDynamicMeshCollision_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CollisionFunctions_eventResetDynamicMeshCollision_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_ResetDynamicMeshCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_ResetDynamicMeshCollision_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_ResetDynamicMeshCollision_Statics::NewProp_bEmitTransaction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_ResetDynamicMeshCollision_Statics::NewProp_Debug,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_ResetDynamicMeshCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Collision" },
		{ "CPP_Default_bEmitTransaction", "false" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/CollisionFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_ResetDynamicMeshCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_CollisionFunctions, nullptr, "ResetDynamicMeshCollision", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_ResetDynamicMeshCollision_Statics::GeometryScriptLibrary_CollisionFunctions_eventResetDynamicMeshCollision_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_ResetDynamicMeshCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_ResetDynamicMeshCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_ResetDynamicMeshCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_ResetDynamicMeshCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_ResetDynamicMeshCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_ResetDynamicMeshCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Statics
	{
		struct GeometryScriptLibrary_CollisionFunctions_eventSetDynamicMeshCollisionFromMesh_Parms
		{
			UDynamicMesh* FromDynamicMesh;
			UDynamicMeshComponent* ToDynamicMeshComponent;
			FGeometryScriptCollisionFromMeshOptions Options;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FromDynamicMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToDynamicMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ToDynamicMeshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Statics::NewProp_FromDynamicMesh = { "FromDynamicMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CollisionFunctions_eventSetDynamicMeshCollisionFromMesh_Parms, FromDynamicMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Statics::NewProp_ToDynamicMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Statics::NewProp_ToDynamicMeshComponent = { "ToDynamicMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CollisionFunctions_eventSetDynamicMeshCollisionFromMesh_Parms, ToDynamicMeshComponent), Z_Construct_UClass_UDynamicMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Statics::NewProp_ToDynamicMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Statics::NewProp_ToDynamicMeshComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CollisionFunctions_eventSetDynamicMeshCollisionFromMesh_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions, METADATA_PARAMS(nullptr, 0) }; // 1379202728
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CollisionFunctions_eventSetDynamicMeshCollisionFromMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Dynamic Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CollisionFunctions_eventSetDynamicMeshCollisionFromMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Statics::NewProp_FromDynamicMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Statics::NewProp_ToDynamicMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Collision" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/CollisionFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_CollisionFunctions, nullptr, "SetDynamicMeshCollisionFromMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Statics::GeometryScriptLibrary_CollisionFunctions_eventSetDynamicMeshCollisionFromMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromComponent_Statics
	{
		struct GeometryScriptLibrary_CollisionFunctions_eventSetStaticMeshCollisionFromComponent_Parms
		{
			UStaticMesh* StaticMeshAsset;
			UPrimitiveComponent* SourceComponent;
			FGeometryScriptSetSimpleCollisionOptions Options;
			UGeometryScriptDebug* Debug;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromComponent_Statics::NewProp_StaticMeshAsset = { "StaticMeshAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CollisionFunctions_eventSetStaticMeshCollisionFromComponent_Parms, StaticMeshAsset), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromComponent_Statics::NewProp_SourceComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromComponent_Statics::NewProp_SourceComponent = { "SourceComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CollisionFunctions_eventSetStaticMeshCollisionFromComponent_Parms, SourceComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromComponent_Statics::NewProp_SourceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromComponent_Statics::NewProp_SourceComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromComponent_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CollisionFunctions_eventSetStaticMeshCollisionFromComponent_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptSetSimpleCollisionOptions, METADATA_PARAMS(nullptr, 0) }; // 1109308791
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromComponent_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CollisionFunctions_eventSetStaticMeshCollisionFromComponent_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromComponent_Statics::NewProp_StaticMeshAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromComponent_Statics::NewProp_SourceComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromComponent_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromComponent_Statics::NewProp_Debug,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Collision" },
		{ "Comment", "/**\n\x09 * Copy the Simple Collision Geometry from the SourceComponent to the StaticMeshAsset\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_Options", "()" },
		{ "ModuleRelativePath", "Public/GeometryScript/CollisionFunctions.h" },
		{ "ToolTip", "Copy the Simple Collision Geometry from the SourceComponent to the StaticMeshAsset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_CollisionFunctions, nullptr, "SetStaticMeshCollisionFromComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromComponent_Statics::GeometryScriptLibrary_CollisionFunctions_eventSetStaticMeshCollisionFromComponent_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromMesh_Statics
	{
		struct GeometryScriptLibrary_CollisionFunctions_eventSetStaticMeshCollisionFromMesh_Parms
		{
			UDynamicMesh* FromDynamicMesh;
			UStaticMesh* ToStaticMeshAsset;
			FGeometryScriptCollisionFromMeshOptions Options;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FromDynamicMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ToStaticMeshAsset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromMesh_Statics::NewProp_FromDynamicMesh = { "FromDynamicMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CollisionFunctions_eventSetStaticMeshCollisionFromMesh_Parms, FromDynamicMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromMesh_Statics::NewProp_ToStaticMeshAsset = { "ToStaticMeshAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CollisionFunctions_eventSetStaticMeshCollisionFromMesh_Parms, ToStaticMeshAsset), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromMesh_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CollisionFunctions_eventSetStaticMeshCollisionFromMesh_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions, METADATA_PARAMS(nullptr, 0) }; // 1379202728
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CollisionFunctions_eventSetStaticMeshCollisionFromMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Dynamic Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_CollisionFunctions_eventSetStaticMeshCollisionFromMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromMesh_Statics::NewProp_FromDynamicMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromMesh_Statics::NewProp_ToStaticMeshAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromMesh_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Collision" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/CollisionFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_CollisionFunctions, nullptr, "SetStaticMeshCollisionFromMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromMesh_Statics::GeometryScriptLibrary_CollisionFunctions_eventSetStaticMeshCollisionFromMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_CollisionFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_CollisionFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_CollisionFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_CollisionFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_CollisionFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_CollisionFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_ResetDynamicMeshCollision, "ResetDynamicMeshCollision" }, // 1897542524
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh, "SetDynamicMeshCollisionFromMesh" }, // 814650543
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromComponent, "SetStaticMeshCollisionFromComponent" }, // 94941303
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromMesh, "SetStaticMeshCollisionFromMesh" }, // 3833177168
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_CollisionFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/CollisionFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/CollisionFunctions.h" },
		{ "ScriptName", "GeometryScript_Collision" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_CollisionFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_CollisionFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_CollisionFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_CollisionFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_CollisionFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_CollisionFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_CollisionFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_CollisionFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_CollisionFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_CollisionFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_CollisionFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_CollisionFunctions>()
	{
		return UGeometryScriptLibrary_CollisionFunctions::StaticClass();
	}
	UGeometryScriptLibrary_CollisionFunctions::UGeometryScriptLibrary_CollisionFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_CollisionFunctions);
	UGeometryScriptLibrary_CollisionFunctions::~UGeometryScriptLibrary_CollisionFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_Statics::EnumInfo[] = {
		{ EGeometryScriptCollisionGenerationMethod_StaticEnum, TEXT("EGeometryScriptCollisionGenerationMethod"), &Z_Registration_Info_UEnum_EGeometryScriptCollisionGenerationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2248174376U) },
		{ EGeometryScriptSweptHullAxis_StaticEnum, TEXT("EGeometryScriptSweptHullAxis"), &Z_Registration_Info_UEnum_EGeometryScriptSweptHullAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 861492358U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_Statics::ScriptStructInfo[] = {
		{ FGeometryScriptCollisionFromMeshOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics::NewStructOps, TEXT("GeometryScriptCollisionFromMeshOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptCollisionFromMeshOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptCollisionFromMeshOptions), 1379202728U) },
		{ FGeometryScriptSetSimpleCollisionOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptSetSimpleCollisionOptions_Statics::NewStructOps, TEXT("GeometryScriptSetSimpleCollisionOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptSetSimpleCollisionOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptSetSimpleCollisionOptions), 1109308791U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_CollisionFunctions, UGeometryScriptLibrary_CollisionFunctions::StaticClass, TEXT("UGeometryScriptLibrary_CollisionFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_CollisionFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_CollisionFunctions), 1108086017U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_70435004(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
