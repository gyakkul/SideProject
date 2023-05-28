// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshPolygroupFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
struct FGeometryScriptGroupLayer;
struct FGeometryScriptIndexList;
struct FGeometryScriptMeshSelection;
#ifdef GEOMETRYSCRIPTINGCORE_MeshPolygroupFunctions_generated_h
#error "MeshPolygroupFunctions.generated.h already included, missing '#pragma once' in MeshPolygroupFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshPolygroupFunctions_generated_h

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_17_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPolygroupForMeshSelection); \
	DECLARE_FUNCTION(execGetTrianglesInPolygroup); \
	DECLARE_FUNCTION(execGetPolygroupIDsInMesh); \
	DECLARE_FUNCTION(execGetAllTrianglePolygroupIDs); \
	DECLARE_FUNCTION(execDeleteTrianglesInPolygroup); \
	DECLARE_FUNCTION(execGetTrianglePolygroupID); \
	DECLARE_FUNCTION(execComputePolygroupsFromPolygonDetection); \
	DECLARE_FUNCTION(execComputePolygroupsFromAngleThreshold); \
	DECLARE_FUNCTION(execConvertComponentsToPolygroups); \
	DECLARE_FUNCTION(execConvertUVIslandsToPolygroups); \
	DECLARE_FUNCTION(execCopyPolygroupsLayer); \
	DECLARE_FUNCTION(execClearPolygroups); \
	DECLARE_FUNCTION(execSetNumExtendedPolygroupLayers); \
	DECLARE_FUNCTION(execEnablePolygroups);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPolygroupForMeshSelection); \
	DECLARE_FUNCTION(execGetTrianglesInPolygroup); \
	DECLARE_FUNCTION(execGetPolygroupIDsInMesh); \
	DECLARE_FUNCTION(execGetAllTrianglePolygroupIDs); \
	DECLARE_FUNCTION(execDeleteTrianglesInPolygroup); \
	DECLARE_FUNCTION(execGetTrianglePolygroupID); \
	DECLARE_FUNCTION(execComputePolygroupsFromPolygonDetection); \
	DECLARE_FUNCTION(execComputePolygroupsFromAngleThreshold); \
	DECLARE_FUNCTION(execConvertComponentsToPolygroups); \
	DECLARE_FUNCTION(execConvertUVIslandsToPolygroups); \
	DECLARE_FUNCTION(execCopyPolygroupsLayer); \
	DECLARE_FUNCTION(execClearPolygroups); \
	DECLARE_FUNCTION(execSetNumExtendedPolygroupLayers); \
	DECLARE_FUNCTION(execEnablePolygroups);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_17_ACCESSORS
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshPolygroupFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshPolygroupFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshPolygroupFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshPolygroupFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshPolygroupFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshPolygroupFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshPolygroupFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshPolygroupFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshPolygroupFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshPolygroupFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshPolygroupFunctions(UGeometryScriptLibrary_MeshPolygroupFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshPolygroupFunctions(const UGeometryScriptLibrary_MeshPolygroupFunctions&); \
public: \
	NO_API virtual ~UGeometryScriptLibrary_MeshPolygroupFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshPolygroupFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshPolygroupFunctions(UGeometryScriptLibrary_MeshPolygroupFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshPolygroupFunctions(const UGeometryScriptLibrary_MeshPolygroupFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshPolygroupFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshPolygroupFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshPolygroupFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_MeshPolygroupFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_17_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_17_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_17_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_MeshPolygroupFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshPolygroupFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
