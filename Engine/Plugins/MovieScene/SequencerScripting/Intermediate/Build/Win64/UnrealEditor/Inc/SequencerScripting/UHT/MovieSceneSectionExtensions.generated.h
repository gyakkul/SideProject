// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExtensionLibraries/MovieSceneSectionExtensions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieSceneScriptingChannel;
class UMovieSceneSection;
class UMovieSceneSequence;
class UMovieSceneSubSection;
#ifdef SEQUENCERSCRIPTING_MovieSceneSectionExtensions_generated_h
#error "MovieSceneSectionExtensions.generated.h already included, missing '#pragma once' in MovieSceneSectionExtensions.h"
#endif
#define SEQUENCERSCRIPTING_MovieSceneSectionExtensions_generated_h

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h_21_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetParentSequenceFrame); \
	DECLARE_FUNCTION(execGetChannelsByType); \
	DECLARE_FUNCTION(execFindChannelsByType); \
	DECLARE_FUNCTION(execGetAllChannels); \
	DECLARE_FUNCTION(execGetChannels); \
	DECLARE_FUNCTION(execSetEndFrameBounded); \
	DECLARE_FUNCTION(execSetEndFrameSeconds); \
	DECLARE_FUNCTION(execSetEndFrame); \
	DECLARE_FUNCTION(execSetStartFrameBounded); \
	DECLARE_FUNCTION(execSetStartFrameSeconds); \
	DECLARE_FUNCTION(execSetStartFrame); \
	DECLARE_FUNCTION(execSetRangeSeconds); \
	DECLARE_FUNCTION(execSetRange); \
	DECLARE_FUNCTION(execGetAutoSizeEndFrameSeconds); \
	DECLARE_FUNCTION(execGetAutoSizeEndFrame); \
	DECLARE_FUNCTION(execGetAutoSizeHasEndFrame); \
	DECLARE_FUNCTION(execGetAutoSizeStartFrameSeconds); \
	DECLARE_FUNCTION(execGetAutoSizeStartFrame); \
	DECLARE_FUNCTION(execGetAutoSizeHasStartFrame); \
	DECLARE_FUNCTION(execGetEndFrameSeconds); \
	DECLARE_FUNCTION(execGetEndFrame); \
	DECLARE_FUNCTION(execHasEndFrame); \
	DECLARE_FUNCTION(execGetStartFrameSeconds); \
	DECLARE_FUNCTION(execGetStartFrame); \
	DECLARE_FUNCTION(execHasStartFrame);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetParentSequenceFrame); \
	DECLARE_FUNCTION(execGetChannelsByType); \
	DECLARE_FUNCTION(execFindChannelsByType); \
	DECLARE_FUNCTION(execGetAllChannels); \
	DECLARE_FUNCTION(execGetChannels); \
	DECLARE_FUNCTION(execSetEndFrameBounded); \
	DECLARE_FUNCTION(execSetEndFrameSeconds); \
	DECLARE_FUNCTION(execSetEndFrame); \
	DECLARE_FUNCTION(execSetStartFrameBounded); \
	DECLARE_FUNCTION(execSetStartFrameSeconds); \
	DECLARE_FUNCTION(execSetStartFrame); \
	DECLARE_FUNCTION(execSetRangeSeconds); \
	DECLARE_FUNCTION(execSetRange); \
	DECLARE_FUNCTION(execGetAutoSizeEndFrameSeconds); \
	DECLARE_FUNCTION(execGetAutoSizeEndFrame); \
	DECLARE_FUNCTION(execGetAutoSizeHasEndFrame); \
	DECLARE_FUNCTION(execGetAutoSizeStartFrameSeconds); \
	DECLARE_FUNCTION(execGetAutoSizeStartFrame); \
	DECLARE_FUNCTION(execGetAutoSizeHasStartFrame); \
	DECLARE_FUNCTION(execGetEndFrameSeconds); \
	DECLARE_FUNCTION(execGetEndFrame); \
	DECLARE_FUNCTION(execHasEndFrame); \
	DECLARE_FUNCTION(execGetStartFrameSeconds); \
	DECLARE_FUNCTION(execGetStartFrame); \
	DECLARE_FUNCTION(execHasStartFrame);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h_21_ACCESSORS
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneSectionExtensions(); \
	friend struct Z_Construct_UClass_UMovieSceneSectionExtensions_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSectionExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneSectionExtensions)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneSectionExtensions(); \
	friend struct Z_Construct_UClass_UMovieSceneSectionExtensions_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSectionExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneSectionExtensions)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneSectionExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSectionExtensions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneSectionExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSectionExtensions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneSectionExtensions(UMovieSceneSectionExtensions&&); \
	NO_API UMovieSceneSectionExtensions(const UMovieSceneSectionExtensions&); \
public: \
	NO_API virtual ~UMovieSceneSectionExtensions();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneSectionExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneSectionExtensions(UMovieSceneSectionExtensions&&); \
	NO_API UMovieSceneSectionExtensions(const UMovieSceneSectionExtensions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneSectionExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSectionExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSectionExtensions) \
	NO_API virtual ~UMovieSceneSectionExtensions();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h_18_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h_21_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h_21_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h_21_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h_21_INCLASS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h_21_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h_21_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCERSCRIPTING_API UClass* StaticClass<class UMovieSceneSectionExtensions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
