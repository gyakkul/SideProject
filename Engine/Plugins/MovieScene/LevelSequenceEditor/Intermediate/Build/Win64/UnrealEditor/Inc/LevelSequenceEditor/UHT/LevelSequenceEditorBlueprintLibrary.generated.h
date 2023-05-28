// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelSequenceEditorBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevelSequence;
class UMovieSceneFolder;
class UMovieSceneSection;
class UMovieSceneSubSection;
class UMovieSceneTrack;
class UObject;
struct FGuid;
struct FLinearColor;
struct FMovieSceneBindingProxy;
struct FMovieSceneObjectBindingID;
struct FMovieSceneSequencePlaybackParams;
struct FSequencerChannelProxy;
#ifdef LEVELSEQUENCEEDITOR_LevelSequenceEditorBlueprintLibrary_generated_h
#error "LevelSequenceEditorBlueprintLibrary.generated.h already included, missing '#pragma once' in LevelSequenceEditorBlueprintLibrary.h"
#endif
#define LEVELSEQUENCEEDITOR_LevelSequenceEditorBlueprintLibrary_generated_h

#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSequencerChannelProxy_Statics; \
	LEVELSEQUENCEEDITOR_API static class UScriptStruct* StaticStruct();


template<> LEVELSEQUENCEEDITOR_API UScriptStruct* StaticStruct<struct FSequencerChannelProxy>();

#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_46_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_46_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeleteColorForChannels); \
	DECLARE_FUNCTION(execSetRandomColorForChannels); \
	DECLARE_FUNCTION(execSetCustomColorForChannels); \
	DECLARE_FUNCTION(execSetCustomColorForChannel); \
	DECLARE_FUNCTION(execGetCustomColorForChannel); \
	DECLARE_FUNCTION(execHasCustomColorForChannel); \
	DECLARE_FUNCTION(execGetTrackFilterNames); \
	DECLARE_FUNCTION(execSetTrackFilterEnabled); \
	DECLARE_FUNCTION(execIsTrackFilterEnabled); \
	DECLARE_FUNCTION(execSetLockCameraCutToViewport); \
	DECLARE_FUNCTION(execIsCameraCutLockedToViewport); \
	DECLARE_FUNCTION(execSetLockLevelSequence); \
	DECLARE_FUNCTION(execIsLevelSequenceLocked); \
	DECLARE_FUNCTION(execGetBoundObjects); \
	DECLARE_FUNCTION(execRefreshCurrentLevelSequence); \
	DECLARE_FUNCTION(execGetSelectionRangeEnd); \
	DECLARE_FUNCTION(execGetSelectionRangeStart); \
	DECLARE_FUNCTION(execSetSelectionRangeEnd); \
	DECLARE_FUNCTION(execSetSelectionRangeStart); \
	DECLARE_FUNCTION(execEmptySelection); \
	DECLARE_FUNCTION(execSelectBindings); \
	DECLARE_FUNCTION(execSelectObjects); \
	DECLARE_FUNCTION(execSelectFolders); \
	DECLARE_FUNCTION(execSelectChannels); \
	DECLARE_FUNCTION(execSelectSections); \
	DECLARE_FUNCTION(execSelectTracks); \
	DECLARE_FUNCTION(execGetSelectedBindings); \
	DECLARE_FUNCTION(execGetSelectedObjects); \
	DECLARE_FUNCTION(execGetSelectedFolders); \
	DECLARE_FUNCTION(execGetSelectedChannels); \
	DECLARE_FUNCTION(execGetSelectedSections); \
	DECLARE_FUNCTION(execGetSelectedTracks); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execPlayTo); \
	DECLARE_FUNCTION(execGetCurrentLocalTime); \
	DECLARE_FUNCTION(execSetCurrentLocalTime); \
	DECLARE_FUNCTION(execGetCurrentTime); \
	DECLARE_FUNCTION(execSetCurrentTime); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execCloseLevelSequence); \
	DECLARE_FUNCTION(execGetSubSequenceHierarchy); \
	DECLARE_FUNCTION(execFocusParentSequence); \
	DECLARE_FUNCTION(execFocusLevelSequence); \
	DECLARE_FUNCTION(execGetFocusedLevelSequence); \
	DECLARE_FUNCTION(execGetCurrentLevelSequence); \
	DECLARE_FUNCTION(execOpenLevelSequence);


