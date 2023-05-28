// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Curves/CurveLinearColorAtlas.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCurveLinearColor;
#ifdef ENGINE_CurveLinearColorAtlas_generated_h
#error "CurveLinearColorAtlas.generated.h already included, missing '#pragma once' in CurveLinearColorAtlas.h"
#endif
#define ENGINE_CurveLinearColorAtlas_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCurveAtlasColorAdjustments>();

#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurvePosition);


#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurvePosition);


#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCurveLinearColorAtlas(); \
	friend struct Z_Construct_UClass_UCurveLinearColorAtlas_Statics; \
public: \
	DECLARE_CLASS(UCurveLinearColorAtlas, UTexture2D, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCurveLinearColorAtlas)


#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_INCLASS \
private: \
	static void StaticRegisterNativesUCurveLinearColorAtlas(); \
	friend struct Z_Construct_UClass_UCurveLinearColorAtlas_Statics; \
public: \
	DECLARE_CLASS(UCurveLinearColorAtlas, UTexture2D, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCurveLinearColorAtlas)


#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCurveLinearColorAtlas(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveLinearColorAtlas) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurveLinearColorAtlas); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveLinearColorAtlas); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCurveLinearColorAtlas(UCurveLinearColorAtlas&&); \
	NO_API UCurveLinearColorAtlas(const UCurveLinearColorAtlas&); \
public: \
	NO_API virtual ~UCurveLinearColorAtlas();


#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCurveLinearColorAtlas(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCurveLinearColorAtlas(UCurveLinearColorAtlas&&); \
	NO_API UCurveLinearColorAtlas(const UCurveLinearColorAtlas&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurveLinearColorAtlas); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveLinearColorAtlas); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveLinearColorAtlas) \
	NO_API virtual ~UCurveLinearColorAtlas();


#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_70_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CurveLinearColorAtlas."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCurveLinearColorAtlas>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
