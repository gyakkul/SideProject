// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/AudioBus.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AudioBus_generated_h
#error "AudioBus.generated.h already included, missing '#pragma once' in AudioBus.h"
#endif
#define ENGINE_AudioBus_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_48_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_48_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_48_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_48_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioBus(); \
	friend struct Z_Construct_UClass_UAudioBus_Statics; \
public: \
	DECLARE_CLASS(UAudioBus, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAudioBus)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUAudioBus(); \
	friend struct Z_Construct_UClass_UAudioBus_Statics; \
public: \
	DECLARE_CLASS(UAudioBus, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAudioBus)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioBus(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioBus) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioBus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioBus); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioBus(UAudioBus&&); \
	NO_API UAudioBus(const UAudioBus&); \
public: \
	NO_API virtual ~UAudioBus();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioBus(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioBus(UAudioBus&&); \
	NO_API UAudioBus(const UAudioBus&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioBus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioBus); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioBus) \
	NO_API virtual ~UAudioBus();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_45_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_48_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_48_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_48_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_48_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_48_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_48_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_48_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AudioBus."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAudioBus>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h


#define FOREACH_ENUM_EAUDIOBUSCHANNELS(op) \
	op(EAudioBusChannels::Mono) \
	op(EAudioBusChannels::Stereo) \
	op(EAudioBusChannels::Quad) \
	op(EAudioBusChannels::FivePointOne) \
	op(EAudioBusChannels::SevenPointOne) 

enum class EAudioBusChannels : uint8;
template<> struct TIsUEnumClass<EAudioBusChannels> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EAudioBusChannels>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
