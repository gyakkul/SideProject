// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshVertexColorFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
struct FGeometryScriptColorFlags;
struct FGeometryScriptColorList;
struct FGeometryScriptMeshSelection;
struct FLinearColor;
#ifdef GEOMETRYSCRIPTINGCORE_MeshVertexColorFunctions_generated_h
#error "MeshVertexColorFunctions.generated.h already included, missing '#pragma once' in MeshVertexColorFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshVertexColorFunctions_generated_h

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_18_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConvertMeshVertexColorsLinearToSRGB); \
	DECLARE_FUNCTION(execConvertMeshVertexColorsSRGBToLinear); \
	DECLARE_FUNCTION(execGetMeshPerVertexColors); \
	DECLARE_FUNCTION(execSetMeshPerVertexColors); \
	DECLARE_FUNCTION(execSetMeshSelectionVertexColor); \
	DECLARE_FUNCTION(execSetMeshConstantVertexColor);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConvertMeshVertexColorsLinearToSRGB); \
	DECLARE_FUNCTION(execConvertMeshVertexColorsSRGBToLinear); \
	DECLARE_FUNCTION(execGetMeshPerVertexColors); \
	DECLARE_FUNCTION(execSetMeshPerVertexColors); \
	DECLARE_FUNCTION(execSetMeshSelectionVertexColor); \
	DECLARE_FUNCTION(execSetMeshConstantVertexColor);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_18_ACCESSORS
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshVertexColorFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshVertexColorFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshVertexColorFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshVertexColorFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshVertexColorFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshVertexColorFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshVertexColorFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshVertexColorFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshVertexColorFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshVertexColorFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshVertexColorFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshVertexColorFunctions(UGeometryScriptLibrary_MeshVertexColorFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshVertexColorFunctions(const UGeometryScriptLibrary_MeshVertexColorFunctions&); \
public: \
	NO_API virtual ~UGeometryScriptLibrary_MeshVertexColorFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshVertexColorFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshVertexColorFunctions(UGeometryScriptLibrary_MeshVertexColorFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshVertexColorFunctions(const UGeometryScriptLibrary_MeshVertexColorFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshVertexColorFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshVertexColorFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshVertexColorFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_MeshVertexColorFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_18_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_18_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_18_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_18_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_MeshVertexColorFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVertexColorFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
