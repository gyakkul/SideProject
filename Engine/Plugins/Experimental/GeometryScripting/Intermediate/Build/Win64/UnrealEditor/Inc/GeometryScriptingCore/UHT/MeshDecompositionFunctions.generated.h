// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshDecompositionFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UDynamicMeshPool;
class UGeometryScriptDebug;
struct FGeometryScriptGroupLayer;
struct FGeometryScriptIndexList;
struct FGeometryScriptMeshSelection;
#ifdef GEOMETRYSCRIPTINGCORE_MeshDecompositionFunctions_generated_h
#error "MeshDecompositionFunctions.generated.h already included, missing '#pragma once' in MeshDecompositionFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshDecompositionFunctions_generated_h

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDecompositionFunctions_h_17_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDecompositionFunctions_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCopyMeshToMesh); \
	DECLARE_FUNCTION(execCopyMeshSelectionToMesh); \
	DECLARE_FUNCTION(execGetSubMeshFromMesh); \
	DECLARE_FUNCTION(execSplitMeshByPolygroups); \
	DECLARE_FUNCTION(execSplitMeshByMaterialIDs); \
	DECLARE_FUNCTION(execSplitMeshByComponents);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDecompositionFunctions_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCopyMeshToMesh); \
	DECLARE_FUNCTION(execCopyMeshSelectionToMesh); \
	DECLARE_FUNCTION(execGetSubMeshFromMesh); \
	DECLARE_FUNCTION(execSplitMeshByPolygroups); \
	DECLARE_FUNCTION(execSplitMeshByMaterialIDs); \
	DECLARE_FUNCTION(execSplitMeshByComponents);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDecompositionFunctions_h_17_ACCESSORS
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDecompositionFunctions_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshDecompositionFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshDecompositionFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshDecompositionFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshDecompositionFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDecompositionFunctions_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshDecompositionFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshDecompositionFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshDecompositionFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshDecompositionFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDecompositionFunctions_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshDecompositionFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshDecompositionFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshDecompositionFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshDecompositionFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshDecompositionFunctions(UGeometryScriptLibrary_MeshDecompositionFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshDecompositionFunctions(const UGeometryScriptLibrary_MeshDecompositionFunctions&); \
public: \
	NO_API virtual ~UGeometryScriptLibrary_MeshDecompositionFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDecompositionFunctions_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshDecompositionFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshDecompositionFunctions(UGeometryScriptLibrary_MeshDecompositionFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshDecompositionFunctions(const UGeometryScriptLibrary_MeshDecompositionFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshDecompositionFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshDecompositionFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshDecompositionFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_MeshDecompositionFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDecompositionFunctions_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDecompositionFunctions_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDecompositionFunctions_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDecompositionFunctions_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDecompositionFunctions_h_17_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDecompositionFunctions_h_17_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDecompositionFunctions_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDecompositionFunctions_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDecompositionFunctions_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDecompositionFunctions_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDecompositionFunctions_h_17_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDecompositionFunctions_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDecompositionFunctions_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_MeshDecompositionFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDecompositionFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
