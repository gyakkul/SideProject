// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubmixEffects/SubmixEffectConvolutionReverb.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioImpulseResponse;
struct FSubmixEffectConvolutionReverbSettings;
#ifdef SYNTHESIS_SubmixEffectConvolutionReverb_generated_h
#error "SubmixEffectConvolutionReverb.generated.h already included, missing '#pragma once' in SubmixEffectConvolutionReverb.h"
#endif
#define SYNTHESIS_SubmixEffectConvolutionReverb_generated_h

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SYNTHESIS_API UScriptStruct* StaticStruct<struct FSubmixEffectConvolutionReverbSettings>();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_117_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_117_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetImpulseResponse); \
	DECLARE_FUNCTION(execSetSettings);


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetImpulseResponse); \
	DECLARE_FUNCTION(execSetSettings);


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_117_ACCESSORS
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_117_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubmixEffectConvolutionReverbPreset(); \
	friend struct Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics; \
public: \
	DECLARE_CLASS(USubmixEffectConvolutionReverbPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USubmixEffectConvolutionReverbPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_117_INCLASS \
private: \
	static void StaticRegisterNativesUSubmixEffectConvolutionReverbPreset(); \
	friend struct Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics; \
public: \
	DECLARE_CLASS(USubmixEffectConvolutionReverbPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USubmixEffectConvolutionReverbPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_117_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubmixEffectConvolutionReverbPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectConvolutionReverbPreset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubmixEffectConvolutionReverbPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectConvolutionReverbPreset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubmixEffectConvolutionReverbPreset(USubmixEffectConvolutionReverbPreset&&); \
	NO_API USubmixEffectConvolutionReverbPreset(const USubmixEffectConvolutionReverbPreset&); \
public: \
	NO_API virtual ~USubmixEffectConvolutionReverbPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_117_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubmixEffectConvolutionReverbPreset(USubmixEffectConvolutionReverbPreset&&); \
	NO_API USubmixEffectConvolutionReverbPreset(const USubmixEffectConvolutionReverbPreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubmixEffectConvolutionReverbPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectConvolutionReverbPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectConvolutionReverbPreset) \
	NO_API virtual ~USubmixEffectConvolutionReverbPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_114_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_117_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_117_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_117_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_117_ACCESSORS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_117_INCLASS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_117_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_117_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_117_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_117_ACCESSORS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_117_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_117_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SYNTHESIS_API UClass* StaticClass<class USubmixEffectConvolutionReverbPreset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
