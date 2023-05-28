// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/LevelStreamingPersistent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LevelStreamingPersistent_generated_h
#error "LevelStreamingPersistent.generated.h already included, missing '#pragma once' in LevelStreamingPersistent.h"
#endif
#define ENGINE_LevelStreamingPersistent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_20_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_20_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_20_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelStreamingPersistent(); \
	friend struct Z_Construct_UClass_ULevelStreamingPersistent_Statics; \
public: \
	DECLARE_CLASS(ULevelStreamingPersistent, ULevelStreaming, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULevelStreamingPersistent)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesULevelStreamingPersistent(); \
	friend struct Z_Construct_UClass_ULevelStreamingPersistent_Statics; \
public: \
	DECLARE_CLASS(ULevelStreamingPersistent, ULevelStreaming, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULevelStreamingPersistent)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelStreamingPersistent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelStreamingPersistent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelStreamingPersistent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelStreamingPersistent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelStreamingPersistent(ULevelStreamingPersistent&&); \
	NO_API ULevelStreamingPersistent(const ULevelStreamingPersistent&); \
public: \
	NO_API virtual ~ULevelStreamingPersistent();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelStreamingPersistent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelStreamingPersistent(ULevelStreamingPersistent&&); \
	NO_API ULevelStreamingPersistent(const ULevelStreamingPersistent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelStreamingPersistent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelStreamingPersistent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelStreamingPersistent) \
	NO_API virtual ~ULevelStreamingPersistent();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_20_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LevelStreamingPersistent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULevelStreamingPersistent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
