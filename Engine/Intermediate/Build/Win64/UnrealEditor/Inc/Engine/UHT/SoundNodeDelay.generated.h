// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundNodeDelay.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundNodeDelay_generated_h
#error "SoundNodeDelay.generated.h already included, missing '#pragma once' in SoundNodeDelay.h"
#endif
#define ENGINE_SoundNodeDelay_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundNodeDelay(); \
	friend struct Z_Construct_UClass_USoundNodeDelay_Statics; \
public: \
	DECLARE_CLASS(USoundNodeDelay, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeDelay)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeDelay(); \
	friend struct Z_Construct_UClass_USoundNodeDelay_Statics; \
public: \
	DECLARE_CLASS(USoundNodeDelay, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeDelay)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeDelay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeDelay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeDelay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeDelay); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundNodeDelay(USoundNodeDelay&&); \
	ENGINE_API USoundNodeDelay(const USoundNodeDelay&); \
public: \
	ENGINE_API virtual ~USoundNodeDelay();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeDelay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundNodeDelay(USoundNodeDelay&&); \
	ENGINE_API USoundNodeDelay(const USoundNodeDelay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeDelay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeDelay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeDelay) \
	ENGINE_API virtual ~USoundNodeDelay();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundNodeDelay."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundNodeDelay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDelay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
