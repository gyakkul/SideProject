// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SynthComponents/SynthComponentGranulator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundWave;
enum class EGranularSynthEnvelopeType : uint8;
enum class EGranularSynthSeekType : uint8;
#ifdef SYNTHESIS_SynthComponentGranulator_generated_h
#error "SynthComponentGranulator.generated.h already included, missing '#pragma once' in SynthComponentGranulator.h"
#endif
#define SYNTHESIS_SynthComponentGranulator_generated_h

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentGranulator_h_43_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentGranulator_h_43_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsLoaded); \
	DECLARE_FUNCTION(execGetCurrentPlayheadTime); \
	DECLARE_FUNCTION(execSetPlayheadTime); \
	DECLARE_FUNCTION(execSetScrubMode); \
	DECLARE_FUNCTION(execGetSampleDuration); \
	DECLARE_FUNCTION(execSetGrainDuration); \
	DECLARE_FUNCTION(execSetGrainPan); \
	DECLARE_FUNCTION(execSetGrainVolume); \
	DECLARE_FUNCTION(execSetGrainPitch); \
	DECLARE_FUNCTION(execSetPlaybackSpeed); \
	DECLARE_FUNCTION(execSetGrainEnvelopeType); \
	DECLARE_FUNCTION(execSetGrainProbability); \
	DECLARE_FUNCTION(execSetGrainsPerSecond); \
	DECLARE_FUNCTION(execNoteOff); \
	DECLARE_FUNCTION(execNoteOn); \
	DECLARE_FUNCTION(execSetReleaseTimeMsec); \
	DECLARE_FUNCTION(execSetSustainGain); \
	DECLARE_FUNCTION(execSetDecayTime); \
	DECLARE_FUNCTION(execSetAttackTime); \
	DECLARE_FUNCTION(execSetSoundWave);


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentGranulator_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsLoaded); \
	DECLARE_FUNCTION(execGetCurrentPlayheadTime); \
	DECLARE_FUNCTION(execSetPlayheadTime); \
	DECLARE_FUNCTION(execSetScrubMode); \
	DECLARE_FUNCTION(execGetSampleDuration); \
	DECLARE_FUNCTION(execSetGrainDuration); \
	DECLARE_FUNCTION(execSetGrainPan); \
	DECLARE_FUNCTION(execSetGrainVolume); \
	DECLARE_FUNCTION(execSetGrainPitch); \
	DECLARE_FUNCTION(execSetPlaybackSpeed); \
	DECLARE_FUNCTION(execSetGrainEnvelopeType); \
	DECLARE_FUNCTION(execSetGrainProbability); \
	DECLARE_FUNCTION(execSetGrainsPerSecond); \
	DECLARE_FUNCTION(execNoteOff); \
	DECLARE_FUNCTION(execNoteOn); \
	DECLARE_FUNCTION(execSetReleaseTimeMsec); \
	DECLARE_FUNCTION(execSetSustainGain); \
	DECLARE_FUNCTION(execSetDecayTime); \
	DECLARE_FUNCTION(execSetAttackTime); \
	DECLARE_FUNCTION(execSetSoundWave);


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentGranulator_h_43_ACCESSORS
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentGranulator_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGranularSynth(); \
	friend struct Z_Construct_UClass_UGranularSynth_Statics; \
public: \
	DECLARE_CLASS(UGranularSynth, USynthComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(UGranularSynth)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentGranulator_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUGranularSynth(); \
	friend struct Z_Construct_UClass_UGranularSynth_Statics; \
public: \
	DECLARE_CLASS(UGranularSynth, USynthComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(UGranularSynth)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentGranulator_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGranularSynth(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGranularSynth) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGranularSynth); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGranularSynth); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGranularSynth(UGranularSynth&&); \
	NO_API UGranularSynth(const UGranularSynth&); \
public:


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentGranulator_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGranularSynth(UGranularSynth&&); \
	NO_API UGranularSynth(const UGranularSynth&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGranularSynth); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGranularSynth); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGranularSynth)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentGranulator_h_40_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentGranulator_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentGranulator_h_43_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentGranulator_h_43_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentGranulator_h_43_ACCESSORS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentGranulator_h_43_INCLASS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentGranulator_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentGranulator_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentGranulator_h_43_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentGranulator_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentGranulator_h_43_ACCESSORS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentGranulator_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentGranulator_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SYNTHESIS_API UClass* StaticClass<class UGranularSynth>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentGranulator_h


#define FOREACH_ENUM_EGRANULARSYNTHENVELOPETYPE(op) \
	op(EGranularSynthEnvelopeType::Rectangular) \
	op(EGranularSynthEnvelopeType::Triangle) \
	op(EGranularSynthEnvelopeType::DownwardTriangle) \
	op(EGranularSynthEnvelopeType::UpwardTriangle) \
	op(EGranularSynthEnvelopeType::ExponentialDecay) \
	op(EGranularSynthEnvelopeType::ExponentialIncrease) \
	op(EGranularSynthEnvelopeType::Gaussian) \
	op(EGranularSynthEnvelopeType::Hanning) \
	op(EGranularSynthEnvelopeType::Lanczos) \
	op(EGranularSynthEnvelopeType::Cosine) \
	op(EGranularSynthEnvelopeType::CosineSquared) \
	op(EGranularSynthEnvelopeType::Welch) \
	op(EGranularSynthEnvelopeType::Blackman) \
	op(EGranularSynthEnvelopeType::BlackmanHarris) \
	op(EGranularSynthEnvelopeType::Count) 

enum class EGranularSynthEnvelopeType : uint8;
template<> struct TIsUEnumClass<EGranularSynthEnvelopeType> { enum { Value = true }; };
template<> SYNTHESIS_API UEnum* StaticEnum<EGranularSynthEnvelopeType>();

#define FOREACH_ENUM_EGRANULARSYNTHSEEKTYPE(op) \
	op(EGranularSynthSeekType::FromBeginning) \
	op(EGranularSynthSeekType::FromCurrentPosition) \
	op(EGranularSynthSeekType::Count) 

enum class EGranularSynthSeekType : uint8;
template<> struct TIsUEnumClass<EGranularSynthSeekType> { enum { Value = true }; };
template<> SYNTHESIS_API UEnum* StaticEnum<EGranularSynthSeekType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
