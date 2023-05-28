// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Recorder/TakeRecorderPanel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevelSequence;
class UTakeMetaData;
class UTakePreset;
class UTakeRecorderSources;
enum class ETakeRecorderPanelMode : uint8;
struct FFrameRate;
#ifdef TAKERECORDER_TakeRecorderPanel_generated_h
#error "TakeRecorderPanel.generated.h already included, missing '#pragma once' in TakeRecorderPanel.h"
#endif
#define TAKERECORDER_TakeRecorderPanel_generated_h

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_36_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanStartRecording); \
	DECLARE_FUNCTION(execStopRecording); \
	DECLARE_FUNCTION(execStartRecording); \
	DECLARE_FUNCTION(execGetSources); \
	DECLARE_FUNCTION(execSetFrameRateFromTimecode); \
	DECLARE_FUNCTION(execSetFrameRate); \
	DECLARE_FUNCTION(execGetFrameRate); \
	DECLARE_FUNCTION(execGetTakeMetaData); \
	DECLARE_FUNCTION(execGetLastRecordedLevelSequence); \
	DECLARE_FUNCTION(execGetLevelSequence); \
	DECLARE_FUNCTION(execClearPendingTake); \
	DECLARE_FUNCTION(execNewTake); \
	DECLARE_FUNCTION(execSetupForViewing); \
	DECLARE_FUNCTION(execSetupForEditing); \
	DECLARE_FUNCTION(execSetupForRecordingInto_LevelSequence); \
	DECLARE_FUNCTION(execSetupForRecording_LevelSequence); \
	DECLARE_FUNCTION(execSetupForRecording_TakePreset); \
	DECLARE_FUNCTION(execGetMode);


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanStartRecording); \
	DECLARE_FUNCTION(execStopRecording); \
	DECLARE_FUNCTION(execStartRecording); \
	DECLARE_FUNCTION(execGetSources); \
	DECLARE_FUNCTION(execSetFrameRateFromTimecode); \
	DECLARE_FUNCTION(execSetFrameRate); \
	DECLARE_FUNCTION(execGetFrameRate); \
	DECLARE_FUNCTION(execGetTakeMetaData); \
	DECLARE_FUNCTION(execGetLastRecordedLevelSequence); \
	DECLARE_FUNCTION(execGetLevelSequence); \
	DECLARE_FUNCTION(execClearPendingTake); \
	DECLARE_FUNCTION(execNewTake); \
	DECLARE_FUNCTION(execSetupForViewing); \
	DECLARE_FUNCTION(execSetupForEditing); \
	DECLARE_FUNCTION(execSetupForRecordingInto_LevelSequence); \
	DECLARE_FUNCTION(execSetupForRecording_LevelSequence); \
	DECLARE_FUNCTION(execSetupForRecording_TakePreset); \
	DECLARE_FUNCTION(execGetMode);


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_36_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTakeRecorderPanel(); \
	friend struct Z_Construct_UClass_UTakeRecorderPanel_Statics; \
public: \
	DECLARE_CLASS(UTakeRecorderPanel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TakeRecorder"), NO_API) \
	DECLARE_SERIALIZER(UTakeRecorderPanel)


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUTakeRecorderPanel(); \
	friend struct Z_Construct_UClass_UTakeRecorderPanel_Statics; \
public: \
	DECLARE_CLASS(UTakeRecorderPanel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TakeRecorder"), NO_API) \
	DECLARE_SERIALIZER(UTakeRecorderPanel)


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTakeRecorderPanel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakeRecorderPanel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTakeRecorderPanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeRecorderPanel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTakeRecorderPanel(UTakeRecorderPanel&&); \
	NO_API UTakeRecorderPanel(const UTakeRecorderPanel&); \
public: \
	NO_API virtual ~UTakeRecorderPanel();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTakeRecorderPanel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTakeRecorderPanel(UTakeRecorderPanel&&); \
	NO_API UTakeRecorderPanel(const UTakeRecorderPanel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTakeRecorderPanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeRecorderPanel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakeRecorderPanel) \
	NO_API virtual ~UTakeRecorderPanel();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_31_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_36_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_36_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_36_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_36_INCLASS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_36_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_36_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h_36_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TAKERECORDER_API UClass* StaticClass<class UTakeRecorderPanel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderPanel_h


#define FOREACH_ENUM_ETAKERECORDERPANELMODE(op) \
	op(ETakeRecorderPanelMode::NewRecording) \
	op(ETakeRecorderPanelMode::RecordingInto) \
	op(ETakeRecorderPanelMode::EditingPreset) \
	op(ETakeRecorderPanelMode::ReviewingRecording) 

enum class ETakeRecorderPanelMode : uint8;
template<> struct TIsUEnumClass<ETakeRecorderPanelMode> { enum { Value = true }; };
template<> TAKERECORDER_API UEnum* StaticEnum<ETakeRecorderPanelMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
