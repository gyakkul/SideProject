// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioBus;
class USoundSubmix;
struct FSubmixEffectDynamicsProcessorSettings;
#ifdef AUDIOMIXER_AudioMixerSubmixEffectDynamicsProcessor_generated_h
#error "AudioMixerSubmixEffectDynamicsProcessor.generated.h already included, missing '#pragma once' in AudioMixerSubmixEffectDynamicsProcessor.h"
#endif
#define AUDIOMIXER_AudioMixerSubmixEffectDynamicsProcessor_generated_h

#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_157_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUDIOMIXER_API UScriptStruct* StaticStruct<struct FSubmixEffectDynamicProcessorFilterSettings>();

#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_183_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUDIOMIXER_API UScriptStruct* StaticStruct<struct FSubmixEffectDynamicsProcessorSettings>();

#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_336_SPARSE_DATA
#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_336_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execSetExternalSubmix); \
	DECLARE_FUNCTION(execSetAudioBus); \
	DECLARE_FUNCTION(execResetKey);


#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_336_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execSetExternalSubmix); \
	DECLARE_FUNCTION(execSetAudioBus); \
	DECLARE_FUNCTION(execResetKey);


#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_336_ACCESSORS
#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_336_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(USubmixEffectDynamicsProcessorPreset, NO_API)


#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_336_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubmixEffectDynamicsProcessorPreset(); \
	friend struct Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics; \
public: \
	DECLARE_CLASS(USubmixEffectDynamicsProcessorPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(USubmixEffectDynamicsProcessorPreset) \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_336_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_336_INCLASS \
private: \
	static void StaticRegisterNativesUSubmixEffectDynamicsProcessorPreset(); \
	friend struct Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics; \
public: \
	DECLARE_CLASS(USubmixEffectDynamicsProcessorPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(USubmixEffectDynamicsProcessorPreset) \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_336_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_336_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubmixEffectDynamicsProcessorPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectDynamicsProcessorPreset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubmixEffectDynamicsProcessorPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectDynamicsProcessorPreset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubmixEffectDynamicsProcessorPreset(USubmixEffectDynamicsProcessorPreset&&); \
	NO_API USubmixEffectDynamicsProcessorPreset(const USubmixEffectDynamicsProcessorPreset&); \
public: \
	NO_API virtual ~USubmixEffectDynamicsProcessorPreset();


#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_336_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubmixEffectDynamicsProcessorPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubmixEffectDynamicsProcessorPreset(USubmixEffectDynamicsProcessorPreset&&); \
	NO_API USubmixEffectDynamicsProcessorPreset(const USubmixEffectDynamicsProcessorPreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubmixEffectDynamicsProcessorPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectDynamicsProcessorPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectDynamicsProcessorPreset) \
	NO_API virtual ~USubmixEffectDynamicsProcessorPreset();


#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_333_PROLOG
#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_336_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_336_SPARSE_DATA \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_336_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_336_ACCESSORS \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_336_INCLASS \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_336_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_336_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_336_SPARSE_DATA \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_336_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_336_ACCESSORS \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_336_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_336_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOMIXER_API UClass* StaticClass<class USubmixEffectDynamicsProcessorPreset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h


#define FOREACH_ENUM_ESUBMIXEFFECTDYNAMICSPROCESSORTYPE(op) \
	op(ESubmixEffectDynamicsProcessorType::Compressor) \
	op(ESubmixEffectDynamicsProcessorType::Limiter) \
	op(ESubmixEffectDynamicsProcessorType::Expander) \
	op(ESubmixEffectDynamicsProcessorType::Gate) \
	op(ESubmixEffectDynamicsProcessorType::UpwardsCompressor) \
	op(ESubmixEffectDynamicsProcessorType::Count) 

enum class ESubmixEffectDynamicsProcessorType : uint8;
template<> struct TIsUEnumClass<ESubmixEffectDynamicsProcessorType> { enum { Value = true }; };
template<> AUDIOMIXER_API UEnum* StaticEnum<ESubmixEffectDynamicsProcessorType>();

#define FOREACH_ENUM_ESUBMIXEFFECTDYNAMICSPEAKMODE(op) \
	op(ESubmixEffectDynamicsPeakMode::MeanSquared) \
	op(ESubmixEffectDynamicsPeakMode::RootMeanSquared) \
	op(ESubmixEffectDynamicsPeakMode::Peak) \
	op(ESubmixEffectDynamicsPeakMode::Count) 

enum class ESubmixEffectDynamicsPeakMode : uint8;
template<> struct TIsUEnumClass<ESubmixEffectDynamicsPeakMode> { enum { Value = true }; };
template<> AUDIOMIXER_API UEnum* StaticEnum<ESubmixEffectDynamicsPeakMode>();

#define FOREACH_ENUM_ESUBMIXEFFECTDYNAMICSCHANNELLINKMODE(op) \
	op(ESubmixEffectDynamicsChannelLinkMode::Disabled) \
	op(ESubmixEffectDynamicsChannelLinkMode::Average) \
	op(ESubmixEffectDynamicsChannelLinkMode::Peak) \
	op(ESubmixEffectDynamicsChannelLinkMode::Count) 

enum class ESubmixEffectDynamicsChannelLinkMode : uint8;
template<> struct TIsUEnumClass<ESubmixEffectDynamicsChannelLinkMode> { enum { Value = true }; };
template<> AUDIOMIXER_API UEnum* StaticEnum<ESubmixEffectDynamicsChannelLinkMode>();

#define FOREACH_ENUM_ESUBMIXEFFECTDYNAMICSKEYSOURCE(op) \
	op(ESubmixEffectDynamicsKeySource::Default) \
	op(ESubmixEffectDynamicsKeySource::AudioBus) \
	op(ESubmixEffectDynamicsKeySource::Submix) \
	op(ESubmixEffectDynamicsKeySource::Count) 

enum class ESubmixEffectDynamicsKeySource : uint8;
template<> struct TIsUEnumClass<ESubmixEffectDynamicsKeySource> { enum { Value = true }; };
template<> AUDIOMIXER_API UEnum* StaticEnum<ESubmixEffectDynamicsKeySource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
