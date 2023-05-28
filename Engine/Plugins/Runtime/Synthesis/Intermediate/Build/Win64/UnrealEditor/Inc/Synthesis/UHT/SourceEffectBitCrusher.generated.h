// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SourceEffects/SourceEffectBitCrusher.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundModulatorBase;
struct FSourceEffectBitCrusherBaseSettings;
struct FSourceEffectBitCrusherSettings;
#ifdef SYNTHESIS_SourceEffectBitCrusher_generated_h
#error "SourceEffectBitCrusher.generated.h already included, missing '#pragma once' in SourceEffectBitCrusher.h"
#endif
#define SYNTHESIS_SourceEffectBitCrusher_generated_h

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSourceEffectBitCrusherBaseSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SYNTHESIS_API UScriptStruct* StaticStruct<struct FSourceEffectBitCrusherBaseSettings>();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSourceEffectBitCrusherSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SYNTHESIS_API UScriptStruct* StaticStruct<struct FSourceEffectBitCrusherSettings>();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_84_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_84_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetModulationSettings); \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execSetSampleRateModulators); \
	DECLARE_FUNCTION(execSetSampleRateModulator); \
	DECLARE_FUNCTION(execSetSampleRate); \
	DECLARE_FUNCTION(execSetBitModulators); \
	DECLARE_FUNCTION(execSetBitModulator); \
	DECLARE_FUNCTION(execSetBits);


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetModulationSettings); \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execSetSampleRateModulators); \
	DECLARE_FUNCTION(execSetSampleRateModulator); \
	DECLARE_FUNCTION(execSetSampleRate); \
	DECLARE_FUNCTION(execSetBitModulators); \
	DECLARE_FUNCTION(execSetBitModulator); \
	DECLARE_FUNCTION(execSetBits);


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_84_ACCESSORS
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_84_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USourceEffectBitCrusherPreset, NO_API)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSourceEffectBitCrusherPreset(); \
	friend struct Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics; \
public: \
	DECLARE_CLASS(USourceEffectBitCrusherPreset, USoundEffectSourcePreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USourceEffectBitCrusherPreset) \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_84_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_84_INCLASS \
private: \
	static void StaticRegisterNativesUSourceEffectBitCrusherPreset(); \
	friend struct Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics; \
public: \
	DECLARE_CLASS(USourceEffectBitCrusherPreset, USoundEffectSourcePreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USourceEffectBitCrusherPreset) \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_84_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_84_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USourceEffectBitCrusherPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceEffectBitCrusherPreset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USourceEffectBitCrusherPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceEffectBitCrusherPreset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USourceEffectBitCrusherPreset(USourceEffectBitCrusherPreset&&); \
	NO_API USourceEffectBitCrusherPreset(const USourceEffectBitCrusherPreset&); \
public: \
	NO_API virtual ~USourceEffectBitCrusherPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_84_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USourceEffectBitCrusherPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USourceEffectBitCrusherPreset(USourceEffectBitCrusherPreset&&); \
	NO_API USourceEffectBitCrusherPreset(const USourceEffectBitCrusherPreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USourceEffectBitCrusherPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceEffectBitCrusherPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceEffectBitCrusherPreset) \
	NO_API virtual ~USourceEffectBitCrusherPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_81_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_84_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_84_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_84_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_84_ACCESSORS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_84_INCLASS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_84_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_84_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_84_ACCESSORS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_84_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SYNTHESIS_API UClass* StaticClass<class USourceEffectBitCrusherPreset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectBitCrusher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
