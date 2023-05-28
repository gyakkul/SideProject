// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SynthComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundSubmixBase;
enum class EAudioFaderCurve : uint8;
#ifdef AUDIOMIXER_SynthComponent_generated_h
#error "SynthComponent.generated.h already included, missing '#pragma once' in SynthComponent.h"
#endif
#define AUDIOMIXER_SynthComponent_generated_h

#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_35_DELEGATE \
AUDIOMIXER_API void FOnSynthEnvelopeValue_DelegateWrapper(const FMulticastScriptDelegate& OnSynthEnvelopeValue, const float EnvelopeValue);


#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_44_SPARSE_DATA
#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_44_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_44_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_44_ACCESSORS
#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSynthSound(); \
	friend struct Z_Construct_UClass_USynthSound_Statics; \
public: \
	DECLARE_CLASS(USynthSound, USoundWaveProcedural, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(USynthSound)


#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUSynthSound(); \
	friend struct Z_Construct_UClass_USynthSound_Statics; \
public: \
	DECLARE_CLASS(USynthSound, USoundWaveProcedural, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(USynthSound)


#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USynthSound(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynthSound) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USynthSound); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynthSound); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USynthSound(USynthSound&&); \
	NO_API USynthSound(const USynthSound&); \
public: \
	NO_API virtual ~USynthSound();


#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USynthSound(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USynthSound(USynthSound&&); \
	NO_API USynthSound(const USynthSound&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USynthSound); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynthSound); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynthSound) \
	NO_API virtual ~USynthSound();


#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_41_PROLOG
#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_44_SPARSE_DATA \
	FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_44_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_44_ACCESSORS \
	FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_44_INCLASS \
	FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_44_SPARSE_DATA \
	FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_44_ACCESSORS \
	FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_44_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SynthSound."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOMIXER_API UClass* StaticClass<class USynthSound>();

#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_74_SPARSE_DATA
#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_74_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAdjustVolume); \
	DECLARE_FUNCTION(execFadeOut); \
	DECLARE_FUNCTION(execFadeIn); \
	DECLARE_FUNCTION(execSetOutputToBusOnly); \
	DECLARE_FUNCTION(execSetLowPassFilterFrequency); \
	DECLARE_FUNCTION(execSetLowPassFilterEnabled); \
	DECLARE_FUNCTION(execSetSubmixSend); \
	DECLARE_FUNCTION(execSetVolumeMultiplier); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execStart);


#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAdjustVolume); \
	DECLARE_FUNCTION(execFadeOut); \
	DECLARE_FUNCTION(execFadeIn); \
	DECLARE_FUNCTION(execSetOutputToBusOnly); \
	DECLARE_FUNCTION(execSetLowPassFilterFrequency); \
	DECLARE_FUNCTION(execSetLowPassFilterEnabled); \
	DECLARE_FUNCTION(execSetSubmixSend); \
	DECLARE_FUNCTION(execSetVolumeMultiplier); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execStart);


#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_74_ACCESSORS
#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_74_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USynthComponent, NO_API)


#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSynthComponent(); \
	friend struct Z_Construct_UClass_USynthComponent_Statics; \
public: \
	DECLARE_CLASS(USynthComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(USynthComponent) \
	FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_74_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_74_INCLASS \
private: \
	static void StaticRegisterNativesUSynthComponent(); \
	friend struct Z_Construct_UClass_USynthComponent_Statics; \
public: \
	DECLARE_CLASS(USynthComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(USynthComponent) \
	FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_74_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_74_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USynthComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USynthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USynthComponent(USynthComponent&&); \
	NO_API USynthComponent(const USynthComponent&); \
public: \
	NO_API virtual ~USynthComponent();


#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_74_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USynthComponent(USynthComponent&&); \
	NO_API USynthComponent(const USynthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USynthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynthComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynthComponent) \
	NO_API virtual ~USynthComponent();


#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_71_PROLOG
#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_74_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_74_SPARSE_DATA \
	FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_74_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_74_ACCESSORS \
	FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_74_INCLASS \
	FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_74_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_74_SPARSE_DATA \
	FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_74_ACCESSORS \
	FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_74_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOMIXER_API UClass* StaticClass<class USynthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
