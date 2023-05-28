// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/VectorMathFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGeometryScriptScalarList;
struct FGeometryScriptVectorList;
#ifdef GEOMETRYSCRIPTINGCORE_VectorMathFunctions_generated_h
#error "VectorMathFunctions.generated.h already included, missing '#pragma once' in VectorMathFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_VectorMathFunctions_generated_h

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_16_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConstantScalarMultiplyInPlace); \
	DECLARE_FUNCTION(execConstantScalarMultiply); \
	DECLARE_FUNCTION(execScalarMultiplyInPlace); \
	DECLARE_FUNCTION(execScalarMultiply); \
	DECLARE_FUNCTION(execScalarBlendInPlace); \
	DECLARE_FUNCTION(execScalarBlend); \
	DECLARE_FUNCTION(execScalarInvertInPlace); \
	DECLARE_FUNCTION(execScalarInvert); \
	DECLARE_FUNCTION(execVectorToScalar); \
	DECLARE_FUNCTION(execConstantVectorMultiplyInPlace); \
	DECLARE_FUNCTION(execConstantVectorMultiply); \
	DECLARE_FUNCTION(execScalarVectorMultiplyInPlace); \
	DECLARE_FUNCTION(execScalarVectorMultiply); \
	DECLARE_FUNCTION(execVectorBlendInPlace); \
	DECLARE_FUNCTION(execVectorBlend); \
	DECLARE_FUNCTION(execVectorNormalizeInPlace); \
	DECLARE_FUNCTION(execVectorCross); \
	DECLARE_FUNCTION(execVectorDot); \
	DECLARE_FUNCTION(execVectorLength);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConstantScalarMultiplyInPlace); \
	DECLARE_FUNCTION(execConstantScalarMultiply); \
	DECLARE_FUNCTION(execScalarMultiplyInPlace); \
	DECLARE_FUNCTION(execScalarMultiply); \
	DECLARE_FUNCTION(execScalarBlendInPlace); \
	DECLARE_FUNCTION(execScalarBlend); \
	DECLARE_FUNCTION(execScalarInvertInPlace); \
	DECLARE_FUNCTION(execScalarInvert); \
	DECLARE_FUNCTION(execVectorToScalar); \
	DECLARE_FUNCTION(execConstantVectorMultiplyInPlace); \
	DECLARE_FUNCTION(execConstantVectorMultiply); \
	DECLARE_FUNCTION(execScalarVectorMultiplyInPlace); \
	DECLARE_FUNCTION(execScalarVectorMultiply); \
	DECLARE_FUNCTION(execVectorBlendInPlace); \
	DECLARE_FUNCTION(execVectorBlend); \
	DECLARE_FUNCTION(execVectorNormalizeInPlace); \
	DECLARE_FUNCTION(execVectorCross); \
	DECLARE_FUNCTION(execVectorDot); \
	DECLARE_FUNCTION(execVectorLength);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_16_ACCESSORS
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_VectorMathFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_VectorMathFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_VectorMathFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_VectorMathFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_VectorMathFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_VectorMathFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_VectorMathFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_VectorMathFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_VectorMathFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_VectorMathFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_VectorMathFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_VectorMathFunctions(UGeometryScriptLibrary_VectorMathFunctions&&); \
	NO_API UGeometryScriptLibrary_VectorMathFunctions(const UGeometryScriptLibrary_VectorMathFunctions&); \
public: \
	NO_API virtual ~UGeometryScriptLibrary_VectorMathFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_VectorMathFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_VectorMathFunctions(UGeometryScriptLibrary_VectorMathFunctions&&); \
	NO_API UGeometryScriptLibrary_VectorMathFunctions(const UGeometryScriptLibrary_VectorMathFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_VectorMathFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_VectorMathFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_VectorMathFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_VectorMathFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_16_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_16_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_16_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_VectorMathFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_VectorMathFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
