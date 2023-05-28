// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TemplateSequencePlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATemplateSequenceActor;
class UObject;
class UTemplateSequence;
class UTemplateSequencePlayer;
struct FMovieSceneSequencePlaybackSettings;
#ifdef TEMPLATESEQUENCE_TemplateSequencePlayer_generated_h
#error "TemplateSequencePlayer.generated.h already included, missing '#pragma once' in TemplateSequencePlayer.h"
#endif
#define TEMPLATESEQUENCE_TemplateSequencePlayer_generated_h

#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_18_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateTemplateSequencePlayer);


#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateTemplateSequencePlayer);


#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_18_ACCESSORS
#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTemplateSequencePlayer(); \
	friend struct Z_Construct_UClass_UTemplateSequencePlayer_Statics; \
public: \
	DECLARE_CLASS(UTemplateSequencePlayer, UMovieSceneSequencePlayer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TemplateSequence"), NO_API) \
	DECLARE_SERIALIZER(UTemplateSequencePlayer)


#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUTemplateSequencePlayer(); \
	friend struct Z_Construct_UClass_UTemplateSequencePlayer_Statics; \
public: \
	DECLARE_CLASS(UTemplateSequencePlayer, UMovieSceneSequencePlayer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TemplateSequence"), NO_API) \
	DECLARE_SERIALIZER(UTemplateSequencePlayer)


#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTemplateSequencePlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTemplateSequencePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTemplateSequencePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTemplateSequencePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTemplateSequencePlayer(UTemplateSequencePlayer&&); \
	NO_API UTemplateSequencePlayer(const UTemplateSequencePlayer&); \
public: \
	NO_API virtual ~UTemplateSequencePlayer();


#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTemplateSequencePlayer(UTemplateSequencePlayer&&); \
	NO_API UTemplateSequencePlayer(const UTemplateSequencePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTemplateSequencePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTemplateSequencePlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTemplateSequencePlayer) \
	NO_API virtual ~UTemplateSequencePlayer();


#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_13_PROLOG
#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_18_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_18_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_18_ACCESSORS \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_18_INCLASS \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_18_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_18_ACCESSORS \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_18_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEMPLATESEQUENCE_API UClass* StaticClass<class UTemplateSequencePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
