// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/LevelScriptActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LevelScriptActor_generated_h
#error "LevelScriptActor.generated.h already included, missing '#pragma once' in LevelScriptActor.h"
#endif
#define ENGINE_LevelScriptActor_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCinematicMode); \
	DECLARE_FUNCTION(execRemoteEvent);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCinematicMode); \
	DECLARE_FUNCTION(execRemoteEvent);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALevelScriptActor(); \
	friend struct Z_Construct_UClass_ALevelScriptActor_Statics; \
public: \
	DECLARE_CLASS(ALevelScriptActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ALevelScriptActor)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_INCLASS \
private: \
	static void StaticRegisterNativesALevelScriptActor(); \
	friend struct Z_Construct_UClass_ALevelScriptActor_Statics; \
public: \
	DECLARE_CLASS(ALevelScriptActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ALevelScriptActor)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALevelScriptActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALevelScriptActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelScriptActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelScriptActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALevelScriptActor(ALevelScriptActor&&); \
	NO_API ALevelScriptActor(const ALevelScriptActor&); \
public: \
	NO_API virtual ~ALevelScriptActor();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALevelScriptActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALevelScriptActor(ALevelScriptActor&&); \
	NO_API ALevelScriptActor(const ALevelScriptActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelScriptActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelScriptActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALevelScriptActor) \
	NO_API virtual ~ALevelScriptActor();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_24_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LevelScriptActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ALevelScriptActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
