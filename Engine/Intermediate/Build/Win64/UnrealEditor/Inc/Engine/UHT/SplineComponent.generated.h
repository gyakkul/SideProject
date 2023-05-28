// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SplineComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FSplinePoint;
#ifdef ENGINE_SplineComponent_generated_h
#error "SplineComponent.generated.h already included, missing '#pragma once' in SplineComponent.h"
#endif
#define ENGINE_SplineComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_43_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_43_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_43_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_43_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSplineMetadata(); \
	friend struct Z_Construct_UClass_USplineMetadata_Statics; \
public: \
	DECLARE_CLASS(USplineMetadata, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USplineMetadata)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUSplineMetadata(); \
	friend struct Z_Construct_UClass_USplineMetadata_Statics; \
public: \
	DECLARE_CLASS(USplineMetadata, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USplineMetadata)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USplineMetadata(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplineMetadata) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USplineMetadata); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplineMetadata); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USplineMetadata(USplineMetadata&&); \
	NO_API USplineMetadata(const USplineMetadata&); \
public: \
	NO_API virtual ~USplineMetadata();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USplineMetadata(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USplineMetadata(USplineMetadata&&); \
	NO_API USplineMetadata(const USplineMetadata&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USplineMetadata); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplineMetadata); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplineMetadata) \
	NO_API virtual ~USplineMetadata();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_40_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_43_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_43_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_43_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_43_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_43_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_43_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_43_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SplineMetadata."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USplineMetadata>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSplineCurves_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSplineCurves>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_139_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSplinePoint_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSplinePoint>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_196_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_196_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConvertSplineToPolyLine); \
	DECLARE_FUNCTION(execConvertSplineSegmentToPolyLine); \
	DECLARE_FUNCTION(execDivideSplineIntoPolylineRecursiveWithDistances); \
	DECLARE_FUNCTION(execDivideSplineIntoPolylineRecursive); \
	DECLARE_FUNCTION(execFindTransformClosestToWorldLocation); \
	DECLARE_FUNCTION(execFindScaleClosestToWorldLocation); \
	DECLARE_FUNCTION(execFindRollClosestToWorldLocation); \
	DECLARE_FUNCTION(execFindRightVectorClosestToWorldLocation); \
	DECLARE_FUNCTION(execFindUpVectorClosestToWorldLocation); \
	DECLARE_FUNCTION(execFindRotationClosestToWorldLocation); \
	DECLARE_FUNCTION(execFindTangentClosestToWorldLocation); \
	DECLARE_FUNCTION(execFindDirectionClosestToWorldLocation); \
	DECLARE_FUNCTION(execFindLocationClosestToWorldLocation); \
	DECLARE_FUNCTION(execFindInputKeyClosestToWorldLocation); \
	DECLARE_FUNCTION(execGetScaleAtTime); \
	DECLARE_FUNCTION(execGetRollAtTime); \
	DECLARE_FUNCTION(execGetTransformAtTime); \
	DECLARE_FUNCTION(execGetRightVectorAtTime); \
	DECLARE_FUNCTION(execGetUpVectorAtTime); \
	DECLARE_FUNCTION(execGetWorldRotationAtTime); \
	DECLARE_FUNCTION(execGetRotationAtTime); \
	DECLARE_FUNCTION(execGetTangentAtTime); \
	DECLARE_FUNCTION(execGetWorldDirectionAtTime); \
	DECLARE_FUNCTION(execGetDirectionAtTime); \
	DECLARE_FUNCTION(execGetWorldLocationAtTime); \
	DECLARE_FUNCTION(execGetLocationAtTime); \
	DECLARE_FUNCTION(execGetTransformAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetScaleAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetRollAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetRightVectorAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetUpVectorAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetWorldRotationAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetRotationAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetWorldTangentAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetTangentAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetWorldDirectionAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetDirectionAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetWorldLocationAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetLocationAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetTimeAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetInputKeyValueAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetInputKeyAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetDefaultUpVector); \
	DECLARE_FUNCTION(execSetDefaultUpVector); \
	DECLARE_FUNCTION(execGetSplineLength); \
	DECLARE_FUNCTION(execGetVectorPropertyAtSplinePoint); \
	DECLARE_FUNCTION(execGetFloatPropertyAtSplinePoint); \
	DECLARE_FUNCTION(execGetDistanceAlongSplineAtSplinePoint); \
	DECLARE_FUNCTION(execGetLocalLocationAndTangentAtSplinePoint); \
	DECLARE_FUNCTION(execGetLocationAndTangentAtSplinePoint); \
	DECLARE_FUNCTION(execGetTransformAtSplinePoint); \
	DECLARE_FUNCTION(execGetScaleAtSplinePoint); \
	DECLARE_FUNCTION(execGetRollAtSplinePoint); \
	DECLARE_FUNCTION(execGetRightVectorAtSplinePoint); \
	DECLARE_FUNCTION(execGetUpVectorAtSplinePoint); \
	DECLARE_FUNCTION(execGetRotationAtSplinePoint); \
	DECLARE_FUNCTION(execGetLeaveTangentAtSplinePoint); \
	DECLARE_FUNCTION(execGetArriveTangentAtSplinePoint); \
	DECLARE_FUNCTION(execGetTangentAtSplinePoint); \
	DECLARE_FUNCTION(execGetDirectionAtSplinePoint); \
	DECLARE_FUNCTION(execGetWorldLocationAtSplinePoint); \
	DECLARE_FUNCTION(execGetLocationAtSplinePoint); \
	DECLARE_FUNCTION(execGetNumberOfSplineSegments); \
	DECLARE_FUNCTION(execGetNumberOfSplinePoints); \
	DECLARE_FUNCTION(execSetSplinePointType); \
	DECLARE_FUNCTION(execGetSplinePointType); \
	DECLARE_FUNCTION(execSetScaleAtSplinePoint); \
	DECLARE_FUNCTION(execSetRotationAtSplinePoint); \
	DECLARE_FUNCTION(execSetUpVectorAtSplinePoint); \
	DECLARE_FUNCTION(execSetTangentsAtSplinePoint); \
	DECLARE_FUNCTION(execSetTangentAtSplinePoint); \
	DECLARE_FUNCTION(execSetWorldLocationAtSplinePoint); \
	DECLARE_FUNCTION(execSetLocationAtSplinePoint); \
	DECLARE_FUNCTION(execSetSplineLocalPoints); \
	DECLARE_FUNCTION(execSetSplineWorldPoints); \
	DECLARE_FUNCTION(execSetSplinePoints); \
	DECLARE_FUNCTION(execAddSplineLocalPoint); \
	DECLARE_FUNCTION(execAddSplineWorldPoint); \
	DECLARE_FUNCTION(execRemoveSplinePoint); \
	DECLARE_FUNCTION(execAddSplinePointAtIndex); \
	DECLARE_FUNCTION(execAddSplinePoint); \
	DECLARE_FUNCTION(execAddPoints); \
	DECLARE_FUNCTION(execAddPoint); \
	DECLARE_FUNCTION(execClearSplinePoints); \
	DECLARE_FUNCTION(execIsClosedLoop); \
	DECLARE_FUNCTION(execSetClosedLoopAtPosition); \
	DECLARE_FUNCTION(execSetClosedLoop); \
	DECLARE_FUNCTION(execSetDrawDebug); \
	DECLARE_FUNCTION(execSetTangentColor); \
	DECLARE_FUNCTION(execSetSelectedSplineSegmentColor); \
	DECLARE_FUNCTION(execSetUnselectedSplineSegmentColor); \
	DECLARE_FUNCTION(execGetVectorPropertyAtSplineInputKey); \
	DECLARE_FUNCTION(execGetFloatPropertyAtSplineInputKey); \
	DECLARE_FUNCTION(execGetDistanceAlongSplineAtSplineInputKey); \
	DECLARE_FUNCTION(execGetScaleAtSplineInputKey); \
	DECLARE_FUNCTION(execGetRollAtSplineInputKey); \
	DECLARE_FUNCTION(execGetTransformAtSplineInputKey); \
	DECLARE_FUNCTION(execGetRightVectorAtSplineInputKey); \
	DECLARE_FUNCTION(execGetUpVectorAtSplineInputKey); \
	DECLARE_FUNCTION(execGetRotationAtSplineInputKey); \
	DECLARE_FUNCTION(execGetDirectionAtSplineInputKey); \
	DECLARE_FUNCTION(execGetTangentAtSplineInputKey); \
	DECLARE_FUNCTION(execGetLocationAtSplineInputKey); \
	DECLARE_FUNCTION(execUpdateSpline);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_196_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConvertSplineToPolyLine); \
	DECLARE_FUNCTION(execConvertSplineSegmentToPolyLine); \
	DECLARE_FUNCTION(execDivideSplineIntoPolylineRecursiveWithDistances); \
	DECLARE_FUNCTION(execDivideSplineIntoPolylineRecursive); \
	DECLARE_FUNCTION(execFindTransformClosestToWorldLocation); \
	DECLARE_FUNCTION(execFindScaleClosestToWorldLocation); \
	DECLARE_FUNCTION(execFindRollClosestToWorldLocation); \
	DECLARE_FUNCTION(execFindRightVectorClosestToWorldLocation); \
	DECLARE_FUNCTION(execFindUpVectorClosestToWorldLocation); \
	DECLARE_FUNCTION(execFindRotationClosestToWorldLocation); \
	DECLARE_FUNCTION(execFindTangentClosestToWorldLocation); \
	DECLARE_FUNCTION(execFindDirectionClosestToWorldLocation); \
	DECLARE_FUNCTION(execFindLocationClosestToWorldLocation); \
	DECLARE_FUNCTION(execFindInputKeyClosestToWorldLocation); \
	DECLARE_FUNCTION(execGetScaleAtTime); \
	DECLARE_FUNCTION(execGetRollAtTime); \
	DECLARE_FUNCTION(execGetTransformAtTime); \
	DECLARE_FUNCTION(execGetRightVectorAtTime); \
	DECLARE_FUNCTION(execGetUpVectorAtTime); \
	DECLARE_FUNCTION(execGetWorldRotationAtTime); \
	DECLARE_FUNCTION(execGetRotationAtTime); \
	DECLARE_FUNCTION(execGetTangentAtTime); \
	DECLARE_FUNCTION(execGetWorldDirectionAtTime); \
	DECLARE_FUNCTION(execGetDirectionAtTime); \
	DECLARE_FUNCTION(execGetWorldLocationAtTime); \
	DECLARE_FUNCTION(execGetLocationAtTime); \
	DECLARE_FUNCTION(execGetTransformAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetScaleAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetRollAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetRightVectorAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetUpVectorAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetWorldRotationAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetRotationAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetWorldTangentAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetTangentAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetWorldDirectionAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetDirectionAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetWorldLocationAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetLocationAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetTimeAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetInputKeyValueAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetInputKeyAtDistanceAlongSpline); \
	DECLARE_FUNCTION(execGetDefaultUpVector); \
	DECLARE_FUNCTION(execSetDefaultUpVector); \
	DECLARE_FUNCTION(execGetSplineLength); \
	DECLARE_FUNCTION(execGetVectorPropertyAtSplinePoint); \
	DECLARE_FUNCTION(execGetFloatPropertyAtSplinePoint); \
	DECLARE_FUNCTION(execGetDistanceAlongSplineAtSplinePoint); \
	DECLARE_FUNCTION(execGetLocalLocationAndTangentAtSplinePoint); \
	DECLARE_FUNCTION(execGetLocationAndTangentAtSplinePoint); \
	DECLARE_FUNCTION(execGetTransformAtSplinePoint); \
	DECLARE_FUNCTION(execGetScaleAtSplinePoint); \
	DECLARE_FUNCTION(execGetRollAtSplinePoint); \
	DECLARE_FUNCTION(execGetRightVectorAtSplinePoint); \
	DECLARE_FUNCTION(execGetUpVectorAtSplinePoint); \
	DECLARE_FUNCTION(execGetRotationAtSplinePoint); \
	DECLARE_FUNCTION(execGetLeaveTangentAtSplinePoint); \
	DECLARE_FUNCTION(execGetArriveTangentAtSplinePoint); \
	DECLARE_FUNCTION(execGetTangentAtSplinePoint); \
	DECLARE_FUNCTION(execGetDirectionAtSplinePoint); \
	DECLARE_FUNCTION(execGetWorldLocationAtSplinePoint); \
	DECLARE_FUNCTION(execGetLocationAtSplinePoint); \
	DECLARE_FUNCTION(execGetNumberOfSplineSegments); \
	DECLARE_FUNCTION(execGetNumberOfSplinePoints); \
	DECLARE_FUNCTION(execSetSplinePointType); \
	DECLARE_FUNCTION(execGetSplinePointType); \
	DECLARE_FUNCTION(execSetScaleAtSplinePoint); \
	DECLARE_FUNCTION(execSetRotationAtSplinePoint); \
	DECLARE_FUNCTION(execSetUpVectorAtSplinePoint); \
	DECLARE_FUNCTION(execSetTangentsAtSplinePoint); \
	DECLARE_FUNCTION(execSetTangentAtSplinePoint); \
	DECLARE_FUNCTION(execSetWorldLocationAtSplinePoint); \
	DECLARE_FUNCTION(execSetLocationAtSplinePoint); \
	DECLARE_FUNCTION(execSetSplineLocalPoints); \
	DECLARE_FUNCTION(execSetSplineWorldPoints); \
	DECLARE_FUNCTION(execSetSplinePoints); \
	DECLARE_FUNCTION(execAddSplineLocalPoint); \
	DECLARE_FUNCTION(execAddSplineWorldPoint); \
	DECLARE_FUNCTION(execRemoveSplinePoint); \
	DECLARE_FUNCTION(execAddSplinePointAtIndex); \
	DECLARE_FUNCTION(execAddSplinePoint); \
	DECLARE_FUNCTION(execAddPoints); \
	DECLARE_FUNCTION(execAddPoint); \
	DECLARE_FUNCTION(execClearSplinePoints); \
	DECLARE_FUNCTION(execIsClosedLoop); \
	DECLARE_FUNCTION(execSetClosedLoopAtPosition); \
	DECLARE_FUNCTION(execSetClosedLoop); \
	DECLARE_FUNCTION(execSetDrawDebug); \
	DECLARE_FUNCTION(execSetTangentColor); \
	DECLARE_FUNCTION(execSetSelectedSplineSegmentColor); \
	DECLARE_FUNCTION(execSetUnselectedSplineSegmentColor); \
	DECLARE_FUNCTION(execGetVectorPropertyAtSplineInputKey); \
	DECLARE_FUNCTION(execGetFloatPropertyAtSplineInputKey); \
	DECLARE_FUNCTION(execGetDistanceAlongSplineAtSplineInputKey); \
	DECLARE_FUNCTION(execGetScaleAtSplineInputKey); \
	DECLARE_FUNCTION(execGetRollAtSplineInputKey); \
	DECLARE_FUNCTION(execGetTransformAtSplineInputKey); \
	DECLARE_FUNCTION(execGetRightVectorAtSplineInputKey); \
	DECLARE_FUNCTION(execGetUpVectorAtSplineInputKey); \
	DECLARE_FUNCTION(execGetRotationAtSplineInputKey); \
	DECLARE_FUNCTION(execGetDirectionAtSplineInputKey); \
	DECLARE_FUNCTION(execGetTangentAtSplineInputKey); \
	DECLARE_FUNCTION(execGetLocationAtSplineInputKey); \
	DECLARE_FUNCTION(execUpdateSpline);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_196_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_196_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USplineComponent, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_196_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSplineComponent(); \
	friend struct Z_Construct_UClass_USplineComponent_Statics; \
public: \
	DECLARE_CLASS(USplineComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USplineComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_196_ARCHIVESERIALIZER \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SplineCurves=NETFIELD_REP_START, \
		ReparamStepsPerSegment, \
		bStationaryEndpoints, \
		bSplineHasBeenEdited, \
		bInputSplinePointsToConstructionScript, \
		bClosedLoop, \
		bLoopPositionOverride, \
		LoopPosition, \
		DefaultUpVector, \
		NETFIELD_REP_END=DefaultUpVector	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_196_INCLASS \
private: \
	static void StaticRegisterNativesUSplineComponent(); \
	friend struct Z_Construct_UClass_USplineComponent_Statics; \
public: \
	DECLARE_CLASS(USplineComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USplineComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_196_ARCHIVESERIALIZER \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SplineCurves=NETFIELD_REP_START, \
		ReparamStepsPerSegment, \
		bStationaryEndpoints, \
		bSplineHasBeenEdited, \
		bInputSplinePointsToConstructionScript, \
		bClosedLoop, \
		bLoopPositionOverride, \
		LoopPosition, \
		DefaultUpVector, \
		NETFIELD_REP_END=DefaultUpVector	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_196_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USplineComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplineComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USplineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplineComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USplineComponent(USplineComponent&&); \
	NO_API USplineComponent(const USplineComponent&); \
public: \
	NO_API virtual ~USplineComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_196_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USplineComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USplineComponent(USplineComponent&&); \
	NO_API USplineComponent(const USplineComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USplineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplineComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplineComponent) \
	NO_API virtual ~USplineComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_193_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_196_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_196_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_196_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_196_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_196_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_196_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_196_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_196_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_196_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_196_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_196_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_196_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SplineComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USplineComponent>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_860_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSplineInstanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FSceneComponentInstanceData Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSplineInstanceData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h


#define FOREACH_ENUM_ESPLINEPOINTTYPE(op) \
	op(ESplinePointType::Linear) \
	op(ESplinePointType::Curve) \
	op(ESplinePointType::Constant) \
	op(ESplinePointType::CurveClamped) \
	op(ESplinePointType::CurveCustomTangent) 

namespace ESplinePointType { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ESplinePointType::Type>();

#define FOREACH_ENUM_ESPLINECOORDINATESPACE(op) \
	op(ESplineCoordinateSpace::Local) \
	op(ESplineCoordinateSpace::World) 

namespace ESplineCoordinateSpace { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ESplineCoordinateSpace::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
