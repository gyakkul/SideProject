// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicMeshActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UDynamicMeshComponent;
class UDynamicMeshPool;
#ifdef GEOMETRYFRAMEWORK_DynamicMeshActor_generated_h
#error "DynamicMeshActor.generated.h already included, missing '#pragma once' in DynamicMeshActor.h"
#endif
#define GEOMETRYFRAMEWORK_DynamicMeshActor_generated_h

#define FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_SPARSE_DATA
#define FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFreeAllComputeMeshes); \
	DECLARE_FUNCTION(execReleaseAllComputeMeshes); \
	DECLARE_FUNCTION(execReleaseComputeMesh); \
	DECLARE_FUNCTION(execAllocateComputeMesh); \
	DECLARE_FUNCTION(execGetComputeMeshPool); \
	DECLARE_FUNCTION(execGetDynamicMeshComponent);


#define FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFreeAllComputeMeshes); \
	DECLARE_FUNCTION(execReleaseAllComputeMeshes); \
	DECLARE_FUNCTION(execReleaseComputeMesh); \
	DECLARE_FUNCTION(execAllocateComputeMesh); \
	DECLARE_FUNCTION(execGetComputeMeshPool); \
	DECLARE_FUNCTION(execGetDynamicMeshComponent);


#define FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_ACCESSORS
#define FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADynamicMeshActor(); \
	friend struct Z_Construct_UClass_ADynamicMeshActor_Statics; \
public: \
	DECLARE_CLASS(ADynamicMeshActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryFramework"), NO_API) \
	DECLARE_SERIALIZER(ADynamicMeshActor)


#define FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesADynamicMeshActor(); \
	friend struct Z_Construct_UClass_ADynamicMeshActor_Statics; \
public: \
	DECLARE_CLASS(ADynamicMeshActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryFramework"), NO_API) \
	DECLARE_SERIALIZER(ADynamicMeshActor)


#define FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADynamicMeshActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADynamicMeshActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADynamicMeshActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADynamicMeshActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADynamicMeshActor(ADynamicMeshActor&&); \
	NO_API ADynamicMeshActor(const ADynamicMeshActor&); \
public: \
	NO_API virtual ~ADynamicMeshActor();


#define FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADynamicMeshActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADynamicMeshActor(ADynamicMeshActor&&); \
	NO_API ADynamicMeshActor(const ADynamicMeshActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADynamicMeshActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADynamicMeshActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADynamicMeshActor) \
	NO_API virtual ~ADynamicMeshActor();


#define FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_15_PROLOG
#define FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_INCLASS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DynamicMeshActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYFRAMEWORK_API UClass* StaticClass<class ADynamicMeshActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
