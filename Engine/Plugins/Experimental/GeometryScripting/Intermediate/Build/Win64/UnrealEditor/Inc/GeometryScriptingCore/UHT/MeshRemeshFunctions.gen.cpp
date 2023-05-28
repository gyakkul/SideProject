// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/MeshRemeshFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshRemeshFunctions() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_RemeshingFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_RemeshingFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshEdgeConstraintType();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshSmoothingType();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUniformRemeshTargetType();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptUniformRemeshTargetType;
	static UEnum* EGeometryScriptUniformRemeshTargetType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptUniformRemeshTargetType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptUniformRemeshTargetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUniformRemeshTargetType, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptUniformRemeshTargetType"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptUniformRemeshTargetType.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptUniformRemeshTargetType>()
	{
		return EGeometryScriptUniformRemeshTargetType_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUniformRemeshTargetType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUniformRemeshTargetType_Statics::Enumerators[] = {
		{ "EGeometryScriptUniformRemeshTargetType::TriangleCount", (int64)EGeometryScriptUniformRemeshTargetType::TriangleCount },
		{ "EGeometryScriptUniformRemeshTargetType::TargetEdgeLength", (int64)EGeometryScriptUniformRemeshTargetType::TargetEdgeLength },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUniformRemeshTargetType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Goal types for Uniform Remeshing */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRemeshFunctions.h" },
		{ "TargetEdgeLength.Comment", "/** Attempt to Remesh such that all edges have approximately this length */" },
		{ "TargetEdgeLength.Name", "EGeometryScriptUniformRemeshTargetType::TargetEdgeLength" },
		{ "TargetEdgeLength.ToolTip", "Attempt to Remesh such that all edges have approximately this length" },
		{ "ToolTip", "Goal types for Uniform Remeshing" },
		{ "TriangleCount.Comment", "/** Approximate Desired Triangle Count. This is used to compute a Target Edge Length, and is not an explicit target */" },
		{ "TriangleCount.Name", "EGeometryScriptUniformRemeshTargetType::TriangleCount" },
		{ "TriangleCount.ToolTip", "Approximate Desired Triangle Count. This is used to compute a Target Edge Length, and is not an explicit target" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUniformRemeshTargetType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptUniformRemeshTargetType",
		"EGeometryScriptUniformRemeshTargetType",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUniformRemeshTargetType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUniformRemeshTargetType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUniformRemeshTargetType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUniformRemeshTargetType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUniformRemeshTargetType()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptUniformRemeshTargetType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptUniformRemeshTargetType.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUniformRemeshTargetType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptUniformRemeshTargetType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptRemeshEdgeConstraintType;
	static UEnum* EGeometryScriptRemeshEdgeConstraintType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptRemeshEdgeConstraintType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptRemeshEdgeConstraintType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshEdgeConstraintType, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptRemeshEdgeConstraintType"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptRemeshEdgeConstraintType.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptRemeshEdgeConstraintType>()
	{
		return EGeometryScriptRemeshEdgeConstraintType_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshEdgeConstraintType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshEdgeConstraintType_Statics::Enumerators[] = {
		{ "EGeometryScriptRemeshEdgeConstraintType::Fixed", (int64)EGeometryScriptRemeshEdgeConstraintType::Fixed },
		{ "EGeometryScriptRemeshEdgeConstraintType::Refine", (int64)EGeometryScriptRemeshEdgeConstraintType::Refine },
		{ "EGeometryScriptRemeshEdgeConstraintType::Free", (int64)EGeometryScriptRemeshEdgeConstraintType::Free },
		{ "EGeometryScriptRemeshEdgeConstraintType::Ignore", (int64)EGeometryScriptRemeshEdgeConstraintType::Ignore },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshEdgeConstraintType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Types of edge constraints, specified for different mesh attributes */" },
		{ "Fixed.Comment", "/** Constrained edges cannot be flipped, split or collapsed, and vertices will not move */" },
		{ "Fixed.Name", "EGeometryScriptRemeshEdgeConstraintType::Fixed" },
		{ "Fixed.ToolTip", "Constrained edges cannot be flipped, split or collapsed, and vertices will not move" },
		{ "Free.Comment", "/** Constrained edges cannot be flipped, but otherwise are free to move */" },
		{ "Free.Name", "EGeometryScriptRemeshEdgeConstraintType::Free" },
		{ "Free.ToolTip", "Constrained edges cannot be flipped, but otherwise are free to move" },
		{ "Ignore.Comment", "/** Edges are not constrained, ie the Attribute used to derive the Constraints will not be considered */" },
		{ "Ignore.Name", "EGeometryScriptRemeshEdgeConstraintType::Ignore" },
		{ "Ignore.ToolTip", "Edges are not constrained, ie the Attribute used to derive the Constraints will not be considered" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRemeshFunctions.h" },
		{ "Refine.Comment", "/** Constrained edges can be split, but not flipped or collapsed. Vertices will not move. */" },
		{ "Refine.Name", "EGeometryScriptRemeshEdgeConstraintType::Refine" },
		{ "Refine.ToolTip", "Constrained edges can be split, but not flipped or collapsed. Vertices will not move." },
		{ "ToolTip", "Types of edge constraints, specified for different mesh attributes" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshEdgeConstraintType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptRemeshEdgeConstraintType",
		"EGeometryScriptRemeshEdgeConstraintType",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshEdgeConstraintType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshEdgeConstraintType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshEdgeConstraintType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshEdgeConstraintType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshEdgeConstraintType()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptRemeshEdgeConstraintType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptRemeshEdgeConstraintType.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshEdgeConstraintType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptRemeshEdgeConstraintType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptRemeshSmoothingType;
	static UEnum* EGeometryScriptRemeshSmoothingType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptRemeshSmoothingType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptRemeshSmoothingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshSmoothingType, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptRemeshSmoothingType"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptRemeshSmoothingType.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptRemeshSmoothingType>()
	{
		return EGeometryScriptRemeshSmoothingType_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshSmoothingType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshSmoothingType_Statics::Enumerators[] = {
		{ "EGeometryScriptRemeshSmoothingType::Uniform", (int64)EGeometryScriptRemeshSmoothingType::Uniform },
		{ "EGeometryScriptRemeshSmoothingType::UVPreserving", (int64)EGeometryScriptRemeshSmoothingType::UVPreserving },
		{ "EGeometryScriptRemeshSmoothingType::Mixed", (int64)EGeometryScriptRemeshSmoothingType::Mixed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshSmoothingType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** The Vertex Smoothing strategy used in a Remeshing operation */" },
		{ "Mixed.Comment", "/** Similar to UV Preserving, but allows some tangential drift (causing UV distortion) when vertices would otherwise be \"stuck\" */" },
		{ "Mixed.Name", "EGeometryScriptRemeshSmoothingType::Mixed" },
		{ "Mixed.ToolTip", "Similar to UV Preserving, but allows some tangential drift (causing UV distortion) when vertices would otherwise be \"stuck\"" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRemeshFunctions.h" },
		{ "ToolTip", "The Vertex Smoothing strategy used in a Remeshing operation" },
		{ "Uniform.Comment", "/** Vertices move towards their 3D one-ring centroids, UVs are ignored. This produces the most regular mesh possible. */" },
		{ "Uniform.Name", "EGeometryScriptRemeshSmoothingType::Uniform" },
		{ "Uniform.ToolTip", "Vertices move towards their 3D one-ring centroids, UVs are ignored. This produces the most regular mesh possible." },
		{ "UVPreserving.Comment", "/** Vertices move towards the projection of their one-ring centroids onto their normal vectors, preserving UVs  */" },
		{ "UVPreserving.Name", "EGeometryScriptRemeshSmoothingType::UVPreserving" },
		{ "UVPreserving.ToolTip", "Vertices move towards the projection of their one-ring centroids onto their normal vectors, preserving UVs" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshSmoothingType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptRemeshSmoothingType",
		"EGeometryScriptRemeshSmoothingType",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshSmoothingType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshSmoothingType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshSmoothingType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshSmoothingType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshSmoothingType()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptRemeshSmoothingType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptRemeshSmoothingType.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshSmoothingType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptRemeshSmoothingType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptRemeshOptions;
class UScriptStruct* FGeometryScriptRemeshOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptRemeshOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptRemeshOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptRemeshOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptRemeshOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptRemeshOptions>()
{
	return FGeometryScriptRemeshOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDiscardAttributes_MetaData[];
#endif
		static void NewProp_bDiscardAttributes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDiscardAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReprojectToInputMesh_MetaData[];
#endif
		static void NewProp_bReprojectToInputMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReprojectToInputMesh;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SmoothingType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SmoothingType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothingRate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MeshBoundaryConstraint_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshBoundaryConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MeshBoundaryConstraint;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroupBoundaryConstraint_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupBoundaryConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GroupBoundaryConstraint;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialBoundaryConstraint_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialBoundaryConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialBoundaryConstraint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowFlips_MetaData[];
#endif
		static void NewProp_bAllowFlips_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowFlips;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSplits_MetaData[];
#endif
		static void NewProp_bAllowSplits_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSplits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCollapses_MetaData[];
#endif
		static void NewProp_bAllowCollapses_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCollapses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreventNormalFlips_MetaData[];
#endif
		static void NewProp_bPreventNormalFlips_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreventNormalFlips;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreventTinyTriangles_MetaData[];
#endif
		static void NewProp_bPreventTinyTriangles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreventTinyTriangles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFullRemeshPasses_MetaData[];
#endif
		static void NewProp_bUseFullRemeshPasses_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFullRemeshPasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemeshIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RemeshIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCompact_MetaData[];
#endif
		static void NewProp_bAutoCompact_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCompact;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Standard Remeshing Options\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRemeshFunctions.h" },
		{ "ToolTip", "Standard Remeshing Options" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptRemeshOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bDiscardAttributes_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** When enabled, all mesh attributes are discarded, so UV and Normal Seams can be ignored. New per-vertex normals are computed. */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRemeshFunctions.h" },
		{ "ToolTip", "When enabled, all mesh attributes are discarded, so UV and Normal Seams can be ignored. New per-vertex normals are computed." },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bDiscardAttributes_SetBit(void* Obj)
	{
		((FGeometryScriptRemeshOptions*)Obj)->bDiscardAttributes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bDiscardAttributes = { "bDiscardAttributes", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptRemeshOptions), &Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bDiscardAttributes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bDiscardAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bDiscardAttributes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bReprojectToInputMesh_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** When enabled, mesh vertices are projected back onto the input mesh surface during Remeshing, preserving the shape */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRemeshFunctions.h" },
		{ "ToolTip", "When enabled, mesh vertices are projected back onto the input mesh surface during Remeshing, preserving the shape" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bReprojectToInputMesh_SetBit(void* Obj)
	{
		((FGeometryScriptRemeshOptions*)Obj)->bReprojectToInputMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bReprojectToInputMesh = { "bReprojectToInputMesh", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptRemeshOptions), &Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bReprojectToInputMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bReprojectToInputMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bReprojectToInputMesh_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_SmoothingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_SmoothingType_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Type of 3D Mesh Smoothing to apply during Remeshing. Disable by setting SmoothingRate = 0 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRemeshFunctions.h" },
		{ "ToolTip", "Type of 3D Mesh Smoothing to apply during Remeshing. Disable by setting SmoothingRate = 0" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_SmoothingType = { "SmoothingType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptRemeshOptions, SmoothingType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshSmoothingType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_SmoothingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_SmoothingType_MetaData)) }; // 3352524957
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_SmoothingRate_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Smoothing Rate/Speed. Faster Smoothing results in a more regular mesh, but also more potential for undesirable 3D shape change and UV distortion */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRemeshFunctions.h" },
		{ "ToolTip", "Smoothing Rate/Speed. Faster Smoothing results in a more regular mesh, but also more potential for undesirable 3D shape change and UV distortion" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_SmoothingRate = { "SmoothingRate", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptRemeshOptions, SmoothingRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_SmoothingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_SmoothingRate_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_MeshBoundaryConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_MeshBoundaryConstraint_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Constraints on the open mesh boundary/border edges */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRemeshFunctions.h" },
		{ "ToolTip", "Constraints on the open mesh boundary/border edges" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_MeshBoundaryConstraint = { "MeshBoundaryConstraint", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptRemeshOptions, MeshBoundaryConstraint), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshEdgeConstraintType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_MeshBoundaryConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_MeshBoundaryConstraint_MetaData)) }; // 1658964949
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_GroupBoundaryConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_GroupBoundaryConstraint_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Constraints on the mesh boundary/border edges between different PolyGroups of the Mesh */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRemeshFunctions.h" },
		{ "ToolTip", "Constraints on the mesh boundary/border edges between different PolyGroups of the Mesh" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_GroupBoundaryConstraint = { "GroupBoundaryConstraint", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptRemeshOptions, GroupBoundaryConstraint), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshEdgeConstraintType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_GroupBoundaryConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_GroupBoundaryConstraint_MetaData)) }; // 1658964949
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_MaterialBoundaryConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_MaterialBoundaryConstraint_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Constraints on the mesh boundary/border edges between different Material Results of the Mesh */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRemeshFunctions.h" },
		{ "ToolTip", "Constraints on the mesh boundary/border edges between different Material Results of the Mesh" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_MaterialBoundaryConstraint = { "MaterialBoundaryConstraint", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptRemeshOptions, MaterialBoundaryConstraint), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemeshEdgeConstraintType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_MaterialBoundaryConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_MaterialBoundaryConstraint_MetaData)) }; // 1658964949
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bAllowFlips_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Enable/Disable Edge Flips during Remeshing. Disabling flips will significantly reduce the output mesh quality */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRemeshFunctions.h" },
		{ "ToolTip", "Enable/Disable Edge Flips during Remeshing. Disabling flips will significantly reduce the output mesh quality" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bAllowFlips_SetBit(void* Obj)
	{
		((FGeometryScriptRemeshOptions*)Obj)->bAllowFlips = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bAllowFlips = { "bAllowFlips", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptRemeshOptions), &Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bAllowFlips_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bAllowFlips_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bAllowFlips_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bAllowSplits_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Enable/Disable Edge Splits during Remeshing. Disabling Splits will prevent the mesh density from increasing. */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRemeshFunctions.h" },
		{ "ToolTip", "Enable/Disable Edge Splits during Remeshing. Disabling Splits will prevent the mesh density from increasing." },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bAllowSplits_SetBit(void* Obj)
	{
		((FGeometryScriptRemeshOptions*)Obj)->bAllowSplits = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bAllowSplits = { "bAllowSplits", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptRemeshOptions), &Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bAllowSplits_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bAllowSplits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bAllowSplits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bAllowCollapses_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Enable/Disable Edge Collapses during Remeshing. Disabling Collapses will prevent the mesh density from decreasing. */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRemeshFunctions.h" },
		{ "ToolTip", "Enable/Disable Edge Collapses during Remeshing. Disabling Collapses will prevent the mesh density from decreasing." },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bAllowCollapses_SetBit(void* Obj)
	{
		((FGeometryScriptRemeshOptions*)Obj)->bAllowCollapses = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bAllowCollapses = { "bAllowCollapses", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptRemeshOptions), &Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bAllowCollapses_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bAllowCollapses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bAllowCollapses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bPreventNormalFlips_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** When Enabled, Flips and Collapses will be skipped if they would flip any triangle face normals */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRemeshFunctions.h" },
		{ "ToolTip", "When Enabled, Flips and Collapses will be skipped if they would flip any triangle face normals" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bPreventNormalFlips_SetBit(void* Obj)
	{
		((FGeometryScriptRemeshOptions*)Obj)->bPreventNormalFlips = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bPreventNormalFlips = { "bPreventNormalFlips", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptRemeshOptions), &Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bPreventNormalFlips_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bPreventNormalFlips_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bPreventNormalFlips_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bPreventTinyTriangles_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** When Enabled, Flips and Collapses will be skipped if they would create tiny degenerate triangles */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRemeshFunctions.h" },
		{ "ToolTip", "When Enabled, Flips and Collapses will be skipped if they would create tiny degenerate triangles" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bPreventTinyTriangles_SetBit(void* Obj)
	{
		((FGeometryScriptRemeshOptions*)Obj)->bPreventTinyTriangles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bPreventTinyTriangles = { "bPreventTinyTriangles", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptRemeshOptions), &Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bPreventTinyTriangles_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bPreventTinyTriangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bPreventTinyTriangles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bUseFullRemeshPasses_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** By default, remeshing is accelerated by tracking a queue of edges that need to be processed. This is signficantly faster but can produce a lower quality output. Enable this option to use a more expensive strategy that guarantees maximum quality.  */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRemeshFunctions.h" },
		{ "ToolTip", "By default, remeshing is accelerated by tracking a queue of edges that need to be processed. This is signficantly faster but can produce a lower quality output. Enable this option to use a more expensive strategy that guarantees maximum quality." },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bUseFullRemeshPasses_SetBit(void* Obj)
	{
		((FGeometryScriptRemeshOptions*)Obj)->bUseFullRemeshPasses = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bUseFullRemeshPasses = { "bUseFullRemeshPasses", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptRemeshOptions), &Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bUseFullRemeshPasses_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bUseFullRemeshPasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bUseFullRemeshPasses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_RemeshIterations_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum Number of iterations of the Remeshing Strategy to apply to the Mesh. More iterations are generally more expensive (much moreso with bUseFullRemeshPasses = true) */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRemeshFunctions.h" },
		{ "ToolTip", "Maximum Number of iterations of the Remeshing Strategy to apply to the Mesh. More iterations are generally more expensive (much moreso with bUseFullRemeshPasses = true)" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_RemeshIterations = { "RemeshIterations", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptRemeshOptions, RemeshIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_RemeshIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_RemeshIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bAutoCompact_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If enabled, the output mesh is automatically compacted to remove gaps in the index space. This is expensive and can be disabled by advanced users. */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRemeshFunctions.h" },
		{ "ToolTip", "If enabled, the output mesh is automatically compacted to remove gaps in the index space. This is expensive and can be disabled by advanced users." },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bAutoCompact_SetBit(void* Obj)
	{
		((FGeometryScriptRemeshOptions*)Obj)->bAutoCompact = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bAutoCompact = { "bAutoCompact", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptRemeshOptions), &Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bAutoCompact_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bAutoCompact_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bAutoCompact_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bDiscardAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bReprojectToInputMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_SmoothingType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_SmoothingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_SmoothingRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_MeshBoundaryConstraint_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_MeshBoundaryConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_GroupBoundaryConstraint_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_GroupBoundaryConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_MaterialBoundaryConstraint_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_MaterialBoundaryConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bAllowFlips,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bAllowSplits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bAllowCollapses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bPreventNormalFlips,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bPreventTinyTriangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bUseFullRemeshPasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_RemeshIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewProp_bAutoCompact,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptRemeshOptions",
		sizeof(FGeometryScriptRemeshOptions),
		alignof(FGeometryScriptRemeshOptions),
		Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptRemeshOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptRemeshOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptRemeshOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptUniformRemeshOptions;
class UScriptStruct* FGeometryScriptUniformRemeshOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptUniformRemeshOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptUniformRemeshOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptUniformRemeshOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptUniformRemeshOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptUniformRemeshOptions>()
{
	return FGeometryScriptUniformRemeshOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetTriangleCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetTriangleCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetEdgeLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetEdgeLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Uniform Remeshing Options\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRemeshFunctions.h" },
		{ "ToolTip", "Uniform Remeshing Options" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptUniformRemeshOptions>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions_Statics::NewProp_TargetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions_Statics::NewProp_TargetType_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Method used to define target/goal of Uniform Remeshing */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRemeshFunctions.h" },
		{ "ToolTip", "Method used to define target/goal of Uniform Remeshing" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions_Statics::NewProp_TargetType = { "TargetType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptUniformRemeshOptions, TargetType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUniformRemeshTargetType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions_Statics::NewProp_TargetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions_Statics::NewProp_TargetType_MetaData)) }; // 3616907535
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions_Statics::NewProp_TargetTriangleCount_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Approximate Target Triangle Count, combined with mesh surface area to derive a TargetEdgeLength */" },
		{ "EditCondition", "TargetType == EGeometryScriptUniformRemeshTargetType::TriangleCount" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRemeshFunctions.h" },
		{ "ToolTip", "Approximate Target Triangle Count, combined with mesh surface area to derive a TargetEdgeLength" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions_Statics::NewProp_TargetTriangleCount = { "TargetTriangleCount", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptUniformRemeshOptions, TargetTriangleCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions_Statics::NewProp_TargetTriangleCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions_Statics::NewProp_TargetTriangleCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions_Statics::NewProp_TargetEdgeLength_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Explicit Target Edge Length that is desired in the output uniform mesh */" },
		{ "EditCondition", "TargetType == EGeometryScriptUniformRemeshTargetType::TargetEdgeLength" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRemeshFunctions.h" },
		{ "ToolTip", "Explicit Target Edge Length that is desired in the output uniform mesh" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions_Statics::NewProp_TargetEdgeLength = { "TargetEdgeLength", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptUniformRemeshOptions, TargetEdgeLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions_Statics::NewProp_TargetEdgeLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions_Statics::NewProp_TargetEdgeLength_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions_Statics::NewProp_TargetType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions_Statics::NewProp_TargetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions_Statics::NewProp_TargetTriangleCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions_Statics::NewProp_TargetEdgeLength,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptUniformRemeshOptions",
		sizeof(FGeometryScriptUniformRemeshOptions),
		alignof(FGeometryScriptUniformRemeshOptions),
		Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptUniformRemeshOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptUniformRemeshOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptUniformRemeshOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_RemeshingFunctions::execApplyUniformRemesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptRemeshOptions,Z_Param_RemeshOptions);
		P_GET_STRUCT(FGeometryScriptUniformRemeshOptions,Z_Param_UniformOptions);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_RemeshingFunctions::ApplyUniformRemesh(Z_Param_TargetMesh,Z_Param_RemeshOptions,Z_Param_UniformOptions,Z_Param_Debug);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_RemeshingFunctions::StaticRegisterNativesUGeometryScriptLibrary_RemeshingFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_RemeshingFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyUniformRemesh", &UGeometryScriptLibrary_RemeshingFunctions::execApplyUniformRemesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh_Statics
	{
		struct GeometryScriptLibrary_RemeshingFunctions_eventApplyUniformRemesh_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptRemeshOptions RemeshOptions;
			FGeometryScriptUniformRemeshOptions UniformOptions;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemeshOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UniformOptions;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RemeshingFunctions_eventApplyUniformRemesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh_Statics::NewProp_RemeshOptions = { "RemeshOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RemeshingFunctions_eventApplyUniformRemesh_Parms, RemeshOptions), Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions, METADATA_PARAMS(nullptr, 0) }; // 344855715
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh_Statics::NewProp_UniformOptions = { "UniformOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RemeshingFunctions_eventApplyUniformRemesh_Parms, UniformOptions), Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions, METADATA_PARAMS(nullptr, 0) }; // 3692950439
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RemeshingFunctions_eventApplyUniformRemesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_RemeshingFunctions_eventApplyUniformRemesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh_Statics::NewProp_RemeshOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh_Statics::NewProp_UniformOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Simplification" },
		{ "Comment", "/**\n\x09 * Apply Uniform Remeshing to the TargetMesh. \n\x09 * @warning this function can be quite expensive. The results may be non-deterministic, and are expected to change in future versions.\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRemeshFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Apply Uniform Remeshing to the TargetMesh.\n@warning this function can be quite expensive. The results may be non-deterministic, and are expected to change in future versions." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_RemeshingFunctions, nullptr, "ApplyUniformRemesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh_Statics::GeometryScriptLibrary_RemeshingFunctions_eventApplyUniformRemesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_RemeshingFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_RemeshingFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_RemeshingFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_RemeshingFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_RemeshingFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_RemeshingFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh, "ApplyUniformRemesh" }, // 2752863369
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_RemeshingFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/MeshRemeshFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRemeshFunctions.h" },
		{ "ScriptName", "GeometryScript_Remeshing" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_RemeshingFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_RemeshingFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_RemeshingFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_RemeshingFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_RemeshingFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_RemeshingFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_RemeshingFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_RemeshingFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_RemeshingFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_RemeshingFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_RemeshingFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_RemeshingFunctions>()
	{
		return UGeometryScriptLibrary_RemeshingFunctions::StaticClass();
	}
	UGeometryScriptLibrary_RemeshingFunctions::UGeometryScriptLibrary_RemeshingFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_RemeshingFunctions);
	UGeometryScriptLibrary_RemeshingFunctions::~UGeometryScriptLibrary_RemeshingFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_Statics::EnumInfo[] = {
		{ EGeometryScriptUniformRemeshTargetType_StaticEnum, TEXT("EGeometryScriptUniformRemeshTargetType"), &Z_Registration_Info_UEnum_EGeometryScriptUniformRemeshTargetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3616907535U) },
		{ EGeometryScriptRemeshEdgeConstraintType_StaticEnum, TEXT("EGeometryScriptRemeshEdgeConstraintType"), &Z_Registration_Info_UEnum_EGeometryScriptRemeshEdgeConstraintType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1658964949U) },
		{ EGeometryScriptRemeshSmoothingType_StaticEnum, TEXT("EGeometryScriptRemeshSmoothingType"), &Z_Registration_Info_UEnum_EGeometryScriptRemeshSmoothingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3352524957U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_Statics::ScriptStructInfo[] = {
		{ FGeometryScriptRemeshOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics::NewStructOps, TEXT("GeometryScriptRemeshOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptRemeshOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptRemeshOptions), 344855715U) },
		{ FGeometryScriptUniformRemeshOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions_Statics::NewStructOps, TEXT("GeometryScriptUniformRemeshOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptUniformRemeshOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptUniformRemeshOptions), 3692950439U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_RemeshingFunctions, UGeometryScriptLibrary_RemeshingFunctions::StaticClass, TEXT("UGeometryScriptLibrary_RemeshingFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_RemeshingFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_RemeshingFunctions), 2979332924U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_1684646238(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
