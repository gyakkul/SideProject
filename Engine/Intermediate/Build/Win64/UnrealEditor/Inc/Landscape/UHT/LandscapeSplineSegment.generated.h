// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeSplineSegment.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_LandscapeSplineSegment_generated_h
#error "LandscapeSplineSegment.generated.h already included, missing '#pragma once' in LandscapeSplineSegment.h"
#endif
#define LANDSCAPE_LandscapeSplineSegment_generated_h

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeSplineInterpPoint>();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeSplineSegmentConnection>();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_132_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeSplineMeshEntry>();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_190_SPARSE_DATA
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_190_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_190_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_190_ACCESSORS
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_190_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeSplineSegment, LANDSCAPE_API)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_190_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeSplineSegment(); \
	friend struct Z_Construct_UClass_ULandscapeSplineSegment_Statics; \
public: \
	DECLARE_CLASS(ULandscapeSplineSegment, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeSplineSegment) \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_190_ARCHIVESERIALIZER \
	DECLARE_WITHIN(ULandscapeSplinesComponent)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_190_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeSplineSegment(); \
	friend struct Z_Construct_UClass_ULandscapeSplineSegment_Statics; \
public: \
	DECLARE_CLASS(ULandscapeSplineSegment, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeSplineSegment) \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_190_ARCHIVESERIALIZER \
	DECLARE_WITHIN(ULandscapeSplinesComponent)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_190_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeSplineSegment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeSplineSegment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeSplineSegment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeSplineSegment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ULandscapeSplineSegment(ULandscapeSplineSegment&&); \
	LANDSCAPE_API ULandscapeSplineSegment(const ULandscapeSplineSegment&); \
public: \
	LANDSCAPE_API virtual ~ULandscapeSplineSegment();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_190_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeSplineSegment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ULandscapeSplineSegment(ULandscapeSplineSegment&&); \
	LANDSCAPE_API ULandscapeSplineSegment(const ULandscapeSplineSegment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeSplineSegment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeSplineSegment); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeSplineSegment) \
	LANDSCAPE_API virtual ~ULandscapeSplineSegment();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_187_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_190_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_190_SPARSE_DATA \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_190_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_190_ACCESSORS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_190_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_190_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_190_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_190_SPARSE_DATA \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_190_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_190_ACCESSORS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_190_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_190_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LandscapeSplineSegment."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ULandscapeSplineSegment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h


#define FOREACH_ENUM_LANDSCAPESPLINEMESHORIENTATION(op) \
	op(LSMO_XUp) \
	op(LSMO_YUp) 

enum LandscapeSplineMeshOrientation : int;
template<> LANDSCAPE_API UEnum* StaticEnum<LandscapeSplineMeshOrientation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
