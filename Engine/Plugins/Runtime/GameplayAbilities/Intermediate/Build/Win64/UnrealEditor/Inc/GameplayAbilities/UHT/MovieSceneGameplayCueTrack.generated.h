// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sequencer/MovieSceneGameplayCueTrack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FGameplayCueParameters;
struct FGameplayTag;
#ifdef GAMEPLAYABILITIES_MovieSceneGameplayCueTrack_generated_h
#error "MovieSceneGameplayCueTrack.generated.h already included, missing '#pragma once' in MovieSceneGameplayCueTrack.h"
#endif
#define GAMEPLAYABILITIES_MovieSceneGameplayCueTrack_generated_h

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_14_DELEGATE \
GAMEPLAYABILITIES_API void FMovieSceneGameplayCueEvent_DelegateWrapper(const FScriptDelegate& MovieSceneGameplayCueEvent, AActor* Target, FGameplayTag GameplayTag, FGameplayCueParameters const& Parameters, EGameplayCueEvent::Type Event);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_23_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSequencerTrackHandler);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSequencerTrackHandler);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_23_ACCESSORS
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneGameplayCueTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneGameplayCueTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneGameplayCueTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), GAMEPLAYABILITIES_API) \
	DECLARE_SERIALIZER(UMovieSceneGameplayCueTrack)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneGameplayCueTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneGameplayCueTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneGameplayCueTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), GAMEPLAYABILITIES_API) \
	DECLARE_SERIALIZER(UMovieSceneGameplayCueTrack)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UMovieSceneGameplayCueTrack(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneGameplayCueTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UMovieSceneGameplayCueTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneGameplayCueTrack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEPLAYABILITIES_API UMovieSceneGameplayCueTrack(UMovieSceneGameplayCueTrack&&); \
	GAMEPLAYABILITIES_API UMovieSceneGameplayCueTrack(const UMovieSceneGameplayCueTrack&); \
public: \
	GAMEPLAYABILITIES_API virtual ~UMovieSceneGameplayCueTrack();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEPLAYABILITIES_API UMovieSceneGameplayCueTrack(UMovieSceneGameplayCueTrack&&); \
	GAMEPLAYABILITIES_API UMovieSceneGameplayCueTrack(const UMovieSceneGameplayCueTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UMovieSceneGameplayCueTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneGameplayCueTrack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneGameplayCueTrack) \
	GAMEPLAYABILITIES_API virtual ~UMovieSceneGameplayCueTrack();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_19_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_23_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_23_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_23_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_23_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_23_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_23_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UMovieSceneGameplayCueTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueTrack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
