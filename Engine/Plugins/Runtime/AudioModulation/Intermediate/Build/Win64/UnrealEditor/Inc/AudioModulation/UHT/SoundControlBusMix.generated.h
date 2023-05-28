// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundControlBusMix.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOMODULATION_SoundControlBusMix_generated_h
#error "SoundControlBusMix.generated.h already included, missing '#pragma once' in SoundControlBusMix.h"
#endif
#define AUDIOMODULATION_SoundControlBusMix_generated_h

#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundControlBusMixStage_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUDIOMODULATION_API UScriptStruct* StaticStruct<struct FSoundControlBusMixStage>();

#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_37_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeactivateAllMixes); \
	DECLARE_FUNCTION(execDeactivateMix); \
	DECLARE_FUNCTION(execActivateMix); \
	DECLARE_FUNCTION(execSoloMix); \
	DECLARE_FUNCTION(execSaveMixToProfile); \
	DECLARE_FUNCTION(execLoadMixFromProfile);


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeactivateAllMixes); \
	DECLARE_FUNCTION(execDeactivateMix); \
	DECLARE_FUNCTION(execActivateMix); \
	DECLARE_FUNCTION(execSoloMix); \
	DECLARE_FUNCTION(execSaveMixToProfile); \
	DECLARE_FUNCTION(execLoadMixFromProfile);


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_37_ACCESSORS
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundControlBusMix(); \
	friend struct Z_Construct_UClass_USoundControlBusMix_Statics; \
public: \
	DECLARE_CLASS(USoundControlBusMix, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioModulation"), AUDIOMODULATION_API) \
	DECLARE_SERIALIZER(USoundControlBusMix) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUSoundControlBusMix(); \
	friend struct Z_Construct_UClass_USoundControlBusMix_Statics; \
public: \
	DECLARE_CLASS(USoundControlBusMix, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioModulation"), AUDIOMODULATION_API) \
	DECLARE_SERIALIZER(USoundControlBusMix) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMODULATION_API USoundControlBusMix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundControlBusMix) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMODULATION_API, USoundControlBusMix); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundControlBusMix); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUDIOMODULATION_API USoundControlBusMix(USoundControlBusMix&&); \
	AUDIOMODULATION_API USoundControlBusMix(const USoundControlBusMix&); \
public: \
	AUDIOMODULATION_API virtual ~USoundControlBusMix();


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMODULATION_API USoundControlBusMix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUDIOMODULATION_API USoundControlBusMix(USoundControlBusMix&&); \
	AUDIOMODULATION_API USoundControlBusMix(const USoundControlBusMix&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMODULATION_API, USoundControlBusMix); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundControlBusMix); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundControlBusMix) \
	AUDIOMODULATION_API virtual ~USoundControlBusMix();


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_34_PROLOG
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_37_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_37_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_37_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_37_INCLASS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_37_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_37_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_37_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundControlBusMix."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOMODULATION_API UClass* StaticClass<class USoundControlBusMix>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
