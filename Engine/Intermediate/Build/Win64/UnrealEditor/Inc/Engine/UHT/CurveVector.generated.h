// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Curves/CurveVector.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_CurveVector_generated_h
#error "CurveVector.generated.h already included, missing '#pragma once' in CurveVector.h"
#endif
#define ENGINE_CurveVector_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimeVectorCurve_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRuntimeVectorCurve>();

#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_32_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetVectorValue);


#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetVectorValue);


#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_32_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCurveVector(); \
	friend struct Z_Construct_UClass_UCurveVector_Statics; \
public: \
	DECLARE_CLASS(UCurveVector, UCurveBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCurveVector)


#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUCurveVector(); \
	friend struct Z_Construct_UClass_UCurveVector_Statics; \
public: \
	DECLARE_CLASS(UCurveVector, UCurveBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCurveVector)


#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCurveVector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveVector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCurveVector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveVector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UCurveVector(UCurveVector&&); \
	ENGINE_API UCurveVector(const UCurveVector&); \
public: \
	ENGINE_API virtual ~UCurveVector();


#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCurveVector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UCurveVector(UCurveVector&&); \
	ENGINE_API UCurveVector(const UCurveVector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCurveVector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveVector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveVector) \
	ENGINE_API virtual ~UCurveVector();


#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_29_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_32_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_32_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_32_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_32_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_32_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_32_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_32_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CurveVector."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCurveVector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
