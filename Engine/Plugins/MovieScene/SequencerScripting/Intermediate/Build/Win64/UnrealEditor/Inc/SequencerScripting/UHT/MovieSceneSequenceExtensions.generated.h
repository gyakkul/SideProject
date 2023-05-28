// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExtensionLibraries/MovieSceneSequenceExtensions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieScene;
class UMovieSceneFolder;
class UMovieSceneSequence;
class UMovieSceneTrack;
class UObject;
enum class EMovieSceneEvaluationType : uint8;
enum class EMovieSceneObjectBindingSpace : uint8;
enum class EUpdateClockSource : uint8;
struct FFrameNumber;
struct FFrameRate;
struct FGuid;
struct FMovieSceneBindingProxy;
struct FMovieSceneMarkedFrame;
struct FMovieSceneObjectBindingID;
struct FSequencerScriptingRange;
struct FTimecode;
#ifdef SEQUENCERSCRIPTING_MovieSceneSequenceExtensions_generated_h
#error "MovieSceneSequenceExtensions.generated.h already included, missing '#pragma once' in MovieSceneSequenceExtensions.h"
#endif
#define SEQUENCERSCRIPTING_MovieSceneSequenceExtensions_generated_h

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h_28_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsReadOnly); \
	DECLARE_FUNCTION(execSetReadOnly); \
	DECLARE_FUNCTION(execFindNextMarkedFrame); \
	DECLARE_FUNCTION(execFindMarkedFrameByFrameNumber); \
	DECLARE_FUNCTION(execFindMarkedFrameByLabel); \
	DECLARE_FUNCTION(execSortMarkedFrames); \
	DECLARE_FUNCTION(execDeleteMarkedFrames); \
	DECLARE_FUNCTION(execDeleteMarkedFrame); \
	DECLARE_FUNCTION(execSetMarkedFrame); \
	DECLARE_FUNCTION(execAddMarkedFrame); \
	DECLARE_FUNCTION(execGetMarkedFrames); \
	DECLARE_FUNCTION(execRemoveRootFolderFromSequence); \
	DECLARE_FUNCTION(execAddRootFolderToSequence); \
	DECLARE_FUNCTION(execGetRootFoldersInSequence); \
	DECLARE_FUNCTION(execResolveBindingID); \
	DECLARE_FUNCTION(execGetPortableBindingID); \
	DECLARE_FUNCTION(execGetBindingID); \
	DECLARE_FUNCTION(execMakeBindingID); \
	DECLARE_FUNCTION(execLocateBoundObjects); \
	DECLARE_FUNCTION(execAddSpawnableFromClass); \
	DECLARE_FUNCTION(execAddSpawnableFromInstance); \
	DECLARE_FUNCTION(execAddPossessable); \
	DECLARE_FUNCTION(execGetPossessables); \
	DECLARE_FUNCTION(execGetSpawnables); \
	DECLARE_FUNCTION(execGetBindings); \
	DECLARE_FUNCTION(execFindBindingById); \
	DECLARE_FUNCTION(execFindBindingByName); \
	DECLARE_FUNCTION(execGetTimecodeSource); \
	DECLARE_FUNCTION(execGetClockSource); \
	DECLARE_FUNCTION(execSetClockSource); \
	DECLARE_FUNCTION(execGetEvaluationType); \
	DECLARE_FUNCTION(execSetEvaluationType); \
	DECLARE_FUNCTION(execGetWorkRangeEnd); \
	DECLARE_FUNCTION(execSetWorkRangeEnd); \
	DECLARE_FUNCTION(execGetWorkRangeStart); \
	DECLARE_FUNCTION(execSetWorkRangeStart); \
	DECLARE_FUNCTION(execGetViewRangeEnd); \
	DECLARE_FUNCTION(execSetViewRangeEnd); \
	DECLARE_FUNCTION(execGetViewRangeStart); \
	DECLARE_FUNCTION(execSetViewRangeStart); \
	DECLARE_FUNCTION(execSetPlaybackEndSeconds); \
	DECLARE_FUNCTION(execSetPlaybackEnd); \
	DECLARE_FUNCTION(execSetPlaybackStartSeconds); \
	DECLARE_FUNCTION(execSetPlaybackStart); \
	DECLARE_FUNCTION(execGetPlaybackEndSeconds); \
	DECLARE_FUNCTION(execGetPlaybackEnd); \
	DECLARE_FUNCTION(execGetPlaybackStartSeconds); \
	DECLARE_FUNCTION(execGetPlaybackStart); \
	DECLARE_FUNCTION(execGetPlaybackRange); \
	DECLARE_FUNCTION(execMakeRangeSeconds); \
	DECLARE_FUNCTION(execMakeRange); \
	DECLARE_FUNCTION(execSetTickResolutionDirectly); \
	DECLARE_FUNCTION(execSetTickResolution); \
	DECLARE_FUNCTION(execGetTickResolution); \
	DECLARE_FUNCTION(execSetDisplayRate); \
	DECLARE_FUNCTION(execGetDisplayRate); \
	DECLARE_FUNCTION(execRemoveMasterTrack); \
	DECLARE_FUNCTION(execRemoveTrack); \
	DECLARE_FUNCTION(execAddMasterTrack); \
	DECLARE_FUNCTION(execAddTrack); \
	DECLARE_FUNCTION(execFindMasterTracksByExactType); \
	DECLARE_FUNCTION(execFindTracksByExactType); \
	DECLARE_FUNCTION(execFindMasterTracksByType); \
	DECLARE_FUNCTION(execFindTracksByType); \
	DECLARE_FUNCTION(execGetMasterTracks); \
	DECLARE_FUNCTION(execGetTracks); \
	DECLARE_FUNCTION(execGetMovieScene);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsReadOnly); \
	DECLARE_FUNCTION(execSetReadOnly); \
	DECLARE_FUNCTION(execFindNextMarkedFrame); \
	DECLARE_FUNCTION(execFindMarkedFrameByFrameNumber); \
	DECLARE_FUNCTION(execFindMarkedFrameByLabel); \
	DECLARE_FUNCTION(execSortMarkedFrames); \
	DECLARE_FUNCTION(execDeleteMarkedFrames); \
	DECLARE_FUNCTION(execDeleteMarkedFrame); \
	DECLARE_FUNCTION(execSetMarkedFrame); \
	DECLARE_FUNCTION(execAddMarkedFrame); \
	DECLARE_FUNCTION(execGetMarkedFrames); \
	DECLARE_FUNCTION(execRemoveRootFolderFromSequence); \
	DECLARE_FUNCTION(execAddRootFolderToSequence); \
	DECLARE_FUNCTION(execGetRootFoldersInSequence); \
	DECLARE_FUNCTION(execResolveBindingID); \
	DECLARE_FUNCTION(execGetPortableBindingID); \
	DECLARE_FUNCTION(execGetBindingID); \
	DECLARE_FUNCTION(execMakeBindingID); \
	DECLARE_FUNCTION(execLocateBoundObjects); \
	DECLARE_FUNCTION(execAddSpawnableFromClass); \
	DECLARE_FUNCTION(execAddSpawnableFromInstance); \
	DECLARE_FUNCTION(execAddPossessable); \
	DECLARE_FUNCTION(execGetPossessables); \
	DECLARE_FUNCTION(execGetSpawnables); \
	DECLARE_FUNCTION(execGetBindings); \
	DECLARE_FUNCTION(execFindBindingById); \
	DECLARE_FUNCTION(execFindBindingByName); \
	DECLARE_FUNCTION(execGetTimecodeSource); \
	DECLARE_FUNCTION(execGetClockSource); \
	DECLARE_FUNCTION(execSetClockSource); \
	DECLARE_FUNCTION(execGetEvaluationType); \
	DECLARE_FUNCTION(execSetEvaluationType); \
	DECLARE_FUNCTION(execGetWorkRangeEnd); \
	DECLARE_FUNCTION(execSetWorkRangeEnd); \
	DECLARE_FUNCTION(execGetWorkRangeStart); \
	DECLARE_FUNCTION(execSetWorkRangeStart); \
	DECLARE_FUNCTION(execGetViewRangeEnd); \
	DECLARE_FUNCTION(execSetViewRangeEnd); \
	DECLARE_FUNCTION(execGetViewRangeStart); \
	DECLARE_FUNCTION(execSetViewRangeStart); \
	DECLARE_FUNCTION(execSetPlaybackEndSeconds); \
	DECLARE_FUNCTION(execSetPlaybackEnd); \
	DECLARE_FUNCTION(execSetPlaybackStartSeconds); \
	DECLARE_FUNCTION(execSetPlaybackStart); \
	DECLARE_FUNCTION(execGetPlaybackEndSeconds); \
	DECLARE_FUNCTION(execGetPlaybackEnd); \
	DECLARE_FUNCTION(execGetPlaybackStartSeconds); \
	DECLARE_FUNCTION(execGetPlaybackStart); \
	DECLARE_FUNCTION(execGetPlaybackRange); \
	DECLARE_FUNCTION(execMakeRangeSeconds); \
	DECLARE_FUNCTION(execMakeRange); \
	DECLARE_FUNCTION(execSetTickResolutionDirectly); \
	DECLARE_FUNCTION(execSetTickResolution); \
	DECLARE_FUNCTION(execGetTickResolution); \
	DECLARE_FUNCTION(execSetDisplayRate); \
	DECLARE_FUNCTION(execGetDisplayRate); \
	DECLARE_FUNCTION(execRemoveMasterTrack); \
	DECLARE_FUNCTION(execRemoveTrack); \
	DECLARE_FUNCTION(execAddMasterTrack); \
	DECLARE_FUNCTION(execAddTrack); \
	DECLARE_FUNCTION(execFindMasterTracksByExactType); \
	DECLARE_FUNCTION(execFindTracksByExactType); \
	DECLARE_FUNCTION(execFindMasterTracksByType); \
	DECLARE_FUNCTION(execFindTracksByType); \
	DECLARE_FUNCTION(execGetMasterTracks); \
	DECLARE_FUNCTION(execGetTracks); \
	DECLARE_FUNCTION(execGetMovieScene);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h_28_ACCESSORS
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneSequenceExtensions(); \
	friend struct Z_Construct_UClass_UMovieSceneSequenceExtensions_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSequenceExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneSequenceExtensions)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneSequenceExtensions(); \
	friend struct Z_Construct_UClass_UMovieSceneSequenceExtensions_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSequenceExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneSequenceExtensions)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneSequenceExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSequenceExtensions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneSequenceExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSequenceExtensions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneSequenceExtensions(UMovieSceneSequenceExtensions&&); \
	NO_API UMovieSceneSequenceExtensions(const UMovieSceneSequenceExtensions&); \
public: \
	NO_API virtual ~UMovieSceneSequenceExtensions();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneSequenceExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneSequenceExtensions(UMovieSceneSequenceExtensions&&); \
	NO_API UMovieSceneSequenceExtensions(const UMovieSceneSequenceExtensions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneSequenceExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSequenceExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSequenceExtensions) \
	NO_API virtual ~UMovieSceneSequenceExtensions();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h_25_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h_28_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h_28_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h_28_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h_28_INCLASS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h_28_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h_28_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCERSCRIPTING_API UClass* StaticClass<class UMovieSceneSequenceExtensions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
