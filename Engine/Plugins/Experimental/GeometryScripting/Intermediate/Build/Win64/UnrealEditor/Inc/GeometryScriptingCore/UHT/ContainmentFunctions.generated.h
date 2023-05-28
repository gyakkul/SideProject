// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/ContainmentFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
struct FGeometryScriptConvexDecompositionOptions;
struct FGeometryScriptConvexHullOptions;
struct FGeometryScriptMeshSelection;
struct FGeometryScriptSweptHullOptions;
#ifdef GEOMETRYSCRIPTINGCORE_ContainmentFunctions_generated_h
#error "ContainmentFunctions.generated.h already included, missing '#pragma once' in ContainmentFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_ContainmentFunctions_generated_h

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptConvexHullOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptConvexHullOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptSweptHullOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptSweptHullOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptConvexDecompositionOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptConvexDecompositionOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_90_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_90_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execComputeMeshConvexDecomposition); \
	DECLARE_FUNCTION(execComputeMeshSweptHull); \
	DECLARE_FUNCTION(execComputeMeshConvexHull);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execComputeMeshConvexDecomposition); \
	DECLARE_FUNCTION(execComputeMeshSweptHull); \
	DECLARE_FUNCTION(execComputeMeshConvexHull);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_90_ACCESSORS
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_90_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_ContainmentFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_ContainmentFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_ContainmentFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_ContainmentFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_90_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_ContainmentFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_ContainmentFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_ContainmentFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_ContainmentFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_90_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_ContainmentFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_ContainmentFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_ContainmentFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_ContainmentFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_ContainmentFunctions(UGeometryScriptLibrary_ContainmentFunctions&&); \
	NO_API UGeometryScriptLibrary_ContainmentFunctions(const UGeometryScriptLibrary_ContainmentFunctions&); \
public: \
	NO_API virtual ~UGeometryScriptLibrary_ContainmentFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_90_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_ContainmentFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_ContainmentFunctions(UGeometryScriptLibrary_ContainmentFunctions&&); \
	NO_API UGeometryScriptLibrary_ContainmentFunctions(const UGeometryScriptLibrary_ContainmentFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_ContainmentFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_ContainmentFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_ContainmentFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_ContainmentFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_87_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_90_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_90_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_90_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_90_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_90_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_90_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_90_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_90_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_90_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h_90_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_ContainmentFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ContainmentFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
