// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SynthComponents/EpicSynth1Component.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UModularSynthPresetBank;
enum class ESynth1OscType : uint8;
enum class ESynth1PatchSource : uint8;
enum class ESynthFilterAlgorithm : uint8;
enum class ESynthFilterType : uint8;
enum class ESynthLFOMode : uint8;
enum class ESynthLFOPatchType : uint8;
enum class ESynthLFOType : uint8;
enum class ESynthModEnvBiasPatch : uint8;
enum class ESynthModEnvPatch : uint8;
enum class ESynthStereoDelayMode : uint8;
struct FModularSynthPreset;
struct FPatchId;
struct FSynth1PatchCable;
#ifdef SYNTHESIS_EpicSynth1Component_generated_h
#error "EpicSynth1Component.generated.h already included, missing '#pragma once' in EpicSynth1Component.h"
#endif
#define SYNTHESIS_EpicSynth1Component_generated_h

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEpicSynth1Patch_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SYNTHESIS_API UScriptStruct* StaticStruct<struct FEpicSynth1Patch>();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModularSynthPreset_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> SYNTHESIS_API UScriptStruct* StaticStruct<struct FModularSynthPreset>();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_330_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModularSynthPresetBankEntry_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SYNTHESIS_API UScriptStruct* StaticStruct<struct FModularSynthPresetBankEntry>();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_347_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_347_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_347_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_347_ACCESSORS
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_347_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModularSynthPresetBank(); \
	friend struct Z_Construct_UClass_UModularSynthPresetBank_Statics; \
public: \
	DECLARE_CLASS(UModularSynthPresetBank, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(UModularSynthPresetBank)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_347_INCLASS \
private: \
	static void StaticRegisterNativesUModularSynthPresetBank(); \
	friend struct Z_Construct_UClass_UModularSynthPresetBank_Statics; \
public: \
	DECLARE_CLASS(UModularSynthPresetBank, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(UModularSynthPresetBank)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_347_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModularSynthPresetBank(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularSynthPresetBank) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularSynthPresetBank); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularSynthPresetBank); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModularSynthPresetBank(UModularSynthPresetBank&&); \
	NO_API UModularSynthPresetBank(const UModularSynthPresetBank&); \
public: \
	NO_API virtual ~UModularSynthPresetBank();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_347_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModularSynthPresetBank(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModularSynthPresetBank(UModularSynthPresetBank&&); \
	NO_API UModularSynthPresetBank(const UModularSynthPresetBank&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularSynthPresetBank); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularSynthPresetBank); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularSynthPresetBank) \
	NO_API virtual ~UModularSynthPresetBank();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_344_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_347_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_347_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_347_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_347_ACCESSORS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_347_INCLASS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_347_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_347_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_347_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_347_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_347_ACCESSORS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_347_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_347_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SYNTHESIS_API UClass* StaticClass<class UModularSynthPresetBank>();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_358_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_358_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddModularSynthPresetToBankAsset);


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_358_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddModularSynthPresetToBankAsset);


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_358_ACCESSORS
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_358_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModularSynthLibrary(); \
	friend struct Z_Construct_UClass_UModularSynthLibrary_Statics; \
