// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioModulationStyle.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FColor;
#ifdef AUDIOMODULATION_AudioModulationStyle_generated_h
#error "AudioModulationStyle.generated.h already included, missing '#pragma once' in AudioModulationStyle.h"
#endif
#define AUDIOMODULATION_AudioModulationStyle_generated_h

#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_14_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetParameterColor); \
	DECLARE_FUNCTION(execGetPatchColor); \
	DECLARE_FUNCTION(execGetControlBusMixColor); \
	DECLARE_FUNCTION(execGetControlBusColor); \
	DECLARE_FUNCTION(execGetModulationGeneratorColor);


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetParameterColor); \
	DECLARE_FUNCTION(execGetPatchColor); \
	DECLARE_FUNCTION(execGetControlBusMixColor); \
	DECLARE_FUNCTION(execGetControlBusColor); \
	DECLARE_FUNCTION(execGetModulationGeneratorColor);


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_14_ACCESSORS
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioModulationStyle(); \
	friend struct Z_Construct_UClass_UAudioModulationStyle_Statics; \
public: \
	DECLARE_CLASS(UAudioModulationStyle, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioModulation"), NO_API) \
	DECLARE_SERIALIZER(UAudioModulationStyle)


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUAudioModulationStyle(); \
	friend struct Z_Construct_UClass_UAudioModulationStyle_Statics; \
public: \
	DECLARE_CLASS(UAudioModulationStyle, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioModulation"), NO_API) \
	DECLARE_SERIALIZER(UAudioModulationStyle)


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioModulationStyle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioModulationStyle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioModulationStyle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioModulationStyle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioModulationStyle(UAudioModulationStyle&&); \
	NO_API UAudioModulationStyle(const UAudioModulationStyle&); \
public: \
	NO_API virtual ~UAudioModulationStyle();


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioModulationStyle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioModulationStyle(UAudioModulationStyle&&); \
	NO_API UAudioModulationStyle(const UAudioModulationStyle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioModulationStyle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioModulationStyle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioModulationStyle) \
	NO_API virtual ~UAudioModulationStyle();


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_10_PROLOG
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_14_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_14_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_14_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_14_INCLASS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_14_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_14_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_14_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOMODULATION_API UClass* StaticClass<class UAudioModulationStyle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
