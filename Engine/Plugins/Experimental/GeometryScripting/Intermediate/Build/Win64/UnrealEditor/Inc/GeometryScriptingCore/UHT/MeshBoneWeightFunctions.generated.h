// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshBoneWeightFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
class USkeleton;
struct FGeometryScriptBoneWeight;
struct FGeometryScriptBoneWeightProfile;
struct FGeometryScriptSmoothBoneWeightsOptions;
#ifdef GEOMETRYSCRIPTINGCORE_MeshBoneWeightFunctions_generated_h
#error "MeshBoneWeightFunctions.generated.h already included, missing '#pragma once' in MeshBoneWeightFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshBoneWeightFunctions_generated_h

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptBoneWeight>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptBoneWeightProfile>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptSmoothBoneWeightsOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_82_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_82_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execComputeSmoothBoneWeights); \
	DECLARE_FUNCTION(execSetAllVertexBoneWeights); \
	DECLARE_FUNCTION(execSetVertexBoneWeights); \
	DECLARE_FUNCTION(execGetLargestVertexBoneWeight); \
	DECLARE_FUNCTION(execGetVertexBoneWeights); \
	DECLARE_FUNCTION(execGetMaxBoneWeightIndex); \
	DECLARE_FUNCTION(execMeshCreateBoneWeights); \
	DECLARE_FUNCTION(execMeshHasBoneWeights);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execComputeSmoothBoneWeights); \
	DECLARE_FUNCTION(execSetAllVertexBoneWeights); \
	DECLARE_FUNCTION(execSetVertexBoneWeights); \
	DECLARE_FUNCTION(execGetLargestVertexBoneWeight); \
	DECLARE_FUNCTION(execGetVertexBoneWeights); \
	DECLARE_FUNCTION(execGetMaxBoneWeightIndex); \
	DECLARE_FUNCTION(execMeshCreateBoneWeights); \
	DECLARE_FUNCTION(execMeshHasBoneWeights);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_82_ACCESSORS
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshBoneWeightFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshBoneWeightFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshBoneWeightFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_82_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshBoneWeightFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshBoneWeightFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshBoneWeightFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_82_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshBoneWeightFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshBoneWeightFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshBoneWeightFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshBoneWeightFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshBoneWeightFunctions(UGeometryScriptLibrary_MeshBoneWeightFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshBoneWeightFunctions(const UGeometryScriptLibrary_MeshBoneWeightFunctions&); \
public: \
	NO_API virtual ~UGeometryScriptLibrary_MeshBoneWeightFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_82_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshBoneWeightFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshBoneWeightFunctions(UGeometryScriptLibrary_MeshBoneWeightFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshBoneWeightFunctions(const UGeometryScriptLibrary_MeshBoneWeightFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshBoneWeightFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshBoneWeightFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshBoneWeightFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_MeshBoneWeightFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_79_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_82_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_82_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_82_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_82_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_82_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_82_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_82_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_82_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_82_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_MeshBoneWeightFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h


#define FOREACH_ENUM_EGEOMETRYSCRIPTSMOOTHBONEWEIGHTSTYPE(op) \
	op(EGeometryScriptSmoothBoneWeightsType::DirectDistance) \
	op(EGeometryScriptSmoothBoneWeightsType::GeodesicVoxel) 

enum class EGeometryScriptSmoothBoneWeightsType : uint8;
template<> struct TIsUEnumClass<EGeometryScriptSmoothBoneWeightsType> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptSmoothBoneWeightsType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
