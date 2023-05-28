// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshDeformFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
class UTexture2D;
enum class EGeometryScriptMathWarpType : uint8;
struct FGeometryScriptBendWarpOptions;
struct FGeometryScriptDisplaceFromTextureOptions;
struct FGeometryScriptFlareWarpOptions;
struct FGeometryScriptIterativeMeshSmoothingOptions;
struct FGeometryScriptMathWarpOptions;
struct FGeometryScriptMeshSelection;
struct FGeometryScriptPerlinNoiseOptions;
struct FGeometryScriptTwistWarpOptions;
struct FGeometryScriptVectorList;
#ifdef GEOMETRYSCRIPTINGCORE_MeshDeformFunctions_generated_h
#error "MeshDeformFunctions.generated.h already included, missing '#pragma once' in MeshDeformFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshDeformFunctions_generated_h

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptBendWarpOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptBendWarpOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptTwistWarpOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptTwistWarpOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptFlareWarpOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptFlareWarpOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_88_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseLayerOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptPerlinNoiseLayerOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_117_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptMathWarpOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptMathWarpOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_135_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptPerlinNoiseOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptPerlinNoiseOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_152_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptIterativeMeshSmoothingOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptIterativeMeshSmoothingOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_171_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptDisplaceFromTextureOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptDisplaceFromTextureOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_200_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_200_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyDisplaceFromPerVertexVectors); \
	DECLARE_FUNCTION(execApplyDisplaceFromTextureMap); \
	DECLARE_FUNCTION(execApplyIterativeSmoothingToMesh); \
	DECLARE_FUNCTION(execApplyPerlinNoiseToMesh); \
	DECLARE_FUNCTION(execApplyMathWarpToMesh); \
	DECLARE_FUNCTION(execApplyFlareWarpToMesh); \
	DECLARE_FUNCTION(execApplyTwistWarpToMesh); \
	DECLARE_FUNCTION(execApplyBendWarpToMesh);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_200_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyDisplaceFromPerVertexVectors); \
	DECLARE_FUNCTION(execApplyDisplaceFromTextureMap); \
	DECLARE_FUNCTION(execApplyIterativeSmoothingToMesh); \
	DECLARE_FUNCTION(execApplyPerlinNoiseToMesh); \
	DECLARE_FUNCTION(execApplyMathWarpToMesh); \
	DECLARE_FUNCTION(execApplyFlareWarpToMesh); \
	DECLARE_FUNCTION(execApplyTwistWarpToMesh); \
	DECLARE_FUNCTION(execApplyBendWarpToMesh);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_200_ACCESSORS
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_200_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshDeformFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshDeformFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshDeformFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshDeformFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_200_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshDeformFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshDeformFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshDeformFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshDeformFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_200_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshDeformFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshDeformFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshDeformFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshDeformFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshDeformFunctions(UGeometryScriptLibrary_MeshDeformFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshDeformFunctions(const UGeometryScriptLibrary_MeshDeformFunctions&); \
public: \
	NO_API virtual ~UGeometryScriptLibrary_MeshDeformFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_200_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshDeformFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshDeformFunctions(UGeometryScriptLibrary_MeshDeformFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshDeformFunctions(const UGeometryScriptLibrary_MeshDeformFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshDeformFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshDeformFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshDeformFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_MeshDeformFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_197_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_200_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_200_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_200_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_200_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_200_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_200_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_200_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_200_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_200_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_200_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_200_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h_200_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_MeshDeformFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshDeformFunctions_h


#define FOREACH_ENUM_EGEOMETRYSCRIPTFLARETYPE(op) \
	op(EGeometryScriptFlareType::SinMode) \
	op(EGeometryScriptFlareType::SinSquaredMode) \
	op(EGeometryScriptFlareType::TriangleMode) 

enum class EGeometryScriptFlareType : uint8;
template<> struct TIsUEnumClass<EGeometryScriptFlareType> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptFlareType>();

#define FOREACH_ENUM_EGEOMETRYSCRIPTMATHWARPTYPE(op) \
	op(EGeometryScriptMathWarpType::SinWave1D) \
	op(EGeometryScriptMathWarpType::SinWave2D) \
	op(EGeometryScriptMathWarpType::SinWave3D) 

enum class EGeometryScriptMathWarpType : uint8;
template<> struct TIsUEnumClass<EGeometryScriptMathWarpType> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptMathWarpType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
