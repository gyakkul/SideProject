// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExtensionLibraries/MovieSceneEventTrackExtensions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieSceneEventRepeaterSection;
class UMovieSceneEventTrack;
class UMovieSceneEventTriggerSection;
class UObject;
struct FMovieSceneEvent;
#ifdef SEQUENCERSCRIPTING_MovieSceneEventTrackExtensions_generated_h
#error "MovieSceneEventTrackExtensions.generated.h already included, missing '#pragma once' in MovieSceneEventTrackExtensions.h"
#endif
#define SEQUENCERSCRIPTING_MovieSceneEventTrackExtensions_generated_h

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_20_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBoundObjectPropertyClass); \
	DECLARE_FUNCTION(execAddEventTriggerSection); \
	DECLARE_FUNCTION(execAddEventRepeaterSection);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBoundObjectPropertyClass); \
	DECLARE_FUNCTION(execAddEventTriggerSection); \
	DECLARE_FUNCTION(execAddEventRepeaterSection);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_20_ACCESSORS
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneEventTrackExtensions(); \
	friend struct Z_Construct_UClass_UMovieSceneEventTrackExtensions_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneEventTrackExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneEventTrackExtensions)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneEventTrackExtensions(); \
	friend struct Z_Construct_UClass_UMovieSceneEventTrackExtensions_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneEventTrackExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneEventTrackExtensions)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneEventTrackExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEventTrackExtensions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneEventTrackExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEventTrackExtensions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneEventTrackExtensions(UMovieSceneEventTrackExtensions&&); \
	NO_API UMovieSceneEventTrackExtensions(const UMovieSceneEventTrackExtensions&); \
public: \
	NO_API virtual ~UMovieSceneEventTrackExtensions();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneEventTrackExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneEventTrackExtensions(UMovieSceneEventTrackExtensions&&); \
	NO_API UMovieSceneEventTrackExtensions(const UMovieSceneEventTrackExtensions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneEventTrackExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEventTrackExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEventTrackExtensions) \
	NO_API virtual ~UMovieSceneEventTrackExtensions();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_17_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_20_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_20_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_20_INCLASS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_20_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_20_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCERSCRIPTING_API UClass* StaticClass<class UMovieSceneEventTrackExtensions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneEventTrackExtensions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
