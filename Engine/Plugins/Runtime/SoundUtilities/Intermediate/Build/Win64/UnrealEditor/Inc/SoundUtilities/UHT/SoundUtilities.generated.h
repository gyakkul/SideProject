// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundUtilities.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOUNDUTILITIES_SoundUtilities_generated_h
#error "SoundUtilities.generated.h already included, missing '#pragma once' in SoundUtilities.h"
#endif
#define SOUNDUTILITIES_SoundUtilities_generated_h

#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_14_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetQFromBandwidth); \
	DECLARE_FUNCTION(execGetBandwidthFromQ); \
	DECLARE_FUNCTION(execGetFrequencyMultiplierFromSemitones); \
	DECLARE_FUNCTION(execGetLinearFrequencyClamped); \
	DECLARE_FUNCTION(execGetLogFrequencyClamped); \
	DECLARE_FUNCTION(execConvertDecibelsToLinear); \
	DECLARE_FUNCTION(execConvertLinearToDecibels); \
	DECLARE_FUNCTION(execGetGainFromMidiVelocity); \
	DECLARE_FUNCTION(execGetPitchScaleFromMIDIPitch); \
	DECLARE_FUNCTION(execGetMIDIPitchFromFrequency); \
	DECLARE_FUNCTION(execGetFrequencyFromMIDIPitch); \
	DECLARE_FUNCTION(execGetBeatTempo);


#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetQFromBandwidth); \
	DECLARE_FUNCTION(execGetBandwidthFromQ); \
	DECLARE_FUNCTION(execGetFrequencyMultiplierFromSemitones); \
	DECLARE_FUNCTION(execGetLinearFrequencyClamped); \
	DECLARE_FUNCTION(execGetLogFrequencyClamped); \
	DECLARE_FUNCTION(execConvertDecibelsToLinear); \
	DECLARE_FUNCTION(execConvertLinearToDecibels); \
	DECLARE_FUNCTION(execGetGainFromMidiVelocity); \
	DECLARE_FUNCTION(execGetPitchScaleFromMIDIPitch); \
	DECLARE_FUNCTION(execGetMIDIPitchFromFrequency); \
	DECLARE_FUNCTION(execGetFrequencyFromMIDIPitch); \
	DECLARE_FUNCTION(execGetBeatTempo);


#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_14_ACCESSORS
#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundUtilitiesBPFunctionLibrary(); \
	friend struct Z_Construct_UClass_USoundUtilitiesBPFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USoundUtilitiesBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SoundUtilities"), NO_API) \
	DECLARE_SERIALIZER(USoundUtilitiesBPFunctionLibrary)


#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSoundUtilitiesBPFunctionLibrary(); \
	friend struct Z_Construct_UClass_USoundUtilitiesBPFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USoundUtilitiesBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SoundUtilities"), NO_API) \
	DECLARE_SERIALIZER(USoundUtilitiesBPFunctionLibrary)


#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundUtilitiesBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundUtilitiesBPFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundUtilitiesBPFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundUtilitiesBPFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundUtilitiesBPFunctionLibrary(USoundUtilitiesBPFunctionLibrary&&); \
	NO_API USoundUtilitiesBPFunctionLibrary(const USoundUtilitiesBPFunctionLibrary&); \
public: \
	NO_API virtual ~USoundUtilitiesBPFunctionLibrary();


#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundUtilitiesBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundUtilitiesBPFunctionLibrary(USoundUtilitiesBPFunctionLibrary&&); \
	NO_API USoundUtilitiesBPFunctionLibrary(const USoundUtilitiesBPFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundUtilitiesBPFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundUtilitiesBPFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundUtilitiesBPFunctionLibrary) \
	NO_API virtual ~USoundUtilitiesBPFunctionLibrary();


#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_11_PROLOG
#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_14_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_14_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_14_ACCESSORS \
	FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_14_INCLASS \
	FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_14_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_14_ACCESSORS \
	FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOUNDUTILITIES_API UClass* StaticClass<class USoundUtilitiesBPFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SoundUtilities_Source_SoundUtilities_Public_SoundUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
