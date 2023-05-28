// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SynthComponents/SynthComponentWaveTable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundWave;
enum class ESamplePlayerSeekType : uint8;
#ifdef SYNTHESIS_SynthComponentWaveTable_generated_h
#error "SynthComponentWaveTable.generated.h already included, missing '#pragma once' in SynthComponentWaveTable.h"
#endif
#define SYNTHESIS_SynthComponentWaveTable_generated_h

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_21_DELEGATE \
SYNTHESIS_API void FOnSampleLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnSampleLoaded);


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_24_DELEGATE \
SYNTHESIS_API void FOnSamplePlaybackProgress_DelegateWrapper(const FMulticastScriptDelegate& OnSamplePlaybackProgress, float ProgressPercent, float ProgressTimeSeconds);


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_30_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsLoaded); \
	DECLARE_FUNCTION(execGetCurrentPlaybackProgressPercent); \
	DECLARE_FUNCTION(execGetCurrentPlaybackProgressTime); \
	DECLARE_FUNCTION(execGetSampleDuration); \
	DECLARE_FUNCTION(execSetScrubTimeWidth); \
	DECLARE_FUNCTION(execSetScrubMode); \
	DECLARE_FUNCTION(execSeekToTime); \
	DECLARE_FUNCTION(execSetPitch); \
	DECLARE_FUNCTION(execSetSoundWave);


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsLoaded); \
	DECLARE_FUNCTION(execGetCurrentPlaybackProgressPercent); \
	DECLARE_FUNCTION(execGetCurrentPlaybackProgressTime); \
	DECLARE_FUNCTION(execGetSampleDuration); \
	DECLARE_FUNCTION(execSetScrubTimeWidth); \
	DECLARE_FUNCTION(execSetScrubMode); \
	DECLARE_FUNCTION(execSeekToTime); \
	DECLARE_FUNCTION(execSetPitch); \
	DECLARE_FUNCTION(execSetSoundWave);


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_30_ACCESSORS
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSynthSamplePlayer(); \
	friend struct Z_Construct_UClass_USynthSamplePlayer_Statics; \
public: \
	DECLARE_CLASS(USynthSamplePlayer, USynthComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USynthSamplePlayer)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUSynthSamplePlayer(); \
	friend struct Z_Construct_UClass_USynthSamplePlayer_Statics; \
public: \
	DECLARE_CLASS(USynthSamplePlayer, USynthComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USynthSamplePlayer)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USynthSamplePlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynthSamplePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USynthSamplePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynthSamplePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USynthSamplePlayer(USynthSamplePlayer&&); \
	NO_API USynthSamplePlayer(const USynthSamplePlayer&); \
public:


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USynthSamplePlayer(USynthSamplePlayer&&); \
	NO_API USynthSamplePlayer(const USynthSamplePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USynthSamplePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynthSamplePlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynthSamplePlayer)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_27_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_30_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_30_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_30_ACCESSORS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_30_INCLASS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_30_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_30_ACCESSORS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SYNTHESIS_API UClass* StaticClass<class USynthSamplePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h


#define FOREACH_ENUM_ESAMPLEPLAYERSEEKTYPE(op) \
	op(ESamplePlayerSeekType::FromBeginning) \
	op(ESamplePlayerSeekType::FromCurrentPosition) \
	op(ESamplePlayerSeekType::FromEnd) \
	op(ESamplePlayerSeekType::Count) 

enum class ESamplePlayerSeekType : uint8;
template<> struct TIsUEnumClass<ESamplePlayerSeekType> { enum { Value = true }; };
template<> SYNTHESIS_API UEnum* StaticEnum<ESamplePlayerSeekType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
