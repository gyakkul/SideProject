// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/PolyPathFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USplineComponent;
enum class EGeometryScriptAxis : uint8;
struct FGeometryScriptPolyPath;
struct FGeometryScriptSplineSamplingOptions;
#ifdef GEOMETRYSCRIPTINGCORE_PolyPathFunctions_generated_h
#error "PolyPathFunctions.generated.h already included, missing '#pragma once' in PolyPathFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_PolyPathFunctions_generated_h

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptSplineSamplingOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_43_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_43_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConv_ArrayOfVector2DToGeometryScriptPolyPath); \
	DECLARE_FUNCTION(execConv_ArrayToGeometryScriptPolyPath); \
	DECLARE_FUNCTION(execConv_GeometryScriptPolyPathToArrayOfVector2D); \
	DECLARE_FUNCTION(execConv_GeometryScriptPolyPathToArray); \
	DECLARE_FUNCTION(execConvertArrayOfVector2DToPolyPath); \
	DECLARE_FUNCTION(execConvertPolyPathToArrayOfVector2D); \
	DECLARE_FUNCTION(execConvertArrayToPolyPath); \
	DECLARE_FUNCTION(execConvertPolyPathToArray); \
	DECLARE_FUNCTION(execSampleSplineToTransforms); \
	DECLARE_FUNCTION(execConvertSplineToPolyPath); \
	DECLARE_FUNCTION(execCreateArcPath2D); \
	DECLARE_FUNCTION(execCreateCirclePath2D); \
	DECLARE_FUNCTION(execCreateArcPath3D); \
	DECLARE_FUNCTION(execCreateCirclePath3D); \
	DECLARE_FUNCTION(execFlattenTo2DOnAxis); \
	DECLARE_FUNCTION(execGetNearestVertexIndex); \
	DECLARE_FUNCTION(execGetPolyPathArcLength); \
	DECLARE_FUNCTION(execGetPolyPathTangent); \
	DECLARE_FUNCTION(execGetPolyPathVertex); \
	DECLARE_FUNCTION(execGetPolyPathLastIndex); \
	DECLARE_FUNCTION(execGetPolyPathNumVertices);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConv_ArrayOfVector2DToGeometryScriptPolyPath); \
	DECLARE_FUNCTION(execConv_ArrayToGeometryScriptPolyPath); \
	DECLARE_FUNCTION(execConv_GeometryScriptPolyPathToArrayOfVector2D); \
	DECLARE_FUNCTION(execConv_GeometryScriptPolyPathToArray); \
	DECLARE_FUNCTION(execConvertArrayOfVector2DToPolyPath); \
	DECLARE_FUNCTION(execConvertPolyPathToArrayOfVector2D); \
	DECLARE_FUNCTION(execConvertArrayToPolyPath); \
	DECLARE_FUNCTION(execConvertPolyPathToArray); \
	DECLARE_FUNCTION(execSampleSplineToTransforms); \
	DECLARE_FUNCTION(execConvertSplineToPolyPath); \
	DECLARE_FUNCTION(execCreateArcPath2D); \
	DECLARE_FUNCTION(execCreateCirclePath2D); \
	DECLARE_FUNCTION(execCreateArcPath3D); \
	DECLARE_FUNCTION(execCreateCirclePath3D); \
	DECLARE_FUNCTION(execFlattenTo2DOnAxis); \
	DECLARE_FUNCTION(execGetNearestVertexIndex); \
	DECLARE_FUNCTION(execGetPolyPathArcLength); \
	DECLARE_FUNCTION(execGetPolyPathTangent); \
	DECLARE_FUNCTION(execGetPolyPathVertex); \
	DECLARE_FUNCTION(execGetPolyPathLastIndex); \
	DECLARE_FUNCTION(execGetPolyPathNumVertices);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_43_ACCESSORS
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_PolyPathFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_PolyPathFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_PolyPathFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_PolyPathFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_PolyPathFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_PolyPathFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_PolyPathFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_PolyPathFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_PolyPathFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_PolyPathFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_PolyPathFunctions(UGeometryScriptLibrary_PolyPathFunctions&&); \
	NO_API UGeometryScriptLibrary_PolyPathFunctions(const UGeometryScriptLibrary_PolyPathFunctions&); \
public: \
	NO_API virtual ~UGeometryScriptLibrary_PolyPathFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_PolyPathFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_PolyPathFunctions(UGeometryScriptLibrary_PolyPathFunctions&&); \
	NO_API UGeometryScriptLibrary_PolyPathFunctions(const UGeometryScriptLibrary_PolyPathFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_PolyPathFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_PolyPathFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_PolyPathFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_PolyPathFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_40_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_43_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_43_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_43_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_43_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_43_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_43_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_PolyPathFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h


#define FOREACH_ENUM_EGEOMETRYSCRIPTSAMPLESPACING(op) \
	op(EGeometryScriptSampleSpacing::UniformDistance) \
	op(EGeometryScriptSampleSpacing::UniformTime) \
	op(EGeometryScriptSampleSpacing::ErrorTolerance) 

enum class EGeometryScriptSampleSpacing : uint8;
template<> struct TIsUEnumClass<EGeometryScriptSampleSpacing> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptSampleSpacing>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
