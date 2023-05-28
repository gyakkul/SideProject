// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshTransformFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
struct FGeometryScriptMeshSelection;
#ifdef GEOMETRYSCRIPTINGCORE_MeshTransformFunctions_generated_h
#error "MeshTransformFunctions.generated.h already included, missing '#pragma once' in MeshTransformFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshTransformFunctions_generated_h

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h_17_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTranslatePivotToLocation); \
	DECLARE_FUNCTION(execScaleMeshSelection); \
	DECLARE_FUNCTION(execRotateMeshSelection); \
	DECLARE_FUNCTION(execTranslateMeshSelection); \
	DECLARE_FUNCTION(execTransformMeshSelection); \
	DECLARE_FUNCTION(execScaleMesh); \
	DECLARE_FUNCTION(execRotateMesh); \
	DECLARE_FUNCTION(execTranslateMesh); \
	DECLARE_FUNCTION(execTransformMesh);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTranslatePivotToLocation); \
	DECLARE_FUNCTION(execScaleMeshSelection); \
	DECLARE_FUNCTION(execRotateMeshSelection); \
	DECLARE_FUNCTION(execTranslateMeshSelection); \
	DECLARE_FUNCTION(execTransformMeshSelection); \
	DECLARE_FUNCTION(execScaleMesh); \
	DECLARE_FUNCTION(execRotateMesh); \
	DECLARE_FUNCTION(execTranslateMesh); \
	DECLARE_FUNCTION(execTransformMesh);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h_17_ACCESSORS
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshTransformFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshTransformFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshTransformFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshTransformFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshTransformFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshTransformFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshTransformFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshTransformFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshTransformFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshTransformFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshTransformFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshTransformFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshTransformFunctions(UGeometryScriptLibrary_MeshTransformFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshTransformFunctions(const UGeometryScriptLibrary_MeshTransformFunctions&); \
public: \
	NO_API virtual ~UGeometryScriptLibrary_MeshTransformFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshTransformFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshTransformFunctions(UGeometryScriptLibrary_MeshTransformFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshTransformFunctions(const UGeometryScriptLibrary_MeshTransformFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshTransformFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshTransformFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshTransformFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_MeshTransformFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h_17_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h_17_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h_17_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_MeshTransformFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
