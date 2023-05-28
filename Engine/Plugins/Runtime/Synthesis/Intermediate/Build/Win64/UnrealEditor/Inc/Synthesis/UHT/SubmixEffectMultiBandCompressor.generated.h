// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubmixEffects/SubmixEffectMultiBandCompressor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioBus;
class USoundSubmix;
struct FSubmixEffectMultibandCompressorSettings;
#ifdef SYNTHESIS_SubmixEffectMultiBandCompressor_generated_h
#error "SubmixEffectMultiBandCompressor.generated.h already included, missing '#pragma once' in SubmixEffectMultiBandCompressor.h"
#endif
#define SYNTHESIS_SubmixEffectMultiBandCompressor_generated_h

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDynamicsBandSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SYNTHESIS_API UScriptStruct* StaticStruct<struct FDynamicsBandSettings>();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SYNTHESIS_API UScriptStruct* StaticStruct<struct FSubmixEffectMultibandCompressorSettings>();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_180_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_180_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execSetExternalSubmix); \
	DECLARE_FUNCTION(execSetAudioBus); \
	DECLARE_FUNCTION(execResetKey);


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_180_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execSetExternalSubmix); \
	DECLARE_FUNCTION(execSetAudioBus); \
	DECLARE_FUNCTION(execResetKey);


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_180_ACCESSORS
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_180_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubmixEffectMultibandCompressorPreset(); \
	friend struct Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics; \
public: \
	DECLARE_CLASS(USubmixEffectMultibandCompressorPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USubmixEffectMultibandCompressorPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_180_INCLASS \
private: \
	static void StaticRegisterNativesUSubmixEffectMultibandCompressorPreset(); \
	friend struct Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics; \
public: \
	DECLARE_CLASS(USubmixEffectMultibandCompressorPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USubmixEffectMultibandCompressorPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_180_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubmixEffectMultibandCompressorPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectMultibandCompressorPreset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubmixEffectMultibandCompressorPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectMultibandCompressorPreset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubmixEffectMultibandCompressorPreset(USubmixEffectMultibandCompressorPreset&&); \
	NO_API USubmixEffectMultibandCompressorPreset(const USubmixEffectMultibandCompressorPreset&); \
public: \
	NO_API virtual ~USubmixEffectMultibandCompressorPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_180_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubmixEffectMultibandCompressorPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubmixEffectMultibandCompressorPreset(USubmixEffectMultibandCompressorPreset&&); \
	NO_API USubmixEffectMultibandCompressorPreset(const USubmixEffectMultibandCompressorPreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubmixEffectMultibandCompressorPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectMultibandCompressorPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectMultibandCompressorPreset) \
	NO_API virtual ~USubmixEffectMultibandCompressorPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_177_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_180_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_180_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_180_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_180_ACCESSORS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_180_INCLASS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_180_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_180_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_180_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_180_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_180_ACCESSORS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_180_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h_180_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SYNTHESIS_API UClass* StaticClass<class USubmixEffectMultibandCompressorPreset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectMultiBandCompressor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