#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeleteColorForChannels); \
	DECLARE_FUNCTION(execSetRandomColorForChannels); \
	DECLARE_FUNCTION(execSetCustomColorForChannels); \
	DECLARE_FUNCTION(execSetCustomColorForChannel); \
	DECLARE_FUNCTION(execGetCustomColorForChannel); \
	DECLARE_FUNCTION(execHasCustomColorForChannel); \
	DECLARE_FUNCTION(execGetTrackFilterNames); \
	DECLARE_FUNCTION(execSetTrackFilterEnabled); \
	DECLARE_FUNCTION(execIsTrackFilterEnabled); \
	DECLARE_FUNCTION(execSetLockCameraCutToViewport); \
	DECLARE_FUNCTION(execIsCameraCutLockedToViewport); \
	DECLARE_FUNCTION(execSetLockLevelSequence); \
	DECLARE_FUNCTION(execIsLevelSequenceLocked); \
	DECLARE_FUNCTION(execGetBoundObjects); \
	DECLARE_FUNCTION(execRefreshCurrentLevelSequence); \
	DECLARE_FUNCTION(execGetSelectionRangeEnd); \
	DECLARE_FUNCTION(execGetSelectionRangeStart); \
	DECLARE_FUNCTION(execSetSelectionRangeEnd); \
	DECLARE_FUNCTION(execSetSelectionRangeStart); \
	DECLARE_FUNCTION(execEmptySelection); \
	DECLARE_FUNCTION(execSelectBindings); \
	DECLARE_FUNCTION(execSelectObjects); \
	DECLARE_FUNCTION(execSelectFolders); \
	DECLARE_FUNCTION(execSelectChannels); \
	DECLARE_FUNCTION(execSelectSections); \
	DECLARE_FUNCTION(execSelectTracks); \
	DECLARE_FUNCTION(execGetSelectedBindings); \
	DECLARE_FUNCTION(execGetSelectedObjects); \
	DECLARE_FUNCTION(execGetSelectedFolders); \
	DECLARE_FUNCTION(execGetSelectedChannels); \
	DECLARE_FUNCTION(execGetSelectedSections); \
	DECLARE_FUNCTION(execGetSelectedTracks); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execPlayTo); \
	DECLARE_FUNCTION(execGetCurrentLocalTime); \
	DECLARE_FUNCTION(execSetCurrentLocalTime); \
	DECLARE_FUNCTION(execGetCurrentTime); \
	DECLARE_FUNCTION(execSetCurrentTime); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execCloseLevelSequence); \
	DECLARE_FUNCTION(execGetSubSequenceHierarchy); \
	DECLARE_FUNCTION(execFocusParentSequence); \
	DECLARE_FUNCTION(execFocusLevelSequence); \
	DECLARE_FUNCTION(execGetFocusedLevelSequence); \
	DECLARE_FUNCTION(execGetCurrentLevelSequence); \
	DECLARE_FUNCTION(execOpenLevelSequence);


#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_46_ACCESSORS
#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelSequenceEditorBlueprintLibrary(); \
	friend struct Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(ULevelSequenceEditorBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequenceEditor"), NO_API) \
	DECLARE_SERIALIZER(ULevelSequenceEditorBlueprintLibrary)


#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_46_INCLASS \
private: \
	static void StaticRegisterNativesULevelSequenceEditorBlueprintLibrary(); \
	friend struct Z_Construct_UClass_ULevelSequenceEditorBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(ULevelSequenceEditorBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequenceEditor"), NO_API) \
	DECLARE_SERIALIZER(ULevelSequenceEditorBlueprintLibrary)


#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSequenceEditorBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequenceEditorBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSequenceEditorBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceEditorBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelSequenceEditorBlueprintLibrary(ULevelSequenceEditorBlueprintLibrary&&); \
	NO_API ULevelSequenceEditorBlueprintLibrary(const ULevelSequenceEditorBlueprintLibrary&); \
public: \
	NO_API virtual ~ULevelSequenceEditorBlueprintLibrary();


#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSequenceEditorBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelSequenceEditorBlueprintLibrary(ULevelSequenceEditorBlueprintLibrary&&); \
	NO_API ULevelSequenceEditorBlueprintLibrary(const ULevelSequenceEditorBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSequenceEditorBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceEditorBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequenceEditorBlueprintLibrary) \
	NO_API virtual ~ULevelSequenceEditorBlueprintLibrary();


#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_41_PROLOG
#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_46_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_46_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_46_ACCESSORS \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_46_INCLASS \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_46_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_46_ACCESSORS \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h_46_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEVELSEQUENCEEDITOR_API UClass* StaticClass<class ULevelSequenceEditorBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
