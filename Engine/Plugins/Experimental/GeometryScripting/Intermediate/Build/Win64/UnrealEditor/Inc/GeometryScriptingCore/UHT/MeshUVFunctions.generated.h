// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshUVFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
struct FGeometryScriptMeshSelection;
struct FGeometryScriptPatchBuilderOptions;
struct FGeometryScriptRecomputeUVsOptions;
struct FGeometryScriptRepackUVsOptions;
struct FGeometryScriptUVList;
struct FGeometryScriptUVTriangle;
struct FGeometryScriptXAtlasOptions;
#ifdef GEOMETRYSCRIPTINGCORE_MeshUVFunctions_generated_h
#error "MeshUVFunctions.generated.h already included, missing '#pragma once' in MeshUVFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshUVFunctions_generated_h

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptRepackUVsOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptExpMapUVOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptExpMapUVOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptSpectralConformalUVOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptSpectralConformalUVOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptRecomputeUVsOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptPatchBuilderOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_135_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptXAtlasOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptXAtlasOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_146_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_146_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCopyMeshToMeshUVLayer); \
	DECLARE_FUNCTION(execCopyMeshUVLayerToMesh); \
	DECLARE_FUNCTION(execGetMeshPerVertexUVs); \
	DECLARE_FUNCTION(execGetMeshUVSizeInfo); \
	DECLARE_FUNCTION(execAutoGenerateXAtlasMeshUVs); \
	DECLARE_FUNCTION(execAutoGeneratePatchBuilderMeshUVs); \
	DECLARE_FUNCTION(execRepackMeshUVs); \
	DECLARE_FUNCTION(execRecomputeMeshUVs); \
	DECLARE_FUNCTION(execSetMeshUVsFromCylinderProjection); \
	DECLARE_FUNCTION(execSetMeshUVsFromBoxProjection); \
	DECLARE_FUNCTION(execSetMeshUVsFromPlanarProjection); \
	DECLARE_FUNCTION(execRotateMeshUVs); \
	DECLARE_FUNCTION(execScaleMeshUVs); \
	DECLARE_FUNCTION(execTranslateMeshUVs); \
	DECLARE_FUNCTION(execSetMeshTriangleUVs); \
	DECLARE_FUNCTION(execCopyUVSet); \
	DECLARE_FUNCTION(execSetNumUVSets);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCopyMeshToMeshUVLayer); \
	DECLARE_FUNCTION(execCopyMeshUVLayerToMesh); \
	DECLARE_FUNCTION(execGetMeshPerVertexUVs); \
	DECLARE_FUNCTION(execGetMeshUVSizeInfo); \
	DECLARE_FUNCTION(execAutoGenerateXAtlasMeshUVs); \
	DECLARE_FUNCTION(execAutoGeneratePatchBuilderMeshUVs); \
	DECLARE_FUNCTION(execRepackMeshUVs); \
	DECLARE_FUNCTION(execRecomputeMeshUVs); \
	DECLARE_FUNCTION(execSetMeshUVsFromCylinderProjection); \
	DECLARE_FUNCTION(execSetMeshUVsFromBoxProjection); \
	DECLARE_FUNCTION(execSetMeshUVsFromPlanarProjection); \
	DECLARE_FUNCTION(execRotateMeshUVs); \
	DECLARE_FUNCTION(execScaleMeshUVs); \
	DECLARE_FUNCTION(execTranslateMeshUVs); \
	DECLARE_FUNCTION(execSetMeshTriangleUVs); \
	DECLARE_FUNCTION(execCopyUVSet); \
	DECLARE_FUNCTION(execSetNumUVSets);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_146_ACCESSORS
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_146_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshUVFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshUVFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshUVFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_146_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshUVFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshUVFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshUVFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_146_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshUVFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshUVFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshUVFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshUVFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshUVFunctions(UGeometryScriptLibrary_MeshUVFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshUVFunctions(const UGeometryScriptLibrary_MeshUVFunctions&); \
public: \
	NO_API virtual ~UGeometryScriptLibrary_MeshUVFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_146_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshUVFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshUVFunctions(UGeometryScriptLibrary_MeshUVFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshUVFunctions(const UGeometryScriptLibrary_MeshUVFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshUVFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshUVFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshUVFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_MeshUVFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_143_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_146_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_146_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_146_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_146_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_146_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_146_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_146_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_146_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_146_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_146_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_146_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_MeshUVFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h


#define FOREACH_ENUM_EGEOMETRYSCRIPTUVFLATTENMETHOD(op) \
	op(EGeometryScriptUVFlattenMethod::ExpMap) \
	op(EGeometryScriptUVFlattenMethod::Conformal) \
	op(EGeometryScriptUVFlattenMethod::SpectralConformal) 

enum class EGeometryScriptUVFlattenMethod : uint8;
template<> struct TIsUEnumClass<EGeometryScriptUVFlattenMethod> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptUVFlattenMethod>();

#define FOREACH_ENUM_EGEOMETRYSCRIPTUVISLANDSOURCE(op) \
	op(EGeometryScriptUVIslandSource::PolyGroups) \
	op(EGeometryScriptUVIslandSource::UVIslands) 

enum class EGeometryScriptUVIslandSource : uint8;
template<> struct TIsUEnumClass<EGeometryScriptUVIslandSource> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptUVIslandSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
