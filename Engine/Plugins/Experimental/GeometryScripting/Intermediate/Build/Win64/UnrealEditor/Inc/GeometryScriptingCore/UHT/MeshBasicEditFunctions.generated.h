// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshBasicEditFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
struct FGeometryScriptAppendMeshOptions;
struct FGeometryScriptIndexList;
struct FGeometryScriptMeshSelection;
struct FGeometryScriptSimpleMeshBuffers;
struct FGeometryScriptTriangleList;
struct FGeometryScriptVectorList;
#ifdef GEOMETRYSCRIPTINGCORE_MeshBasicEditFunctions_generated_h
#error "MeshBasicEditFunctions.generated.h already included, missing '#pragma once' in MeshBasicEditFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshBasicEditFunctions_generated_h

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptSimpleMeshBuffers_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptSimpleMeshBuffers>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptAppendMeshOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptAppendMeshOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_92_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_92_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAppendBuffersToMesh); \
	DECLARE_FUNCTION(execAppendMeshRepeated); \
	DECLARE_FUNCTION(execAppendMeshTransformed); \
	DECLARE_FUNCTION(execAppendMesh); \
	DECLARE_FUNCTION(execDeleteSelectedTrianglesFromMesh); \
	DECLARE_FUNCTION(execDeleteTrianglesFromMesh); \
	DECLARE_FUNCTION(execDeleteTriangleFromMesh); \
	DECLARE_FUNCTION(execAddTrianglesToMesh); \
	DECLARE_FUNCTION(execAddTriangleToMesh); \
	DECLARE_FUNCTION(execDeleteVerticesFromMesh); \
	DECLARE_FUNCTION(execDeleteVertexFromMesh); \
	DECLARE_FUNCTION(execAddVerticesToMesh); \
	DECLARE_FUNCTION(execAddVertexToMesh); \
	DECLARE_FUNCTION(execSetAllMeshVertexPositions); \
	DECLARE_FUNCTION(execSetVertexPosition); \
	DECLARE_FUNCTION(execDiscardMeshAttributes);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAppendBuffersToMesh); \
	DECLARE_FUNCTION(execAppendMeshRepeated); \
	DECLARE_FUNCTION(execAppendMeshTransformed); \
	DECLARE_FUNCTION(execAppendMesh); \
	DECLARE_FUNCTION(execDeleteSelectedTrianglesFromMesh); \
	DECLARE_FUNCTION(execDeleteTrianglesFromMesh); \
	DECLARE_FUNCTION(execDeleteTriangleFromMesh); \
	DECLARE_FUNCTION(execAddTrianglesToMesh); \
	DECLARE_FUNCTION(execAddTriangleToMesh); \
	DECLARE_FUNCTION(execDeleteVerticesFromMesh); \
	DECLARE_FUNCTION(execDeleteVertexFromMesh); \
	DECLARE_FUNCTION(execAddVerticesToMesh); \
	DECLARE_FUNCTION(execAddVertexToMesh); \
	DECLARE_FUNCTION(execSetAllMeshVertexPositions); \
	DECLARE_FUNCTION(execSetVertexPosition); \
	DECLARE_FUNCTION(execDiscardMeshAttributes);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_92_ACCESSORS
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_92_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshBasicEditFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshBasicEditFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshBasicEditFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_92_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshBasicEditFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshBasicEditFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshBasicEditFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshBasicEditFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_92_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshBasicEditFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshBasicEditFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshBasicEditFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshBasicEditFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshBasicEditFunctions(UGeometryScriptLibrary_MeshBasicEditFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshBasicEditFunctions(const UGeometryScriptLibrary_MeshBasicEditFunctions&); \
public: \
	NO_API virtual ~UGeometryScriptLibrary_MeshBasicEditFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_92_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshBasicEditFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshBasicEditFunctions(UGeometryScriptLibrary_MeshBasicEditFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshBasicEditFunctions(const UGeometryScriptLibrary_MeshBasicEditFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshBasicEditFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshBasicEditFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshBasicEditFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_MeshBasicEditFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_89_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_92_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_92_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_92_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_92_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_92_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_92_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_92_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_92_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_92_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h_92_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_MeshBasicEditFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBasicEditFunctions_h


#define FOREACH_ENUM_EGEOMETRYSCRIPTCOMBINEATTRIBUTESMODE(op) \
	op(EGeometryScriptCombineAttributesMode::EnableAllMatching) \
	op(EGeometryScriptCombineAttributesMode::UseTarget) \
	op(EGeometryScriptCombineAttributesMode::UseSource) 

enum class EGeometryScriptCombineAttributesMode : uint8;
template<> struct TIsUEnumClass<EGeometryScriptCombineAttributesMode> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptCombineAttributesMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
