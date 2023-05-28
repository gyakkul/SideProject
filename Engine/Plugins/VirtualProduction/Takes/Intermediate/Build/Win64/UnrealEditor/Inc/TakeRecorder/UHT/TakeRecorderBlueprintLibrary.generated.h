// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Recorder/TakeRecorderBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevelSequence;
class UTakeMetaData;
class UTakeRecorder;
class UTakeRecorderPanel;
class UTakeRecorderSources;
struct FMovieSceneMarkedFrame;
struct FTakeRecorderParameters;
#ifdef TAKERECORDER_TakeRecorderBlueprintLibrary_generated_h
#error "TakeRecorderBlueprintLibrary.generated.h already included, missing '#pragma once' in TakeRecorderBlueprintLibrary.h"
#endif
#define TAKERECORDER_TakeRecorderBlueprintLibrary_generated_h

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_14_DELEGATE \
TAKERECORDER_API void FOnTakeRecorderPanelChanged_DelegateWrapper(const FScriptDelegate& OnTakeRecorderPanelChanged);


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_15_DELEGATE \
TAKERECORDER_API void FOnTakeRecorderPreInitialize_DelegateWrapper(const FScriptDelegate& OnTakeRecorderPreInitialize);


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_16_DELEGATE \
TAKERECORDER_API void FOnTakeRecorderStarted_DelegateWrapper(const FScriptDelegate& OnTakeRecorderStarted);


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_17_DELEGATE \
TAKERECORDER_API void FOnTakeRecorderStopped_DelegateWrapper(const FScriptDelegate& OnTakeRecorderStopped);


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_18_DELEGATE \
TAKERECORDER_API void FOnTakeRecorderFinished_DelegateWrapper(const FScriptDelegate& OnTakeRecorderFinished, ULevelSequence* SequenceAsset);


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_19_DELEGATE \
TAKERECORDER_API void FOnTakeRecorderCancelled_DelegateWrapper(const FScriptDelegate& OnTakeRecorderCancelled);


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_20_DELEGATE \
TAKERECORDER_API void FOnTakeRecorderMarkedFrameAdded_DelegateWrapper(const FScriptDelegate& OnTakeRecorderMarkedFrameAdded, FMovieSceneMarkedFrame const& MarkedFrame);


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_27_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetOnTakeRecorderMarkedFrameAdded); \
	DECLARE_FUNCTION(execSetOnTakeRecorderCancelled); \
	DECLARE_FUNCTION(execSetOnTakeRecorderFinished); \
	DECLARE_FUNCTION(execSetOnTakeRecorderStopped); \
	DECLARE_FUNCTION(execSetOnTakeRecorderStarted); \
	DECLARE_FUNCTION(execSetOnTakeRecorderPreInitialize); \
	DECLARE_FUNCTION(execSetOnTakeRecorderPanelChanged); \
	DECLARE_FUNCTION(execOpenTakeRecorderPanel); \
	DECLARE_FUNCTION(execGetTakeRecorderPanel); \
	DECLARE_FUNCTION(execCancelRecording); \
	DECLARE_FUNCTION(execStopRecording); \
	DECLARE_FUNCTION(execGetActiveRecorder); \
	DECLARE_FUNCTION(execIsRecording); \
	DECLARE_FUNCTION(execSetDefaultParameters); \
	DECLARE_FUNCTION(execGetDefaultParameters); \
	DECLARE_FUNCTION(execStartRecording); \
	DECLARE_FUNCTION(execIsTakeRecorderEnabled);


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetOnTakeRecorderMarkedFrameAdded); \
	DECLARE_FUNCTION(execSetOnTakeRecorderCancelled); \
	DECLARE_FUNCTION(execSetOnTakeRecorderFinished); \
	DECLARE_FUNCTION(execSetOnTakeRecorderStopped); \
	DECLARE_FUNCTION(execSetOnTakeRecorderStarted); \
	DECLARE_FUNCTION(execSetOnTakeRecorderPreInitialize); \
	DECLARE_FUNCTION(execSetOnTakeRecorderPanelChanged); \
	DECLARE_FUNCTION(execOpenTakeRecorderPanel); \
	DECLARE_FUNCTION(execGetTakeRecorderPanel); \
	DECLARE_FUNCTION(execCancelRecording); \
	DECLARE_FUNCTION(execStopRecording); \
	DECLARE_FUNCTION(execGetActiveRecorder); \
	DECLARE_FUNCTION(execIsRecording); \
	DECLARE_FUNCTION(execSetDefaultParameters); \
	DECLARE_FUNCTION(execGetDefaultParameters); \
	DECLARE_FUNCTION(execStartRecording); \
	DECLARE_FUNCTION(execIsTakeRecorderEnabled);


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_27_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTakeRecorderBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTakeRecorderBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTakeRecorderBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TakeRecorder"), NO_API) \
	DECLARE_SERIALIZER(UTakeRecorderBlueprintLibrary)


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUTakeRecorderBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTakeRecorderBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTakeRecorderBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TakeRecorder"), NO_API) \
	DECLARE_SERIALIZER(UTakeRecorderBlueprintLibrary)


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTakeRecorderBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakeRecorderBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTakeRecorderBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeRecorderBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTakeRecorderBlueprintLibrary(UTakeRecorderBlueprintLibrary&&); \
	NO_API UTakeRecorderBlueprintLibrary(const UTakeRecorderBlueprintLibrary&); \
public: \
	NO_API virtual ~UTakeRecorderBlueprintLibrary();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTakeRecorderBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTakeRecorderBlueprintLibrary(UTakeRecorderBlueprintLibrary&&); \
	NO_API UTakeRecorderBlueprintLibrary(const UTakeRecorderBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTakeRecorderBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeRecorderBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakeRecorderBlueprintLibrary) \
	NO_API virtual ~UTakeRecorderBlueprintLibrary();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_22_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_27_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_27_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_27_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_27_INCLASS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_27_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_27_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h_27_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TAKERECORDER_API UClass* StaticClass<class UTakeRecorderBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
