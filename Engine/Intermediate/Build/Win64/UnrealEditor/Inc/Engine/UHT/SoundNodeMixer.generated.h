// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundNodeMixer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundNodeMixer_generated_h
#error "SoundNodeMixer.generated.h already included, missing '#pragma once' in SoundNodeMixer.h"
#endif
#define ENGINE_SoundNodeMixer_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundNodeMixer(); \
	friend struct Z_Construct_UClass_USoundNodeMixer_Statics; \
public: \
	DECLARE_CLASS(USoundNodeMixer, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeMixer)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeMixer(); \
	friend struct Z_Construct_UClass_USoundNodeMixer_Statics; \
public: \
	DECLARE_CLASS(USoundNodeMixer, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeMixer)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeMixer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeMixer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeMixer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeMixer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundNodeMixer(USoundNodeMixer&&); \
	ENGINE_API USoundNodeMixer(const USoundNodeMixer&); \
public: \
	ENGINE_API virtual ~USoundNodeMixer();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeMixer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundNodeMixer(USoundNodeMixer&&); \
	ENGINE_API USoundNodeMixer(const USoundNodeMixer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeMixer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeMixer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeMixer) \
	ENGINE_API virtual ~USoundNodeMixer();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundNodeMixer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundNodeMixer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
