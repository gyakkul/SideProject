// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryCacheComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGeometryCache;
struct FLinearColor;
#ifdef GEOMETRYCACHE_GeometryCacheComponent_generated_h
#error "GeometryCacheComponent.generated.h already included, missing '#pragma once' in GeometryCacheComponent.h"
#endif
#define GEOMETRYCACHE_GeometryCacheComponent_generated_h

#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTrackRenderData_Statics; \
	GEOMETRYCACHE_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYCACHE_API UScriptStruct* StaticStruct<struct FTrackRenderData>();

#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_37_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTickAtThisTime); \
	DECLARE_FUNCTION(execGetWireframeOverrideColor); \
	DECLARE_FUNCTION(execSetWireframeOverrideColor); \
	DECLARE_FUNCTION(execGetOverrideWireframeColor); \
	DECLARE_FUNCTION(execSetOverrideWireframeColor); \
	DECLARE_FUNCTION(execGetNumberOfFrames); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetPlaybackDirection); \
	DECLARE_FUNCTION(execGetAnimationTime); \
	DECLARE_FUNCTION(execSetStartTimeOffset); \
	DECLARE_FUNCTION(execGetStartTimeOffset); \
	DECLARE_FUNCTION(execSetGeometryCache); \
	DECLARE_FUNCTION(execSetMotionVectorScale); \
	DECLARE_FUNCTION(execGetMotionVectorScale); \
	DECLARE_FUNCTION(execSetPlaybackSpeed); \
	DECLARE_FUNCTION(execGetPlaybackSpeed); \
	DECLARE_FUNCTION(execSetExtrapolateFrames); \
	DECLARE_FUNCTION(execIsExtrapolatingFrames); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execIsPlayingReversed); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlayReversedFromEnd); \
	DECLARE_FUNCTION(execPlayReversed); \
	DECLARE_FUNCTION(execPlayFromStart); \
	DECLARE_FUNCTION(execPlay);


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTickAtThisTime); \
	DECLARE_FUNCTION(execGetWireframeOverrideColor); \
	DECLARE_FUNCTION(execSetWireframeOverrideColor); \
	DECLARE_FUNCTION(execGetOverrideWireframeColor); \
	DECLARE_FUNCTION(execSetOverrideWireframeColor); \
	DECLARE_FUNCTION(execGetNumberOfFrames); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetPlaybackDirection); \
	DECLARE_FUNCTION(execGetAnimationTime); \
	DECLARE_FUNCTION(execSetStartTimeOffset); \
	DECLARE_FUNCTION(execGetStartTimeOffset); \
	DECLARE_FUNCTION(execSetGeometryCache); \
	DECLARE_FUNCTION(execSetMotionVectorScale); \
	DECLARE_FUNCTION(execGetMotionVectorScale); \
	DECLARE_FUNCTION(execSetPlaybackSpeed); \
	DECLARE_FUNCTION(execGetPlaybackSpeed); \
	DECLARE_FUNCTION(execSetExtrapolateFrames); \
	DECLARE_FUNCTION(execIsExtrapolatingFrames); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execIsPlayingReversed); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlayReversedFromEnd); \
	DECLARE_FUNCTION(execPlayReversed); \
	DECLARE_FUNCTION(execPlayFromStart); \
	DECLARE_FUNCTION(execPlay);


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_37_ACCESSORS
#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryCacheComponent(); \
	friend struct Z_Construct_UClass_UGeometryCacheComponent_Statics; \
public: \
	DECLARE_CLASS(UGeometryCacheComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryCache"), NO_API) \
	DECLARE_SERIALIZER(UGeometryCacheComponent)


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryCacheComponent(); \
	friend struct Z_Construct_UClass_UGeometryCacheComponent_Statics; \
public: \
	DECLARE_CLASS(UGeometryCacheComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryCache"), NO_API) \
	DECLARE_SERIALIZER(UGeometryCacheComponent)


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryCacheComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCacheComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryCacheComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCacheComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryCacheComponent(UGeometryCacheComponent&&); \
	NO_API UGeometryCacheComponent(const UGeometryCacheComponent&); \
public: \
	NO_API virtual ~UGeometryCacheComponent();


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryCacheComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryCacheComponent(UGeometryCacheComponent&&); \
	NO_API UGeometryCacheComponent(const UGeometryCacheComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryCacheComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCacheComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCacheComponent) \
	NO_API virtual ~UGeometryCacheComponent();


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_34_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_37_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_37_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_37_ACCESSORS \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_37_INCLASS \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_37_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_37_ACCESSORS \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_37_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GeometryCacheComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYCACHE_API UClass* StaticClass<class UGeometryCacheComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
