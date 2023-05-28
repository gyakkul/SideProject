// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryCollection/GeometryCollectionActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef GEOMETRYCOLLECTIONENGINE_GeometryCollectionActor_generated_h
#error "GeometryCollectionActor.generated.h already included, missing '#pragma once' in GeometryCollectionActor.h"
#endif
#define GEOMETRYCOLLECTIONENGINE_GeometryCollectionActor_generated_h

#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_21_SPARSE_DATA
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRaycastSingle);


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRaycastSingle);


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_21_ACCESSORS
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGeometryCollectionActor(); \
	friend struct Z_Construct_UClass_AGeometryCollectionActor_Statics; \
public: \
	DECLARE_CLASS(AGeometryCollectionActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryCollectionEngine"), NO_API) \
	DECLARE_SERIALIZER(AGeometryCollectionActor)


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAGeometryCollectionActor(); \
	friend struct Z_Construct_UClass_AGeometryCollectionActor_Statics; \
public: \
	DECLARE_CLASS(AGeometryCollectionActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryCollectionEngine"), NO_API) \
	DECLARE_SERIALIZER(AGeometryCollectionActor)


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGeometryCollectionActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGeometryCollectionActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGeometryCollectionActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGeometryCollectionActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGeometryCollectionActor(AGeometryCollectionActor&&); \
	NO_API AGeometryCollectionActor(const AGeometryCollectionActor&); \
public: \
	NO_API virtual ~AGeometryCollectionActor();


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGeometryCollectionActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGeometryCollectionActor(AGeometryCollectionActor&&); \
	NO_API AGeometryCollectionActor(const AGeometryCollectionActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGeometryCollectionActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGeometryCollectionActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGeometryCollectionActor) \
	NO_API virtual ~AGeometryCollectionActor();


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_18_PROLOG
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_21_INCLASS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GeometryCollectionActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<class AGeometryCollectionActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