public: \
	DECLARE_CLASS(UModularSynthLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(UModularSynthLibrary)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_358_INCLASS \
private: \
	static void StaticRegisterNativesUModularSynthLibrary(); \
	friend struct Z_Construct_UClass_UModularSynthLibrary_Statics; \
public: \
	DECLARE_CLASS(UModularSynthLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(UModularSynthLibrary)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_358_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModularSynthLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularSynthLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularSynthLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularSynthLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModularSynthLibrary(UModularSynthLibrary&&); \
	NO_API UModularSynthLibrary(const UModularSynthLibrary&); \
public: \
	NO_API virtual ~UModularSynthLibrary();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_358_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModularSynthLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModularSynthLibrary(UModularSynthLibrary&&); \
	NO_API UModularSynthLibrary(const UModularSynthLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularSynthLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularSynthLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularSynthLibrary) \
	NO_API virtual ~UModularSynthLibrary();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_355_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_358_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_358_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_358_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_358_ACCESSORS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_358_INCLASS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_358_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_358_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_358_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_358_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_358_ACCESSORS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_358_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_358_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SYNTHESIS_API UClass* StaticClass<class UModularSynthLibrary>();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_373_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_373_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetEnablePatch); \
	DECLARE_FUNCTION(execCreatePatch); \
	DECLARE_FUNCTION(execSetSynthPreset); \
	DECLARE_FUNCTION(execSetChorusFrequency); \
	DECLARE_FUNCTION(execSetChorusFeedback); \
	DECLARE_FUNCTION(execSetChorusDepth); \
	DECLARE_FUNCTION(execSetChorusEnabled); \
	DECLARE_FUNCTION(execSetStereoDelayRatio); \
	DECLARE_FUNCTION(execSetStereoDelayWetlevel); \
	DECLARE_FUNCTION(execSetStereoDelayFeedback); \
	DECLARE_FUNCTION(execSetStereoDelayTime); \
	DECLARE_FUNCTION(execSetStereoDelayMode); \
	DECLARE_FUNCTION(execSetStereoDelayIsEnabled); \
	DECLARE_FUNCTION(execSetFilterAlgorithm); \
	DECLARE_FUNCTION(execSetFilterType); \
	DECLARE_FUNCTION(execSetFilterQMod); \
	DECLARE_FUNCTION(execSetFilterQ); \
	DECLARE_FUNCTION(execSetFilterFrequencyMod); \
	DECLARE_FUNCTION(execSetFilterFrequency); \
	DECLARE_FUNCTION(execSetEnableRetrigger); \
	DECLARE_FUNCTION(execSetEnableLegato); \
	DECLARE_FUNCTION(execSetModEnvReleaseTime); \
	DECLARE_FUNCTION(execSetModEnvSustainGain); \
	DECLARE_FUNCTION(execSetModEnvDecayTime); \
	DECLARE_FUNCTION(execSetModEnvAttackTime); \
	DECLARE_FUNCTION(execSetModEnvDepth); \
	DECLARE_FUNCTION(execSetModEnvBiasInvert); \
	DECLARE_FUNCTION(execSetModEnvInvert); \
	DECLARE_FUNCTION(execSetModEnvBiasPatch); \
	DECLARE_FUNCTION(execSetModEnvPatch); \
	DECLARE_FUNCTION(execSetReleaseTime); \
	DECLARE_FUNCTION(execSetSustainGain); \
	DECLARE_FUNCTION(execSetDecayTime); \
	DECLARE_FUNCTION(execSetAttackTime); \
	DECLARE_FUNCTION(execSetGainDb); \
	DECLARE_FUNCTION(execSetLFOPatch); \
	DECLARE_FUNCTION(execSetLFOMode); \
	DECLARE_FUNCTION(execSetLFOType); \
	DECLARE_FUNCTION(execSetLFOGainMod); \
	DECLARE_FUNCTION(execSetLFOGain); \
	DECLARE_FUNCTION(execSetLFOFrequencyMod); \
	DECLARE_FUNCTION(execSetLFOFrequency); \
	DECLARE_FUNCTION(execSetSpread); \
	DECLARE_FUNCTION(execSetPan); \
	DECLARE_FUNCTION(execSetOscSync); \
	DECLARE_FUNCTION(execSetEnableUnison); \
	DECLARE_FUNCTION(execSetOscPulsewidth); \
	DECLARE_FUNCTION(execSetPortamento); \
	DECLARE_FUNCTION(execSetPitchBend); \
	DECLARE_FUNCTION(execSetOscCents); \
	DECLARE_FUNCTION(execSetOscSemitones); \
	DECLARE_FUNCTION(execSetOscOctave); \
	DECLARE_FUNCTION(execSetOscType); \
	DECLARE_FUNCTION(execSetOscFrequencyMod); \
	DECLARE_FUNCTION(execSetOscGainMod); \
	DECLARE_FUNCTION(execSetOscGain); \
	DECLARE_FUNCTION(execSetEnablePolyphony); \
	DECLARE_FUNCTION(execNoteOff); \
	DECLARE_FUNCTION(execNoteOn);


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_373_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetEnablePatch); \
	DECLARE_FUNCTION(execCreatePatch); \
	DECLARE_FUNCTION(execSetSynthPreset); \
	DECLARE_FUNCTION(execSetChorusFrequency); \
	DECLARE_FUNCTION(execSetChorusFeedback); \
	DECLARE_FUNCTION(execSetChorusDepth); \
	DECLARE_FUNCTION(execSetChorusEnabled); \
	DECLARE_FUNCTION(execSetStereoDelayRatio); \
	DECLARE_FUNCTION(execSetStereoDelayWetlevel); \
	DECLARE_FUNCTION(execSetStereoDelayFeedback); \
	DECLARE_FUNCTION(execSetStereoDelayTime); \
	DECLARE_FUNCTION(execSetStereoDelayMode); \
	DECLARE_FUNCTION(execSetStereoDelayIsEnabled); \
	DECLARE_FUNCTION(execSetFilterAlgorithm); \
	DECLARE_FUNCTION(execSetFilterType); \
	DECLARE_FUNCTION(execSetFilterQMod); \
	DECLARE_FUNCTION(execSetFilterQ); \
	DECLARE_FUNCTION(execSetFilterFrequencyMod); \
	DECLARE_FUNCTION(execSetFilterFrequency); \
	DECLARE_FUNCTION(execSetEnableRetrigger); \
	DECLARE_FUNCTION(execSetEnableLegato); \
	DECLARE_FUNCTION(execSetModEnvReleaseTime); \
	DECLARE_FUNCTION(execSetModEnvSustainGain); \
	DECLARE_FUNCTION(execSetModEnvDecayTime); \
	DECLARE_FUNCTION(execSetModEnvAttackTime); \
	DECLARE_FUNCTION(execSetModEnvDepth); \
	DECLARE_FUNCTION(execSetModEnvBiasInvert); \
	DECLARE_FUNCTION(execSetModEnvInvert); \
	DECLARE_FUNCTION(execSetModEnvBiasPatch); \
	DECLARE_FUNCTION(execSetModEnvPatch); \
	DECLARE_FUNCTION(execSetReleaseTime); \
	DECLARE_FUNCTION(execSetSustainGain); \
	DECLARE_FUNCTION(execSetDecayTime); \
	DECLARE_FUNCTION(execSetAttackTime); \
	DECLARE_FUNCTION(execSetGainDb); \
	DECLARE_FUNCTION(execSetLFOPatch); \
	DECLARE_FUNCTION(execSetLFOMode); \
	DECLARE_FUNCTION(execSetLFOType); \
	DECLARE_FUNCTION(execSetLFOGainMod); \
	DECLARE_FUNCTION(execSetLFOGain); \
	DECLARE_FUNCTION(execSetLFOFrequencyMod); \
	DECLARE_FUNCTION(execSetLFOFrequency); \
	DECLARE_FUNCTION(execSetSpread); \
	DECLARE_FUNCTION(execSetPan); \
	DECLARE_FUNCTION(execSetOscSync); \
	DECLARE_FUNCTION(execSetEnableUnison); \
	DECLARE_FUNCTION(execSetOscPulsewidth); \
	DECLARE_FUNCTION(execSetPortamento); \
	DECLARE_FUNCTION(execSetPitchBend); \
	DECLARE_FUNCTION(execSetOscCents); \
	DECLARE_FUNCTION(execSetOscSemitones); \
	DECLARE_FUNCTION(execSetOscOctave); \
	DECLARE_FUNCTION(execSetOscType); \
	DECLARE_FUNCTION(execSetOscFrequencyMod); \
	DECLARE_FUNCTION(execSetOscGainMod); \
	DECLARE_FUNCTION(execSetOscGain); \
	DECLARE_FUNCTION(execSetEnablePolyphony); \
	DECLARE_FUNCTION(execNoteOff); \
	DECLARE_FUNCTION(execNoteOn);


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_373_ACCESSORS
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_373_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModularSynthComponent(); \
	friend struct Z_Construct_UClass_UModularSynthComponent_Statics; \
public: \
	DECLARE_CLASS(UModularSynthComponent, USynthComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(UModularSynthComponent)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_373_INCLASS \
private: \
	static void StaticRegisterNativesUModularSynthComponent(); \
	friend struct Z_Construct_UClass_UModularSynthComponent_Statics; \
public: \
	DECLARE_CLASS(UModularSynthComponent, USynthComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(UModularSynthComponent)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_373_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModularSynthComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularSynthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularSynthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularSynthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModularSynthComponent(UModularSynthComponent&&); \
	NO_API UModularSynthComponent(const UModularSynthComponent&); \
public: \
	NO_API virtual ~UModularSynthComponent();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_373_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModularSynthComponent(UModularSynthComponent&&); \
	NO_API UModularSynthComponent(const UModularSynthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularSynthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularSynthComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularSynthComponent) \
	NO_API virtual ~UModularSynthComponent();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_370_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_373_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_373_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_373_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_373_ACCESSORS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_373_INCLASS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_373_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_373_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_373_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_373_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_373_ACCESSORS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_373_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h_373_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SYNTHESIS_API UClass* StaticClass<class UModularSynthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_EpicSynth1Component_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
