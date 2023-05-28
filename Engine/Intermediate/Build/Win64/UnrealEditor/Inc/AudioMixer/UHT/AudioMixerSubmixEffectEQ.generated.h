// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubmixEffects/AudioMixerSubmixEffectEQ.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSubmixEffectSubmixEQSettings;
#ifdef AUDIOMIXER_AudioMixerSubmixEffectEQ_generated_h
#error "AudioMixerSubmixEffectEQ.generated.h already included, missing '#pragma once' in AudioMixerSubmixEffectEQ.h"
#endif
#define AUDIOMIXER_AudioMixerSubmixEffectEQ_generated_h

#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUDIOMIXER_API UScriptStruct* StaticStruct<struct FSubmixEffectEQBand>();

#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics; \
	AUDIOMIXER_API static class UScriptStruct* StaticStruct();


template<> AUDIOMIXER_API UScriptStruct* StaticStruct<struct FSubmixEffectSubmixEQSettings>();

#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_111_SPARSE_DATA
#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_111_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSettings);


#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_111_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSettings);


#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_111_ACCESSORS
#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_111_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubmixEffectSubmixEQPreset(); \
	friend struct Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics; \
public: \
	DECLARE_CLASS(USubmixEffectSubmixEQPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(USubmixEffectSubmixEQPreset)


#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_111_INCLASS \
private: \
	static void StaticRegisterNativesUSubmixEffectSubmixEQPreset(); \
	friend struct Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics; \
public: \
	DECLARE_CLASS(USubmixEffectSubmixEQPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(USubmixEffectSubmixEQPreset)


#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_111_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubmixEffectSubmixEQPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectSubmixEQPreset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubmixEffectSubmixEQPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectSubmixEQPreset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubmixEffectSubmixEQPreset(USubmixEffectSubmixEQPreset&&); \
	NO_API USubmixEffectSubmixEQPreset(const USubmixEffectSubmixEQPreset&); \
public: \
	NO_API virtual ~USubmixEffectSubmixEQPreset();


#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_111_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubmixEffectSubmixEQPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubmixEffectSubmixEQPreset(USubmixEffectSubmixEQPreset&&); \
	NO_API USubmixEffectSubmixEQPreset(const USubmixEffectSubmixEQPreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubmixEffectSubmixEQPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectSubmixEQPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectSubmixEQPreset) \
	NO_API virtual ~USubmixEffectSubmixEQPreset();


#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_108_PROLOG
#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_111_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_111_SPARSE_DATA \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_111_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_111_ACCESSORS \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_111_INCLASS \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_111_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_111_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_111_SPARSE_DATA \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_111_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_111_ACCESSORS \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_111_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_111_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOMIXER_API UClass* StaticClass<class USubmixEffectSubmixEQPreset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
