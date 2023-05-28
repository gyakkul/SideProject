// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshSpatialFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
enum class EGeometryScriptContainmentOutcomePins : uint8;
enum class EGeometryScriptSearchOutcomePins : uint8;
struct FGeometryScriptDynamicMeshBVH;
struct FGeometryScriptRayHitResult;
struct FGeometryScriptSpatialQueryOptions;
struct FGeometryScriptTrianglePoint;
#ifdef GEOMETRYSCRIPTINGCORE_MeshSpatialFunctions_generated_h
#error "MeshSpatialFunctions.generated.h already included, missing '#pragma once' in MeshSpatialFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshSpatialFunctions_generated_h

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptSpatialQueryOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptSpatialQueryOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptRayHitResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptRayHitResult>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_58_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_58_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsPointInsideMesh); \
	DECLARE_FUNCTION(execFindNearestRayIntersectionWithMesh); \
	DECLARE_FUNCTION(execFindNearestPointOnMesh); \
	DECLARE_FUNCTION(execRebuildBVHForMesh); \
	DECLARE_FUNCTION(execIsBVHValidForMesh); \
	DECLARE_FUNCTION(execBuildBVHForMesh); \
	DECLARE_FUNCTION(execResetBVH);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsPointInsideMesh); \
	DECLARE_FUNCTION(execFindNearestRayIntersectionWithMesh); \
	DECLARE_FUNCTION(execFindNearestPointOnMesh); \
	DECLARE_FUNCTION(execRebuildBVHForMesh); \
	DECLARE_FUNCTION(execIsBVHValidForMesh); \
	DECLARE_FUNCTION(execBuildBVHForMesh); \
	DECLARE_FUNCTION(execResetBVH);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_58_ACCESSORS
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshSpatial(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshSpatial, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshSpatial)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_58_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshSpatial(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshSpatial_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshSpatial, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshSpatial)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshSpatial(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshSpatial) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshSpatial); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshSpatial); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshSpatial(UGeometryScriptLibrary_MeshSpatial&&); \
	NO_API UGeometryScriptLibrary_MeshSpatial(const UGeometryScriptLibrary_MeshSpatial&); \
public: \
	NO_API virtual ~UGeometryScriptLibrary_MeshSpatial();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshSpatial(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshSpatial(UGeometryScriptLibrary_MeshSpatial&&); \
	NO_API UGeometryScriptLibrary_MeshSpatial(const UGeometryScriptLibrary_MeshSpatial&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshSpatial); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshSpatial); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshSpatial) \
	NO_API virtual ~UGeometryScriptLibrary_MeshSpatial();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_55_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_58_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_58_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_58_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_58_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_58_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_58_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_58_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_58_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_58_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_MeshSpatial>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSpatialFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
