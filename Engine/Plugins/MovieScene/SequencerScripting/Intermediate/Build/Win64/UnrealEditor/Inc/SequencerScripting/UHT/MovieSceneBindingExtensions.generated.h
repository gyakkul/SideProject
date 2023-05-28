// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExtensionLibraries/MovieSceneBindingExtensions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieSceneTrack;
class UObject;
struct FGuid;
struct FMovieSceneBindingProxy;
struct FMovieSceneObjectBindingID;
#ifdef SEQUENCERSCRIPTING_MovieSceneBindingExtensions_generated_h
#error "MovieSceneBindingExtensions.generated.h already included, missing '#pragma once' in MovieSceneBindingExtensions.h"
#endif
#define SEQUENCERSCRIPTING_MovieSceneBindingExtensions_generated_h

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneBindingExtensions_h_20_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneBindingExtensions_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSpawnableBindingID); \
	DECLARE_FUNCTION(execMoveBindingContents); \
	DECLARE_FUNCTION(execSetParent); \
	DECLARE_FUNCTION(execGetParent); \
	DECLARE_FUNCTION(execGetPossessedObjectClass); \
	DECLARE_FUNCTION(execGetObjectTemplate); \
	DECLARE_FUNCTION(execGetChildPossessables); \
	DECLARE_FUNCTION(execAddTrack); \
	DECLARE_FUNCTION(execRemove); \
	DECLARE_FUNCTION(execRemoveTrack); \
	DECLARE_FUNCTION(execFindTracksByExactType); \
	DECLARE_FUNCTION(execFindTracksByType); \
	DECLARE_FUNCTION(execGetTracks); \
	DECLARE_FUNCTION(execSetSortingOrder); \
	DECLARE_FUNCTION(execGetSortingOrder); \
	DECLARE_FUNCTION(execSetName); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execSetDisplayName); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execGetId); \
	DECLARE_FUNCTION(execIsValid);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneBindingExtensions_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSpawnableBindingID); \
	DECLARE_FUNCTION(execMoveBindingContents); \
	DECLARE_FUNCTION(execSetParent); \
	DECLARE_FUNCTION(execGetParent); \
	DECLARE_FUNCTION(execGetPossessedObjectClass); \
	DECLARE_FUNCTION(execGetObjectTemplate); \
	DECLARE_FUNCTION(execGetChildPossessables); \
	DECLARE_FUNCTION(execAddTrack); \
	DECLARE_FUNCTION(execRemove); \
	DECLARE_FUNCTION(execRemoveTrack); \
	DECLARE_FUNCTION(execFindTracksByExactType); \
	DECLARE_FUNCTION(execFindTracksByType); \
	DECLARE_FUNCTION(execGetTracks); \
	DECLARE_FUNCTION(execSetSortingOrder); \
	DECLARE_FUNCTION(execGetSortingOrder); \
	DECLARE_FUNCTION(execSetName); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execSetDisplayName); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execGetId); \
	DECLARE_FUNCTION(execIsValid);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneBindingExtensions_h_20_ACCESSORS
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneBindingExtensions_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneBindingExtensions(); \
	friend struct Z_Construct_UClass_UMovieSceneBindingExtensions_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneBindingExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneBindingExtensions)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneBindingExtensions_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneBindingExtensions(); \
	friend struct Z_Construct_UClass_UMovieSceneBindingExtensions_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneBindingExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneBindingExtensions)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneBindingExtensions_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneBindingExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneBindingExtensions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneBindingExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneBindingExtensions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneBindingExtensions(UMovieSceneBindingExtensions&&); \
	NO_API UMovieSceneBindingExtensions(const UMovieSceneBindingExtensions&); \
public: \
	NO_API virtual ~UMovieSceneBindingExtensions();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneBindingExtensions_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneBindingExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneBindingExtensions(UMovieSceneBindingExtensions&&); \
	NO_API UMovieSceneBindingExtensions(const UMovieSceneBindingExtensions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneBindingExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneBindingExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneBindingExtensions) \
	NO_API virtual ~UMovieSceneBindingExtensions();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneBindingExtensions_h_17_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneBindingExtensions_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneBindingExtensions_h_20_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneBindingExtensions_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneBindingExtensions_h_20_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneBindingExtensions_h_20_INCLASS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneBindingExtensions_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneBindingExtensions_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneBindingExtensions_h_20_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneBindingExtensions_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneBindingExtensions_h_20_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneBindingExtensions_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneBindingExtensions_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCERSCRIPTING_API UClass* StaticClass<class UMovieSceneBindingExtensions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneBindingExtensions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
