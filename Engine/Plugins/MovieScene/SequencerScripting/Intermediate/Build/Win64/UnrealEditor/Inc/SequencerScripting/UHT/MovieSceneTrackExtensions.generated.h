// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExtensionLibraries/MovieSceneTrackExtensions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieSceneSection;
class UMovieSceneTrack;
struct FColor;
#ifdef SEQUENCERSCRIPTING_MovieSceneTrackExtensions_generated_h
#error "MovieSceneTrackExtensions.generated.h already included, missing '#pragma once' in MovieSceneTrackExtensions.h"
#endif
#define SEQUENCERSCRIPTING_MovieSceneTrackExtensions_generated_h

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTrackExtensions_h_20_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTrackExtensions_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSectionToKey); \
	DECLARE_FUNCTION(execGetSectionToKey); \
	DECLARE_FUNCTION(execSetColorTint); \
	DECLARE_FUNCTION(execGetColorTint); \
	DECLARE_FUNCTION(execSetSortingOrder); \
	DECLARE_FUNCTION(execGetSortingOrder); \
	DECLARE_FUNCTION(execRemoveSection); \
	DECLARE_FUNCTION(execGetSections); \
	DECLARE_FUNCTION(execAddSection); \
	DECLARE_FUNCTION(execGetTrackRowDisplayName); \
	DECLARE_FUNCTION(execSetTrackRowDisplayName); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execSetDisplayName);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTrackExtensions_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSectionToKey); \
	DECLARE_FUNCTION(execGetSectionToKey); \
	DECLARE_FUNCTION(execSetColorTint); \
	DECLARE_FUNCTION(execGetColorTint); \
	DECLARE_FUNCTION(execSetSortingOrder); \
	DECLARE_FUNCTION(execGetSortingOrder); \
	DECLARE_FUNCTION(execRemoveSection); \
	DECLARE_FUNCTION(execGetSections); \
	DECLARE_FUNCTION(execAddSection); \
	DECLARE_FUNCTION(execGetTrackRowDisplayName); \
	DECLARE_FUNCTION(execSetTrackRowDisplayName); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execSetDisplayName);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTrackExtensions_h_20_ACCESSORS
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTrackExtensions_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneTrackExtensions(); \
	friend struct Z_Construct_UClass_UMovieSceneTrackExtensions_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneTrackExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneTrackExtensions)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTrackExtensions_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneTrackExtensions(); \
	friend struct Z_Construct_UClass_UMovieSceneTrackExtensions_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneTrackExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneTrackExtensions)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTrackExtensions_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneTrackExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTrackExtensions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneTrackExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTrackExtensions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneTrackExtensions(UMovieSceneTrackExtensions&&); \
	NO_API UMovieSceneTrackExtensions(const UMovieSceneTrackExtensions&); \
public: \
	NO_API virtual ~UMovieSceneTrackExtensions();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTrackExtensions_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneTrackExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneTrackExtensions(UMovieSceneTrackExtensions&&); \
	NO_API UMovieSceneTrackExtensions(const UMovieSceneTrackExtensions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneTrackExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTrackExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTrackExtensions) \
	NO_API virtual ~UMovieSceneTrackExtensions();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTrackExtensions_h_17_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTrackExtensions_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTrackExtensions_h_20_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTrackExtensions_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTrackExtensions_h_20_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTrackExtensions_h_20_INCLASS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTrackExtensions_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTrackExtensions_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTrackExtensions_h_20_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTrackExtensions_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTrackExtensions_h_20_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTrackExtensions_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTrackExtensions_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCERSCRIPTING_API UClass* StaticClass<class UMovieSceneTrackExtensions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTrackExtensions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
