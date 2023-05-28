// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ResonanceAudioReverb.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ERaMaterialName : uint8;
#ifdef RESONANCEAUDIO_ResonanceAudioReverb_generated_h
#error "ResonanceAudioReverb.generated.h already included, missing '#pragma once' in ResonanceAudioReverb.h"
#endif
#define RESONANCEAUDIO_ResonanceAudioReverb_generated_h

#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics; \
	RESONANCEAUDIO_API static class UScriptStruct* StaticStruct();


template<> RESONANCEAUDIO_API UScriptStruct* StaticStruct<struct FResonanceAudioReverbPluginSettings>();

#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_177_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_177_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetReverbBrightness); \
	DECLARE_FUNCTION(execSetReverbTimeModifier); \
	DECLARE_FUNCTION(execSetReverbGain); \
	DECLARE_FUNCTION(execSetReflectionScalar); \
	DECLARE_FUNCTION(execSetRoomMaterials); \
	DECLARE_FUNCTION(execSetRoomDimensions); \
	DECLARE_FUNCTION(execSetRoomRotation); \
	DECLARE_FUNCTION(execSetRoomPosition); \
	DECLARE_FUNCTION(execSetEnableRoomEffects);


#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_177_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetReverbBrightness); \
	DECLARE_FUNCTION(execSetReverbTimeModifier); \
	DECLARE_FUNCTION(execSetReverbGain); \
	DECLARE_FUNCTION(execSetReflectionScalar); \
	DECLARE_FUNCTION(execSetRoomMaterials); \
	DECLARE_FUNCTION(execSetRoomDimensions); \
	DECLARE_FUNCTION(execSetRoomRotation); \
	DECLARE_FUNCTION(execSetRoomPosition); \
	DECLARE_FUNCTION(execSetEnableRoomEffects);


#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_177_ACCESSORS
#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_177_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUResonanceAudioReverbPluginPreset(); \
	friend struct Z_Construct_UClass_UResonanceAudioReverbPluginPreset_Statics; \
public: \
	DECLARE_CLASS(UResonanceAudioReverbPluginPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ResonanceAudio"), NO_API) \
	DECLARE_SERIALIZER(UResonanceAudioReverbPluginPreset)


#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_177_INCLASS \
private: \
	static void StaticRegisterNativesUResonanceAudioReverbPluginPreset(); \
	friend struct Z_Construct_UClass_UResonanceAudioReverbPluginPreset_Statics; \
public: \
	DECLARE_CLASS(UResonanceAudioReverbPluginPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ResonanceAudio"), NO_API) \
	DECLARE_SERIALIZER(UResonanceAudioReverbPluginPreset)


#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_177_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UResonanceAudioReverbPluginPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResonanceAudioReverbPluginPreset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UResonanceAudioReverbPluginPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResonanceAudioReverbPluginPreset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UResonanceAudioReverbPluginPreset(UResonanceAudioReverbPluginPreset&&); \
	NO_API UResonanceAudioReverbPluginPreset(const UResonanceAudioReverbPluginPreset&); \
public: \
	NO_API virtual ~UResonanceAudioReverbPluginPreset();


#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_177_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UResonanceAudioReverbPluginPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UResonanceAudioReverbPluginPreset(UResonanceAudioReverbPluginPreset&&); \
	NO_API UResonanceAudioReverbPluginPreset(const UResonanceAudioReverbPluginPreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UResonanceAudioReverbPluginPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResonanceAudioReverbPluginPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResonanceAudioReverbPluginPreset) \
	NO_API virtual ~UResonanceAudioReverbPluginPreset();


#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_174_PROLOG
#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_177_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_177_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_177_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_177_ACCESSORS \
	FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_177_INCLASS \
	FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_177_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_177_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_177_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_177_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_177_ACCESSORS \
	FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_177_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_177_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RESONANCEAUDIO_API UClass* StaticClass<class UResonanceAudioReverbPluginPreset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
