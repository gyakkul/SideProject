// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioDeviceNotificationSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAudioDeviceChangedRole : uint8;
enum class EAudioDeviceChangedState : uint8;
#ifdef AUDIOMIXER_AudioDeviceNotificationSubsystem_generated_h
#error "AudioDeviceNotificationSubsystem.generated.h already included, missing '#pragma once' in AudioDeviceNotificationSubsystem.h"
#endif
#define AUDIOMIXER_AudioDeviceNotificationSubsystem_generated_h

#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_38_DELEGATE \
AUDIOMIXER_API void FOnAudioDefaultDeviceChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAudioDefaultDeviceChanged, EAudioDeviceChangedRole AudioDeviceRole, const FString& DeviceId);


#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_39_DELEGATE \
AUDIOMIXER_API void FOnAudioDeviceStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAudioDeviceStateChanged, const FString& DeviceId, EAudioDeviceChangedState NewState);


#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_40_DELEGATE \
AUDIOMIXER_API void FOnAudioDeviceChange_DelegateWrapper(const FMulticastScriptDelegate& OnAudioDeviceChange, const FString& DeviceId);


#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_53_SPARSE_DATA
#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_53_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_53_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_53_ACCESSORS
#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioDeviceNotificationSubsystem(); \
	friend struct Z_Construct_UClass_UAudioDeviceNotificationSubsystem_Statics; \
public: \
	DECLARE_CLASS(UAudioDeviceNotificationSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(UAudioDeviceNotificationSubsystem)


#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_53_INCLASS \
private: \
	static void StaticRegisterNativesUAudioDeviceNotificationSubsystem(); \
	friend struct Z_Construct_UClass_UAudioDeviceNotificationSubsystem_Statics; \
public: \
	DECLARE_CLASS(UAudioDeviceNotificationSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(UAudioDeviceNotificationSubsystem)


#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioDeviceNotificationSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioDeviceNotificationSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioDeviceNotificationSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioDeviceNotificationSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioDeviceNotificationSubsystem(UAudioDeviceNotificationSubsystem&&); \
	NO_API UAudioDeviceNotificationSubsystem(const UAudioDeviceNotificationSubsystem&); \
public:


#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioDeviceNotificationSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioDeviceNotificationSubsystem(UAudioDeviceNotificationSubsystem&&); \
	NO_API UAudioDeviceNotificationSubsystem(const UAudioDeviceNotificationSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioDeviceNotificationSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioDeviceNotificationSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAudioDeviceNotificationSubsystem)


#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_49_PROLOG
#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_53_SPARSE_DATA \
	FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_53_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_53_ACCESSORS \
	FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_53_INCLASS \
	FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_53_SPARSE_DATA \
	FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_53_ACCESSORS \
	FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOMIXER_API UClass* StaticClass<class UAudioDeviceNotificationSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioMixer_Public_AudioDeviceNotificationSubsystem_h


#define FOREACH_ENUM_EAUDIODEVICECHANGEDROLE(op) \
	op(EAudioDeviceChangedRole::Invalid) \
	op(EAudioDeviceChangedRole::Console) \
	op(EAudioDeviceChangedRole::Multimedia) \
	op(EAudioDeviceChangedRole::Communications) \
	op(EAudioDeviceChangedRole::Count) 

enum class EAudioDeviceChangedRole : uint8;
template<> struct TIsUEnumClass<EAudioDeviceChangedRole> { enum { Value = true }; };
template<> AUDIOMIXER_API UEnum* StaticEnum<EAudioDeviceChangedRole>();

#define FOREACH_ENUM_EAUDIODEVICECHANGEDSTATE(op) \
	op(EAudioDeviceChangedState::Invalid) \
	op(EAudioDeviceChangedState::Active) \
	op(EAudioDeviceChangedState::Disabled) \
	op(EAudioDeviceChangedState::NotPresent) \
	op(EAudioDeviceChangedState::Unplugged) \
	op(EAudioDeviceChangedState::Count) 

enum class EAudioDeviceChangedState : uint8;
template<> struct TIsUEnumClass<EAudioDeviceChangedState> { enum { Value = true }; };
template<> AUDIOMIXER_API UEnum* StaticEnum<EAudioDeviceChangedState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
