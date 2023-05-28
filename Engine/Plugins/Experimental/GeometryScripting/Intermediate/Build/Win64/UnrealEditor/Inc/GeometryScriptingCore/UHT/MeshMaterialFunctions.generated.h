// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshMaterialFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
class UMaterialInterface;
struct FGeometryScriptGroupLayer;
struct FGeometryScriptIndexList;
struct FGeometryScriptMeshSelection;
#ifdef GEOMETRYSCRIPTINGCORE_MeshMaterialFunctions_generated_h
#error "MeshMaterialFunctions.generated.h already included, missing '#pragma once' in MeshMaterialFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshMaterialFunctions_generated_h

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_17_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCompactMaterialIDs); \
	DECLARE_FUNCTION(execDeleteTrianglesByMaterialID); \
	DECLARE_FUNCTION(execSetPolygroupMaterialID); \
	DECLARE_FUNCTION(execSetMaterialIDForMeshSelection); \
	DECLARE_FUNCTION(execSetMaterialIDOnTriangles); \
	DECLARE_FUNCTION(execSetAllTriangleMaterialIDs); \
	DECLARE_FUNCTION(execSetTriangleMaterialID); \
	DECLARE_FUNCTION(execGetTrianglesByMaterialID); \
	DECLARE_FUNCTION(execGetAllTriangleMaterialIDs); \
	DECLARE_FUNCTION(execGetMaterialIDsOfTriangles); \
	DECLARE_FUNCTION(execGetTriangleMaterialID); \
	DECLARE_FUNCTION(execRemapMaterialIDs); \
	DECLARE_FUNCTION(execClearMaterialIDs); \
	DECLARE_FUNCTION(execEnableMaterialIDs); \
	DECLARE_FUNCTION(execGetMaxMaterialID);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCompactMaterialIDs); \
	DECLARE_FUNCTION(execDeleteTrianglesByMaterialID); \
	DECLARE_FUNCTION(execSetPolygroupMaterialID); \
	DECLARE_FUNCTION(execSetMaterialIDForMeshSelection); \
	DECLARE_FUNCTION(execSetMaterialIDOnTriangles); \
	DECLARE_FUNCTION(execSetAllTriangleMaterialIDs); \
	DECLARE_FUNCTION(execSetTriangleMaterialID); \
	DECLARE_FUNCTION(execGetTrianglesByMaterialID); \
	DECLARE_FUNCTION(execGetAllTriangleMaterialIDs); \
	DECLARE_FUNCTION(execGetMaterialIDsOfTriangles); \
	DECLARE_FUNCTION(execGetTriangleMaterialID); \
	DECLARE_FUNCTION(execRemapMaterialIDs); \
	DECLARE_FUNCTION(execClearMaterialIDs); \
	DECLARE_FUNCTION(execEnableMaterialIDs); \
	DECLARE_FUNCTION(execGetMaxMaterialID);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_17_ACCESSORS
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshMaterialFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshMaterialFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshMaterialFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshMaterialFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshMaterialFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshMaterialFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshMaterialFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshMaterialFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshMaterialFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshMaterialFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshMaterialFunctions(UGeometryScriptLibrary_MeshMaterialFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshMaterialFunctions(const UGeometryScriptLibrary_MeshMaterialFunctions&); \
public: \
	NO_API virtual ~UGeometryScriptLibrary_MeshMaterialFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshMaterialFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshMaterialFunctions(UGeometryScriptLibrary_MeshMaterialFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshMaterialFunctions(const UGeometryScriptLibrary_MeshMaterialFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshMaterialFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshMaterialFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshMaterialFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_MeshMaterialFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_17_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_17_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_17_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_MeshMaterialFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
