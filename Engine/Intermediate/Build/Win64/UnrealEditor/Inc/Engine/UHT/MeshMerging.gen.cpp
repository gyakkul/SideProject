// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/MaterialMerging.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshMerging() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELandscapeCullingPrecision();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMeshApproximationBaseCappingType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMeshApproximationGroundPlaneClippingPolicy();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMeshApproximationSimplificationPolicy();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMeshApproximationType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMeshApproximationUVGenerationPolicy();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMeshFeatureImportance();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMeshLODSelectionType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMeshMergeType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EOccludedGeometryFilteringPolicy();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EProxyNormalComputationMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EUVOutput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialProxySettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshApproximationSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshInstancingSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshMergingSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshNaniteSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshProxySettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshReductionSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshFeatureImportance;
	static UEnum* EMeshFeatureImportance_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshFeatureImportance.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshFeatureImportance.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMeshFeatureImportance, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMeshFeatureImportance"));
		}
		return Z_Registration_Info_UEnum_EMeshFeatureImportance.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMeshFeatureImportance::Type>()
	{
		return EMeshFeatureImportance_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMeshFeatureImportance_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMeshFeatureImportance_Statics::Enumerators[] = {
		{ "EMeshFeatureImportance::Off", (int64)EMeshFeatureImportance::Off },
		{ "EMeshFeatureImportance::Lowest", (int64)EMeshFeatureImportance::Lowest },
		{ "EMeshFeatureImportance::Low", (int64)EMeshFeatureImportance::Low },
		{ "EMeshFeatureImportance::Normal", (int64)EMeshFeatureImportance::Normal },
		{ "EMeshFeatureImportance::High", (int64)EMeshFeatureImportance::High },
		{ "EMeshFeatureImportance::Highest", (int64)EMeshFeatureImportance::Highest },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMeshFeatureImportance_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** The importance of a mesh feature when automatically generating mesh LODs. */" },
		{ "High.Name", "EMeshFeatureImportance::High" },
		{ "Highest.Name", "EMeshFeatureImportance::Highest" },
		{ "Low.Name", "EMeshFeatureImportance::Low" },
		{ "Lowest.Name", "EMeshFeatureImportance::Lowest" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "Normal.Name", "EMeshFeatureImportance::Normal" },
		{ "Off.Name", "EMeshFeatureImportance::Off" },
		{ "ToolTip", "The importance of a mesh feature when automatically generating mesh LODs." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMeshFeatureImportance_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMeshFeatureImportance",
		"EMeshFeatureImportance::Type",
		Z_Construct_UEnum_Engine_EMeshFeatureImportance_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshFeatureImportance_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMeshFeatureImportance_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshFeatureImportance_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMeshFeatureImportance()
	{
		if (!Z_Registration_Info_UEnum_EMeshFeatureImportance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshFeatureImportance.InnerSingleton, Z_Construct_UEnum_Engine_EMeshFeatureImportance_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshFeatureImportance.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStaticMeshReductionTerimationCriterion;
	static UEnum* EStaticMeshReductionTerimationCriterion_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStaticMeshReductionTerimationCriterion.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStaticMeshReductionTerimationCriterion.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EStaticMeshReductionTerimationCriterion"));
		}
		return Z_Registration_Info_UEnum_EStaticMeshReductionTerimationCriterion.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EStaticMeshReductionTerimationCriterion>()
	{
		return EStaticMeshReductionTerimationCriterion_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion_Statics::Enumerators[] = {
		{ "EStaticMeshReductionTerimationCriterion::Triangles", (int64)EStaticMeshReductionTerimationCriterion::Triangles },
		{ "EStaticMeshReductionTerimationCriterion::Vertices", (int64)EStaticMeshReductionTerimationCriterion::Vertices },
		{ "EStaticMeshReductionTerimationCriterion::Any", (int64)EStaticMeshReductionTerimationCriterion::Any },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion_Statics::Enum_MetaDataParams[] = {
		{ "Any.DisplayName", "First Percent Satisfied" },
		{ "Any.Name", "EStaticMeshReductionTerimationCriterion::Any" },
		{ "Any.ToolTip", "Simplification will continue until either Triangle or Vertex count criteria is met." },
		{ "Comment", "/** Enum specifying the reduction type to use when simplifying static meshes with the engines internal tool */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Enum specifying the reduction type to use when simplifying static meshes with the engines internal tool" },
		{ "Triangles.DisplayName", "Triangles" },
		{ "Triangles.Name", "EStaticMeshReductionTerimationCriterion::Triangles" },
		{ "Triangles.ToolTip", "Triangle percent criterion will be used for simplification." },
		{ "Vertices.DisplayName", "Vertice" },
		{ "Vertices.Name", "EStaticMeshReductionTerimationCriterion::Vertices" },
		{ "Vertices.ToolTip", "Vertice percent criterion will be used for simplification." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EStaticMeshReductionTerimationCriterion",
		"EStaticMeshReductionTerimationCriterion",
		Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion()
	{
		if (!Z_Registration_Info_UEnum_EStaticMeshReductionTerimationCriterion.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStaticMeshReductionTerimationCriterion.InnerSingleton, Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStaticMeshReductionTerimationCriterion.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshReductionSettings;
class UScriptStruct* FMeshReductionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshReductionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshReductionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshReductionSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MeshReductionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MeshReductionSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMeshReductionSettings>()
{
	return FMeshReductionSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeshReductionSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PercentTriangles_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PercentTriangles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumOfTriangles_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxNumOfTriangles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PercentVertices_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PercentVertices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumOfVerts_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxNumOfVerts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDeviation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDeviation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PixelError_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PixelError;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeldingThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeldingThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HardAngleThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HardAngleThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseLODModel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BaseLODModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SilhouetteImportance_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SilhouetteImportance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureImportance_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TextureImportance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadingImportance_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShadingImportance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecalculateNormals_MetaData[];
#endif
		static void NewProp_bRecalculateNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecalculateNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateUniqueLightmapUVs_MetaData[];
#endif
		static void NewProp_bGenerateUniqueLightmapUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateUniqueLightmapUVs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeepSymmetry_MetaData[];
#endif
		static void NewProp_bKeepSymmetry_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepSymmetry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisibilityAided_MetaData[];
#endif
		static void NewProp_bVisibilityAided_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibilityAided;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCullOccluded_MetaData[];
#endif
		static void NewProp_bCullOccluded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCullOccluded;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TerminationCriterion_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TerminationCriterion_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TerminationCriterion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityAggressiveness_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VisibilityAggressiveness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorImportance_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VertexColorImportance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Settings used to reduce a mesh. */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Settings used to reduce a mesh." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshReductionSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PercentTriangles_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** Percentage of triangles to keep. 1.0 = no reduction, 0.0 = no triangles. (Triangles criterion properties) */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Percentage of triangles to keep. 1.0 = no reduction, 0.0 = no triangles. (Triangles criterion properties)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PercentTriangles = { "PercentTriangles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshReductionSettings, PercentTriangles), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PercentTriangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PercentTriangles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_MaxNumOfTriangles_MetaData[] = {
		{ "Category", "ReductionMethod" },
		{ "ClampMin", "2" },
		{ "Comment", "/** The maximum number of triangles to retain when using percentage termination criterion. (Triangles criterion properties) */" },
		{ "DisplayName", "Max Triangle Count" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "The maximum number of triangles to retain when using percentage termination criterion. (Triangles criterion properties)" },
		{ "UIMin", "2" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_MaxNumOfTriangles = { "MaxNumOfTriangles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshReductionSettings, MaxNumOfTriangles), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_MaxNumOfTriangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_MaxNumOfTriangles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PercentVertices_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** Percentage of vertices to keep. 1.0 = no reduction, 0.0 = no vertices. (Vertices criterion properties) */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Percentage of vertices to keep. 1.0 = no reduction, 0.0 = no vertices. (Vertices criterion properties)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PercentVertices = { "PercentVertices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshReductionSettings, PercentVertices), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PercentVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PercentVertices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_MaxNumOfVerts_MetaData[] = {
		{ "Category", "ReductionMethod" },
		{ "ClampMin", "4" },
		{ "Comment", "/** The maximum number of vertices to retain when using percentage termination criterion. (Vertices criterion properties) */" },
		{ "DisplayName", "Max Vertex Count" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "The maximum number of vertices to retain when using percentage termination criterion. (Vertices criterion properties)" },
		{ "UIMin", "4" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_MaxNumOfVerts = { "MaxNumOfVerts", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshReductionSettings, MaxNumOfVerts), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_MaxNumOfVerts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_MaxNumOfVerts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_MaxDeviation_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** The maximum distance in object space by which the reduced mesh may deviate from the original mesh. */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "The maximum distance in object space by which the reduced mesh may deviate from the original mesh." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_MaxDeviation = { "MaxDeviation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshReductionSettings, MaxDeviation), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_MaxDeviation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_MaxDeviation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PixelError_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** The amount of error in pixels allowed for this LOD. */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "The amount of error in pixels allowed for this LOD." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PixelError = { "PixelError", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshReductionSettings, PixelError), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PixelError_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PixelError_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_WeldingThreshold_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** Threshold in object space at which vertices are welded together. */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Threshold in object space at which vertices are welded together." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_WeldingThreshold = { "WeldingThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshReductionSettings, WeldingThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_WeldingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_WeldingThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_HardAngleThreshold_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** Angle at which a hard edge is introduced between faces. */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Angle at which a hard edge is introduced between faces." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_HardAngleThreshold = { "HardAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshReductionSettings, HardAngleThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_HardAngleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_HardAngleThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_BaseLODModel_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_BaseLODModel = { "BaseLODModel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshReductionSettings, BaseLODModel), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_BaseLODModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_BaseLODModel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_SilhouetteImportance_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** Higher values minimize change to border edges. */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Higher values minimize change to border edges." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_SilhouetteImportance = { "SilhouetteImportance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshReductionSettings, SilhouetteImportance), Z_Construct_UEnum_Engine_EMeshFeatureImportance, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_SilhouetteImportance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_SilhouetteImportance_MetaData)) }; // 2700121328
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_TextureImportance_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** Higher values reduce texture stretching. */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Higher values reduce texture stretching." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_TextureImportance = { "TextureImportance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshReductionSettings, TextureImportance), Z_Construct_UEnum_Engine_EMeshFeatureImportance, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_TextureImportance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_TextureImportance_MetaData)) }; // 2700121328
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_ShadingImportance_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** Higher values try to preserve normals better. */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Higher values try to preserve normals better." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_ShadingImportance = { "ShadingImportance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshReductionSettings, ShadingImportance), Z_Construct_UEnum_Engine_EMeshFeatureImportance, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_ShadingImportance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_ShadingImportance_MetaData)) }; // 2700121328
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bRecalculateNormals_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bRecalculateNormals_SetBit(void* Obj)
	{
		((FMeshReductionSettings*)Obj)->bRecalculateNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bRecalculateNormals = { "bRecalculateNormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshReductionSettings), &Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bRecalculateNormals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bRecalculateNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bRecalculateNormals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bGenerateUniqueLightmapUVs_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bGenerateUniqueLightmapUVs_SetBit(void* Obj)
	{
		((FMeshReductionSettings*)Obj)->bGenerateUniqueLightmapUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bGenerateUniqueLightmapUVs = { "bGenerateUniqueLightmapUVs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshReductionSettings), &Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bGenerateUniqueLightmapUVs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bGenerateUniqueLightmapUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bGenerateUniqueLightmapUVs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bKeepSymmetry_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bKeepSymmetry_SetBit(void* Obj)
	{
		((FMeshReductionSettings*)Obj)->bKeepSymmetry = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bKeepSymmetry = { "bKeepSymmetry", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshReductionSettings), &Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bKeepSymmetry_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bKeepSymmetry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bKeepSymmetry_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bVisibilityAided_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bVisibilityAided_SetBit(void* Obj)
	{
		((FMeshReductionSettings*)Obj)->bVisibilityAided = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bVisibilityAided = { "bVisibilityAided", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshReductionSettings), &Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bVisibilityAided_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bVisibilityAided_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bVisibilityAided_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bCullOccluded_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bCullOccluded_SetBit(void* Obj)
	{
		((FMeshReductionSettings*)Obj)->bCullOccluded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bCullOccluded = { "bCullOccluded", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshReductionSettings), &Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bCullOccluded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bCullOccluded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bCullOccluded_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_TerminationCriterion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_TerminationCriterion_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** The method to use when optimizing static mesh LODs */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "The method to use when optimizing static mesh LODs" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_TerminationCriterion = { "TerminationCriterion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshReductionSettings, TerminationCriterion), Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_TerminationCriterion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_TerminationCriterion_MetaData)) }; // 1623269048
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_VisibilityAggressiveness_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** Higher values generates fewer samples*/" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Higher values generates fewer samples" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_VisibilityAggressiveness = { "VisibilityAggressiveness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshReductionSettings, VisibilityAggressiveness), Z_Construct_UEnum_Engine_EMeshFeatureImportance, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_VisibilityAggressiveness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_VisibilityAggressiveness_MetaData)) }; // 2700121328
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_VertexColorImportance_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** Higher values minimize change to vertex color data. */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Higher values minimize change to vertex color data." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_VertexColorImportance = { "VertexColorImportance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshReductionSettings, VertexColorImportance), Z_Construct_UEnum_Engine_EMeshFeatureImportance, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_VertexColorImportance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_VertexColorImportance_MetaData)) }; // 2700121328
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PercentTriangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_MaxNumOfTriangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PercentVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_MaxNumOfVerts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_MaxDeviation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PixelError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_WeldingThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_HardAngleThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_BaseLODModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_SilhouetteImportance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_TextureImportance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_ShadingImportance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bRecalculateNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bGenerateUniqueLightmapUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bKeepSymmetry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bVisibilityAided,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bCullOccluded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_TerminationCriterion_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_TerminationCriterion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_VisibilityAggressiveness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_VertexColorImportance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MeshReductionSettings",
		sizeof(FMeshReductionSettings),
		alignof(FMeshReductionSettings),
		Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshReductionSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_MeshReductionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshReductionSettings.InnerSingleton, Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeshReductionSettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeCullingPrecision;
	static UEnum* ELandscapeCullingPrecision_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeCullingPrecision.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELandscapeCullingPrecision.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELandscapeCullingPrecision, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ELandscapeCullingPrecision"));
		}
		return Z_Registration_Info_UEnum_ELandscapeCullingPrecision.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ELandscapeCullingPrecision::Type>()
	{
		return ELandscapeCullingPrecision_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ELandscapeCullingPrecision_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ELandscapeCullingPrecision_Statics::Enumerators[] = {
		{ "ELandscapeCullingPrecision::High", (int64)ELandscapeCullingPrecision::High },
		{ "ELandscapeCullingPrecision::Medium", (int64)ELandscapeCullingPrecision::Medium },
		{ "ELandscapeCullingPrecision::Low", (int64)ELandscapeCullingPrecision::Low },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ELandscapeCullingPrecision_Statics::Enum_MetaDataParams[] = {
		{ "High.DisplayName", "High memory intensity and computation time" },
		{ "High.Name", "ELandscapeCullingPrecision::High" },
		{ "Low.DisplayName", "Low memory intensity and computation time" },
		{ "Low.Name", "ELandscapeCullingPrecision::Low" },
		{ "Medium.DisplayName", "Medium memory intensity and computation time" },
		{ "Medium.Name", "ELandscapeCullingPrecision::Medium" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ELandscapeCullingPrecision_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ELandscapeCullingPrecision",
		"ELandscapeCullingPrecision::Type",
		Z_Construct_UEnum_Engine_ELandscapeCullingPrecision_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELandscapeCullingPrecision_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ELandscapeCullingPrecision_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELandscapeCullingPrecision_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ELandscapeCullingPrecision()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeCullingPrecision.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeCullingPrecision.InnerSingleton, Z_Construct_UEnum_Engine_ELandscapeCullingPrecision_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELandscapeCullingPrecision.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProxyNormalComputationMethod;
	static UEnum* EProxyNormalComputationMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EProxyNormalComputationMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EProxyNormalComputationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EProxyNormalComputationMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EProxyNormalComputationMethod"));
		}
		return Z_Registration_Info_UEnum_EProxyNormalComputationMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EProxyNormalComputationMethod::Type>()
	{
		return EProxyNormalComputationMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EProxyNormalComputationMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EProxyNormalComputationMethod_Statics::Enumerators[] = {
		{ "EProxyNormalComputationMethod::AngleWeighted", (int64)EProxyNormalComputationMethod::AngleWeighted },
		{ "EProxyNormalComputationMethod::AreaWeighted", (int64)EProxyNormalComputationMethod::AreaWeighted },
		{ "EProxyNormalComputationMethod::EqualWeighted", (int64)EProxyNormalComputationMethod::EqualWeighted },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EProxyNormalComputationMethod_Statics::Enum_MetaDataParams[] = {
		{ "AngleWeighted.DisplayName", "Angle Weighted" },
		{ "AngleWeighted.Name", "EProxyNormalComputationMethod::AngleWeighted" },
		{ "AreaWeighted.DisplayName", "Area  Weighted" },
		{ "AreaWeighted.Name", "EProxyNormalComputationMethod::AreaWeighted" },
		{ "EqualWeighted.DisplayName", "Equal Weighted" },
		{ "EqualWeighted.Name", "EProxyNormalComputationMethod::EqualWeighted" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EProxyNormalComputationMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EProxyNormalComputationMethod",
		"EProxyNormalComputationMethod::Type",
		Z_Construct_UEnum_Engine_EProxyNormalComputationMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EProxyNormalComputationMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EProxyNormalComputationMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EProxyNormalComputationMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EProxyNormalComputationMethod()
	{
		if (!Z_Registration_Info_UEnum_EProxyNormalComputationMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProxyNormalComputationMethod.InnerSingleton, Z_Construct_UEnum_Engine_EProxyNormalComputationMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EProxyNormalComputationMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshProxySettings;
class UScriptStruct* FMeshProxySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshProxySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshProxySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshProxySettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MeshProxySettings"));
	}
	return Z_Registration_Info_UScriptStruct_MeshProxySettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMeshProxySettings>()
{
	return FMeshProxySettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeshProxySettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ScreenSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VoxelSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialSettings;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TextureWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TextureHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportNormalMap_MetaData[];
#endif
		static void NewProp_bExportNormalMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportNormalMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportMetallicMap_MetaData[];
#endif
		static void NewProp_bExportMetallicMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportMetallicMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportRoughnessMap_MetaData[];
#endif
		static void NewProp_bExportRoughnessMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportRoughnessMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportSpecularMap_MetaData[];
#endif
		static void NewProp_bExportSpecularMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportSpecularMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBakeVertexData_MetaData[];
#endif
		static void NewProp_bBakeVertexData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeVertexData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateNaniteEnabledMesh_MetaData[];
#endif
		static void NewProp_bGenerateNaniteEnabledMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateNaniteEnabledMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NaniteProxyTrianglePercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NaniteProxyTrianglePercent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MergeDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MergeDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnresolvedGeometryColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UnresolvedGeometryColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRayCastDist_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRayCastDist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HardAngleThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HardAngleThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightMapResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LightMapResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalCalculationMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NormalCalculationMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeCullingPrecision_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LandscapeCullingPrecision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCalculateCorrectLODModel_MetaData[];
#endif
		static void NewProp_bCalculateCorrectLODModel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCalculateCorrectLODModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideVoxelSize_MetaData[];
#endif
		static void NewProp_bOverrideVoxelSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideVoxelSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideTransferDistance_MetaData[];
#endif
		static void NewProp_bOverrideTransferDistance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideTransferDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseHardAngleThreshold_MetaData[];
#endif
		static void NewProp_bUseHardAngleThreshold_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHardAngleThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bComputeLightMapResolution_MetaData[];
#endif
		static void NewProp_bComputeLightMapResolution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeLightMapResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecalculateNormals_MetaData[];
#endif
		static void NewProp_bRecalculateNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecalculateNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLandscapeCulling_MetaData[];
#endif
		static void NewProp_bUseLandscapeCulling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLandscapeCulling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportRayTracing_MetaData[];
#endif
		static void NewProp_bSupportRayTracing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportRayTracing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowDistanceField_MetaData[];
#endif
		static void NewProp_bAllowDistanceField_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowDistanceField;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReuseMeshLightmapUVs_MetaData[];
#endif
		static void NewProp_bReuseMeshLightmapUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReuseMeshLightmapUVs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGroupIdenticalMeshesForBaking_MetaData[];
#endif
		static void NewProp_bGroupIdenticalMeshesForBaking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroupIdenticalMeshesForBaking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateCollision_MetaData[];
#endif
		static void NewProp_bCreateCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowVertexColors_MetaData[];
#endif
		static void NewProp_bAllowVertexColors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowVertexColors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateLightmapUVs_MetaData[];
#endif
		static void NewProp_bGenerateLightmapUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateLightmapUVs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NaniteSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NaniteSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshProxySettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_ScreenSize_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "ClampMax", "1200" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Screen size of the resulting proxy mesh in pixels*/" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Screen size of the resulting proxy mesh in pixels" },
		{ "UIMax", "1200" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshProxySettings, ScreenSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_ScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_ScreenSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_VoxelSize_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Override when converting multiple meshes for proxy LOD merging. Warning, large geometry with small sampling has very high memory costs*/" },
		{ "DisplayName", "Override Spatial Sampling Distance" },
		{ "EditCondition", "bOverrideVoxelSize" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Override when converting multiple meshes for proxy LOD merging. Warning, large geometry with small sampling has very high memory costs" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshProxySettings, VoxelSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_VoxelSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_VoxelSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MaterialSettings_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "Comment", "/** Material simplification */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Material simplification" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MaterialSettings = { "MaterialSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshProxySettings, MaterialSettings), Z_Construct_UScriptStruct_FMaterialProxySettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MaterialSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MaterialSettings_MetaData)) }; // 3442938596
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_TextureWidth_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_TextureWidth = { "TextureWidth", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshProxySettings, TextureWidth_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_TextureWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_TextureWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_TextureHeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_TextureHeight = { "TextureHeight", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshProxySettings, TextureHeight_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_TextureHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_TextureHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportNormalMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportNormalMap_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bExportNormalMap_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportNormalMap = { "bExportNormalMap", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportNormalMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportNormalMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportNormalMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportMetallicMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportMetallicMap_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bExportMetallicMap_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportMetallicMap = { "bExportMetallicMap", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportMetallicMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportMetallicMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportMetallicMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportRoughnessMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportRoughnessMap_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bExportRoughnessMap_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportRoughnessMap = { "bExportRoughnessMap", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportRoughnessMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportRoughnessMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportRoughnessMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportSpecularMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportSpecularMap_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bExportSpecularMap_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportSpecularMap = { "bExportSpecularMap", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportSpecularMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportSpecularMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportSpecularMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bBakeVertexData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bBakeVertexData_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bBakeVertexData_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bBakeVertexData = { "bBakeVertexData", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bBakeVertexData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bBakeVertexData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bBakeVertexData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGenerateNaniteEnabledMesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGenerateNaniteEnabledMesh_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bGenerateNaniteEnabledMesh_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGenerateNaniteEnabledMesh = { "bGenerateNaniteEnabledMesh", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGenerateNaniteEnabledMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGenerateNaniteEnabledMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGenerateNaniteEnabledMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_NaniteProxyTrianglePercent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_NaniteProxyTrianglePercent = { "NaniteProxyTrianglePercent", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshProxySettings, NaniteProxyTrianglePercent_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_NaniteProxyTrianglePercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_NaniteProxyTrianglePercent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MergeDistance_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "Comment", "/** Distance at which meshes should be merged together, this can close gaps like doors and windows in distant geometry */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Distance at which meshes should be merged together, this can close gaps like doors and windows in distant geometry" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MergeDistance = { "MergeDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshProxySettings, MergeDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MergeDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MergeDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_UnresolvedGeometryColor_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "Comment", "/** Base color assigned to LOD geometry that can't be associated with the source geometry: e.g. doors and windows that have been closed by the Merge Distance */" },
		{ "DisplayName", "Unresolved Geometry Color" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Base color assigned to LOD geometry that can't be associated with the source geometry: e.g. doors and windows that have been closed by the Merge Distance" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_UnresolvedGeometryColor = { "UnresolvedGeometryColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshProxySettings, UnresolvedGeometryColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_UnresolvedGeometryColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_UnresolvedGeometryColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MaxRayCastDist_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Override search distance used when discovering texture values for simplified geometry. Useful when non-zero Merge Distance setting generates new geometry in concave corners.*/" },
		{ "DisplayName", "Transfer Distance Override" },
		{ "EditCondition", "bOverrideTransferDistance" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Override search distance used when discovering texture values for simplified geometry. Useful when non-zero Merge Distance setting generates new geometry in concave corners." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MaxRayCastDist = { "MaxRayCastDist", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshProxySettings, MaxRayCastDist), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MaxRayCastDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MaxRayCastDist_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_HardAngleThreshold_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Angle at which a hard edge is introduced between faces */" },
		{ "DisplayName", "Hard Edge Angle" },
		{ "EditCondition", "bUseHardAngleThreshold" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Angle at which a hard edge is introduced between faces" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_HardAngleThreshold = { "HardAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshProxySettings, HardAngleThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_HardAngleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_HardAngleThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_LightMapResolution_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "ClampMax", "4096" },
		{ "ClampMin", "32" },
		{ "Comment", "/** Lightmap resolution */" },
		{ "DisplayAfter", "NormalCalculationMethod" },
		{ "DisplayName", "Lightmap Resolution" },
		{ "EditCondition", "!bComputeLightMapResolution" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Lightmap resolution" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_LightMapResolution = { "LightMapResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshProxySettings, LightMapResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_LightMapResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_LightMapResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_NormalCalculationMethod_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "Comment", "/** Controls the method used to calculate the normal for the simplified geometry */" },
		{ "DisplayName", "Normal Calculation Method" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Controls the method used to calculate the normal for the simplified geometry" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_NormalCalculationMethod = { "NormalCalculationMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshProxySettings, NormalCalculationMethod), Z_Construct_UEnum_Engine_EProxyNormalComputationMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_NormalCalculationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_NormalCalculationMethod_MetaData)) }; // 2887027114
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_LandscapeCullingPrecision_MetaData[] = {
		{ "Category", "LandscapeCulling" },
		{ "Comment", "/** Level of detail of the landscape that should be used for the culling */" },
		{ "DisplayAfter", "bUseLandscapeCulling" },
		{ "EditCondition", "bUseLandscapeCulling" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Level of detail of the landscape that should be used for the culling" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_LandscapeCullingPrecision = { "LandscapeCullingPrecision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshProxySettings, LandscapeCullingPrecision), Z_Construct_UEnum_Engine_ELandscapeCullingPrecision, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_LandscapeCullingPrecision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_LandscapeCullingPrecision_MetaData)) }; // 486022987
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCalculateCorrectLODModel_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "Comment", "/** Determines whether or not the correct LOD models should be calculated given the source meshes and transition size */" },
		{ "DisplayAfter", "ScreenSize" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Determines whether or not the correct LOD models should be calculated given the source meshes and transition size" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCalculateCorrectLODModel_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bCalculateCorrectLODModel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCalculateCorrectLODModel = { "bCalculateCorrectLODModel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCalculateCorrectLODModel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCalculateCorrectLODModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCalculateCorrectLODModel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideVoxelSize_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "Comment", "/** If true, Spatial Sampling Distance will not be automatically computed based on geometry and you must set it directly */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "If true, Spatial Sampling Distance will not be automatically computed based on geometry and you must set it directly" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideVoxelSize_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bOverrideVoxelSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideVoxelSize = { "bOverrideVoxelSize", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideVoxelSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideVoxelSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideVoxelSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideTransferDistance_MetaData[] = {
		{ "Category", "MaxRayCastDist" },
		{ "Comment", "/** Enable an override for material transfer distance */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Enable an override for material transfer distance" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideTransferDistance_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bOverrideTransferDistance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideTransferDistance = { "bOverrideTransferDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideTransferDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideTransferDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideTransferDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseHardAngleThreshold_MetaData[] = {
		{ "Category", "HardAngleThreshold" },
		{ "Comment", "/** Enable the use of hard angle based vertex splitting */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Enable the use of hard angle based vertex splitting" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseHardAngleThreshold_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bUseHardAngleThreshold = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseHardAngleThreshold = { "bUseHardAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseHardAngleThreshold_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseHardAngleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseHardAngleThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bComputeLightMapResolution_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "Comment", "/** If ticked will compute the lightmap resolution by summing the dimensions for each mesh included for merging */" },
		{ "DisplayName", "Compute Lightmap Resolution" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "If ticked will compute the lightmap resolution by summing the dimensions for each mesh included for merging" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bComputeLightMapResolution_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bComputeLightMapResolution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bComputeLightMapResolution = { "bComputeLightMapResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bComputeLightMapResolution_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bComputeLightMapResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bComputeLightMapResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bRecalculateNormals_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "Comment", "/** Whether Simplygon should recalculate normals, otherwise the normals channel will be sampled from the original mesh */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether Simplygon should recalculate normals, otherwise the normals channel will be sampled from the original mesh" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bRecalculateNormals_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bRecalculateNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bRecalculateNormals = { "bRecalculateNormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bRecalculateNormals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bRecalculateNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bRecalculateNormals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseLandscapeCulling_MetaData[] = {
		{ "Category", "LandscapeCulling" },
		{ "Comment", "/** Whether or not to use available landscape geometry to cull away invisible triangles */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether or not to use available landscape geometry to cull away invisible triangles" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseLandscapeCulling_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bUseLandscapeCulling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseLandscapeCulling = { "bUseLandscapeCulling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseLandscapeCulling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseLandscapeCulling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseLandscapeCulling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bSupportRayTracing_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "Comment", "/** Whether ray tracing will be supported on this mesh. Disable this to save memory if the generated mesh will only be rendered in the distance. */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether ray tracing will be supported on this mesh. Disable this to save memory if the generated mesh will only be rendered in the distance." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bSupportRayTracing_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bSupportRayTracing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bSupportRayTracing = { "bSupportRayTracing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bSupportRayTracing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bSupportRayTracing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bSupportRayTracing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowDistanceField_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "Comment", "/** Whether to allow distance field to be computed for this mesh. Disable this to save memory if the merged mesh will only be rendered in the distance. */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to allow distance field to be computed for this mesh. Disable this to save memory if the merged mesh will only be rendered in the distance." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowDistanceField_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bAllowDistanceField = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowDistanceField = { "bAllowDistanceField", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowDistanceField_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowDistanceField_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowDistanceField_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bReuseMeshLightmapUVs_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "Comment", "/** Whether to attempt to re-use the source mesh's lightmap UVs when baking the material or always generate a new set. */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to attempt to re-use the source mesh's lightmap UVs when baking the material or always generate a new set." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bReuseMeshLightmapUVs_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bReuseMeshLightmapUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bReuseMeshLightmapUVs = { "bReuseMeshLightmapUVs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bReuseMeshLightmapUVs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bReuseMeshLightmapUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bReuseMeshLightmapUVs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGroupIdenticalMeshesForBaking_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "Comment", "/** Bake identical meshes (or mesh instances) only once. Can lead to discrepancies with the source mesh visual, especially for materials that are using world position or per instance data. However, this will result in better quality baked textures & greatly reduce baking time. */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Bake identical meshes (or mesh instances) only once. Can lead to discrepancies with the source mesh visual, especially for materials that are using world position or per instance data. However, this will result in better quality baked textures & greatly reduce baking time." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGroupIdenticalMeshesForBaking_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bGroupIdenticalMeshesForBaking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGroupIdenticalMeshesForBaking = { "bGroupIdenticalMeshesForBaking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGroupIdenticalMeshesForBaking_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGroupIdenticalMeshesForBaking_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGroupIdenticalMeshesForBaking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCreateCollision_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "Comment", "/** Whether to generate collision for the merged mesh */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to generate collision for the merged mesh" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCreateCollision_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bCreateCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCreateCollision = { "bCreateCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCreateCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCreateCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCreateCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowVertexColors_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "Comment", "/** Whether to allow vertex colors saved in the merged mesh */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to allow vertex colors saved in the merged mesh" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowVertexColors_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bAllowVertexColors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowVertexColors = { "bAllowVertexColors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowVertexColors_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowVertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowVertexColors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGenerateLightmapUVs_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "Comment", "/** Whether to generate lightmap uvs for the merged mesh */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to generate lightmap uvs for the merged mesh" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGenerateLightmapUVs_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bGenerateLightmapUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGenerateLightmapUVs = { "bGenerateLightmapUVs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGenerateLightmapUVs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGenerateLightmapUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGenerateLightmapUVs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_NaniteSettings_MetaData[] = {
		{ "Category", "NaniteSettings" },
		{ "Comment", "/** Settings related to building Nanite data. */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Settings related to building Nanite data." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_NaniteSettings = { "NaniteSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshProxySettings, NaniteSettings), Z_Construct_UScriptStruct_FMeshNaniteSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_NaniteSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_NaniteSettings_MetaData)) }; // 2370712239
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshProxySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_ScreenSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_VoxelSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MaterialSettings,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_TextureWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_TextureHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportNormalMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportMetallicMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportRoughnessMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportSpecularMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bBakeVertexData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGenerateNaniteEnabledMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_NaniteProxyTrianglePercent,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MergeDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_UnresolvedGeometryColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MaxRayCastDist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_HardAngleThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_LightMapResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_NormalCalculationMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_LandscapeCullingPrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCalculateCorrectLODModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideVoxelSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideTransferDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseHardAngleThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bComputeLightMapResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bRecalculateNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseLandscapeCulling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bSupportRayTracing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowDistanceField,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bReuseMeshLightmapUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGroupIdenticalMeshesForBaking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCreateCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowVertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGenerateLightmapUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_NaniteSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MeshProxySettings",
		sizeof(FMeshProxySettings),
		alignof(FMeshProxySettings),
		Z_Construct_UScriptStruct_FMeshProxySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshProxySettings()
	{
		if (!Z_Registration_Info_UScriptStruct_MeshProxySettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshProxySettings.InnerSingleton, Z_Construct_UScriptStruct_FMeshProxySettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeshProxySettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshLODSelectionType;
	static UEnum* EMeshLODSelectionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshLODSelectionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshLODSelectionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMeshLODSelectionType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMeshLODSelectionType"));
		}
		return Z_Registration_Info_UEnum_EMeshLODSelectionType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMeshLODSelectionType>()
	{
		return EMeshLODSelectionType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMeshLODSelectionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMeshLODSelectionType_Statics::Enumerators[] = {
		{ "EMeshLODSelectionType::AllLODs", (int64)EMeshLODSelectionType::AllLODs },
		{ "EMeshLODSelectionType::SpecificLOD", (int64)EMeshLODSelectionType::SpecificLOD },
		{ "EMeshLODSelectionType::CalculateLOD", (int64)EMeshLODSelectionType::CalculateLOD },
		{ "EMeshLODSelectionType::LowestDetailLOD", (int64)EMeshLODSelectionType::LowestDetailLOD },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMeshLODSelectionType_Statics::Enum_MetaDataParams[] = {
		{ "AllLODs.Comment", "// Whether or not to export all of the LODs found in the source meshes\n" },
		{ "AllLODs.DisplayName", "Use all LOD levels" },
		{ "AllLODs.Name", "EMeshLODSelectionType::AllLODs" },
		{ "AllLODs.ToolTip", "Whether or not to export all of the LODs found in the source meshes" },
		{ "CalculateLOD.Comment", "// Whether or not to calculate the appropriate LOD model for the given screen size\n" },
		{ "CalculateLOD.DisplayName", "Calculate correct LOD level" },
		{ "CalculateLOD.Name", "EMeshLODSelectionType::CalculateLOD" },
		{ "CalculateLOD.ToolTip", "Whether or not to calculate the appropriate LOD model for the given screen size" },
		{ "LowestDetailLOD.Comment", "// Whether or not to use the lowest-detail LOD\n" },
		{ "LowestDetailLOD.DisplayName", "Always use the lowest-detail LOD (i.e. the highest LOD index)" },
		{ "LowestDetailLOD.Name", "EMeshLODSelectionType::LowestDetailLOD" },
		{ "LowestDetailLOD.ToolTip", "Whether or not to use the lowest-detail LOD" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "SpecificLOD.Comment", "// Whether or not to export all of the LODs found in the source meshes\n" },
		{ "SpecificLOD.DisplayName", "Use specific LOD level" },
		{ "SpecificLOD.Name", "EMeshLODSelectionType::SpecificLOD" },
		{ "SpecificLOD.ToolTip", "Whether or not to export all of the LODs found in the source meshes" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMeshLODSelectionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMeshLODSelectionType",
		"EMeshLODSelectionType",
		Z_Construct_UEnum_Engine_EMeshLODSelectionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshLODSelectionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMeshLODSelectionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshLODSelectionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMeshLODSelectionType()
	{
		if (!Z_Registration_Info_UEnum_EMeshLODSelectionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshLODSelectionType.InnerSingleton, Z_Construct_UEnum_Engine_EMeshLODSelectionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshLODSelectionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshMergeType;
	static UEnum* EMeshMergeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshMergeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshMergeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMeshMergeType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMeshMergeType"));
		}
		return Z_Registration_Info_UEnum_EMeshMergeType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMeshMergeType>()
	{
		return EMeshMergeType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMeshMergeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMeshMergeType_Statics::Enumerators[] = {
		{ "EMeshMergeType::MeshMergeType_Default", (int64)EMeshMergeType::MeshMergeType_Default },
		{ "EMeshMergeType::MeshMergeType_MergeActor", (int64)EMeshMergeType::MeshMergeType_MergeActor },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMeshMergeType_Statics::Enum_MetaDataParams[] = {
		{ "MeshMergeType_Default.Name", "EMeshMergeType::MeshMergeType_Default" },
		{ "MeshMergeType_MergeActor.Name", "EMeshMergeType::MeshMergeType_MergeActor" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMeshMergeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMeshMergeType",
		"EMeshMergeType",
		Z_Construct_UEnum_Engine_EMeshMergeType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshMergeType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMeshMergeType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshMergeType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMeshMergeType()
	{
		if (!Z_Registration_Info_UEnum_EMeshMergeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshMergeType.InnerSingleton, Z_Construct_UEnum_Engine_EMeshMergeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshMergeType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUVOutput;
	static UEnum* EUVOutput_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUVOutput.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUVOutput.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EUVOutput, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EUVOutput"));
		}
		return Z_Registration_Info_UEnum_EUVOutput.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EUVOutput>()
	{
		return EUVOutput_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EUVOutput_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EUVOutput_Statics::Enumerators[] = {
		{ "EUVOutput::DoNotOutputChannel", (int64)EUVOutput::DoNotOutputChannel },
		{ "EUVOutput::OutputChannel", (int64)EUVOutput::OutputChannel },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EUVOutput_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** As UHT doesnt allow arrays of bools, we need this binary enum :( */" },
		{ "DoNotOutputChannel.Name", "EUVOutput::DoNotOutputChannel" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "OutputChannel.Name", "EUVOutput::OutputChannel" },
		{ "ToolTip", "As UHT doesnt allow arrays of bools, we need this binary enum :(" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EUVOutput_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EUVOutput",
		"EUVOutput",
		Z_Construct_UEnum_Engine_EUVOutput_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EUVOutput_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EUVOutput_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EUVOutput_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EUVOutput()
	{
		if (!Z_Registration_Info_UEnum_EUVOutput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUVOutput.InnerSingleton, Z_Construct_UEnum_Engine_EUVOutput_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUVOutput.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshMergingSettings;
class UScriptStruct* FMeshMergingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshMergingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshMergingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshMergingSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MeshMergingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MeshMergingSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMeshMergingSettings>()
{
	return FMeshMergingSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeshMergingSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLightMapResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetLightMapResolution;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutputUVs_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputUVs_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputUVs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GutterSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GutterSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LODSelectionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODSelectionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LODSelectionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecificLOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SpecificLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateLightMapUV_MetaData[];
#endif
		static void NewProp_bGenerateLightMapUV_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateLightMapUV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bComputedLightMapResolution_MetaData[];
#endif
		static void NewProp_bComputedLightMapResolution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputedLightMapResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPivotPointAtZero_MetaData[];
#endif
		static void NewProp_bPivotPointAtZero_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPivotPointAtZero;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMergePhysicsData_MetaData[];
#endif
		static void NewProp_bMergePhysicsData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergePhysicsData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMergeMeshSockets_MetaData[];
#endif
		static void NewProp_bMergeMeshSockets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeMeshSockets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMergeMaterials_MetaData[];
#endif
		static void NewProp_bMergeMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateMergedMaterial_MetaData[];
#endif
		static void NewProp_bCreateMergedMaterial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateMergedMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBakeVertexDataToMesh_MetaData[];
#endif
		static void NewProp_bBakeVertexDataToMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeVertexDataToMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseVertexDataForBakingMaterial_MetaData[];
#endif
		static void NewProp_bUseVertexDataForBakingMaterial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseVertexDataForBakingMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseTextureBinning_MetaData[];
#endif
		static void NewProp_bUseTextureBinning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTextureBinning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReuseMeshLightmapUVs_MetaData[];
#endif
		static void NewProp_bReuseMeshLightmapUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReuseMeshLightmapUVs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMergeEquivalentMaterials_MetaData[];
#endif
		static void NewProp_bMergeEquivalentMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeEquivalentMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLandscapeCulling_MetaData[];
#endif
		static void NewProp_bUseLandscapeCulling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLandscapeCulling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeImposters_MetaData[];
#endif
		static void NewProp_bIncludeImposters_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeImposters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportRayTracing_MetaData[];
#endif
		static void NewProp_bSupportRayTracing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportRayTracing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowDistanceField_MetaData[];
#endif
		static void NewProp_bAllowDistanceField_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowDistanceField;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NaniteSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NaniteSettings;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportVertexColors_MetaData[];
#endif
		static void NewProp_bImportVertexColors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportVertexColors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCalculateCorrectLODModel_MetaData[];
#endif
		static void NewProp_bCalculateCorrectLODModel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCalculateCorrectLODModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportNormalMap_MetaData[];
#endif
		static void NewProp_bExportNormalMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportNormalMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportMetallicMap_MetaData[];
#endif
		static void NewProp_bExportMetallicMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportMetallicMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportRoughnessMap_MetaData[];
#endif
		static void NewProp_bExportRoughnessMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportRoughnessMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportSpecularMap_MetaData[];
#endif
		static void NewProp_bExportSpecularMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportSpecularMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MergedMaterialAtlasResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MergedMaterialAtlasResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExportSpecificLOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExportSpecificLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateNaniteEnabledMesh_MetaData[];
#endif
		static void NewProp_bGenerateNaniteEnabledMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateNaniteEnabledMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NaniteFallbackTrianglePercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NaniteFallbackTrianglePercent;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Mesh merging settings\n*/" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Mesh merging settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshMergingSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_TargetLightMapResolution_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "ClampMax", "4096" },
		{ "Comment", "/** The lightmap resolution used both for generating lightmap UV coordinates, and also set on the generated static mesh */" },
		{ "DisplayAfter", "bGenerateLightMapUV" },
		{ "DisplayName", "Target Lightmap Resolution" },
		{ "EditCondition", "!bComputedLightMapResolution" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "The lightmap resolution used both for generating lightmap UV coordinates, and also set on the generated static mesh" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_TargetLightMapResolution = { "TargetLightMapResolution", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshMergingSettings, TargetLightMapResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_TargetLightMapResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_TargetLightMapResolution_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_OutputUVs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_OutputUVs_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** Whether to output the specified UV channels into the merged mesh (only if the source meshes contain valid UVs for the specified channel) */" },
		{ "DisplayAfter", "bBakeVertexDataToMesh" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to output the specified UV channels into the merged mesh (only if the source meshes contain valid UVs for the specified channel)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_OutputUVs = { "OutputUVs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(OutputUVs, FMeshMergingSettings), nullptr, nullptr, STRUCT_OFFSET(FMeshMergingSettings, OutputUVs), Z_Construct_UEnum_Engine_EUVOutput, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_OutputUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_OutputUVs_MetaData)) }; // 2437317353
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_MaterialSettings_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "Comment", "/** Material simplification */" },
		{ "DisplayAfter", "bMergeMaterials" },
		{ "EditCondition", "bMergeMaterials" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Material simplification" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_MaterialSettings = { "MaterialSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshMergingSettings, MaterialSettings), Z_Construct_UScriptStruct_FMaterialProxySettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_MaterialSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_MaterialSettings_MetaData)) }; // 3442938596
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_GutterSize_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "Comment", "/** The gutter (in texels) to add to each sub-chart for our baked-out material for the top mip level */" },
		{ "DisplayAfter", "MaterialSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "The gutter (in texels) to add to each sub-chart for our baked-out material for the top mip level" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_GutterSize = { "GutterSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshMergingSettings, GutterSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_GutterSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_GutterSize_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_LODSelectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_LODSelectionType_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** Which selection mode should be used when generating the merged static mesh */" },
		{ "DisplayAfter", "bBakeVertexDataToMesh" },
		{ "DisplayName", "LOD Selection Type" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Which selection mode should be used when generating the merged static mesh" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_LODSelectionType = { "LODSelectionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshMergingSettings, LODSelectionType), Z_Construct_UEnum_Engine_EMeshLODSelectionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_LODSelectionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_LODSelectionType_MetaData)) }; // 3719561225
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_SpecificLOD_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "ClampMax", "7" },
		{ "ClampMin", "0" },
		{ "Comment", "/** A given LOD level to export from the source meshes, used if LOD Selection Type is set to SpecificLOD */" },
		{ "DisplayAfter", "LODSelectionType" },
		{ "EditCondition", "LODSelectionType == EMeshLODSelectionType::SpecificLOD" },
		{ "EnumCondition", "1" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "A given LOD level to export from the source meshes, used if LOD Selection Type is set to SpecificLOD" },
		{ "UIMax", "7" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_SpecificLOD = { "SpecificLOD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshMergingSettings, SpecificLOD), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_SpecificLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_SpecificLOD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bGenerateLightMapUV_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** Whether to generate lightmap UVs for a merged mesh*/" },
		{ "DisplayName", "Generate Lightmap UV" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to generate lightmap UVs for a merged mesh" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bGenerateLightMapUV_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bGenerateLightMapUV = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bGenerateLightMapUV = { "bGenerateLightMapUV", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bGenerateLightMapUV_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bGenerateLightMapUV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bGenerateLightMapUV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bComputedLightMapResolution_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** Whether or not the lightmap resolution should be computed by summing the lightmap resolutions for the input Mesh Components */" },
		{ "DisplayName", "Computed Lightmap Resolution" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether or not the lightmap resolution should be computed by summing the lightmap resolutions for the input Mesh Components" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bComputedLightMapResolution_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bComputedLightMapResolution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bComputedLightMapResolution = { "bComputedLightMapResolution", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bComputedLightMapResolution_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bComputedLightMapResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bComputedLightMapResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bPivotPointAtZero_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** Whether merged mesh should have pivot at world origin, or at first merged component otherwise */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether merged mesh should have pivot at world origin, or at first merged component otherwise" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bPivotPointAtZero_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bPivotPointAtZero = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bPivotPointAtZero = { "bPivotPointAtZero", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bPivotPointAtZero_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bPivotPointAtZero_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bPivotPointAtZero_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergePhysicsData_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** Whether to merge physics data (collision primitives)*/" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to merge physics data (collision primitives)" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergePhysicsData_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bMergePhysicsData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergePhysicsData = { "bMergePhysicsData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergePhysicsData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergePhysicsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergePhysicsData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeMeshSockets_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** Whether to merge sockets */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to merge sockets" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeMeshSockets_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bMergeMeshSockets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeMeshSockets = { "bMergeMeshSockets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeMeshSockets_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeMeshSockets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeMeshSockets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeMaterials_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "Comment", "/** Whether to merge source materials into one flat material, ONLY available when LOD Selection Type is set to LowestDetailLOD */" },
		{ "EditCondition", "LODSelectionType == EMeshLODSelectionType::LowestDetailLOD" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to merge source materials into one flat material, ONLY available when LOD Selection Type is set to LowestDetailLOD" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeMaterials_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bMergeMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeMaterials = { "bMergeMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeMaterials_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bCreateMergedMaterial_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "Comment", "/** Create a flat material from all source materials, along with a new set of UVs. This material won't be applied to any section by default. */" },
		{ "EditCondition", "LODSelectionType == EMeshLODSelectionType::LowestDetailLOD" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Create a flat material from all source materials, along with a new set of UVs. This material won't be applied to any section by default." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bCreateMergedMaterial_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bCreateMergedMaterial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bCreateMergedMaterial = { "bCreateMergedMaterial", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bCreateMergedMaterial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bCreateMergedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bCreateMergedMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bBakeVertexDataToMesh_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** Whether or not vertex data such as vertex colours should be baked into the resulting mesh */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether or not vertex data such as vertex colours should be baked into the resulting mesh" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bBakeVertexDataToMesh_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bBakeVertexDataToMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bBakeVertexDataToMesh = { "bBakeVertexDataToMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bBakeVertexDataToMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bBakeVertexDataToMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bBakeVertexDataToMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseVertexDataForBakingMaterial_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "Comment", "/** Whether or not vertex data such as vertex colours should be used when baking out materials */" },
		{ "EditCondition", "bMergeMaterials" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether or not vertex data such as vertex colours should be used when baking out materials" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseVertexDataForBakingMaterial_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bUseVertexDataForBakingMaterial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseVertexDataForBakingMaterial = { "bUseVertexDataForBakingMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseVertexDataForBakingMaterial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseVertexDataForBakingMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseVertexDataForBakingMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseTextureBinning_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "Comment", "/** Whether or not to calculate varying output texture sizes according to their importance in the final atlas texture */" },
		{ "EditCondition", "bMergeMaterials" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether or not to calculate varying output texture sizes according to their importance in the final atlas texture" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseTextureBinning_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bUseTextureBinning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseTextureBinning = { "bUseTextureBinning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseTextureBinning_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseTextureBinning_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseTextureBinning_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bReuseMeshLightmapUVs_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "Comment", "/** Whether to attempt to re-use the source mesh's lightmap UVs when baking the material or always generate a new set. */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to attempt to re-use the source mesh's lightmap UVs when baking the material or always generate a new set." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bReuseMeshLightmapUVs_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bReuseMeshLightmapUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bReuseMeshLightmapUVs = { "bReuseMeshLightmapUVs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bReuseMeshLightmapUVs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bReuseMeshLightmapUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bReuseMeshLightmapUVs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeEquivalentMaterials_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "Comment", "/** Whether to attempt to merge materials that are deemed equivalent. This can cause artifacts in the merged mesh if world position/actor position etc. is used to determine output color. */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to attempt to merge materials that are deemed equivalent. This can cause artifacts in the merged mesh if world position/actor position etc. is used to determine output color." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeEquivalentMaterials_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bMergeEquivalentMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeEquivalentMaterials = { "bMergeEquivalentMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeEquivalentMaterials_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeEquivalentMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeEquivalentMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseLandscapeCulling_MetaData[] = {
		{ "Category", "LandscapeCulling" },
		{ "Comment", "/** Whether or not to use available landscape geometry to cull away invisible triangles */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether or not to use available landscape geometry to cull away invisible triangles" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseLandscapeCulling_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bUseLandscapeCulling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseLandscapeCulling = { "bUseLandscapeCulling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseLandscapeCulling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseLandscapeCulling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseLandscapeCulling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bIncludeImposters_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** Whether or not to include any imposter LODs that are part of the source static meshes */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether or not to include any imposter LODs that are part of the source static meshes" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bIncludeImposters_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bIncludeImposters = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bIncludeImposters = { "bIncludeImposters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bIncludeImposters_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bIncludeImposters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bIncludeImposters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bSupportRayTracing_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** Whether ray tracing will be supported on this mesh. Disable this to save memory if the generated mesh will only be rendered in the distance. */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether ray tracing will be supported on this mesh. Disable this to save memory if the generated mesh will only be rendered in the distance." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bSupportRayTracing_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bSupportRayTracing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bSupportRayTracing = { "bSupportRayTracing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bSupportRayTracing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bSupportRayTracing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bSupportRayTracing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bAllowDistanceField_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** Whether to allow distance field to be computed for this mesh. Disable this to save memory if the merged mesh will only be rendered in the distance. */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to allow distance field to be computed for this mesh. Disable this to save memory if the merged mesh will only be rendered in the distance." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bAllowDistanceField_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bAllowDistanceField = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bAllowDistanceField = { "bAllowDistanceField", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bAllowDistanceField_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bAllowDistanceField_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bAllowDistanceField_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_NaniteSettings_MetaData[] = {
		{ "Category", "NaniteSettings" },
		{ "Comment", "/** Settings related to building Nanite data. */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Settings related to building Nanite data." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_NaniteSettings = { "NaniteSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshMergingSettings, NaniteSettings), Z_Construct_UScriptStruct_FMeshNaniteSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_NaniteSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_NaniteSettings_MetaData)) }; // 2370712239
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bImportVertexColors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bImportVertexColors_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bImportVertexColors_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bImportVertexColors = { "bImportVertexColors", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bImportVertexColors_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bImportVertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bImportVertexColors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bCalculateCorrectLODModel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bCalculateCorrectLODModel_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bCalculateCorrectLODModel_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bCalculateCorrectLODModel = { "bCalculateCorrectLODModel", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bCalculateCorrectLODModel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bCalculateCorrectLODModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bCalculateCorrectLODModel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportNormalMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportNormalMap_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bExportNormalMap_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportNormalMap = { "bExportNormalMap", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportNormalMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportNormalMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportNormalMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportMetallicMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportMetallicMap_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bExportMetallicMap_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportMetallicMap = { "bExportMetallicMap", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportMetallicMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportMetallicMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportMetallicMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportRoughnessMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportRoughnessMap_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bExportRoughnessMap_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportRoughnessMap = { "bExportRoughnessMap", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportRoughnessMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportRoughnessMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportRoughnessMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportSpecularMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportSpecularMap_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bExportSpecularMap_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportSpecularMap = { "bExportSpecularMap", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportSpecularMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportSpecularMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportSpecularMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_MergedMaterialAtlasResolution_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_MergedMaterialAtlasResolution = { "MergedMaterialAtlasResolution", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshMergingSettings, MergedMaterialAtlasResolution_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_MergedMaterialAtlasResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_MergedMaterialAtlasResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_ExportSpecificLOD_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_ExportSpecificLOD = { "ExportSpecificLOD", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshMergingSettings, ExportSpecificLOD_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_ExportSpecificLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_ExportSpecificLOD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bGenerateNaniteEnabledMesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bGenerateNaniteEnabledMesh_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bGenerateNaniteEnabledMesh_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bGenerateNaniteEnabledMesh = { "bGenerateNaniteEnabledMesh", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bGenerateNaniteEnabledMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bGenerateNaniteEnabledMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bGenerateNaniteEnabledMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_NaniteFallbackTrianglePercent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_NaniteFallbackTrianglePercent = { "NaniteFallbackTrianglePercent", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshMergingSettings, NaniteFallbackTrianglePercent_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_NaniteFallbackTrianglePercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_NaniteFallbackTrianglePercent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_TargetLightMapResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_OutputUVs_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_OutputUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_MaterialSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_GutterSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_LODSelectionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_LODSelectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_SpecificLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bGenerateLightMapUV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bComputedLightMapResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bPivotPointAtZero,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergePhysicsData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeMeshSockets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bCreateMergedMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bBakeVertexDataToMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseVertexDataForBakingMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseTextureBinning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bReuseMeshLightmapUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeEquivalentMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseLandscapeCulling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bIncludeImposters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bSupportRayTracing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bAllowDistanceField,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_NaniteSettings,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bImportVertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bCalculateCorrectLODModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportNormalMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportMetallicMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportRoughnessMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportSpecularMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_MergedMaterialAtlasResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_ExportSpecificLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bGenerateNaniteEnabledMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_NaniteFallbackTrianglePercent,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MeshMergingSettings",
		sizeof(FMeshMergingSettings),
		alignof(FMeshMergingSettings),
		Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshMergingSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_MeshMergingSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshMergingSettings.InnerSingleton, Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeshMergingSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshInstancingSettings;
class UScriptStruct* FMeshInstancingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshInstancingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshInstancingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshInstancingSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MeshInstancingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MeshInstancingSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMeshInstancingSettings>()
{
	return FMeshInstancingSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClassToUse_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClassToUse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceReplacementThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceReplacementThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipMeshesWithVertexColors_MetaData[];
#endif
		static void NewProp_bSkipMeshesWithVertexColors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipMeshesWithVertexColors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseHLODVolumes_MetaData[];
#endif
		static void NewProp_bUseHLODVolumes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHLODVolumes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ISMComponentToUse_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ISMComponentToUse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Mesh instance-replacement settings */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Mesh instance-replacement settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshInstancingSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_ActorClassToUse_MetaData[] = {
		{ "Category", "Instancing" },
		{ "Comment", "/** The actor class to attach new instance static mesh components to */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "The actor class to attach new instance static mesh components to" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_ActorClassToUse = { "ActorClassToUse", nullptr, (EPropertyFlags)0x0014000002000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshInstancingSettings, ActorClassToUse), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_ActorClassToUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_ActorClassToUse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_InstanceReplacementThreshold_MetaData[] = {
		{ "Category", "Instancing" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The number of static mesh instances needed before a mesh is replaced with an instanced version */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "The number of static mesh instances needed before a mesh is replaced with an instanced version" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_InstanceReplacementThreshold = { "InstanceReplacementThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshInstancingSettings, InstanceReplacementThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_InstanceReplacementThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_InstanceReplacementThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bSkipMeshesWithVertexColors_MetaData[] = {
		{ "Category", "Instancing" },
		{ "Comment", "/**\n\x09 * Whether to skip the conversion to an instanced static mesh for meshes with vertex colors.\n\x09 * Instanced static meshes do not support vertex colors per-instance, so conversion will lose\n\x09 * this data.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to skip the conversion to an instanced static mesh for meshes with vertex colors.\nInstanced static meshes do not support vertex colors per-instance, so conversion will lose\nthis data." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bSkipMeshesWithVertexColors_SetBit(void* Obj)
	{
		((FMeshInstancingSettings*)Obj)->bSkipMeshesWithVertexColors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bSkipMeshesWithVertexColors = { "bSkipMeshesWithVertexColors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMeshInstancingSettings), &Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bSkipMeshesWithVertexColors_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bSkipMeshesWithVertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bSkipMeshesWithVertexColors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bUseHLODVolumes_MetaData[] = {
		{ "Category", "Instancing" },
		{ "Comment", "/**\n\x09 * Whether split up instanced static mesh components based on their intersection with HLOD volumes\n\x09 */" },
		{ "DisplayName", "Use HLOD Volumes" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether split up instanced static mesh components based on their intersection with HLOD volumes" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bUseHLODVolumes_SetBit(void* Obj)
	{
		((FMeshInstancingSettings*)Obj)->bUseHLODVolumes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bUseHLODVolumes = { "bUseHLODVolumes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMeshInstancingSettings), &Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bUseHLODVolumes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bUseHLODVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bUseHLODVolumes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_ISMComponentToUse_MetaData[] = {
		{ "Category", "Instancing" },
		{ "Comment", "/**\n\x09 * Whether to use the Instanced Static Mesh Compoment or the Hierarchical Instanced Static Mesh Compoment\n\x09 */" },
		{ "DisallowedClasses", "/Script/Foliage.FoliageInstancedStaticMeshComponent" },
		{ "DisplayName", "Select the type of Instanced Component" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to use the Instanced Static Mesh Compoment or the Hierarchical Instanced Static Mesh Compoment" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_ISMComponentToUse = { "ISMComponentToUse", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshInstancingSettings, ISMComponentToUse), Z_Construct_UClass_UClass, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_ISMComponentToUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_ISMComponentToUse_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_ActorClassToUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_InstanceReplacementThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bSkipMeshesWithVertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bUseHLODVolumes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_ISMComponentToUse,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MeshInstancingSettings",
		sizeof(FMeshInstancingSettings),
		alignof(FMeshInstancingSettings),
		Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshInstancingSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_MeshInstancingSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshInstancingSettings.InnerSingleton, Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeshInstancingSettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshApproximationType;
	static UEnum* EMeshApproximationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshApproximationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshApproximationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMeshApproximationType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMeshApproximationType"));
		}
		return Z_Registration_Info_UEnum_EMeshApproximationType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMeshApproximationType>()
	{
		return EMeshApproximationType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMeshApproximationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMeshApproximationType_Statics::Enumerators[] = {
		{ "EMeshApproximationType::MeshAndMaterials", (int64)EMeshApproximationType::MeshAndMaterials },
		{ "EMeshApproximationType::MeshShapeOnly", (int64)EMeshApproximationType::MeshShapeOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMeshApproximationType_Statics::Enum_MetaDataParams[] = {
		{ "MeshAndMaterials.Name", "EMeshApproximationType::MeshAndMaterials" },
		{ "MeshShapeOnly.Name", "EMeshApproximationType::MeshShapeOnly" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMeshApproximationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMeshApproximationType",
		"EMeshApproximationType",
		Z_Construct_UEnum_Engine_EMeshApproximationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshApproximationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMeshApproximationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshApproximationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMeshApproximationType()
	{
		if (!Z_Registration_Info_UEnum_EMeshApproximationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshApproximationType.InnerSingleton, Z_Construct_UEnum_Engine_EMeshApproximationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshApproximationType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshApproximationBaseCappingType;
	static UEnum* EMeshApproximationBaseCappingType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshApproximationBaseCappingType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshApproximationBaseCappingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMeshApproximationBaseCappingType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMeshApproximationBaseCappingType"));
		}
		return Z_Registration_Info_UEnum_EMeshApproximationBaseCappingType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMeshApproximationBaseCappingType>()
	{
		return EMeshApproximationBaseCappingType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMeshApproximationBaseCappingType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMeshApproximationBaseCappingType_Statics::Enumerators[] = {
		{ "EMeshApproximationBaseCappingType::NoBaseCapping", (int64)EMeshApproximationBaseCappingType::NoBaseCapping },
		{ "EMeshApproximationBaseCappingType::ConvexPolygon", (int64)EMeshApproximationBaseCappingType::ConvexPolygon },
		{ "EMeshApproximationBaseCappingType::ConvexSolid", (int64)EMeshApproximationBaseCappingType::ConvexSolid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMeshApproximationBaseCappingType_Statics::Enum_MetaDataParams[] = {
		{ "ConvexPolygon.Name", "EMeshApproximationBaseCappingType::ConvexPolygon" },
		{ "ConvexSolid.Name", "EMeshApproximationBaseCappingType::ConvexSolid" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "NoBaseCapping.Name", "EMeshApproximationBaseCappingType::NoBaseCapping" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMeshApproximationBaseCappingType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMeshApproximationBaseCappingType",
		"EMeshApproximationBaseCappingType",
		Z_Construct_UEnum_Engine_EMeshApproximationBaseCappingType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshApproximationBaseCappingType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMeshApproximationBaseCappingType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshApproximationBaseCappingType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMeshApproximationBaseCappingType()
	{
		if (!Z_Registration_Info_UEnum_EMeshApproximationBaseCappingType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshApproximationBaseCappingType.InnerSingleton, Z_Construct_UEnum_Engine_EMeshApproximationBaseCappingType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshApproximationBaseCappingType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOccludedGeometryFilteringPolicy;
	static UEnum* EOccludedGeometryFilteringPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOccludedGeometryFilteringPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOccludedGeometryFilteringPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EOccludedGeometryFilteringPolicy, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EOccludedGeometryFilteringPolicy"));
		}
		return Z_Registration_Info_UEnum_EOccludedGeometryFilteringPolicy.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EOccludedGeometryFilteringPolicy>()
	{
		return EOccludedGeometryFilteringPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EOccludedGeometryFilteringPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EOccludedGeometryFilteringPolicy_Statics::Enumerators[] = {
		{ "EOccludedGeometryFilteringPolicy::NoOcclusionFiltering", (int64)EOccludedGeometryFilteringPolicy::NoOcclusionFiltering },
		{ "EOccludedGeometryFilteringPolicy::VisibilityBasedFiltering", (int64)EOccludedGeometryFilteringPolicy::VisibilityBasedFiltering },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EOccludedGeometryFilteringPolicy_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "NoOcclusionFiltering.Name", "EOccludedGeometryFilteringPolicy::NoOcclusionFiltering" },
		{ "VisibilityBasedFiltering.Name", "EOccludedGeometryFilteringPolicy::VisibilityBasedFiltering" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EOccludedGeometryFilteringPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EOccludedGeometryFilteringPolicy",
		"EOccludedGeometryFilteringPolicy",
		Z_Construct_UEnum_Engine_EOccludedGeometryFilteringPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EOccludedGeometryFilteringPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EOccludedGeometryFilteringPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EOccludedGeometryFilteringPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EOccludedGeometryFilteringPolicy()
	{
		if (!Z_Registration_Info_UEnum_EOccludedGeometryFilteringPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOccludedGeometryFilteringPolicy.InnerSingleton, Z_Construct_UEnum_Engine_EOccludedGeometryFilteringPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOccludedGeometryFilteringPolicy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshApproximationSimplificationPolicy;
	static UEnum* EMeshApproximationSimplificationPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshApproximationSimplificationPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshApproximationSimplificationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMeshApproximationSimplificationPolicy, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMeshApproximationSimplificationPolicy"));
		}
		return Z_Registration_Info_UEnum_EMeshApproximationSimplificationPolicy.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMeshApproximationSimplificationPolicy>()
	{
		return EMeshApproximationSimplificationPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMeshApproximationSimplificationPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMeshApproximationSimplificationPolicy_Statics::Enumerators[] = {
		{ "EMeshApproximationSimplificationPolicy::FixedTriangleCount", (int64)EMeshApproximationSimplificationPolicy::FixedTriangleCount },
		{ "EMeshApproximationSimplificationPolicy::TrianglesPerArea", (int64)EMeshApproximationSimplificationPolicy::TrianglesPerArea },
		{ "EMeshApproximationSimplificationPolicy::GeometricTolerance", (int64)EMeshApproximationSimplificationPolicy::GeometricTolerance },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMeshApproximationSimplificationPolicy_Statics::Enum_MetaDataParams[] = {
		{ "FixedTriangleCount.Name", "EMeshApproximationSimplificationPolicy::FixedTriangleCount" },
		{ "GeometricTolerance.Name", "EMeshApproximationSimplificationPolicy::GeometricTolerance" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "TrianglesPerArea.Name", "EMeshApproximationSimplificationPolicy::TrianglesPerArea" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMeshApproximationSimplificationPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMeshApproximationSimplificationPolicy",
		"EMeshApproximationSimplificationPolicy",
		Z_Construct_UEnum_Engine_EMeshApproximationSimplificationPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshApproximationSimplificationPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMeshApproximationSimplificationPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshApproximationSimplificationPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMeshApproximationSimplificationPolicy()
	{
		if (!Z_Registration_Info_UEnum_EMeshApproximationSimplificationPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshApproximationSimplificationPolicy.InnerSingleton, Z_Construct_UEnum_Engine_EMeshApproximationSimplificationPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshApproximationSimplificationPolicy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshApproximationGroundPlaneClippingPolicy;
	static UEnum* EMeshApproximationGroundPlaneClippingPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshApproximationGroundPlaneClippingPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshApproximationGroundPlaneClippingPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMeshApproximationGroundPlaneClippingPolicy, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMeshApproximationGroundPlaneClippingPolicy"));
		}
		return Z_Registration_Info_UEnum_EMeshApproximationGroundPlaneClippingPolicy.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMeshApproximationGroundPlaneClippingPolicy>()
	{
		return EMeshApproximationGroundPlaneClippingPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMeshApproximationGroundPlaneClippingPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMeshApproximationGroundPlaneClippingPolicy_Statics::Enumerators[] = {
		{ "EMeshApproximationGroundPlaneClippingPolicy::NoGroundClipping", (int64)EMeshApproximationGroundPlaneClippingPolicy::NoGroundClipping },
		{ "EMeshApproximationGroundPlaneClippingPolicy::DiscardWithZPlane", (int64)EMeshApproximationGroundPlaneClippingPolicy::DiscardWithZPlane },
		{ "EMeshApproximationGroundPlaneClippingPolicy::CutWithZPlane", (int64)EMeshApproximationGroundPlaneClippingPolicy::CutWithZPlane },
		{ "EMeshApproximationGroundPlaneClippingPolicy::CutAndFillWithZPlane", (int64)EMeshApproximationGroundPlaneClippingPolicy::CutAndFillWithZPlane },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMeshApproximationGroundPlaneClippingPolicy_Statics::Enum_MetaDataParams[] = {
		{ "CutAndFillWithZPlane.Name", "EMeshApproximationGroundPlaneClippingPolicy::CutAndFillWithZPlane" },
		{ "CutWithZPlane.Name", "EMeshApproximationGroundPlaneClippingPolicy::CutWithZPlane" },
		{ "DiscardWithZPlane.Name", "EMeshApproximationGroundPlaneClippingPolicy::DiscardWithZPlane" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "NoGroundClipping.Name", "EMeshApproximationGroundPlaneClippingPolicy::NoGroundClipping" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMeshApproximationGroundPlaneClippingPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMeshApproximationGroundPlaneClippingPolicy",
		"EMeshApproximationGroundPlaneClippingPolicy",
		Z_Construct_UEnum_Engine_EMeshApproximationGroundPlaneClippingPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshApproximationGroundPlaneClippingPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMeshApproximationGroundPlaneClippingPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshApproximationGroundPlaneClippingPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMeshApproximationGroundPlaneClippingPolicy()
	{
		if (!Z_Registration_Info_UEnum_EMeshApproximationGroundPlaneClippingPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshApproximationGroundPlaneClippingPolicy.InnerSingleton, Z_Construct_UEnum_Engine_EMeshApproximationGroundPlaneClippingPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshApproximationGroundPlaneClippingPolicy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshApproximationUVGenerationPolicy;
	static UEnum* EMeshApproximationUVGenerationPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshApproximationUVGenerationPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshApproximationUVGenerationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMeshApproximationUVGenerationPolicy, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMeshApproximationUVGenerationPolicy"));
		}
		return Z_Registration_Info_UEnum_EMeshApproximationUVGenerationPolicy.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMeshApproximationUVGenerationPolicy>()
	{
		return EMeshApproximationUVGenerationPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMeshApproximationUVGenerationPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMeshApproximationUVGenerationPolicy_Statics::Enumerators[] = {
		{ "EMeshApproximationUVGenerationPolicy::PreferUVAtlas", (int64)EMeshApproximationUVGenerationPolicy::PreferUVAtlas },
		{ "EMeshApproximationUVGenerationPolicy::PreferXAtlas", (int64)EMeshApproximationUVGenerationPolicy::PreferXAtlas },
		{ "EMeshApproximationUVGenerationPolicy::PreferPatchBuilder", (int64)EMeshApproximationUVGenerationPolicy::PreferPatchBuilder },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMeshApproximationUVGenerationPolicy_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "PreferPatchBuilder.Name", "EMeshApproximationUVGenerationPolicy::PreferPatchBuilder" },
		{ "PreferUVAtlas.Name", "EMeshApproximationUVGenerationPolicy::PreferUVAtlas" },
		{ "PreferXAtlas.Name", "EMeshApproximationUVGenerationPolicy::PreferXAtlas" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMeshApproximationUVGenerationPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMeshApproximationUVGenerationPolicy",
		"EMeshApproximationUVGenerationPolicy",
		Z_Construct_UEnum_Engine_EMeshApproximationUVGenerationPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshApproximationUVGenerationPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMeshApproximationUVGenerationPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshApproximationUVGenerationPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMeshApproximationUVGenerationPolicy()
	{
		if (!Z_Registration_Info_UEnum_EMeshApproximationUVGenerationPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshApproximationUVGenerationPolicy.InnerSingleton, Z_Construct_UEnum_Engine_EMeshApproximationUVGenerationPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshApproximationUVGenerationPolicy.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshApproximationSettings;
class UScriptStruct* FMeshApproximationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshApproximationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshApproximationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshApproximationSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MeshApproximationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MeshApproximationSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMeshApproximationSettings>()
{
	return FMeshApproximationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutputType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApproximationAccuracy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ApproximationAccuracy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClampVoxelDimension_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClampVoxelDimension;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAttemptAutoThickening_MetaData[];
#endif
		static void NewProp_bAttemptAutoThickening_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttemptAutoThickening;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMinThicknessMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetMinThicknessMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTinyParts_MetaData[];
#endif
		static void NewProp_bIgnoreTinyParts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTinyParts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TinyPartSizeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TinyPartSizeMultiplier;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BaseCapping_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseCapping_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BaseCapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindingThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WindingThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFillGaps_MetaData[];
#endif
		static void NewProp_bFillGaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFillGaps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GapDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GapDistance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OcclusionMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OcclusionMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOccludeFromBottom_MetaData[];
#endif
		static void NewProp_bOccludeFromBottom_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOccludeFromBottom;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SimplifyMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimplifyMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SimplifyMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetTriCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetTriCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrianglesPerM_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TrianglesPerM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometricDeviation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GeometricDeviation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroundClipping_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundClipping_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GroundClipping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundClippingZHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundClippingZHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEstimateHardNormals_MetaData[];
#endif
		static void NewProp_bEstimateHardNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEstimateHardNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HardNormalAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HardNormalAngle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UVGenerationMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVGenerationMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UVGenerationMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialPatchCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InitialPatchCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurvatureAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurvatureAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MergingThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MergingThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngleDeviation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAngleDeviation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateNaniteEnabledMesh_MetaData[];
#endif
		static void NewProp_bGenerateNaniteEnabledMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateNaniteEnabledMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NaniteProxyTrianglePercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NaniteProxyTrianglePercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportRayTracing_MetaData[];
#endif
		static void NewProp_bSupportRayTracing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportRayTracing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowDistanceField_MetaData[];
#endif
		static void NewProp_bAllowDistanceField_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowDistanceField;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiSamplingAA_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MultiSamplingAA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderCaptureResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RenderCaptureResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureFieldOfView_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CaptureFieldOfView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NearPlaneDist_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NearPlaneDist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseRenderLODMeshes_MetaData[];
#endif
		static void NewProp_bUseRenderLODMeshes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRenderLODMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSimplifyPrePass_MetaData[];
#endif
		static void NewProp_bEnableSimplifyPrePass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSimplifyPrePass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableParallelBaking_MetaData[];
#endif
		static void NewProp_bEnableParallelBaking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableParallelBaking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrintDebugMessages_MetaData[];
#endif
		static void NewProp_bPrintDebugMessages_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintDebugMessages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEmitFullDebugMesh_MetaData[];
#endif
		static void NewProp_bEmitFullDebugMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmitFullDebugMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshApproximationSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_OutputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_OutputType_MetaData[] = {
		{ "Category", "ShapeSettings" },
		{ "Comment", "/** Type of output from mesh approximation process */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Type of output from mesh approximation process" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_OutputType = { "OutputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshApproximationSettings, OutputType), Z_Construct_UEnum_Engine_EMeshApproximationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_OutputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_OutputType_MetaData)) }; // 4016960478
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_ApproximationAccuracy_MetaData[] = {
		{ "Category", "ShapeSettings" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Approximation Accuracy in Meters, will determine (eg) voxel resolution */" },
		{ "DisplayName", "Approximation Accuracy (meters)" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Approximation Accuracy in Meters, will determine (eg) voxel resolution" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_ApproximationAccuracy = { "ApproximationAccuracy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshApproximationSettings, ApproximationAccuracy), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_ApproximationAccuracy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_ApproximationAccuracy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_ClampVoxelDimension_MetaData[] = {
		{ "Category", "ShapeSettings" },
		{ "ClampMax", "1290" },
		{ "ClampMin", "64" },
		{ "Comment", "/** Maximum allowable voxel count along main directions. This is a limit on ApproximationAccuracy. Max of 1290 (1290^3 is the last integer < 2^31, using a bigger number results in failures in TArray code & probably elsewhere) */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Maximum allowable voxel count along main directions. This is a limit on ApproximationAccuracy. Max of 1290 (1290^3 is the last integer < 2^31, using a bigger number results in failures in TArray code & probably elsewhere)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_ClampVoxelDimension = { "ClampVoxelDimension", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshApproximationSettings, ClampVoxelDimension), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_ClampVoxelDimension_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_ClampVoxelDimension_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bAttemptAutoThickening_MetaData[] = {
		{ "Category", "ShapeSettings" },
		{ "Comment", "/** if enabled, we will attempt to auto-thicken thin parts or flat sheets */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "if enabled, we will attempt to auto-thicken thin parts or flat sheets" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bAttemptAutoThickening_SetBit(void* Obj)
	{
		((FMeshApproximationSettings*)Obj)->bAttemptAutoThickening = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bAttemptAutoThickening = { "bAttemptAutoThickening", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMeshApproximationSettings), &Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bAttemptAutoThickening_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bAttemptAutoThickening_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bAttemptAutoThickening_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_TargetMinThicknessMultiplier_MetaData[] = {
		{ "Category", "ShapeSettings" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Multiplier on Approximation Accuracy used for auto-thickening */" },
		{ "EditCondition", "bAttemptAutoThickening" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Multiplier on Approximation Accuracy used for auto-thickening" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_TargetMinThicknessMultiplier = { "TargetMinThicknessMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshApproximationSettings, TargetMinThicknessMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_TargetMinThicknessMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_TargetMinThicknessMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bIgnoreTinyParts_MetaData[] = {
		{ "Category", "ShapeSettings" },
		{ "Comment", "/** If enabled, tiny parts will be excluded from the mesh merging, which can improve performance */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "If enabled, tiny parts will be excluded from the mesh merging, which can improve performance" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bIgnoreTinyParts_SetBit(void* Obj)
	{
		((FMeshApproximationSettings*)Obj)->bIgnoreTinyParts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bIgnoreTinyParts = { "bIgnoreTinyParts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMeshApproximationSettings), &Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bIgnoreTinyParts_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bIgnoreTinyParts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bIgnoreTinyParts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_TinyPartSizeMultiplier_MetaData[] = {
		{ "Category", "ShapeSettings" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Multiplier on Approximation Accuracy used to define tiny-part threshold, using maximum bounding-box dimension */" },
		{ "EditCondition", "bIgnoreTinyParts" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Multiplier on Approximation Accuracy used to define tiny-part threshold, using maximum bounding-box dimension" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_TinyPartSizeMultiplier = { "TinyPartSizeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshApproximationSettings, TinyPartSizeMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_TinyPartSizeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_TinyPartSizeMultiplier_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_BaseCapping_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_BaseCapping_MetaData[] = {
		{ "Category", "ShapeSettings" },
		{ "Comment", "/** Optional methods to attempt to close off the bottom of open meshes */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Optional methods to attempt to close off the bottom of open meshes" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_BaseCapping = { "BaseCapping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshApproximationSettings, BaseCapping), Z_Construct_UEnum_Engine_EMeshApproximationBaseCappingType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_BaseCapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_BaseCapping_MetaData)) }; // 3783455863
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_WindingThreshold_MetaData[] = {
		{ "Category", "ShapeSettings" },
		{ "ClampMax", "0.99" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Winding Threshold controls hole filling at open mesh borders. Smaller value means \"more/rounder\" filling */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Winding Threshold controls hole filling at open mesh borders. Smaller value means \"more/rounder\" filling" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_WindingThreshold = { "WindingThreshold", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshApproximationSettings, WindingThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_WindingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_WindingThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bFillGaps_MetaData[] = {
		{ "Category", "ShapeSettings" },
		{ "Comment", "/** If true, topological expand/contract is used to try to fill small gaps between objects. */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "If true, topological expand/contract is used to try to fill small gaps between objects." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bFillGaps_SetBit(void* Obj)
	{
		((FMeshApproximationSettings*)Obj)->bFillGaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bFillGaps = { "bFillGaps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMeshApproximationSettings), &Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bFillGaps_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bFillGaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bFillGaps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_GapDistance_MetaData[] = {
		{ "Category", "ShapeSettings" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Distance in Meters to expand/contract to fill gaps */" },
		{ "DisplayName", "Gap Filling Distance (meters)" },
		{ "EditCondition", "bFillGaps" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Distance in Meters to expand/contract to fill gaps" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_GapDistance = { "GapDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshApproximationSettings, GapDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_GapDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_GapDistance_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_OcclusionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_OcclusionMethod_MetaData[] = {
		{ "Category", "SimplifySettings" },
		{ "Comment", "/** Type of hidden geometry removal to apply */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Type of hidden geometry removal to apply" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_OcclusionMethod = { "OcclusionMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshApproximationSettings, OcclusionMethod), Z_Construct_UEnum_Engine_EOccludedGeometryFilteringPolicy, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_OcclusionMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_OcclusionMethod_MetaData)) }; // 1568751199
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bOccludeFromBottom_MetaData[] = {
		{ "Category", "SimplifySettings" },
		{ "Comment", "/** If true, then the OcclusionMethod computation is configured to try to consider downward-facing \"bottom\" geometry as occluded */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "If true, then the OcclusionMethod computation is configured to try to consider downward-facing \"bottom\" geometry as occluded" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bOccludeFromBottom_SetBit(void* Obj)
	{
		((FMeshApproximationSettings*)Obj)->bOccludeFromBottom = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bOccludeFromBottom = { "bOccludeFromBottom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMeshApproximationSettings), &Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bOccludeFromBottom_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bOccludeFromBottom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bOccludeFromBottom_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_SimplifyMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_SimplifyMethod_MetaData[] = {
		{ "Category", "SimplifySettings" },
		{ "Comment", "/** Mesh Simplification criteria */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Mesh Simplification criteria" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_SimplifyMethod = { "SimplifyMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshApproximationSettings, SimplifyMethod), Z_Construct_UEnum_Engine_EMeshApproximationSimplificationPolicy, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_SimplifyMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_SimplifyMethod_MetaData)) }; // 799878982
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_TargetTriCount_MetaData[] = {
		{ "Category", "SimplifySettings" },
		{ "ClampMin", "16" },
		{ "Comment", "/** Target triangle count for Mesh Simplification, for SimplifyMethods that use a Count*/" },
		{ "EditCondition", "SimplifyMethod == EMeshApproximationSimplificationPolicy::FixedTriangleCount" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Target triangle count for Mesh Simplification, for SimplifyMethods that use a Count" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_TargetTriCount = { "TargetTriCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshApproximationSettings, TargetTriCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_TargetTriCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_TargetTriCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_TrianglesPerM_MetaData[] = {
		{ "Category", "SimplifySettings" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Approximate Number of triangles per Square Meter, for SimplifyMethods that use such a constraint */" },
		{ "EditCondition", "SimplifyMethod == EMeshApproximationSimplificationPolicy::TrianglesPerArea" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Approximate Number of triangles per Square Meter, for SimplifyMethods that use such a constraint" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_TrianglesPerM = { "TrianglesPerM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshApproximationSettings, TrianglesPerM), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_TrianglesPerM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_TrianglesPerM_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_GeometricDeviation_MetaData[] = {
		{ "Category", "SimplifySettings" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Allowable Geometric Deviation in Meters when SimplifyMethod incorporates a Geometric Tolerance */" },
		{ "DisplayName", "Geometric Deviation (meters)" },
		{ "EditCondition", "SimplifyMethod == EMeshApproximationSimplificationPolicy::GeometricTolerance" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Allowable Geometric Deviation in Meters when SimplifyMethod incorporates a Geometric Tolerance" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_GeometricDeviation = { "GeometricDeviation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshApproximationSettings, GeometricDeviation), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_GeometricDeviation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_GeometricDeviation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_GroundClipping_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_GroundClipping_MetaData[] = {
		{ "Category", "SimplifySettings" },
		{ "Comment", "/** Configure how the final mesh should be clipped with a ground plane, if desired */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Configure how the final mesh should be clipped with a ground plane, if desired" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_GroundClipping = { "GroundClipping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshApproximationSettings, GroundClipping), Z_Construct_UEnum_Engine_EMeshApproximationGroundPlaneClippingPolicy, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_GroundClipping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_GroundClipping_MetaData)) }; // 2126687681
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_GroundClippingZHeight_MetaData[] = {
		{ "Category", "SimplifySettings" },
		{ "Comment", "/** Z-Height for the ground clipping plane, if enabled */" },
		{ "EditCondition", "GroundClipping != EGroundPlaneClippingPolicy::NoGroundClipping" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Z-Height for the ground clipping plane, if enabled" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_GroundClippingZHeight = { "GroundClippingZHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshApproximationSettings, GroundClippingZHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_GroundClippingZHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_GroundClippingZHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEstimateHardNormals_MetaData[] = {
		{ "Category", "NormalsSettings" },
		{ "Comment", "/** If true, normal angle will be used to estimate hard normals */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "If true, normal angle will be used to estimate hard normals" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEstimateHardNormals_SetBit(void* Obj)
	{
		((FMeshApproximationSettings*)Obj)->bEstimateHardNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEstimateHardNormals = { "bEstimateHardNormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMeshApproximationSettings), &Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEstimateHardNormals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEstimateHardNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEstimateHardNormals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_HardNormalAngle_MetaData[] = {
		{ "Category", "NormalsSettings" },
		{ "ClampMax", "90.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEstimateHardNormals" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_HardNormalAngle = { "HardNormalAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshApproximationSettings, HardNormalAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_HardNormalAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_HardNormalAngle_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_UVGenerationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_UVGenerationMethod_MetaData[] = {
		{ "Category", "UVSettings" },
		{ "Comment", "//\n// Mesh UV Generation Settings\n//\n" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Mesh UV Generation Settings" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_UVGenerationMethod = { "UVGenerationMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshApproximationSettings, UVGenerationMethod), Z_Construct_UEnum_Engine_EMeshApproximationUVGenerationPolicy, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_UVGenerationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_UVGenerationMethod_MetaData)) }; // 65079030
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_InitialPatchCount_MetaData[] = {
		{ "Category", "UVSettings" },
		{ "ClampMax", "99999999" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of initial patches mesh will be split into before computing island merging */" },
		{ "EditCondition", "UVGenerationMethod == EMeshApproximationUVGenerationPolicy::PreferPatchBuilder" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Number of initial patches mesh will be split into before computing island merging" },
		{ "UIMax", "1000" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_InitialPatchCount = { "InitialPatchCount", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshApproximationSettings, InitialPatchCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_InitialPatchCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_InitialPatchCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_CurvatureAlignment_MetaData[] = {
		{ "Category", "UVSettings" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** This parameter controls alignment of the initial patches to creases in the mesh */" },
		{ "EditCondition", "UVGenerationMethod == EMeshApproximationUVGenerationPolicy::PreferPatchBuilder" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "This parameter controls alignment of the initial patches to creases in the mesh" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_CurvatureAlignment = { "CurvatureAlignment", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshApproximationSettings, CurvatureAlignment), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_CurvatureAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_CurvatureAlignment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_MergingThreshold_MetaData[] = {
		{ "Category", "UVSettings" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Distortion/Stretching Threshold for island merging - larger values increase the allowable UV stretching */" },
		{ "EditCondition", "UVGenerationMethod == EMeshApproximationUVGenerationPolicy::PreferPatchBuilder" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Distortion/Stretching Threshold for island merging - larger values increase the allowable UV stretching" },
		{ "UIMax", "5.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_MergingThreshold = { "MergingThreshold", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshApproximationSettings, MergingThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_MergingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_MergingThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_MaxAngleDeviation_MetaData[] = {
		{ "Category", "UVSettings" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** UV islands will not be merged if their average face normals deviate by larger than this amount */" },
		{ "EditCondition", "UVGenerationMethod == EMeshApproximationUVGenerationPolicy::PreferPatchBuilder" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "UV islands will not be merged if their average face normals deviate by larger than this amount" },
		{ "UIMax", "90.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_MaxAngleDeviation = { "MaxAngleDeviation", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshApproximationSettings, MaxAngleDeviation), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_MaxAngleDeviation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_MaxAngleDeviation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bGenerateNaniteEnabledMesh_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** Whether to generate a nanite-enabled mesh */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to generate a nanite-enabled mesh" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bGenerateNaniteEnabledMesh_SetBit(void* Obj)
	{
		((FMeshApproximationSettings*)Obj)->bGenerateNaniteEnabledMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bGenerateNaniteEnabledMesh = { "bGenerateNaniteEnabledMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMeshApproximationSettings), &Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bGenerateNaniteEnabledMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bGenerateNaniteEnabledMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bGenerateNaniteEnabledMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_NaniteProxyTrianglePercent_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Percentage of triangles to reduce down to for generating a coarse proxy mesh from the Nanite mesh */" },
		{ "EditCondition", "bGenerateNaniteEnabledMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Percentage of triangles to reduce down to for generating a coarse proxy mesh from the Nanite mesh" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_NaniteProxyTrianglePercent = { "NaniteProxyTrianglePercent", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshApproximationSettings, NaniteProxyTrianglePercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_NaniteProxyTrianglePercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_NaniteProxyTrianglePercent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bSupportRayTracing_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** Whether ray tracing will be supported on this mesh. Disable this to save memory if the generated mesh will only be rendered in the distance. */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether ray tracing will be supported on this mesh. Disable this to save memory if the generated mesh will only be rendered in the distance." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bSupportRayTracing_SetBit(void* Obj)
	{
		((FMeshApproximationSettings*)Obj)->bSupportRayTracing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bSupportRayTracing = { "bSupportRayTracing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMeshApproximationSettings), &Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bSupportRayTracing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bSupportRayTracing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bSupportRayTracing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bAllowDistanceField_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** Whether to allow distance field to be computed for this mesh. Disable this to save memory if the generated mesh will only be rendered in the distance. */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to allow distance field to be computed for this mesh. Disable this to save memory if the generated mesh will only be rendered in the distance." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bAllowDistanceField_SetBit(void* Obj)
	{
		((FMeshApproximationSettings*)Obj)->bAllowDistanceField = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bAllowDistanceField = { "bAllowDistanceField", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMeshApproximationSettings), &Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bAllowDistanceField_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bAllowDistanceField_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bAllowDistanceField_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_MultiSamplingAA_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "Comment", "/** If Value is > 1, Multisample output baked textures by this amount in each direction (eg 4 == 16x supersampling) */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "If Value is > 1, Multisample output baked textures by this amount in each direction (eg 4 == 16x supersampling)" },
		{ "UIMax", "4" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_MultiSamplingAA = { "MultiSamplingAA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshApproximationSettings, MultiSamplingAA), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_MultiSamplingAA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_MultiSamplingAA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_RenderCaptureResolution_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** If Value is zero, use MaterialSettings resolution, otherwise override the render capture resolution */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "If Value is zero, use MaterialSettings resolution, otherwise override the render capture resolution" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_RenderCaptureResolution = { "RenderCaptureResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshApproximationSettings, RenderCaptureResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_RenderCaptureResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_RenderCaptureResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_MaterialSettings_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "Comment", "/** Material generation settings */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Material generation settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_MaterialSettings = { "MaterialSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshApproximationSettings, MaterialSettings), Z_Construct_UScriptStruct_FMaterialProxySettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_MaterialSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_MaterialSettings_MetaData)) }; // 3442938596
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_CaptureFieldOfView_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "ClampMax", "160.0" },
		{ "ClampMin", "5.0" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_CaptureFieldOfView = { "CaptureFieldOfView", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshApproximationSettings, CaptureFieldOfView), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_CaptureFieldOfView_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_CaptureFieldOfView_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_NearPlaneDist_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0.001" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_NearPlaneDist = { "NearPlaneDist", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshApproximationSettings, NearPlaneDist), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_NearPlaneDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_NearPlaneDist_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bUseRenderLODMeshes_MetaData[] = {
		{ "Category", "PerformanceSettings" },
		{ "Comment", "/** If true, LOD0 Render Meshes (or Nanite Fallback meshes) are used instead of Source Mesh data. This can significantly reduce computation time and memory usage, but potentially at the cost of lower quality output. */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "If true, LOD0 Render Meshes (or Nanite Fallback meshes) are used instead of Source Mesh data. This can significantly reduce computation time and memory usage, but potentially at the cost of lower quality output." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bUseRenderLODMeshes_SetBit(void* Obj)
	{
		((FMeshApproximationSettings*)Obj)->bUseRenderLODMeshes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bUseRenderLODMeshes = { "bUseRenderLODMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMeshApproximationSettings), &Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bUseRenderLODMeshes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bUseRenderLODMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bUseRenderLODMeshes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEnableSimplifyPrePass_MetaData[] = {
		{ "Category", "PerformanceSettings" },
		{ "Comment", "/** If true, a faster mesh simplfication strategy will be used. This can significantly reduce computation time and memory usage, but potentially at the cost of lower quality output. */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "If true, a faster mesh simplfication strategy will be used. This can significantly reduce computation time and memory usage, but potentially at the cost of lower quality output." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEnableSimplifyPrePass_SetBit(void* Obj)
	{
		((FMeshApproximationSettings*)Obj)->bEnableSimplifyPrePass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEnableSimplifyPrePass = { "bEnableSimplifyPrePass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMeshApproximationSettings), &Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEnableSimplifyPrePass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEnableSimplifyPrePass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEnableSimplifyPrePass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEnableParallelBaking_MetaData[] = {
		{ "Category", "PerformanceSettings" },
		{ "Comment", "/** If false, texture capture and baking will be done serially after mesh generation, rather than in parallel when possible. This will reduce the maximum memory requirements of the process.  */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "If false, texture capture and baking will be done serially after mesh generation, rather than in parallel when possible. This will reduce the maximum memory requirements of the process." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEnableParallelBaking_SetBit(void* Obj)
	{
		((FMeshApproximationSettings*)Obj)->bEnableParallelBaking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEnableParallelBaking = { "bEnableParallelBaking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMeshApproximationSettings), &Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEnableParallelBaking_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEnableParallelBaking_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEnableParallelBaking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bPrintDebugMessages_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/** If true, print out debugging messages */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "If true, print out debugging messages" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bPrintDebugMessages_SetBit(void* Obj)
	{
		((FMeshApproximationSettings*)Obj)->bPrintDebugMessages = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bPrintDebugMessages = { "bPrintDebugMessages", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMeshApproximationSettings), &Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bPrintDebugMessages_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bPrintDebugMessages_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bPrintDebugMessages_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEmitFullDebugMesh_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/** If true, write the full mesh triangle set (ie flattened, non-instanced) used for mesh generation. Warning: this asset may be extremely large!! */" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "If true, write the full mesh triangle set (ie flattened, non-instanced) used for mesh generation. Warning: this asset may be extremely large!!" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEmitFullDebugMesh_SetBit(void* Obj)
	{
		((FMeshApproximationSettings*)Obj)->bEmitFullDebugMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEmitFullDebugMesh = { "bEmitFullDebugMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMeshApproximationSettings), &Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEmitFullDebugMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEmitFullDebugMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEmitFullDebugMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_OutputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_OutputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_ApproximationAccuracy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_ClampVoxelDimension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bAttemptAutoThickening,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_TargetMinThicknessMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bIgnoreTinyParts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_TinyPartSizeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_BaseCapping_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_BaseCapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_WindingThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bFillGaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_GapDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_OcclusionMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_OcclusionMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bOccludeFromBottom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_SimplifyMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_SimplifyMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_TargetTriCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_TrianglesPerM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_GeometricDeviation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_GroundClipping_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_GroundClipping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_GroundClippingZHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEstimateHardNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_HardNormalAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_UVGenerationMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_UVGenerationMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_InitialPatchCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_CurvatureAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_MergingThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_MaxAngleDeviation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bGenerateNaniteEnabledMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_NaniteProxyTrianglePercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bSupportRayTracing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bAllowDistanceField,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_MultiSamplingAA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_RenderCaptureResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_MaterialSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_CaptureFieldOfView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_NearPlaneDist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bUseRenderLODMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEnableSimplifyPrePass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEnableParallelBaking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bPrintDebugMessages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewProp_bEmitFullDebugMesh,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MeshApproximationSettings",
		sizeof(FMeshApproximationSettings),
		alignof(FMeshApproximationSettings),
		Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshApproximationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_MeshApproximationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshApproximationSettings.InnerSingleton, Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeshApproximationSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshMerging_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshMerging_h_Statics::EnumInfo[] = {
		{ EMeshFeatureImportance_StaticEnum, TEXT("EMeshFeatureImportance"), &Z_Registration_Info_UEnum_EMeshFeatureImportance, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2700121328U) },
		{ EStaticMeshReductionTerimationCriterion_StaticEnum, TEXT("EStaticMeshReductionTerimationCriterion"), &Z_Registration_Info_UEnum_EStaticMeshReductionTerimationCriterion, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1623269048U) },
		{ ELandscapeCullingPrecision_StaticEnum, TEXT("ELandscapeCullingPrecision"), &Z_Registration_Info_UEnum_ELandscapeCullingPrecision, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 486022987U) },
		{ EProxyNormalComputationMethod_StaticEnum, TEXT("EProxyNormalComputationMethod"), &Z_Registration_Info_UEnum_EProxyNormalComputationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2887027114U) },
		{ EMeshLODSelectionType_StaticEnum, TEXT("EMeshLODSelectionType"), &Z_Registration_Info_UEnum_EMeshLODSelectionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3719561225U) },
		{ EMeshMergeType_StaticEnum, TEXT("EMeshMergeType"), &Z_Registration_Info_UEnum_EMeshMergeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4076432579U) },
		{ EUVOutput_StaticEnum, TEXT("EUVOutput"), &Z_Registration_Info_UEnum_EUVOutput, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2437317353U) },
		{ EMeshApproximationType_StaticEnum, TEXT("EMeshApproximationType"), &Z_Registration_Info_UEnum_EMeshApproximationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4016960478U) },
		{ EMeshApproximationBaseCappingType_StaticEnum, TEXT("EMeshApproximationBaseCappingType"), &Z_Registration_Info_UEnum_EMeshApproximationBaseCappingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3783455863U) },
		{ EOccludedGeometryFilteringPolicy_StaticEnum, TEXT("EOccludedGeometryFilteringPolicy"), &Z_Registration_Info_UEnum_EOccludedGeometryFilteringPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1568751199U) },
		{ EMeshApproximationSimplificationPolicy_StaticEnum, TEXT("EMeshApproximationSimplificationPolicy"), &Z_Registration_Info_UEnum_EMeshApproximationSimplificationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 799878982U) },
		{ EMeshApproximationGroundPlaneClippingPolicy_StaticEnum, TEXT("EMeshApproximationGroundPlaneClippingPolicy"), &Z_Registration_Info_UEnum_EMeshApproximationGroundPlaneClippingPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2126687681U) },
		{ EMeshApproximationUVGenerationPolicy_StaticEnum, TEXT("EMeshApproximationUVGenerationPolicy"), &Z_Registration_Info_UEnum_EMeshApproximationUVGenerationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 65079030U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshMerging_h_Statics::ScriptStructInfo[] = {
		{ FMeshReductionSettings::StaticStruct, Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewStructOps, TEXT("MeshReductionSettings"), &Z_Registration_Info_UScriptStruct_MeshReductionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshReductionSettings), 1559220690U) },
		{ FMeshProxySettings::StaticStruct, Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewStructOps, TEXT("MeshProxySettings"), &Z_Registration_Info_UScriptStruct_MeshProxySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshProxySettings), 1902887107U) },
		{ FMeshMergingSettings::StaticStruct, Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewStructOps, TEXT("MeshMergingSettings"), &Z_Registration_Info_UScriptStruct_MeshMergingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshMergingSettings), 1528135240U) },
		{ FMeshInstancingSettings::StaticStruct, Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewStructOps, TEXT("MeshInstancingSettings"), &Z_Registration_Info_UScriptStruct_MeshInstancingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshInstancingSettings), 3591486318U) },
		{ FMeshApproximationSettings::StaticStruct, Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics::NewStructOps, TEXT("MeshApproximationSettings"), &Z_Registration_Info_UScriptStruct_MeshApproximationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshApproximationSettings), 1720125939U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshMerging_h_1241559962(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshMerging_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshMerging_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshMerging_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshMerging_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
