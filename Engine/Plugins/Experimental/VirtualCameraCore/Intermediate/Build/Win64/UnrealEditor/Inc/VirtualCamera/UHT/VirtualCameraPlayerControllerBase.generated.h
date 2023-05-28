// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VirtualCameraPlayerControllerBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 struct FVirtualCameraSettingsPreset;
class ACineCameraActor;
class IBlendableInterface;
class ULevelSequence;
enum class ETouchInputState : uint8;
enum class ETrackerInputSource : uint8;
enum class EUnit : uint8;
enum class EVirtualCameraAxis : uint8;
enum class EVirtualCameraFocusMethod : uint8;
struct FColor;
struct FFrameNumber;
struct FFrameRate;
struct FFrameTime;
struct FLevelSequenceData;
struct FTimecode;
struct FVirtualCameraScreenshot;
struct FVirtualCameraWaypoint;
#ifdef VIRTUALCAMERA_VirtualCameraPlayerControllerBase_generated_h
#error "VirtualCameraPlayerControllerBase.generated.h already included, missing '#pragma once' in VirtualCameraPlayerControllerBase.h"
#endif
#define VIRTUALCAMERA_VirtualCameraPlayerControllerBase_generated_h

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPlayerControllerBase_h_59_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPlayerControllerBase_h_59_RPC_WRAPPERS \
	virtual bool ShouldUpdateTargetCameraTransform_Implementation() const; \
	virtual bool IsVirtualCameraControlledByRemoteSession_Implementation() const; \
 \
	DECLARE_FUNCTION(execActivateGameViewport); \
	DECLARE_FUNCTION(execToggleAxisLock); \
	DECLARE_FUNCTION(execToggleAxisFreeze); \
	DECLARE_FUNCTION(execTeleportToWaypoint); \
	DECLARE_FUNCTION(execTeleportToHomeWaypoint); \
	DECLARE_FUNCTION(execTakeScreenshot); \
	DECLARE_FUNCTION(execStopLevelSequencePlay); \
	DECLARE_FUNCTION(execShouldSaveSettingsWhenClosing); \
	DECLARE_FUNCTION(execSetZeroDutchOnLock); \
	DECLARE_FUNCTION(execSetWaypointFavoriteStatus); \
	DECLARE_FUNCTION(execSetUseGlobalBoom); \
	DECLARE_FUNCTION(execSetTouchInputState); \
	DECLARE_FUNCTION(execSetScreenshotFavoriteStatus); \
	DECLARE_FUNCTION(execSetSaveSettingsWhenClosing); \
	DECLARE_FUNCTION(execSetPresetFavoriteStatus); \
	DECLARE_FUNCTION(execSetMovementScale); \
	DECLARE_FUNCTION(execSetMatteOpacity); \
	DECLARE_FUNCTION(execSetMatteAspectRatio); \
	DECLARE_FUNCTION(execIsFocusVisualizationActivated); \
	DECLARE_FUNCTION(execSetFocusVisualization); \
	DECLARE_FUNCTION(execSetFocusPlaneColor); \
	DECLARE_FUNCTION(execSetFocusMethod); \
	DECLARE_FUNCTION(execSetFilmbackPresetOption); \
	DECLARE_FUNCTION(execSetDesiredDistanceUnits); \
	DECLARE_FUNCTION(execSetCurrentFocusDistance); \
	DECLARE_FUNCTION(execSetCurrentFocalLength); \
	DECLARE_FUNCTION(execSetCurrentAperture); \
	DECLARE_FUNCTION(execSetAxisStabilizationScale); \
	DECLARE_FUNCTION(execSetAllowFocusPlaneVisualization); \
	DECLARE_FUNCTION(execSetActiveLevelSequence); \
	DECLARE_FUNCTION(execSaveWaypoint); \
	DECLARE_FUNCTION(execSavePreset); \
	DECLARE_FUNCTION(execSaveHomeWaypoint); \
	DECLARE_FUNCTION(execResumeLevelSequencePlay); \
	DECLARE_FUNCTION(execResetCameraOffsetsToTracker); \
	DECLARE_FUNCTION(execPlayLevelSequenceInReverse); \
	DECLARE_FUNCTION(execPlayLevelSequence); \
	DECLARE_FUNCTION(execPauseLevelSequence); \
	DECLARE_FUNCTION(execLoadScreenshotView); \
	DECLARE_FUNCTION(execLoadPreset); \
	DECLARE_FUNCTION(execJumpToPlaybackPosition); \
	DECLARE_FUNCTION(execJumpToLevelSequenceStart); \
	DECLARE_FUNCTION(execJumpToLevelSequenceEnd); \
	DECLARE_FUNCTION(execIsUsingGlobalBoom); \
	DECLARE_FUNCTION(execIsTouchInputInFocusMode); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsFocusVisualizationAllowed); \
	DECLARE_FUNCTION(execIsAxisLocked); \
	DECLARE_FUNCTION(execGetWaypointNames); \
	DECLARE_FUNCTION(execGetWaypointInfo); \
	DECLARE_FUNCTION(execGetTouchInputState); \
	DECLARE_FUNCTION(execGetSettingsPresets); \
	DECLARE_FUNCTION(execGetScreenshotNames); \
	DECLARE_FUNCTION(execGetScreenshotInfo); \
	DECLARE_FUNCTION(execGetPlaybackTimecode); \
	DECLARE_FUNCTION(execGetPlaybackPosition); \
	DECLARE_FUNCTION(execGetMatteValues); \
	DECLARE_FUNCTION(execGetMatteOpacity); \
	DECLARE_FUNCTION(execGetMatteAspectRatio); \
	DECLARE_FUNCTION(execGetLevelSequences); \
	DECLARE_FUNCTION(execGetLevelSequenceLength); \
	DECLARE_FUNCTION(execGetFilmbackPresetOptions); \
	DECLARE_FUNCTION(execGetFocusPlaneColor); \
	DECLARE_FUNCTION(execGetDesiredDistanceUnits); \
	DECLARE_FUNCTION(execGetCurrentSequenceFrameRate); \
	DECLARE_FUNCTION(execSetSequencerLockedToCameraCut); \
	DECLARE_FUNCTION(execIsSequencerLockedToCameraCut); \
	DECLARE_FUNCTION(execGetCurrentSequencePlaybackStart); \
	DECLARE_FUNCTION(execGetCurrentSequencePlaybackEnd); \
	DECLARE_FUNCTION(execGetCurrentFocusMethod); \
	DECLARE_FUNCTION(execGetCurrentFocusDistance); \
	DECLARE_FUNCTION(execGetCurrentFocalLength); \
	DECLARE_FUNCTION(execGetCurrentFilmbackName); \
	DECLARE_FUNCTION(execGetCurrentAperture); \
	DECLARE_FUNCTION(execGetAxisMovementScale); \
	DECLARE_FUNCTION(execGetAxisStabilizationScale); \
	DECLARE_FUNCTION(execGetActiveLevelSequence); \
	DECLARE_FUNCTION(execGetActiveLevelSequenceName); \
	DECLARE_FUNCTION(execDeleteWaypoint); \
	DECLARE_FUNCTION(execDeleteScreenshot); \
	DECLARE_FUNCTION(execDeletePreset); \
	DECLARE_FUNCTION(execClearActiveLevelSequence); \
	DECLARE_FUNCTION(execChangeFocalLengthPreset); \
	DECLARE_FUNCTION(execChangeAperturePreset); \
	DECLARE_FUNCTION(execAddBlendableToCamera); \
	DECLARE_FUNCTION(execShouldUpdateTargetCameraTransform); \
	DECLARE_FUNCTION(execIsVirtualCameraControlledByRemoteSession); \
	DECLARE_FUNCTION(execBroadcastOffsetReset); \
	DECLARE_FUNCTION(execGetDistanceInDesiredUnits); \
	DECLARE_FUNCTION(execSetInputSource); \
	DECLARE_FUNCTION(execGetTargetCamera); \
	DECLARE_FUNCTION(execInitializeAutoFocusPoint);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPlayerControllerBase_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ShouldUpdateTargetCameraTransform_Implementation() const; \
	virtual bool IsVirtualCameraControlledByRemoteSession_Implementation() const; \
 \
	DECLARE_FUNCTION(execActivateGameViewport); \
	DECLARE_FUNCTION(execToggleAxisLock); \
	DECLARE_FUNCTION(execToggleAxisFreeze); \
	DECLARE_FUNCTION(execTeleportToWaypoint); \
	DECLARE_FUNCTION(execTeleportToHomeWaypoint); \
	DECLARE_FUNCTION(execTakeScreenshot); \
	DECLARE_FUNCTION(execStopLevelSequencePlay); \
	DECLARE_FUNCTION(execShouldSaveSettingsWhenClosing); \
	DECLARE_FUNCTION(execSetZeroDutchOnLock); \
	DECLARE_FUNCTION(execSetWaypointFavoriteStatus); \
	DECLARE_FUNCTION(execSetUseGlobalBoom); \
	DECLARE_FUNCTION(execSetTouchInputState); \
	DECLARE_FUNCTION(execSetScreenshotFavoriteStatus); \
	DECLARE_FUNCTION(execSetSaveSettingsWhenClosing); \
	DECLARE_FUNCTION(execSetPresetFavoriteStatus); \
	DECLARE_FUNCTION(execSetMovementScale); \
	DECLARE_FUNCTION(execSetMatteOpacity); \
	DECLARE_FUNCTION(execSetMatteAspectRatio); \
	DECLARE_FUNCTION(execIsFocusVisualizationActivated); \
	DECLARE_FUNCTION(execSetFocusVisualization); \
	DECLARE_FUNCTION(execSetFocusPlaneColor); \
	DECLARE_FUNCTION(execSetFocusMethod); \
	DECLARE_FUNCTION(execSetFilmbackPresetOption); \
	DECLARE_FUNCTION(execSetDesiredDistanceUnits); \
	DECLARE_FUNCTION(execSetCurrentFocusDistance); \
	DECLARE_FUNCTION(execSetCurrentFocalLength); \
	DECLARE_FUNCTION(execSetCurrentAperture); \
	DECLARE_FUNCTION(execSetAxisStabilizationScale); \
	DECLARE_FUNCTION(execSetAllowFocusPlaneVisualization); \
	DECLARE_FUNCTION(execSetActiveLevelSequence); \
	DECLARE_FUNCTION(execSaveWaypoint); \
	DECLARE_FUNCTION(execSavePreset); \
	DECLARE_FUNCTION(execSaveHomeWaypoint); \
	DECLARE_FUNCTION(execResumeLevelSequencePlay); \
	DECLARE_FUNCTION(execResetCameraOffsetsToTracker); \
	DECLARE_FUNCTION(execPlayLevelSequenceInReverse); \
	DECLARE_FUNCTION(execPlayLevelSequence); \
	DECLARE_FUNCTION(execPauseLevelSequence); \
	DECLARE_FUNCTION(execLoadScreenshotView); \
	DECLARE_FUNCTION(execLoadPreset); \
	DECLARE_FUNCTION(execJumpToPlaybackPosition); \
	DECLARE_FUNCTION(execJumpToLevelSequenceStart); \
	DECLARE_FUNCTION(execJumpToLevelSequenceEnd); \
	DECLARE_FUNCTION(execIsUsingGlobalBoom); \
	DECLARE_FUNCTION(execIsTouchInputInFocusMode); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsFocusVisualizationAllowed); \
	DECLARE_FUNCTION(execIsAxisLocked); \
	DECLARE_FUNCTION(execGetWaypointNames); \
	DECLARE_FUNCTION(execGetWaypointInfo); \
	DECLARE_FUNCTION(execGetTouchInputState); \
	DECLARE_FUNCTION(execGetSettingsPresets); \
	DECLARE_FUNCTION(execGetScreenshotNames); \
	DECLARE_FUNCTION(execGetScreenshotInfo); \
	DECLARE_FUNCTION(execGetPlaybackTimecode); \
	DECLARE_FUNCTION(execGetPlaybackPosition); \
	DECLARE_FUNCTION(execGetMatteValues); \
	DECLARE_FUNCTION(execGetMatteOpacity); \
	DECLARE_FUNCTION(execGetMatteAspectRatio); \
	DECLARE_FUNCTION(execGetLevelSequences); \
	DECLARE_FUNCTION(execGetLevelSequenceLength); \
	DECLARE_FUNCTION(execGetFilmbackPresetOptions); \
	DECLARE_FUNCTION(execGetFocusPlaneColor); \
	DECLARE_FUNCTION(execGetDesiredDistanceUnits); \
	DECLARE_FUNCTION(execGetCurrentSequenceFrameRate); \
	DECLARE_FUNCTION(execSetSequencerLockedToCameraCut); \
	DECLARE_FUNCTION(execIsSequencerLockedToCameraCut); \
	DECLARE_FUNCTION(execGetCurrentSequencePlaybackStart); \
	DECLARE_FUNCTION(execGetCurrentSequencePlaybackEnd); \
	DECLARE_FUNCTION(execGetCurrentFocusMethod); \
	DECLARE_FUNCTION(execGetCurrentFocusDistance); \
	DECLARE_FUNCTION(execGetCurrentFocalLength); \
	DECLARE_FUNCTION(execGetCurrentFilmbackName); \
	DECLARE_FUNCTION(execGetCurrentAperture); \
	DECLARE_FUNCTION(execGetAxisMovementScale); \
	DECLARE_FUNCTION(execGetAxisStabilizationScale); \
	DECLARE_FUNCTION(execGetActiveLevelSequence); \
	DECLARE_FUNCTION(execGetActiveLevelSequenceName); \
	DECLARE_FUNCTION(execDeleteWaypoint); \
	DECLARE_FUNCTION(execDeleteScreenshot); \
	DECLARE_FUNCTION(execDeletePreset); \
	DECLARE_FUNCTION(execClearActiveLevelSequence); \
	DECLARE_FUNCTION(execChangeFocalLengthPreset); \
	DECLARE_FUNCTION(execChangeAperturePreset); \
	DECLARE_FUNCTION(execAddBlendableToCamera); \
	DECLARE_FUNCTION(execShouldUpdateTargetCameraTransform); \
	DECLARE_FUNCTION(execIsVirtualCameraControlledByRemoteSession); \
	DECLARE_FUNCTION(execBroadcastOffsetReset); \
	DECLARE_FUNCTION(execGetDistanceInDesiredUnits); \
	DECLARE_FUNCTION(execSetInputSource); \
	DECLARE_FUNCTION(execGetTargetCamera); \
	DECLARE_FUNCTION(execInitializeAutoFocusPoint);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPlayerControllerBase_h_59_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPlayerControllerBase_h_59_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPlayerControllerBase_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVirtualCameraPlayerControllerBase(); \
	friend struct Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics; \
