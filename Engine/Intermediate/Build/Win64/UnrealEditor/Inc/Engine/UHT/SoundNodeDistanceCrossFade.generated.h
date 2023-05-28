// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundNodeDistanceCrossFade.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundNodeDistanceCrossFade_generated_h
#error "SoundNodeDistanceCrossFade.generated.h already included, missing '#pragma once' in SoundNodeDistanceCrossFade.h"
#endif
#define ENGINE_SoundNodeDistanceCrossFade_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDistanceDatum_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDistanceDatum>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_84_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_84_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_84_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_84_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundNodeDistanceCrossFade(); \
	friend struct Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics; \
public: \
	DECLARE_CLASS(USoundNodeDistanceCrossFade, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeDistanceCrossFade)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_84_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeDistanceCrossFade(); \
	friend struct Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics; \
public: \
	DECLARE_CLASS(USoundNodeDistanceCrossFade, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeDistanceCrossFade)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_84_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeDistanceCrossFade(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeDistanceCrossFade) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeDistanceCrossFade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeDistanceCrossFade); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundNodeDistanceCrossFade(USoundNodeDistanceCrossFade&&); \
	ENGINE_API USoundNodeDistanceCrossFade(const USoundNodeDistanceCrossFade&); \
public: \
	ENGINE_API virtual ~USoundNodeDistanceCrossFade();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_84_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeDistanceCrossFade(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundNodeDistanceCrossFade(USoundNodeDistanceCrossFade&&); \
	ENGINE_API USoundNodeDistanceCrossFade(const USoundNodeDistanceCrossFade&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeDistanceCrossFade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeDistanceCrossFade); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeDistanceCrossFade) \
	ENGINE_API virtual ~USoundNodeDistanceCrossFade();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_81_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_84_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_84_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_84_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_84_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_84_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_84_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_84_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_84_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_84_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_84_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundNodeDistanceCrossFade."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundNodeDistanceCrossFade>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
