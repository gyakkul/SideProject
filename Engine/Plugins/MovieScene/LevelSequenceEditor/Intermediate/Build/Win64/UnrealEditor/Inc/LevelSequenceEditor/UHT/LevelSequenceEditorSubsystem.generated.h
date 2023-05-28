// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelSequenceEditorSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACineCameraActor;
class UMovieSceneFolder;
class UMovieSceneSection;
class UMovieSceneTrack;
struct FFrameTime;
struct FMovieSceneBindingProxy;
struct FMovieScenePasteBindingsParams;
struct FMovieScenePasteFoldersParams;
struct FMovieScenePasteSectionsParams;
struct FMovieScenePasteTracksParams;
struct FMovieSceneScriptingParams;
#ifdef LEVELSEQUENCEEDITOR_LevelSequenceEditorSubsystem_generated_h
#error "LevelSequenceEditorSubsystem.generated.h already included, missing '#pragma once' in LevelSequenceEditorSubsystem.h"
#endif
#define LEVELSEQUENCEEDITOR_LevelSequenceEditorSubsystem_generated_h

#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneScriptingParams_Statics; \
	LEVELSEQUENCEEDITOR_API static class UScriptStruct* StaticStruct();


template<> LEVELSEQUENCEEDITOR_API UScriptStruct* StaticStruct<struct FMovieSceneScriptingParams>();

#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_48_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_48_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRebindComponent); \
	DECLARE_FUNCTION(execRemoveInvalidBindings); \
	DECLARE_FUNCTION(execRemoveAllBindings); \
	DECLARE_FUNCTION(execRemoveActorsFromBinding); \
	DECLARE_FUNCTION(execReplaceBindingWithActors); \
	DECLARE_FUNCTION(execAddActorsToBinding); \
	DECLARE_FUNCTION(execFixActorReferences); \
	DECLARE_FUNCTION(execBakeTransform); \
	DECLARE_FUNCTION(execSyncSectionsUsingSourceTimecode); \
	DECLARE_FUNCTION(execSnapSectionsToTimelineUsingSourceTimecode); \
	DECLARE_FUNCTION(execPasteBindings); \
	DECLARE_FUNCTION(execCopyBindings); \
	DECLARE_FUNCTION(execPasteTracks); \
	DECLARE_FUNCTION(execCopyTracks); \
	DECLARE_FUNCTION(execPasteSections); \
	DECLARE_FUNCTION(execCopySections); \
	DECLARE_FUNCTION(execPasteFolders); \
	DECLARE_FUNCTION(execCopyFolders); \
	DECLARE_FUNCTION(execConvertToPossessable); \
	DECLARE_FUNCTION(execConvertToSpawnable); \
	DECLARE_FUNCTION(execCreateCamera); \
	DECLARE_FUNCTION(execAddActors);


#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRebindComponent); \
	DECLARE_FUNCTION(execRemoveInvalidBindings); \
	DECLARE_FUNCTION(execRemoveAllBindings); \
	DECLARE_FUNCTION(execRemoveActorsFromBinding); \
	DECLARE_FUNCTION(execReplaceBindingWithActors); \
	DECLARE_FUNCTION(execAddActorsToBinding); \
	DECLARE_FUNCTION(execFixActorReferences); \
	DECLARE_FUNCTION(execBakeTransform); \
	DECLARE_FUNCTION(execSyncSectionsUsingSourceTimecode); \
	DECLARE_FUNCTION(execSnapSectionsToTimelineUsingSourceTimecode); \
	DECLARE_FUNCTION(execPasteBindings); \
	DECLARE_FUNCTION(execCopyBindings); \
	DECLARE_FUNCTION(execPasteTracks); \
	DECLARE_FUNCTION(execCopyTracks); \
	DECLARE_FUNCTION(execPasteSections); \
	DECLARE_FUNCTION(execCopySections); \
	DECLARE_FUNCTION(execPasteFolders); \
	DECLARE_FUNCTION(execCopyFolders); \
	DECLARE_FUNCTION(execConvertToPossessable); \
	DECLARE_FUNCTION(execConvertToSpawnable); \
	DECLARE_FUNCTION(execCreateCamera); \
	DECLARE_FUNCTION(execAddActors);


#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_48_ACCESSORS
#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelSequenceEditorSubsystem(); \
	friend struct Z_Construct_UClass_ULevelSequenceEditorSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULevelSequenceEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequenceEditor"), NO_API) \
	DECLARE_SERIALIZER(ULevelSequenceEditorSubsystem)


#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_48_INCLASS \
private: \
	static void StaticRegisterNativesULevelSequenceEditorSubsystem(); \
	friend struct Z_Construct_UClass_ULevelSequenceEditorSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULevelSequenceEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequenceEditor"), NO_API) \
	DECLARE_SERIALIZER(ULevelSequenceEditorSubsystem)


#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSequenceEditorSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequenceEditorSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSequenceEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceEditorSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelSequenceEditorSubsystem(ULevelSequenceEditorSubsystem&&); \
	NO_API ULevelSequenceEditorSubsystem(const ULevelSequenceEditorSubsystem&); \
public: \
	NO_API virtual ~ULevelSequenceEditorSubsystem();


#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSequenceEditorSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelSequenceEditorSubsystem(ULevelSequenceEditorSubsystem&&); \
	NO_API ULevelSequenceEditorSubsystem(const ULevelSequenceEditorSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSequenceEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULevelSequenceEditorSubsystem) \
	NO_API virtual ~ULevelSequenceEditorSubsystem();


#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_45_PROLOG
#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_48_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_48_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_48_ACCESSORS \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_48_INCLASS \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_48_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_48_ACCESSORS \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEVELSEQUENCEEDITOR_API UClass* StaticClass<class ULevelSequenceEditorSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_LevelSequenceEditorSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