public: \
	DECLARE_CLASS(AVirtualCameraPlayerControllerBase, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/VirtualCamera"), NO_API) \
	DECLARE_SERIALIZER(AVirtualCameraPlayerControllerBase)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPlayerControllerBase_h_59_INCLASS \
private: \
	static void StaticRegisterNativesAVirtualCameraPlayerControllerBase(); \
	friend struct Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics; \
public: \
	DECLARE_CLASS(AVirtualCameraPlayerControllerBase, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/VirtualCamera"), NO_API) \
	DECLARE_SERIALIZER(AVirtualCameraPlayerControllerBase)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPlayerControllerBase_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVirtualCameraPlayerControllerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVirtualCameraPlayerControllerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVirtualCameraPlayerControllerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVirtualCameraPlayerControllerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVirtualCameraPlayerControllerBase(AVirtualCameraPlayerControllerBase&&); \
	NO_API AVirtualCameraPlayerControllerBase(const AVirtualCameraPlayerControllerBase&); \
public: \
	NO_API virtual ~AVirtualCameraPlayerControllerBase();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPlayerControllerBase_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVirtualCameraPlayerControllerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVirtualCameraPlayerControllerBase(AVirtualCameraPlayerControllerBase&&); \
	NO_API AVirtualCameraPlayerControllerBase(const AVirtualCameraPlayerControllerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVirtualCameraPlayerControllerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVirtualCameraPlayerControllerBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVirtualCameraPlayerControllerBase) \
	NO_API virtual ~AVirtualCameraPlayerControllerBase();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPlayerControllerBase_h_56_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPlayerControllerBase_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPlayerControllerBase_h_59_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPlayerControllerBase_h_59_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPlayerControllerBase_h_59_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPlayerControllerBase_h_59_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPlayerControllerBase_h_59_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPlayerControllerBase_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPlayerControllerBase_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPlayerControllerBase_h_59_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPlayerControllerBase_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPlayerControllerBase_h_59_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPlayerControllerBase_h_59_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPlayerControllerBase_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPlayerControllerBase_h_59_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VirtualCameraPlayerControllerBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIRTUALCAMERA_API UClass* StaticClass<class AVirtualCameraPlayerControllerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPlayerControllerBase_h


#define FOREACH_ENUM_ETRACKERINPUTSOURCE(op) \
	op(ETrackerInputSource::ARKit) \
	op(ETrackerInputSource::Custom) \
	op(ETrackerInputSource::LiveLink) 

enum class ETrackerInputSource : uint8;
template<> struct TIsUEnumClass<ETrackerInputSource> { enum { Value = true }; };
template<> VIRTUALCAMERA_API UEnum* StaticEnum<ETrackerInputSource>();

#define FOREACH_ENUM_ETOUCHINPUTSTATE(op) \
	op(ETouchInputState::ActorFocusTargeting) \
	op(ETouchInputState::AutoFocusTargeting) \
	op(ETouchInputState::BlueprintDefined) \
	op(ETouchInputState::ManualTouchFocus) \
	op(ETouchInputState::Scrubbing) \
	op(ETouchInputState::TouchAndHold) 

enum class ETouchInputState : uint8;
template<> struct TIsUEnumClass<ETouchInputState> { enum { Value = true }; };
template<> VIRTUALCAMERA_API UEnum* StaticEnum<ETouchInputState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
