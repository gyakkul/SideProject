// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioComponentGroup.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class IAudioComponentGroupExtension;
class UAudioComponent;
class UAudioComponentGroup;
class USoundBase;
#ifdef AUDIOGAMEPLAY_AudioComponentGroup_generated_h
#error "AudioComponentGroup.generated.h already included, missing '#pragma once' in AudioComponentGroup.h"
#endif
#define AUDIOGAMEPLAY_AudioComponentGroup_generated_h

#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_16_DELEGATE \
AUDIOGAMEPLAY_API void FSoundGroupChanged_DelegateWrapper(const FMulticastScriptDelegate& SoundGroupChanged);


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_17_DELEGATE \
AUDIOGAMEPLAY_API void FSoundCallback_DelegateWrapper(const FScriptDelegate& SoundCallback, FName const& EventName);


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_18_DELEGATE \
AUDIOGAMEPLAY_API void FBoolParamCallback_DelegateWrapper(const FScriptDelegate& BoolParamCallback, bool ParamValue);


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_19_DELEGATE \
AUDIOGAMEPLAY_API void FStringParamCallback_DelegateWrapper(const FScriptDelegate& StringParamCallback, const FString& Value);


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_27_SPARSE_DATA
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStringParamValue); \
	DECLARE_FUNCTION(execGetBoolParamValue); \
	DECLARE_FUNCTION(execGetFloatParamValue); \
	DECLARE_FUNCTION(execRemoveExtension); \
	DECLARE_FUNCTION(execAddExtension); \
	DECLARE_FUNCTION(execSetLowPassFilter); \
	DECLARE_FUNCTION(execSetPitchMultiplier); \
	DECLARE_FUNCTION(execSetVolumeMultiplier); \
	DECLARE_FUNCTION(execDisableVirtualization); \
	DECLARE_FUNCTION(execEnableVirtualization); \
	DECLARE_FUNCTION(execAddExternalComponent); \
	DECLARE_FUNCTION(execBroadcastEvent); \
	DECLARE_FUNCTION(execBroadcastKill); \
	DECLARE_FUNCTION(execBroadcastStopAll); \
	DECLARE_FUNCTION(execIsVirtualized); \
	DECLARE_FUNCTION(execIsPlayingAny); \
	DECLARE_FUNCTION(execStopSound); \
	DECLARE_FUNCTION(execStaticGetOrCreateComponentGroup);


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStringParamValue); \
	DECLARE_FUNCTION(execGetBoolParamValue); \
	DECLARE_FUNCTION(execGetFloatParamValue); \
	DECLARE_FUNCTION(execRemoveExtension); \
	DECLARE_FUNCTION(execAddExtension); \
	DECLARE_FUNCTION(execSetLowPassFilter); \
	DECLARE_FUNCTION(execSetPitchMultiplier); \
	DECLARE_FUNCTION(execSetVolumeMultiplier); \
	DECLARE_FUNCTION(execDisableVirtualization); \
	DECLARE_FUNCTION(execEnableVirtualization); \
	DECLARE_FUNCTION(execAddExternalComponent); \
	DECLARE_FUNCTION(execBroadcastEvent); \
	DECLARE_FUNCTION(execBroadcastKill); \
	DECLARE_FUNCTION(execBroadcastStopAll); \
	DECLARE_FUNCTION(execIsVirtualized); \
	DECLARE_FUNCTION(execIsPlayingAny); \
	DECLARE_FUNCTION(execStopSound); \
	DECLARE_FUNCTION(execStaticGetOrCreateComponentGroup);


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_27_ACCESSORS
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioComponentGroup(); \
	friend struct Z_Construct_UClass_UAudioComponentGroup_Statics; \
public: \
	DECLARE_CLASS(UAudioComponentGroup, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioGameplay"), NO_API) \
	DECLARE_SERIALIZER(UAudioComponentGroup) \
	virtual UObject* _getUObject() const override { return const_cast<UAudioComponentGroup*>(this); }


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUAudioComponentGroup(); \
	friend struct Z_Construct_UClass_UAudioComponentGroup_Statics; \
public: \
	DECLARE_CLASS(UAudioComponentGroup, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioGameplay"), NO_API) \
	DECLARE_SERIALIZER(UAudioComponentGroup) \
	virtual UObject* _getUObject() const override { return const_cast<UAudioComponentGroup*>(this); }


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioComponentGroup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioComponentGroup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioComponentGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioComponentGroup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioComponentGroup(UAudioComponentGroup&&); \
	NO_API UAudioComponentGroup(const UAudioComponentGroup&); \
public:


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioComponentGroup(UAudioComponentGroup&&); \
	NO_API UAudioComponentGroup(const UAudioComponentGroup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioComponentGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioComponentGroup); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioComponentGroup)


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_24_PROLOG
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_27_SPARSE_DATA \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_27_RPC_WRAPPERS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_27_ACCESSORS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_27_INCLASS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_27_SPARSE_DATA \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_27_ACCESSORS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOGAMEPLAY_API UClass* StaticClass<class UAudioComponentGroup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioComponentGroup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
