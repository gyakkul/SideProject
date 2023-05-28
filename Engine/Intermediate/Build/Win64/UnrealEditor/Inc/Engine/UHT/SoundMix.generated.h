// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundMix.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundMix_generated_h
#error "SoundMix.generated.h already included, missing '#pragma once' in SoundMix.h"
#endif
#define ENGINE_SoundMix_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAudioEffectParameters_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAudioEffectParameters>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAudioEQEffect_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAudioEffectParameters Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAudioEQEffect>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_133_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundClassAdjuster>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_174_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_174_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_174_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_174_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_174_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundMix(); \
	friend struct Z_Construct_UClass_USoundMix_Statics; \
public: \
	DECLARE_CLASS(USoundMix, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundMix)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_174_INCLASS \
private: \
	static void StaticRegisterNativesUSoundMix(); \
	friend struct Z_Construct_UClass_USoundMix_Statics; \
public: \
	DECLARE_CLASS(USoundMix, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundMix)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_174_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundMix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundMix) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundMix); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundMix); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundMix(USoundMix&&); \
	ENGINE_API USoundMix(const USoundMix&); \
public: \
	ENGINE_API virtual ~USoundMix();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_174_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundMix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundMix(USoundMix&&); \
	ENGINE_API USoundMix(const USoundMix&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundMix); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundMix); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundMix) \
	ENGINE_API virtual ~USoundMix();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_171_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_174_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_174_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_174_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_174_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_174_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_174_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_174_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_174_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_174_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_174_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_174_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_174_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundMix."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundMix>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
