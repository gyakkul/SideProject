// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/RectLight.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_RectLight_generated_h
#error "RectLight.generated.h already included, missing '#pragma once' in RectLight.h"
#endif
#define ENGINE_RectLight_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h_13_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h_13_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h_13_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARectLight(); \
	friend struct Z_Construct_UClass_ARectLight_Statics; \
public: \
	DECLARE_CLASS(ARectLight, ALight, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ARectLight)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h_13_INCLASS \
private: \
	static void StaticRegisterNativesARectLight(); \
	friend struct Z_Construct_UClass_ARectLight_Statics; \
public: \
	DECLARE_CLASS(ARectLight, ALight, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ARectLight)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ARectLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARectLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ARectLight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARectLight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ARectLight(ARectLight&&); \
	ENGINE_API ARectLight(const ARectLight&); \
public: \
	ENGINE_API virtual ~ARectLight();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ARectLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ARectLight(ARectLight&&); \
	ENGINE_API ARectLight(const ARectLight&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ARectLight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARectLight); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARectLight) \
	ENGINE_API virtual ~ARectLight();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h_13_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h_13_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h_13_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h_13_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h_13_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h_13_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RectLight."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ARectLight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
