// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/MeshMerging.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MeshMerging_generated_h
#error "MeshMerging.generated.h already included, missing '#pragma once' in MeshMerging.h"
#endif
#define ENGINE_MeshMerging_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshMerging_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshReductionSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMeshReductionSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshMerging_h_226_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshProxySettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMeshProxySettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshMerging_h_483_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshMergingSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMeshMergingSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshMerging_h_700_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMeshInstancingSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshMerging_h_787_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshApproximationSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMeshApproximationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshMerging_h


#define FOREACH_ENUM_EMESHFEATUREIMPORTANCE(op) \
	op(EMeshFeatureImportance::Off) \
	op(EMeshFeatureImportance::Lowest) \
	op(EMeshFeatureImportance::Low) \
	op(EMeshFeatureImportance::Normal) \
	op(EMeshFeatureImportance::High) \
	op(EMeshFeatureImportance::Highest) 

namespace EMeshFeatureImportance { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EMeshFeatureImportance::Type>();

#define FOREACH_ENUM_ESTATICMESHREDUCTIONTERIMATIONCRITERION(op) \
	op(EStaticMeshReductionTerimationCriterion::Triangles) \
	op(EStaticMeshReductionTerimationCriterion::Vertices) \
	op(EStaticMeshReductionTerimationCriterion::Any) 

enum class EStaticMeshReductionTerimationCriterion : uint8;
template<> struct TIsUEnumClass<EStaticMeshReductionTerimationCriterion> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EStaticMeshReductionTerimationCriterion>();

#define FOREACH_ENUM_ELANDSCAPECULLINGPRECISION(op) \
	op(ELandscapeCullingPrecision::High) \
	op(ELandscapeCullingPrecision::Medium) \
	op(ELandscapeCullingPrecision::Low) 

namespace ELandscapeCullingPrecision { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ELandscapeCullingPrecision::Type>();

#define FOREACH_ENUM_EPROXYNORMALCOMPUTATIONMETHOD(op) \
	op(EProxyNormalComputationMethod::AngleWeighted) \
	op(EProxyNormalComputationMethod::AreaWeighted) \
	op(EProxyNormalComputationMethod::EqualWeighted) 

namespace EProxyNormalComputationMethod { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EProxyNormalComputationMethod::Type>();

#define FOREACH_ENUM_EMESHLODSELECTIONTYPE(op) \
	op(EMeshLODSelectionType::AllLODs) \
	op(EMeshLODSelectionType::SpecificLOD) \
	op(EMeshLODSelectionType::CalculateLOD) \
	op(EMeshLODSelectionType::LowestDetailLOD) 

enum class EMeshLODSelectionType : uint8;
template<> struct TIsUEnumClass<EMeshLODSelectionType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EMeshLODSelectionType>();

#define FOREACH_ENUM_EMESHMERGETYPE(op) \
	op(EMeshMergeType::MeshMergeType_Default) \
	op(EMeshMergeType::MeshMergeType_MergeActor) 

enum class EMeshMergeType : uint8;
template<> struct TIsUEnumClass<EMeshMergeType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EMeshMergeType>();

#define FOREACH_ENUM_EUVOUTPUT(op) \
	op(EUVOutput::DoNotOutputChannel) \
	op(EUVOutput::OutputChannel) 

enum class EUVOutput : uint8;
template<> struct TIsUEnumClass<EUVOutput> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EUVOutput>();

#define FOREACH_ENUM_EMESHAPPROXIMATIONTYPE(op) \
	op(EMeshApproximationType::MeshAndMaterials) \
	op(EMeshApproximationType::MeshShapeOnly) 

enum class EMeshApproximationType : uint8;
template<> struct TIsUEnumClass<EMeshApproximationType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EMeshApproximationType>();

#define FOREACH_ENUM_EMESHAPPROXIMATIONBASECAPPINGTYPE(op) \
	op(EMeshApproximationBaseCappingType::NoBaseCapping) \
	op(EMeshApproximationBaseCappingType::ConvexPolygon) \
	op(EMeshApproximationBaseCappingType::ConvexSolid) 

enum class EMeshApproximationBaseCappingType : uint8;
template<> struct TIsUEnumClass<EMeshApproximationBaseCappingType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EMeshApproximationBaseCappingType>();

#define FOREACH_ENUM_EOCCLUDEDGEOMETRYFILTERINGPOLICY(op) \
	op(EOccludedGeometryFilteringPolicy::NoOcclusionFiltering) \
	op(EOccludedGeometryFilteringPolicy::VisibilityBasedFiltering) 

enum class EOccludedGeometryFilteringPolicy : uint8;
template<> struct TIsUEnumClass<EOccludedGeometryFilteringPolicy> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EOccludedGeometryFilteringPolicy>();

#define FOREACH_ENUM_EMESHAPPROXIMATIONSIMPLIFICATIONPOLICY(op) \
	op(EMeshApproximationSimplificationPolicy::FixedTriangleCount) \
	op(EMeshApproximationSimplificationPolicy::TrianglesPerArea) \
	op(EMeshApproximationSimplificationPolicy::GeometricTolerance) 

enum class EMeshApproximationSimplificationPolicy : uint8;
template<> struct TIsUEnumClass<EMeshApproximationSimplificationPolicy> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EMeshApproximationSimplificationPolicy>();

#define FOREACH_ENUM_EMESHAPPROXIMATIONGROUNDPLANECLIPPINGPOLICY(op) \
	op(EMeshApproximationGroundPlaneClippingPolicy::NoGroundClipping) \
	op(EMeshApproximationGroundPlaneClippingPolicy::DiscardWithZPlane) \
	op(EMeshApproximationGroundPlaneClippingPolicy::CutWithZPlane) \
	op(EMeshApproximationGroundPlaneClippingPolicy::CutAndFillWithZPlane) 

enum class EMeshApproximationGroundPlaneClippingPolicy : uint8;
template<> struct TIsUEnumClass<EMeshApproximationGroundPlaneClippingPolicy> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EMeshApproximationGroundPlaneClippingPolicy>();

#define FOREACH_ENUM_EMESHAPPROXIMATIONUVGENERATIONPOLICY(op) \
	op(EMeshApproximationUVGenerationPolicy::PreferUVAtlas) \
	op(EMeshApproximationUVGenerationPolicy::PreferXAtlas) \
	op(EMeshApproximationUVGenerationPolicy::PreferPatchBuilder) 

enum class EMeshApproximationUVGenerationPolicy : uint8;
template<> struct TIsUEnumClass<EMeshApproximationUVGenerationPolicy> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EMeshApproximationUVGenerationPolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
