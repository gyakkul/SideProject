// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshSamplingFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
struct FGeometryScriptIndexList;
struct FGeometryScriptMeshPointSamplingOptions;
struct FGeometryScriptNonUniformPointSamplingOptions;
struct FGeometryScriptScalarList;
#ifdef GEOMETRYSCRIPTINGCORE_MeshSamplingFunctions_generated_h
#error "MeshSamplingFunctions.generated.h already included, missing '#pragma once' in MeshSamplingFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshSamplingFunctions_generated_h

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptMeshPointSamplingOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptMeshPointSamplingOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptNonUniformPointSamplingOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptNonUniformPointSamplingOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_99_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_99_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execComputeVertexWeightedPointSampling); \
	DECLARE_FUNCTION(execComputeNonUniformPointSampling); \
	DECLARE_FUNCTION(execComputePointSampling);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execComputeVertexWeightedPointSampling); \
	DECLARE_FUNCTION(execComputeNonUniformPointSampling); \
	DECLARE_FUNCTION(execComputePointSampling);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_99_ACCESSORS
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_99_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshSamplingFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshSamplingFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshSamplingFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshSamplingFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_99_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshSamplingFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshSamplingFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshSamplingFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshSamplingFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_99_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshSamplingFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshSamplingFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshSamplingFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshSamplingFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshSamplingFunctions(UGeometryScriptLibrary_MeshSamplingFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshSamplingFunctions(const UGeometryScriptLibrary_MeshSamplingFunctions&); \
public: \
	NO_API virtual ~UGeometryScriptLibrary_MeshSamplingFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_99_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshSamplingFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshSamplingFunctions(UGeometryScriptLibrary_MeshSamplingFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshSamplingFunctions(const UGeometryScriptLibrary_MeshSamplingFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshSamplingFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshSamplingFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshSamplingFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_MeshSamplingFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_96_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_99_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_99_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_99_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_99_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_99_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_99_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_99_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_99_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_99_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_99_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h_99_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_MeshSamplingFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSamplingFunctions_h


#define FOREACH_ENUM_EGEOMETRYSCRIPTSAMPLINGWEIGHTMODE(op) \
	op(EGeometryScriptSamplingWeightMode::WeightToRadius) \
	op(EGeometryScriptSamplingWeightMode::FilledWeightToRadius) \
	op(EGeometryScriptSamplingWeightMode::WeightedRandom) 

enum class EGeometryScriptSamplingWeightMode : uint8;
template<> struct TIsUEnumClass<EGeometryScriptSamplingWeightMode> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptSamplingWeightMode>();

#define FOREACH_ENUM_EGEOMETRYSCRIPTSAMPLINGDISTRIBUTIONMODE(op) \
	op(EGeometryScriptSamplingDistributionMode::Uniform) \
	op(EGeometryScriptSamplingDistributionMode::Smaller) \
	op(EGeometryScriptSamplingDistributionMode::Larger) 

enum class EGeometryScriptSamplingDistributionMode : uint8;
template<> struct TIsUEnumClass<EGeometryScriptSamplingDistributionMode> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptSamplingDistributionMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
