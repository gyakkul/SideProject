// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshNormalsFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
struct FGeometryScriptCalculateNormalsOptions;
struct FGeometryScriptSplitNormalsOptions;
struct FGeometryScriptTangentsOptions;
struct FGeometryScriptTriangle;
struct FGeometryScriptVectorList;
#ifdef GEOMETRYSCRIPTINGCORE_MeshNormalsFunctions_generated_h
#error "MeshNormalsFunctions.generated.h already included, missing '#pragma once' in MeshNormalsFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshNormalsFunctions_generated_h

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptCalculateNormalsOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptCalculateNormalsOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptSplitNormalsOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptSplitNormalsOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptTangentsOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptTangentsOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_70_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_70_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateVertexNormal); \
	DECLARE_FUNCTION(execGetMeshPerVertexTangents); \
	DECLARE_FUNCTION(execSetMeshPerVertexTangents); \
	DECLARE_FUNCTION(execComputeTangents); \
	DECLARE_FUNCTION(execDiscardTangents); \
	DECLARE_FUNCTION(execGetMeshHasTangents); \
	DECLARE_FUNCTION(execGetMeshPerVertexNormals); \
	DECLARE_FUNCTION(execSetMeshPerVertexNormals); \
	DECLARE_FUNCTION(execSetMeshTriangleNormals); \
	DECLARE_FUNCTION(execComputeSplitNormals); \
	DECLARE_FUNCTION(execRecomputeNormals); \
	DECLARE_FUNCTION(execSetPerFaceNormals); \
	DECLARE_FUNCTION(execSetPerVertexNormals); \
	DECLARE_FUNCTION(execAutoRepairNormals); \
	DECLARE_FUNCTION(execFlipNormals);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateVertexNormal); \
	DECLARE_FUNCTION(execGetMeshPerVertexTangents); \
	DECLARE_FUNCTION(execSetMeshPerVertexTangents); \
	DECLARE_FUNCTION(execComputeTangents); \
	DECLARE_FUNCTION(execDiscardTangents); \
	DECLARE_FUNCTION(execGetMeshHasTangents); \
	DECLARE_FUNCTION(execGetMeshPerVertexNormals); \
	DECLARE_FUNCTION(execSetMeshPerVertexNormals); \
	DECLARE_FUNCTION(execSetMeshTriangleNormals); \
	DECLARE_FUNCTION(execComputeSplitNormals); \
	DECLARE_FUNCTION(execRecomputeNormals); \
	DECLARE_FUNCTION(execSetPerFaceNormals); \
	DECLARE_FUNCTION(execSetPerVertexNormals); \
	DECLARE_FUNCTION(execAutoRepairNormals); \
	DECLARE_FUNCTION(execFlipNormals);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_70_ACCESSORS
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshNormalsFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshNormalsFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshNormalsFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_70_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshNormalsFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshNormalsFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshNormalsFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_70_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshNormalsFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshNormalsFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshNormalsFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshNormalsFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshNormalsFunctions(UGeometryScriptLibrary_MeshNormalsFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshNormalsFunctions(const UGeometryScriptLibrary_MeshNormalsFunctions&); \
public: \
	NO_API virtual ~UGeometryScriptLibrary_MeshNormalsFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshNormalsFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshNormalsFunctions(UGeometryScriptLibrary_MeshNormalsFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshNormalsFunctions(const UGeometryScriptLibrary_MeshNormalsFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshNormalsFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshNormalsFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshNormalsFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_MeshNormalsFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_67_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_70_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_70_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_70_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_70_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_70_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_70_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_70_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_70_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_70_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_MeshNormalsFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshNormalsFunctions_h


#define FOREACH_ENUM_EGEOMETRYSCRIPTTANGENTTYPES(op) \
	op(EGeometryScriptTangentTypes::FastMikkT) \
	op(EGeometryScriptTangentTypes::PerTriangle) 

enum class EGeometryScriptTangentTypes : uint8;
template<> struct TIsUEnumClass<EGeometryScriptTangentTypes> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptTangentTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
