// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SourceEffects/SourceEffectConvolutionReverb.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioImpulseResponse;
struct FSourceEffectConvolutionReverbSettings;
#ifdef SYNTHESIS_SourceEffectConvolutionReverb_generated_h
#error "SourceEffectConvolutionReverb.generated.h already included, missing '#pragma once' in SourceEffectConvolutionReverb.h"
#endif
#define SYNTHESIS_SourceEffectConvolutionReverb_generated_h

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSourceEffectConvolutionReverbSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SYNTHESIS_API UScriptStruct* StaticStruct<struct FSourceEffectConvolutionReverbSettings>();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_81_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_81_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetImpulseResponse); \
	DECLARE_FUNCTION(execSetSettings);


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetImpulseResponse); \
	DECLARE_FUNCTION(execSetSettings);


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_81_ACCESSORS
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_81_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSourceEffectConvolutionReverbPreset(); \
	friend struct Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics; \
public: \
	DECLARE_CLASS(USourceEffectConvolutionReverbPreset, USoundEffectSourcePreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USourceEffectConvolutionReverbPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_81_INCLASS \
private: \
	static void StaticRegisterNativesUSourceEffectConvolutionReverbPreset(); \
	friend struct Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics; \
public: \
	DECLARE_CLASS(USourceEffectConvolutionReverbPreset, USoundEffectSourcePreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USourceEffectConvolutionReverbPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_81_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USourceEffectConvolutionReverbPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceEffectConvolutionReverbPreset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USourceEffectConvolutionReverbPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceEffectConvolutionReverbPreset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USourceEffectConvolutionReverbPreset(USourceEffectConvolutionReverbPreset&&); \
	NO_API USourceEffectConvolutionReverbPreset(const USourceEffectConvolutionReverbPreset&); \
public: \
	NO_API virtual ~USourceEffectConvolutionReverbPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_81_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USourceEffectConvolutionReverbPreset(USourceEffectConvolutionReverbPreset&&); \
	NO_API USourceEffectConvolutionReverbPreset(const USourceEffectConvolutionReverbPreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USourceEffectConvolutionReverbPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceEffectConvolutionReverbPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceEffectConvolutionReverbPreset) \
	NO_API virtual ~USourceEffectConvolutionReverbPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_78_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_81_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_81_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_81_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_81_ACCESSORS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_81_INCLASS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_81_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_81_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_81_ACCESSORS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_81_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h_81_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SYNTHESIS_API UClass* StaticClass<class USourceEffectConvolutionReverbPreset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectConvolutionReverb_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
