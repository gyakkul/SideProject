// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/SceneUtilityFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UDynamicMeshPool;
class UGeometryScriptDebug;
class UMaterialInterface;
class UObject;
class UPrimitiveComponent;
class USceneComponent;
enum class EGeometryScriptOutcomePins : uint8;
struct FGeometryScriptCopyMeshFromComponentOptions;
#ifdef GEOMETRYSCRIPTINGCORE_SceneUtilityFunctions_generated_h
#error "SceneUtilityFunctions.generated.h already included, missing '#pragma once' in SceneUtilityFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_SceneUtilityFunctions_generated_h

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptCopyMeshFromComponentOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_34_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCopyCollisionMeshesFromObject); \
	DECLARE_FUNCTION(execSetComponentMaterialList); \
	DECLARE_FUNCTION(execCopyMeshFromComponent); \
	DECLARE_FUNCTION(execCreateDynamicMeshPool);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCopyCollisionMeshesFromObject); \
	DECLARE_FUNCTION(execSetComponentMaterialList); \
	DECLARE_FUNCTION(execCopyMeshFromComponent); \
	DECLARE_FUNCTION(execCreateDynamicMeshPool);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_34_ACCESSORS
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_SceneUtilityFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_SceneUtilityFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_SceneUtilityFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_SceneUtilityFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_SceneUtilityFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_SceneUtilityFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_SceneUtilityFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_SceneUtilityFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_SceneUtilityFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_SceneUtilityFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_SceneUtilityFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_SceneUtilityFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_SceneUtilityFunctions(UGeometryScriptLibrary_SceneUtilityFunctions&&); \
	NO_API UGeometryScriptLibrary_SceneUtilityFunctions(const UGeometryScriptLibrary_SceneUtilityFunctions&); \
public: \
	NO_API virtual ~UGeometryScriptLibrary_SceneUtilityFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_SceneUtilityFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_SceneUtilityFunctions(UGeometryScriptLibrary_SceneUtilityFunctions&&); \
	NO_API UGeometryScriptLibrary_SceneUtilityFunctions(const UGeometryScriptLibrary_SceneUtilityFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_SceneUtilityFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_SceneUtilityFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_SceneUtilityFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_SceneUtilityFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_31_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_34_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_34_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_34_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_34_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_34_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_34_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_SceneUtilityFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
