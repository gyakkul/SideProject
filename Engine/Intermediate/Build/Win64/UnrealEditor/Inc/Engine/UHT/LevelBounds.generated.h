// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/LevelBounds.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LevelBounds_generated_h
#error "LevelBounds.generated.h already included, missing '#pragma once' in LevelBounds.h"
#endif
#define ENGINE_LevelBounds_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h_32_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h_32_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h_32_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALevelBounds(); \
	friend struct Z_Construct_UClass_ALevelBounds_Statics; \
public: \
	DECLARE_CLASS(ALevelBounds, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ALevelBounds)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h_32_INCLASS \
private: \
	static void StaticRegisterNativesALevelBounds(); \
	friend struct Z_Construct_UClass_ALevelBounds_Statics; \
public: \
	DECLARE_CLASS(ALevelBounds, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ALevelBounds)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALevelBounds(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALevelBounds) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelBounds); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelBounds); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALevelBounds(ALevelBounds&&); \
	NO_API ALevelBounds(const ALevelBounds&); \
public: \
	NO_API virtual ~ALevelBounds();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALevelBounds(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALevelBounds(ALevelBounds&&); \
	NO_API ALevelBounds(const ALevelBounds&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelBounds); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelBounds); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALevelBounds) \
	NO_API virtual ~ALevelBounds();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h_27_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h_32_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h_32_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h_32_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h_32_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h_32_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h_32_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h_32_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LevelBounds."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ALevelBounds>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
