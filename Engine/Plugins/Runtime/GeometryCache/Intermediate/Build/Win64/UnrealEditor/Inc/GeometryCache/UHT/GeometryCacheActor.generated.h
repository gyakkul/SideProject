// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryCacheActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGeometryCacheComponent;
#ifdef GEOMETRYCACHE_GeometryCacheActor_generated_h
#error "GeometryCacheActor.generated.h already included, missing '#pragma once' in GeometryCacheActor.h"
#endif
#define GEOMETRYCACHE_GeometryCacheActor_generated_h

#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_14_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGeometryCacheComponent);


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGeometryCacheComponent);


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_14_ACCESSORS
#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGeometryCacheActor(); \
	friend struct Z_Construct_UClass_AGeometryCacheActor_Statics; \
public: \
	DECLARE_CLASS(AGeometryCacheActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryCache"), NO_API) \
	DECLARE_SERIALIZER(AGeometryCacheActor)


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAGeometryCacheActor(); \
	friend struct Z_Construct_UClass_AGeometryCacheActor_Statics; \
public: \
	DECLARE_CLASS(AGeometryCacheActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryCache"), NO_API) \
	DECLARE_SERIALIZER(AGeometryCacheActor)


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGeometryCacheActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGeometryCacheActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGeometryCacheActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGeometryCacheActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGeometryCacheActor(AGeometryCacheActor&&); \
	NO_API AGeometryCacheActor(const AGeometryCacheActor&); \
public: \
	NO_API virtual ~AGeometryCacheActor();


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGeometryCacheActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGeometryCacheActor(AGeometryCacheActor&&); \
	NO_API AGeometryCacheActor(const AGeometryCacheActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGeometryCacheActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGeometryCacheActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGeometryCacheActor) \
	NO_API virtual ~AGeometryCacheActor();


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_11_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_14_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_14_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_14_ACCESSORS \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_14_INCLASS \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_14_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_14_ACCESSORS \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GeometryCacheActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYCACHE_API UClass* StaticClass<class AGeometryCacheActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
