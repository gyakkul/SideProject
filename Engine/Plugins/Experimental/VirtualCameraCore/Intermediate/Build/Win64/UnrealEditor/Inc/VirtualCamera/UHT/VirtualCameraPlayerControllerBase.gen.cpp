// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VirtualCameraPlayerControllerBase.h"
#include "IVirtualCameraController.h"
#include "LevelSequence/LevelSequencePlaybackController.h"
#include "VirtualCameraSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualCameraPlayerControllerBase() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACineCameraActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EUnit();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimecode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENGINE_API UClass* Z_Construct_UClass_UBlendableInterface_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VirtualCamera();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_AVirtualCameraPlayerControllerBase();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_AVirtualCameraPlayerControllerBase_NoRegister();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_ULevelSequencePlaybackController_NoRegister();
	VIRTUALCAMERA_API UEnum* Z_Construct_UEnum_VirtualCamera_ETouchInputState();
	VIRTUALCAMERA_API UEnum* Z_Construct_UEnum_VirtualCamera_ETrackerInputSource();
	VIRTUALCAMERA_API UEnum* Z_Construct_UEnum_VirtualCamera_EVirtualCameraAxis();
	VIRTUALCAMERA_API UEnum* Z_Construct_UEnum_VirtualCamera_EVirtualCameraFocusMethod();
	VIRTUALCAMERA_API UFunction* Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraResetOffsetsDelegate__DelegateSignature();
	VIRTUALCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceData();
	VIRTUALCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FTrackingOffset();
	VIRTUALCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualCameraScreenshot();
	VIRTUALCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset();
	VIRTUALCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualCameraWaypoint();
	VPUTILITIES_API UClass* Z_Construct_UClass_AVPRootActor_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETrackerInputSource;
	static UEnum* ETrackerInputSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETrackerInputSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETrackerInputSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VirtualCamera_ETrackerInputSource, (UObject*)Z_Construct_UPackage__Script_VirtualCamera(), TEXT("ETrackerInputSource"));
		}
		return Z_Registration_Info_UEnum_ETrackerInputSource.OuterSingleton;
	}
	template<> VIRTUALCAMERA_API UEnum* StaticEnum<ETrackerInputSource>()
	{
		return ETrackerInputSource_StaticEnum();
	}
	struct Z_Construct_UEnum_VirtualCamera_ETrackerInputSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VirtualCamera_ETrackerInputSource_Statics::Enumerators[] = {
		{ "ETrackerInputSource::ARKit", (int64)ETrackerInputSource::ARKit },
		{ "ETrackerInputSource::Custom", (int64)ETrackerInputSource::Custom },
		{ "ETrackerInputSource::LiveLink", (int64)ETrackerInputSource::LiveLink },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VirtualCamera_ETrackerInputSource_Statics::Enum_MetaDataParams[] = {
		{ "ARKit.Comment", "/* Accelerometer data from an iPhone/iPad */" },
		{ "ARKit.Name", "ETrackerInputSource::ARKit" },
		{ "ARKit.ToolTip", "Accelerometer data from an iPhone/iPad" },
		{ "BlueprintType", "true" },
		{ "Custom.Comment", "/* Takes in data from an outside source in blueprints */" },
		{ "Custom.Name", "ETrackerInputSource::Custom" },
		{ "Custom.ToolTip", "Takes in data from an outside source in blueprints" },
		{ "LiveLink.Comment", "/* Livelink plugin tracker */" },
		{ "LiveLink.Name", "ETrackerInputSource::LiveLink" },
		{ "LiveLink.ToolTip", "Livelink plugin tracker" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VirtualCamera_ETrackerInputSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VirtualCamera,
		nullptr,
		"ETrackerInputSource",
		"ETrackerInputSource",
		Z_Construct_UEnum_VirtualCamera_ETrackerInputSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VirtualCamera_ETrackerInputSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VirtualCamera_ETrackerInputSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VirtualCamera_ETrackerInputSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VirtualCamera_ETrackerInputSource()
	{
		if (!Z_Registration_Info_UEnum_ETrackerInputSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETrackerInputSource.InnerSingleton, Z_Construct_UEnum_VirtualCamera_ETrackerInputSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETrackerInputSource.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETouchInputState;
	static UEnum* ETouchInputState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETouchInputState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETouchInputState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VirtualCamera_ETouchInputState, (UObject*)Z_Construct_UPackage__Script_VirtualCamera(), TEXT("ETouchInputState"));
		}
		return Z_Registration_Info_UEnum_ETouchInputState.OuterSingleton;
	}
	template<> VIRTUALCAMERA_API UEnum* StaticEnum<ETouchInputState>()
	{
		return ETouchInputState_StaticEnum();
	}
	struct Z_Construct_UEnum_VirtualCamera_ETouchInputState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VirtualCamera_ETouchInputState_Statics::Enumerators[] = {
		{ "ETouchInputState::ActorFocusTargeting", (int64)ETouchInputState::ActorFocusTargeting },
		{ "ETouchInputState::AutoFocusTargeting", (int64)ETouchInputState::AutoFocusTargeting },
		{ "ETouchInputState::BlueprintDefined", (int64)ETouchInputState::BlueprintDefined },
		{ "ETouchInputState::ManualTouchFocus", (int64)ETouchInputState::ManualTouchFocus },
		{ "ETouchInputState::Scrubbing", (int64)ETouchInputState::Scrubbing },
		{ "ETouchInputState::TouchAndHold", (int64)ETouchInputState::TouchAndHold },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VirtualCamera_ETouchInputState_Statics::Enum_MetaDataParams[] = {
		{ "ActorFocusTargeting.Comment", "/* Allows user to select an actor to always be in focus */" },
		{ "ActorFocusTargeting.Name", "ETouchInputState::ActorFocusTargeting" },
		{ "ActorFocusTargeting.ToolTip", "Allows user to select an actor to always be in focus" },
		{ "AutoFocusTargeting.Comment", "/* Allows user to select a point on the screen to auto-focus through */" },
		{ "AutoFocusTargeting.Name", "ETouchInputState::AutoFocusTargeting" },
		{ "AutoFocusTargeting.ToolTip", "Allows user to select a point on the screen to auto-focus through" },
		{ "BlueprintDefined.Comment", "/* Allows the touch input to be handled in the blueprint event. This should be the default */" },
		{ "BlueprintDefined.Name", "ETouchInputState::BlueprintDefined" },
		{ "BlueprintDefined.ToolTip", "Allows the touch input to be handled in the blueprint event. This should be the default" },
		{ "BlueprintType", "true" },
		{ "ManualTouchFocus.Comment", "/* Allows for the user to focus on target on touch without exiting manual focus */" },
		{ "ManualTouchFocus.Name", "ETouchInputState::ManualTouchFocus" },
		{ "ManualTouchFocus.ToolTip", "Allows for the user to focus on target on touch without exiting manual focus" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "Scrubbing.Comment", "/* Touch support for scrubbing through a sequence */" },
		{ "Scrubbing.Name", "ETouchInputState::Scrubbing" },
		{ "Scrubbing.ToolTip", "Touch support for scrubbing through a sequence" },
		{ "TouchAndHold.Comment", "/* Touch and hold for attach targeting */" },
		{ "TouchAndHold.Name", "ETouchInputState::TouchAndHold" },
		{ "TouchAndHold.ToolTip", "Touch and hold for attach targeting" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VirtualCamera_ETouchInputState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VirtualCamera,
		nullptr,
		"ETouchInputState",
		"ETouchInputState",
		Z_Construct_UEnum_VirtualCamera_ETouchInputState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VirtualCamera_ETouchInputState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VirtualCamera_ETouchInputState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VirtualCamera_ETouchInputState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VirtualCamera_ETouchInputState()
	{
		if (!Z_Registration_Info_UEnum_ETouchInputState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETouchInputState.InnerSingleton, Z_Construct_UEnum_VirtualCamera_ETouchInputState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETouchInputState.InnerSingleton;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execActivateGameViewport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateGameViewport();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execToggleAxisLock)
	{
		P_GET_ENUM(EVirtualCameraAxis,Z_Param_AxisToToggle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ToggleAxisLock(EVirtualCameraAxis(Z_Param_AxisToToggle));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execToggleAxisFreeze)
	{
		P_GET_ENUM(EVirtualCameraAxis,Z_Param_AxisToToggle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ToggleAxisFreeze(EVirtualCameraAxis(Z_Param_AxisToToggle));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execTeleportToWaypoint)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_WaypointIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TeleportToWaypoint(Z_Param_WaypointIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execTeleportToHomeWaypoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TeleportToHomeWaypoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execTakeScreenshot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->TakeScreenshot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execStopLevelSequencePlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopLevelSequencePlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execShouldSaveSettingsWhenClosing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldSaveSettingsWhenClosing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execSetZeroDutchOnLock)
	{
		P_GET_UBOOL(Z_Param_bInValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetZeroDutchOnLock(Z_Param_bInValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execSetWaypointFavoriteStatus)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_WaypointName);
		P_GET_UBOOL(Z_Param_bIsFavorite);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWaypointFavoriteStatus(Z_Param_WaypointName,Z_Param_bIsFavorite);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execSetUseGlobalBoom)
	{
		P_GET_UBOOL(Z_Param_bShouldUseGlobalBoom);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseGlobalBoom(Z_Param_bShouldUseGlobalBoom);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execSetTouchInputState)
	{
		P_GET_ENUM(ETouchInputState,Z_Param_NewInputState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTouchInputState(ETouchInputState(Z_Param_NewInputState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execSetScreenshotFavoriteStatus)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ScreenshotName);
		P_GET_UBOOL(Z_Param_bIsFavorite);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScreenshotFavoriteStatus(Z_Param_ScreenshotName,Z_Param_bIsFavorite);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execSetSaveSettingsWhenClosing)
	{
		P_GET_UBOOL(Z_Param_bShouldSettingsSave);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSaveSettingsWhenClosing(Z_Param_bShouldSettingsSave);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execSetPresetFavoriteStatus)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PresetName);
		P_GET_UBOOL(Z_Param_bIsFavorite);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPresetFavoriteStatus(Z_Param_PresetName,Z_Param_bIsFavorite);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execSetMovementScale)
	{
		P_GET_ENUM(EVirtualCameraAxis,Z_Param_AxisToAdjust);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewMovementScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMovementScale(EVirtualCameraAxis(Z_Param_AxisToAdjust),Z_Param_NewMovementScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execSetMatteOpacity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewMatteOpacity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMatteOpacity(Z_Param_NewMatteOpacity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execSetMatteAspectRatio)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewMatteAspectRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetMatteAspectRatio(Z_Param_NewMatteAspectRatio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execIsFocusVisualizationActivated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFocusVisualizationActivated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execSetFocusVisualization)
	{
		P_GET_UBOOL(Z_Param_bShowFocusVisualization);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFocusVisualization(Z_Param_bShowFocusVisualization);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execSetFocusPlaneColor)
	{
		P_GET_STRUCT(FColor,Z_Param_NewFocusPlaneColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFocusPlaneColor(Z_Param_NewFocusPlaneColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execSetFocusMethod)
	{
		P_GET_ENUM(EVirtualCameraFocusMethod,Z_Param_NewFocusMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFocusMethod(EVirtualCameraFocusMethod(Z_Param_NewFocusMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execSetFilmbackPresetOption)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewFilmbackPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetFilmbackPresetOption(Z_Param_NewFilmbackPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execSetDesiredDistanceUnits)
	{
		P_GET_ENUM(EUnit,Z_Param_DesiredUnits);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredDistanceUnits(EUnit(Z_Param_DesiredUnits));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execSetCurrentFocusDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewFocusDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentFocusDistance(Z_Param_NewFocusDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execSetCurrentFocalLength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewFocalLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentFocalLength(Z_Param_NewFocalLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execSetCurrentAperture)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewAperture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentAperture(Z_Param_NewAperture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execSetAxisStabilizationScale)
	{
		P_GET_ENUM(EVirtualCameraAxis,Z_Param_AxisToAdjust);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewStabilizationAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->SetAxisStabilizationScale(EVirtualCameraAxis(Z_Param_AxisToAdjust),Z_Param_NewStabilizationAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execSetAllowFocusPlaneVisualization)
	{
		P_GET_UBOOL(Z_Param_bShouldAllowFocusVisualization);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllowFocusPlaneVisualization(Z_Param_bShouldAllowFocusVisualization);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execSetActiveLevelSequence)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_InNewLevelSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetActiveLevelSequence(Z_Param_InNewLevelSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execSaveWaypoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->SaveWaypoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execSavePreset)
	{
		P_GET_UBOOL(Z_Param_bSaveCameraSettings);
		P_GET_UBOOL(Z_Param_bSaveStabilization);
		P_GET_UBOOL(Z_Param_bSaveAxisLocking);
		P_GET_UBOOL(Z_Param_bSaveMotionScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->SavePreset(Z_Param_bSaveCameraSettings,Z_Param_bSaveStabilization,Z_Param_bSaveAxisLocking,Z_Param_bSaveMotionScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execSaveHomeWaypoint)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewHomeWaypointName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveHomeWaypoint(Z_Param_NewHomeWaypointName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execResumeLevelSequencePlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResumeLevelSequencePlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execResetCameraOffsetsToTracker)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetCameraOffsetsToTracker();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execPlayLevelSequenceInReverse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayLevelSequenceInReverse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execPlayLevelSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayLevelSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execPauseLevelSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PauseLevelSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execLoadScreenshotView)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ScreenshotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadScreenshotView(Z_Param_ScreenshotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execLoadPreset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PresetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadPreset(Z_Param_PresetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execJumpToPlaybackPosition)
	{
		P_GET_STRUCT_REF(FFrameNumber,Z_Param_Out_InFrameNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpToPlaybackPosition(Z_Param_Out_InFrameNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execJumpToLevelSequenceStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpToLevelSequenceStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execJumpToLevelSequenceEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpToLevelSequenceEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execIsUsingGlobalBoom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUsingGlobalBoom();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execIsTouchInputInFocusMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTouchInputInFocusMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execIsFocusVisualizationAllowed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFocusVisualizationAllowed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execIsAxisLocked)
	{
		P_GET_ENUM(EVirtualCameraAxis,Z_Param_AxisToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAxisLocked(EVirtualCameraAxis(Z_Param_AxisToCheck));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execGetWaypointNames)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetWaypointNames(Z_Param_Out_OutArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execGetWaypointInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_WaypointName);
		P_GET_STRUCT_REF(FVirtualCameraWaypoint,Z_Param_Out_OutWaypointInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetWaypointInfo(Z_Param_WaypointName,Z_Param_Out_OutWaypointInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execGetTouchInputState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETouchInputState*)Z_Param__Result=P_THIS->GetTouchInputState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execGetSettingsPresets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FVirtualCameraSettingsPreset>*)Z_Param__Result=P_THIS->GetSettingsPresets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execGetScreenshotNames)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetScreenshotNames(Z_Param_Out_OutArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execGetScreenshotInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ScreenshotName);
		P_GET_STRUCT_REF(FVirtualCameraScreenshot,Z_Param_Out_OutScreenshotInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetScreenshotInfo(Z_Param_ScreenshotName,Z_Param_Out_OutScreenshotInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execGetPlaybackTimecode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimecode*)Z_Param__Result=P_THIS->GetPlaybackTimecode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execGetPlaybackPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameTime*)Z_Param__Result=P_THIS->GetPlaybackPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execGetMatteValues)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_OutMatteValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMatteValues(Z_Param_Out_OutMatteValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execGetMatteOpacity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMatteOpacity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execGetMatteAspectRatio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMatteAspectRatio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execGetLevelSequences)
	{
		P_GET_TARRAY_REF(FLevelSequenceData,Z_Param_Out_OutLevelSequenceNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLevelSequences(Z_Param_Out_OutLevelSequenceNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execGetLevelSequenceLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameNumber*)Z_Param__Result=P_THIS->GetLevelSequenceLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execGetFilmbackPresetOptions)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutFilmbackPresetsArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFilmbackPresetOptions(Z_Param_Out_OutFilmbackPresetsArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execGetFocusPlaneColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=P_THIS->GetFocusPlaneColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execGetDesiredDistanceUnits)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EUnit*)Z_Param__Result=P_THIS->GetDesiredDistanceUnits();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execGetCurrentSequenceFrameRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameRate*)Z_Param__Result=P_THIS->GetCurrentSequenceFrameRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execSetSequencerLockedToCameraCut)
	{
		P_GET_UBOOL(Z_Param_bLockView);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSequencerLockedToCameraCut(Z_Param_bLockView);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execIsSequencerLockedToCameraCut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSequencerLockedToCameraCut();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execGetCurrentSequencePlaybackStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameNumber*)Z_Param__Result=P_THIS->GetCurrentSequencePlaybackStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execGetCurrentSequencePlaybackEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameNumber*)Z_Param__Result=P_THIS->GetCurrentSequencePlaybackEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execGetCurrentFocusMethod)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EVirtualCameraFocusMethod*)Z_Param__Result=P_THIS->GetCurrentFocusMethod();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execGetCurrentFocusDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentFocusDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execGetCurrentFocalLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentFocalLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execGetCurrentFilmbackName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCurrentFilmbackName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execGetCurrentAperture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentAperture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execGetAxisMovementScale)
	{
		P_GET_ENUM(EVirtualCameraAxis,Z_Param_AxisToRetrieve);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAxisMovementScale(EVirtualCameraAxis(Z_Param_AxisToRetrieve));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execGetAxisStabilizationScale)
	{
		P_GET_ENUM(EVirtualCameraAxis,Z_Param_AxisToRetrieve);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAxisStabilizationScale(EVirtualCameraAxis(Z_Param_AxisToRetrieve));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execGetActiveLevelSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelSequence**)Z_Param__Result=P_THIS->GetActiveLevelSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execGetActiveLevelSequenceName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetActiveLevelSequenceName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execDeleteWaypoint)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_WaypointName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->DeleteWaypoint(Z_Param_WaypointName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execDeleteScreenshot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ScreenshotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->DeleteScreenshot(Z_Param_ScreenshotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execDeletePreset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PresetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->DeletePreset(Z_Param_PresetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execClearActiveLevelSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearActiveLevelSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execChangeFocalLengthPreset)
	{
		P_GET_UBOOL(Z_Param_bShiftUp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->ChangeFocalLengthPreset(Z_Param_bShiftUp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execChangeAperturePreset)
	{
		P_GET_UBOOL(Z_Param_bShiftUp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->ChangeAperturePreset(Z_Param_bShiftUp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execAddBlendableToCamera)
	{
		P_GET_TINTERFACE(IBlendableInterface,Z_Param_BlendableToAdd);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Weight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddBlendableToCamera(Z_Param_BlendableToAdd,Z_Param_Weight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execShouldUpdateTargetCameraTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldUpdateTargetCameraTransform_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execIsVirtualCameraControlledByRemoteSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVirtualCameraControlledByRemoteSession_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execBroadcastOffsetReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastOffsetReset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execGetDistanceInDesiredUnits)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InputDistance);
		P_GET_ENUM(EUnit,Z_Param_ConversionUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDistanceInDesiredUnits(Z_Param_InputDistance,EUnit(Z_Param_ConversionUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execSetInputSource)
	{
		P_GET_ENUM(ETrackerInputSource,Z_Param_InInputSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputSource(ETrackerInputSource(Z_Param_InInputSource));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execGetTargetCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACineCameraActor**)Z_Param__Result=P_THIS->GetTargetCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVirtualCameraPlayerControllerBase::execInitializeAutoFocusPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeAutoFocusPoint();
		P_NATIVE_END;
	}
	struct VirtualCameraPlayerControllerBase_eventFocusMethodChanged_Parms
	{
		EVirtualCameraFocusMethod NewFocusMethod;
	};
	struct VirtualCameraPlayerControllerBase_eventGetCustomTrackerLocationAndRotation_Parms
	{
		FVector OutTrackerLocation;
		FRotator OutTrackerRotation;
	};
	struct VirtualCameraPlayerControllerBase_eventIsVirtualCameraControlledByRemoteSession_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		VirtualCameraPlayerControllerBase_eventIsVirtualCameraControlledByRemoteSession_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct VirtualCameraPlayerControllerBase_eventOnRecordEnabledStateChanged_Parms
	{
		bool bIsRecordEnabled;
	};
	struct VirtualCameraPlayerControllerBase_eventShouldUpdateTargetCameraTransform_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		VirtualCameraPlayerControllerBase_eventShouldUpdateTargetCameraTransform_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct VirtualCameraPlayerControllerBase_eventUpdateFocusReticle_Parms
	{
		FVector NewReticleLocation;
	};
	static FName NAME_AVirtualCameraPlayerControllerBase_FocusMethodChanged = FName(TEXT("FocusMethodChanged"));
	void AVirtualCameraPlayerControllerBase::FocusMethodChanged(EVirtualCameraFocusMethod NewFocusMethod)
	{
		VirtualCameraPlayerControllerBase_eventFocusMethodChanged_Parms Parms;
		Parms.NewFocusMethod=NewFocusMethod;
		ProcessEvent(FindFunctionChecked(NAME_AVirtualCameraPlayerControllerBase_FocusMethodChanged),&Parms);
	}
	static FName NAME_AVirtualCameraPlayerControllerBase_GetCustomTrackerLocationAndRotation = FName(TEXT("GetCustomTrackerLocationAndRotation"));
	void AVirtualCameraPlayerControllerBase::GetCustomTrackerLocationAndRotation(FVector& OutTrackerLocation, FRotator& OutTrackerRotation)
	{
		VirtualCameraPlayerControllerBase_eventGetCustomTrackerLocationAndRotation_Parms Parms;
		Parms.OutTrackerLocation=OutTrackerLocation;
		Parms.OutTrackerRotation=OutTrackerRotation;
		ProcessEvent(FindFunctionChecked(NAME_AVirtualCameraPlayerControllerBase_GetCustomTrackerLocationAndRotation),&Parms);
		OutTrackerLocation=Parms.OutTrackerLocation;
		OutTrackerRotation=Parms.OutTrackerRotation;
	}
	static FName NAME_AVirtualCameraPlayerControllerBase_IsVirtualCameraControlledByRemoteSession = FName(TEXT("IsVirtualCameraControlledByRemoteSession"));
	bool AVirtualCameraPlayerControllerBase::IsVirtualCameraControlledByRemoteSession() const
	{
		VirtualCameraPlayerControllerBase_eventIsVirtualCameraControlledByRemoteSession_Parms Parms;
		const_cast<AVirtualCameraPlayerControllerBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_AVirtualCameraPlayerControllerBase_IsVirtualCameraControlledByRemoteSession),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AVirtualCameraPlayerControllerBase_OnRecordEnabledStateChanged = FName(TEXT("OnRecordEnabledStateChanged"));
	void AVirtualCameraPlayerControllerBase::OnRecordEnabledStateChanged(bool bIsRecordEnabled)
	{
		VirtualCameraPlayerControllerBase_eventOnRecordEnabledStateChanged_Parms Parms;
		Parms.bIsRecordEnabled=bIsRecordEnabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AVirtualCameraPlayerControllerBase_OnRecordEnabledStateChanged),&Parms);
	}
	static FName NAME_AVirtualCameraPlayerControllerBase_OnStopped = FName(TEXT("OnStopped"));
	void AVirtualCameraPlayerControllerBase::OnStopped()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVirtualCameraPlayerControllerBase_OnStopped),NULL);
	}
	static FName NAME_AVirtualCameraPlayerControllerBase_ShouldUpdateTargetCameraTransform = FName(TEXT("ShouldUpdateTargetCameraTransform"));
	bool AVirtualCameraPlayerControllerBase::ShouldUpdateTargetCameraTransform() const
	{
		VirtualCameraPlayerControllerBase_eventShouldUpdateTargetCameraTransform_Parms Parms;
		const_cast<AVirtualCameraPlayerControllerBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_AVirtualCameraPlayerControllerBase_ShouldUpdateTargetCameraTransform),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AVirtualCameraPlayerControllerBase_UpdateFocusReticle = FName(TEXT("UpdateFocusReticle"));
	void AVirtualCameraPlayerControllerBase::UpdateFocusReticle(FVector NewReticleLocation)
	{
		VirtualCameraPlayerControllerBase_eventUpdateFocusReticle_Parms Parms;
		Parms.NewReticleLocation=NewReticleLocation;
		ProcessEvent(FindFunctionChecked(NAME_AVirtualCameraPlayerControllerBase_UpdateFocusReticle),&Parms);
	}
	void AVirtualCameraPlayerControllerBase::StaticRegisterNativesAVirtualCameraPlayerControllerBase()
	{
		UClass* Class = AVirtualCameraPlayerControllerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateGameViewport", &AVirtualCameraPlayerControllerBase::execActivateGameViewport },
			{ "AddBlendableToCamera", &AVirtualCameraPlayerControllerBase::execAddBlendableToCamera },
			{ "BroadcastOffsetReset", &AVirtualCameraPlayerControllerBase::execBroadcastOffsetReset },
			{ "ChangeAperturePreset", &AVirtualCameraPlayerControllerBase::execChangeAperturePreset },
			{ "ChangeFocalLengthPreset", &AVirtualCameraPlayerControllerBase::execChangeFocalLengthPreset },
			{ "ClearActiveLevelSequence", &AVirtualCameraPlayerControllerBase::execClearActiveLevelSequence },
			{ "DeletePreset", &AVirtualCameraPlayerControllerBase::execDeletePreset },
			{ "DeleteScreenshot", &AVirtualCameraPlayerControllerBase::execDeleteScreenshot },
			{ "DeleteWaypoint", &AVirtualCameraPlayerControllerBase::execDeleteWaypoint },
			{ "GetActiveLevelSequence", &AVirtualCameraPlayerControllerBase::execGetActiveLevelSequence },
			{ "GetActiveLevelSequenceName", &AVirtualCameraPlayerControllerBase::execGetActiveLevelSequenceName },
			{ "GetAxisMovementScale", &AVirtualCameraPlayerControllerBase::execGetAxisMovementScale },
			{ "GetAxisStabilizationScale", &AVirtualCameraPlayerControllerBase::execGetAxisStabilizationScale },
			{ "GetCurrentAperture", &AVirtualCameraPlayerControllerBase::execGetCurrentAperture },
			{ "GetCurrentFilmbackName", &AVirtualCameraPlayerControllerBase::execGetCurrentFilmbackName },
			{ "GetCurrentFocalLength", &AVirtualCameraPlayerControllerBase::execGetCurrentFocalLength },
			{ "GetCurrentFocusDistance", &AVirtualCameraPlayerControllerBase::execGetCurrentFocusDistance },
			{ "GetCurrentFocusMethod", &AVirtualCameraPlayerControllerBase::execGetCurrentFocusMethod },
			{ "GetCurrentSequenceFrameRate", &AVirtualCameraPlayerControllerBase::execGetCurrentSequenceFrameRate },
			{ "GetCurrentSequencePlaybackEnd", &AVirtualCameraPlayerControllerBase::execGetCurrentSequencePlaybackEnd },
			{ "GetCurrentSequencePlaybackStart", &AVirtualCameraPlayerControllerBase::execGetCurrentSequencePlaybackStart },
			{ "GetDesiredDistanceUnits", &AVirtualCameraPlayerControllerBase::execGetDesiredDistanceUnits },
			{ "GetDistanceInDesiredUnits", &AVirtualCameraPlayerControllerBase::execGetDistanceInDesiredUnits },
			{ "GetFilmbackPresetOptions", &AVirtualCameraPlayerControllerBase::execGetFilmbackPresetOptions },
			{ "GetFocusPlaneColor", &AVirtualCameraPlayerControllerBase::execGetFocusPlaneColor },
			{ "GetLevelSequenceLength", &AVirtualCameraPlayerControllerBase::execGetLevelSequenceLength },
			{ "GetLevelSequences", &AVirtualCameraPlayerControllerBase::execGetLevelSequences },
			{ "GetMatteAspectRatio", &AVirtualCameraPlayerControllerBase::execGetMatteAspectRatio },
			{ "GetMatteOpacity", &AVirtualCameraPlayerControllerBase::execGetMatteOpacity },
			{ "GetMatteValues", &AVirtualCameraPlayerControllerBase::execGetMatteValues },
			{ "GetPlaybackPosition", &AVirtualCameraPlayerControllerBase::execGetPlaybackPosition },
			{ "GetPlaybackTimecode", &AVirtualCameraPlayerControllerBase::execGetPlaybackTimecode },
			{ "GetScreenshotInfo", &AVirtualCameraPlayerControllerBase::execGetScreenshotInfo },
			{ "GetScreenshotNames", &AVirtualCameraPlayerControllerBase::execGetScreenshotNames },
			{ "GetSettingsPresets", &AVirtualCameraPlayerControllerBase::execGetSettingsPresets },
			{ "GetTargetCamera", &AVirtualCameraPlayerControllerBase::execGetTargetCamera },
			{ "GetTouchInputState", &AVirtualCameraPlayerControllerBase::execGetTouchInputState },
			{ "GetWaypointInfo", &AVirtualCameraPlayerControllerBase::execGetWaypointInfo },
			{ "GetWaypointNames", &AVirtualCameraPlayerControllerBase::execGetWaypointNames },
			{ "InitializeAutoFocusPoint", &AVirtualCameraPlayerControllerBase::execInitializeAutoFocusPoint },
			{ "IsAxisLocked", &AVirtualCameraPlayerControllerBase::execIsAxisLocked },
			{ "IsFocusVisualizationActivated", &AVirtualCameraPlayerControllerBase::execIsFocusVisualizationActivated },
			{ "IsFocusVisualizationAllowed", &AVirtualCameraPlayerControllerBase::execIsFocusVisualizationAllowed },
			{ "IsPlaying", &AVirtualCameraPlayerControllerBase::execIsPlaying },
			{ "IsSequencerLockedToCameraCut", &AVirtualCameraPlayerControllerBase::execIsSequencerLockedToCameraCut },
			{ "IsTouchInputInFocusMode", &AVirtualCameraPlayerControllerBase::execIsTouchInputInFocusMode },
			{ "IsUsingGlobalBoom", &AVirtualCameraPlayerControllerBase::execIsUsingGlobalBoom },
			{ "IsVirtualCameraControlledByRemoteSession", &AVirtualCameraPlayerControllerBase::execIsVirtualCameraControlledByRemoteSession },
			{ "JumpToLevelSequenceEnd", &AVirtualCameraPlayerControllerBase::execJumpToLevelSequenceEnd },
			{ "JumpToLevelSequenceStart", &AVirtualCameraPlayerControllerBase::execJumpToLevelSequenceStart },
			{ "JumpToPlaybackPosition", &AVirtualCameraPlayerControllerBase::execJumpToPlaybackPosition },
			{ "LoadPreset", &AVirtualCameraPlayerControllerBase::execLoadPreset },
			{ "LoadScreenshotView", &AVirtualCameraPlayerControllerBase::execLoadScreenshotView },
			{ "PauseLevelSequence", &AVirtualCameraPlayerControllerBase::execPauseLevelSequence },
			{ "PlayLevelSequence", &AVirtualCameraPlayerControllerBase::execPlayLevelSequence },
			{ "PlayLevelSequenceInReverse", &AVirtualCameraPlayerControllerBase::execPlayLevelSequenceInReverse },
			{ "ResetCameraOffsetsToTracker", &AVirtualCameraPlayerControllerBase::execResetCameraOffsetsToTracker },
			{ "ResumeLevelSequencePlay", &AVirtualCameraPlayerControllerBase::execResumeLevelSequencePlay },
			{ "SaveHomeWaypoint", &AVirtualCameraPlayerControllerBase::execSaveHomeWaypoint },
			{ "SavePreset", &AVirtualCameraPlayerControllerBase::execSavePreset },
			{ "SaveWaypoint", &AVirtualCameraPlayerControllerBase::execSaveWaypoint },
			{ "SetActiveLevelSequence", &AVirtualCameraPlayerControllerBase::execSetActiveLevelSequence },
			{ "SetAllowFocusPlaneVisualization", &AVirtualCameraPlayerControllerBase::execSetAllowFocusPlaneVisualization },
			{ "SetAxisStabilizationScale", &AVirtualCameraPlayerControllerBase::execSetAxisStabilizationScale },
			{ "SetCurrentAperture", &AVirtualCameraPlayerControllerBase::execSetCurrentAperture },
			{ "SetCurrentFocalLength", &AVirtualCameraPlayerControllerBase::execSetCurrentFocalLength },
			{ "SetCurrentFocusDistance", &AVirtualCameraPlayerControllerBase::execSetCurrentFocusDistance },
			{ "SetDesiredDistanceUnits", &AVirtualCameraPlayerControllerBase::execSetDesiredDistanceUnits },
			{ "SetFilmbackPresetOption", &AVirtualCameraPlayerControllerBase::execSetFilmbackPresetOption },
			{ "SetFocusMethod", &AVirtualCameraPlayerControllerBase::execSetFocusMethod },
			{ "SetFocusPlaneColor", &AVirtualCameraPlayerControllerBase::execSetFocusPlaneColor },
			{ "SetFocusVisualization", &AVirtualCameraPlayerControllerBase::execSetFocusVisualization },
			{ "SetInputSource", &AVirtualCameraPlayerControllerBase::execSetInputSource },
			{ "SetMatteAspectRatio", &AVirtualCameraPlayerControllerBase::execSetMatteAspectRatio },
			{ "SetMatteOpacity", &AVirtualCameraPlayerControllerBase::execSetMatteOpacity },
			{ "SetMovementScale", &AVirtualCameraPlayerControllerBase::execSetMovementScale },
			{ "SetPresetFavoriteStatus", &AVirtualCameraPlayerControllerBase::execSetPresetFavoriteStatus },
			{ "SetSaveSettingsWhenClosing", &AVirtualCameraPlayerControllerBase::execSetSaveSettingsWhenClosing },
			{ "SetScreenshotFavoriteStatus", &AVirtualCameraPlayerControllerBase::execSetScreenshotFavoriteStatus },
			{ "SetSequencerLockedToCameraCut", &AVirtualCameraPlayerControllerBase::execSetSequencerLockedToCameraCut },
			{ "SetTouchInputState", &AVirtualCameraPlayerControllerBase::execSetTouchInputState },
			{ "SetUseGlobalBoom", &AVirtualCameraPlayerControllerBase::execSetUseGlobalBoom },
			{ "SetWaypointFavoriteStatus", &AVirtualCameraPlayerControllerBase::execSetWaypointFavoriteStatus },
			{ "SetZeroDutchOnLock", &AVirtualCameraPlayerControllerBase::execSetZeroDutchOnLock },
			{ "ShouldSaveSettingsWhenClosing", &AVirtualCameraPlayerControllerBase::execShouldSaveSettingsWhenClosing },
			{ "ShouldUpdateTargetCameraTransform", &AVirtualCameraPlayerControllerBase::execShouldUpdateTargetCameraTransform },
			{ "StopLevelSequencePlay", &AVirtualCameraPlayerControllerBase::execStopLevelSequencePlay },
			{ "TakeScreenshot", &AVirtualCameraPlayerControllerBase::execTakeScreenshot },
			{ "TeleportToHomeWaypoint", &AVirtualCameraPlayerControllerBase::execTeleportToHomeWaypoint },
			{ "TeleportToWaypoint", &AVirtualCameraPlayerControllerBase::execTeleportToWaypoint },
			{ "ToggleAxisFreeze", &AVirtualCameraPlayerControllerBase::execToggleAxisFreeze },
			{ "ToggleAxisLock", &AVirtualCameraPlayerControllerBase::execToggleAxisLock },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ActivateGameViewport_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ActivateGameViewport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera" },
		{ "Comment", "/**\n\x09 * Helper to bring the game viewport to front.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Helper to bring the game viewport to front." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ActivateGameViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "ActivateGameViewport", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ActivateGameViewport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ActivateGameViewport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ActivateGameViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ActivateGameViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_AddBlendableToCamera_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventAddBlendableToCamera_Parms
		{
			TScriptInterface<IBlendableInterface> BlendableToAdd;
			float Weight;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_BlendableToAdd;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_AddBlendableToCamera_Statics::NewProp_BlendableToAdd = { "BlendableToAdd", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventAddBlendableToCamera_Parms, BlendableToAdd), Z_Construct_UClass_UBlendableInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_AddBlendableToCamera_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventAddBlendableToCamera_Parms, Weight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_AddBlendableToCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_AddBlendableToCamera_Statics::NewProp_BlendableToAdd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_AddBlendableToCamera_Statics::NewProp_Weight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_AddBlendableToCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Cinematic Camera" },
		{ "Comment", "/**\n\x09 * Adds a blendable object to the camera's post process settings.\n\x09 * @param BlendableToAdd - The blendable that will be added to the post process settings\n\x09 * @param Weight - The weighting of the blendable's alpha\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Adds a blendable object to the camera's post process settings.\n@param BlendableToAdd - The blendable that will be added to the post process settings\n@param Weight - The weighting of the blendable's alpha" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_AddBlendableToCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "AddBlendableToCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_AddBlendableToCamera_Statics::VirtualCameraPlayerControllerBase_eventAddBlendableToCamera_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_AddBlendableToCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_AddBlendableToCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_AddBlendableToCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_AddBlendableToCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_AddBlendableToCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_AddBlendableToCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_BroadcastOffsetReset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_BroadcastOffsetReset_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Broadcast offset resets when movement component broadcasts\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Broadcast offset resets when movement component broadcasts" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_BroadcastOffsetReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "BroadcastOffsetReset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_BroadcastOffsetReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_BroadcastOffsetReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_BroadcastOffsetReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_BroadcastOffsetReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeAperturePreset_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventChangeAperturePreset_Parms
		{
			bool bShiftUp;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShiftUp_MetaData[];
#endif
		static void NewProp_bShiftUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShiftUp;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeAperturePreset_Statics::NewProp_bShiftUp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeAperturePreset_Statics::NewProp_bShiftUp_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventChangeAperturePreset_Parms*)Obj)->bShiftUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeAperturePreset_Statics::NewProp_bShiftUp = { "bShiftUp", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventChangeAperturePreset_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeAperturePreset_Statics::NewProp_bShiftUp_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeAperturePreset_Statics::NewProp_bShiftUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeAperturePreset_Statics::NewProp_bShiftUp_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeAperturePreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventChangeAperturePreset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeAperturePreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeAperturePreset_Statics::NewProp_bShiftUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeAperturePreset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeAperturePreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Cinematic Camera|Aperture" },
		{ "Comment", "/**\n\x09 * Adjusts the aperture of the camera to an adjacent preset value.\n\x09 * @param bShiftUp - If true, the aperture will increase; if false, it will decrease\n\x09 * @return the new aperture of the camera\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Adjusts the aperture of the camera to an adjacent preset value.\n@param bShiftUp - If true, the aperture will increase; if false, it will decrease\n@return the new aperture of the camera" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeAperturePreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "ChangeAperturePreset", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeAperturePreset_Statics::VirtualCameraPlayerControllerBase_eventChangeAperturePreset_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeAperturePreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeAperturePreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeAperturePreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeAperturePreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeAperturePreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeAperturePreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeFocalLengthPreset_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventChangeFocalLengthPreset_Parms
		{
			bool bShiftUp;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShiftUp_MetaData[];
#endif
		static void NewProp_bShiftUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShiftUp;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeFocalLengthPreset_Statics::NewProp_bShiftUp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeFocalLengthPreset_Statics::NewProp_bShiftUp_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventChangeFocalLengthPreset_Parms*)Obj)->bShiftUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeFocalLengthPreset_Statics::NewProp_bShiftUp = { "bShiftUp", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventChangeFocalLengthPreset_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeFocalLengthPreset_Statics::NewProp_bShiftUp_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeFocalLengthPreset_Statics::NewProp_bShiftUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeFocalLengthPreset_Statics::NewProp_bShiftUp_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeFocalLengthPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventChangeFocalLengthPreset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeFocalLengthPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeFocalLengthPreset_Statics::NewProp_bShiftUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeFocalLengthPreset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeFocalLengthPreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Cinematic Camera|Focal Length" },
		{ "Comment", "/**\n\x09 * Adjust the focal length of the camera to an adjecent preset value.\n\x09 * @param bShiftUp - If true, the focal length will increase; if false, it will decrease\n\x09 * @return the new focal length of the camera in mm\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Adjust the focal length of the camera to an adjecent preset value.\n@param bShiftUp - If true, the focal length will increase; if false, it will decrease\n@return the new focal length of the camera in mm" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeFocalLengthPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "ChangeFocalLengthPreset", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeFocalLengthPreset_Statics::VirtualCameraPlayerControllerBase_eventChangeFocalLengthPreset_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeFocalLengthPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeFocalLengthPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeFocalLengthPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeFocalLengthPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeFocalLengthPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeFocalLengthPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ClearActiveLevelSequence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ClearActiveLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Sequencer|Playback" },
		{ "Comment", "/**\n\x09 * Clears the current level sequence player, needed when recording clean takes of something\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Clears the current level sequence player, needed when recording clean takes of something" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ClearActiveLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "ClearActiveLevelSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ClearActiveLevelSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ClearActiveLevelSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ClearActiveLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ClearActiveLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeletePreset_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventDeletePreset_Parms
		{
			FString PresetName;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PresetName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeletePreset_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventDeletePreset_Parms, PresetName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeletePreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventDeletePreset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeletePreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeletePreset_Statics::NewProp_PresetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeletePreset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeletePreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Settings" },
		{ "Comment", "/**\n\x09 * Deletes a preset using its name as the key.\n\x09 * @param PresetName - The name of the preset to delete\n\x09 * @return the number of values associated with the key\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Deletes a preset using its name as the key.\n@param PresetName - The name of the preset to delete\n@return the number of values associated with the key" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeletePreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "DeletePreset", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeletePreset_Statics::VirtualCameraPlayerControllerBase_eventDeletePreset_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeletePreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeletePreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeletePreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeletePreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeletePreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeletePreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeleteScreenshot_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventDeleteScreenshot_Parms
		{
			FString ScreenshotName;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ScreenshotName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeleteScreenshot_Statics::NewProp_ScreenshotName = { "ScreenshotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventDeleteScreenshot_Parms, ScreenshotName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeleteScreenshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventDeleteScreenshot_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeleteScreenshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeleteScreenshot_Statics::NewProp_ScreenshotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeleteScreenshot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeleteScreenshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Screenshots" },
		{ "Comment", "/**\n\x09 * Deletes a screenshot, using its name as the key.\n\x09 * @param ScreenshotName - The name of the screenshot to delete\n\x09 * @return the number of values associated with the key\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Deletes a screenshot, using its name as the key.\n@param ScreenshotName - The name of the screenshot to delete\n@return the number of values associated with the key" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeleteScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "DeleteScreenshot", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeleteScreenshot_Statics::VirtualCameraPlayerControllerBase_eventDeleteScreenshot_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeleteScreenshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeleteScreenshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeleteScreenshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeleteScreenshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeleteScreenshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeleteScreenshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeleteWaypoint_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventDeleteWaypoint_Parms
		{
			FString WaypointName;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_WaypointName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeleteWaypoint_Statics::NewProp_WaypointName = { "WaypointName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventDeleteWaypoint_Parms, WaypointName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeleteWaypoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventDeleteWaypoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeleteWaypoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeleteWaypoint_Statics::NewProp_WaypointName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeleteWaypoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeleteWaypoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Waypoints" },
		{ "Comment", "/**\n\x09 * Deletes a waypoint, using its name as the key.\n\x09 * @param WaypointName - The name of the waypoint to delete\n\x09 * @return the number of values associated with the key\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Deletes a waypoint, using its name as the key.\n@param WaypointName - The name of the waypoint to delete\n@return the number of values associated with the key" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeleteWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "DeleteWaypoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeleteWaypoint_Statics::VirtualCameraPlayerControllerBase_eventDeleteWaypoint_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeleteWaypoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeleteWaypoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeleteWaypoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeleteWaypoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeleteWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeleteWaypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_FocusMethodChanged_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewFocusMethod_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewFocusMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_FocusMethodChanged_Statics::NewProp_NewFocusMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_FocusMethodChanged_Statics::NewProp_NewFocusMethod = { "NewFocusMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventFocusMethodChanged_Parms, NewFocusMethod), Z_Construct_UEnum_VirtualCamera_EVirtualCameraFocusMethod, METADATA_PARAMS(nullptr, 0) }; // 3704608848
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_FocusMethodChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_FocusMethodChanged_Statics::NewProp_NewFocusMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_FocusMethodChanged_Statics::NewProp_NewFocusMethod,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_FocusMethodChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/**\n\x09 * Blueprint event for when the focus method is changed.\n\x09 * @param NewFocuMethod - The focus method\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Blueprint event for when the focus method is changed.\n@param NewFocuMethod - The focus method" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_FocusMethodChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "FocusMethodChanged", nullptr, nullptr, sizeof(VirtualCameraPlayerControllerBase_eventFocusMethodChanged_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_FocusMethodChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_FocusMethodChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_FocusMethodChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_FocusMethodChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_FocusMethodChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_FocusMethodChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetActiveLevelSequence_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventGetActiveLevelSequence_Parms
		{
			ULevelSequence* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetActiveLevelSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetActiveLevelSequence_Parms, ReturnValue), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetActiveLevelSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetActiveLevelSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetActiveLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Sequencer|Playback" },
		{ "Comment", "/**\n\x09 * Returns the currently selected sequence\n\x09 * @return the current selected sequence; returns nullptr if no selected sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Returns the currently selected sequence\n@return the current selected sequence; returns nullptr if no selected sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetActiveLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "GetActiveLevelSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetActiveLevelSequence_Statics::VirtualCameraPlayerControllerBase_eventGetActiveLevelSequence_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetActiveLevelSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetActiveLevelSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetActiveLevelSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetActiveLevelSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetActiveLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetActiveLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetActiveLevelSequenceName_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventGetActiveLevelSequenceName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetActiveLevelSequenceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetActiveLevelSequenceName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetActiveLevelSequenceName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetActiveLevelSequenceName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetActiveLevelSequenceName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Sequencer|Playback" },
		{ "Comment", "/**\n\x09 * Returns the asset name of the currently selected sequence\n\x09 * @return the name of the crrent selected sequence; returns empty string if no selected sequence\n \x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Returns the asset name of the currently selected sequence\n@return the name of the crrent selected sequence; returns empty string if no selected sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetActiveLevelSequenceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "GetActiveLevelSequenceName", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetActiveLevelSequenceName_Statics::VirtualCameraPlayerControllerBase_eventGetActiveLevelSequenceName_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetActiveLevelSequenceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetActiveLevelSequenceName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetActiveLevelSequenceName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetActiveLevelSequenceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetActiveLevelSequenceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetActiveLevelSequenceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisMovementScale_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventGetAxisMovementScale_Parms
		{
			EVirtualCameraAxis AxisToRetrieve;
			float ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AxisToRetrieve_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AxisToRetrieve;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisMovementScale_Statics::NewProp_AxisToRetrieve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisMovementScale_Statics::NewProp_AxisToRetrieve = { "AxisToRetrieve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetAxisMovementScale_Parms, AxisToRetrieve), Z_Construct_UEnum_VirtualCamera_EVirtualCameraAxis, METADATA_PARAMS(nullptr, 0) }; // 4214100908
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisMovementScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetAxisMovementScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisMovementScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisMovementScale_Statics::NewProp_AxisToRetrieve_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisMovementScale_Statics::NewProp_AxisToRetrieve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisMovementScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisMovementScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Movement" },
		{ "Comment", "/**\n\x09* Gets movement scale for a specific axis.\n\x09* @param AxisToRetrieve - The axis of the scale value needed\n\x09* @return the movement scale for the given axis\n\x09*/" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Gets movement scale for a specific axis.\n@param AxisToRetrieve - The axis of the scale value needed\n@return the movement scale for the given axis" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisMovementScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "GetAxisMovementScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisMovementScale_Statics::VirtualCameraPlayerControllerBase_eventGetAxisMovementScale_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisMovementScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisMovementScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisMovementScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisMovementScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisMovementScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisMovementScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisStabilizationScale_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventGetAxisStabilizationScale_Parms
		{
			EVirtualCameraAxis AxisToRetrieve;
			float ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AxisToRetrieve_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AxisToRetrieve;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisStabilizationScale_Statics::NewProp_AxisToRetrieve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisStabilizationScale_Statics::NewProp_AxisToRetrieve = { "AxisToRetrieve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetAxisStabilizationScale_Parms, AxisToRetrieve), Z_Construct_UEnum_VirtualCamera_EVirtualCameraAxis, METADATA_PARAMS(nullptr, 0) }; // 4214100908
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisStabilizationScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetAxisStabilizationScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisStabilizationScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisStabilizationScale_Statics::NewProp_AxisToRetrieve_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisStabilizationScale_Statics::NewProp_AxisToRetrieve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisStabilizationScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisStabilizationScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Movement" },
		{ "Comment", "/**\n\x09 * Gets stabalization scale for a specific axis.\n\x09 * @param AxisToRetrieve - The axis of the stabilization value needed\n\x09 * @return the stabilization scale for the given axis\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Gets stabalization scale for a specific axis.\n@param AxisToRetrieve - The axis of the stabilization value needed\n@return the stabilization scale for the given axis" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisStabilizationScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "GetAxisStabilizationScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisStabilizationScale_Statics::VirtualCameraPlayerControllerBase_eventGetAxisStabilizationScale_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisStabilizationScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisStabilizationScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisStabilizationScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisStabilizationScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisStabilizationScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisStabilizationScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentAperture_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventGetCurrentAperture_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentAperture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetCurrentAperture_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentAperture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentAperture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentAperture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Cinematic Camera|Aperture" },
		{ "Comment", "/**\n\x09 * Get the current aperture value on the camera.\n\x09 * @return the current aperture of the camera component\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Get the current aperture value on the camera.\n@return the current aperture of the camera component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentAperture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "GetCurrentAperture", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentAperture_Statics::VirtualCameraPlayerControllerBase_eventGetCurrentAperture_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentAperture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentAperture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentAperture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentAperture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentAperture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentAperture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFilmbackName_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventGetCurrentFilmbackName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFilmbackName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetCurrentFilmbackName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFilmbackName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFilmbackName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFilmbackName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Cinematic Camera|Filmback" },
		{ "Comment", "/**\n\x09 * Get the name of the current preset filmback option on the camera.\n\x09 * @return the name of the current preset filmback option\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Get the name of the current preset filmback option on the camera.\n@return the name of the current preset filmback option" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFilmbackName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "GetCurrentFilmbackName", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFilmbackName_Statics::VirtualCameraPlayerControllerBase_eventGetCurrentFilmbackName_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFilmbackName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFilmbackName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFilmbackName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFilmbackName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFilmbackName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFilmbackName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocalLength_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventGetCurrentFocalLength_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocalLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetCurrentFocalLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocalLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocalLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocalLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Cinematic Camera|Focal Length" },
		{ "Comment", "/**\n\x09 * Get the current focal length value on the camera.\n\x09 * @return the current focal length of the camera being viewed\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Get the current focal length value on the camera.\n@return the current focal length of the camera being viewed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocalLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "GetCurrentFocalLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocalLength_Statics::VirtualCameraPlayerControllerBase_eventGetCurrentFocalLength_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocalLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocalLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocalLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocalLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocalLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocalLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocusDistance_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventGetCurrentFocusDistance_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocusDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetCurrentFocusDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocusDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocusDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocusDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Cinematic Camera|Focus" },
		{ "Comment", "/**\n\x09 * Returns the current focus distance of the camera.\n\x09 * @return the focal distance of the camera\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Returns the current focus distance of the camera.\n@return the focal distance of the camera" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocusDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "GetCurrentFocusDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocusDistance_Statics::VirtualCameraPlayerControllerBase_eventGetCurrentFocusDistance_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocusDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocusDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocusDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocusDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocusDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocusDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocusMethod_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventGetCurrentFocusMethod_Parms
		{
			EVirtualCameraFocusMethod ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocusMethod_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocusMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetCurrentFocusMethod_Parms, ReturnValue), Z_Construct_UEnum_VirtualCamera_EVirtualCameraFocusMethod, METADATA_PARAMS(nullptr, 0) }; // 3704608848
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocusMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocusMethod_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocusMethod_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocusMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Cinematic Camera|Focus" },
		{ "Comment", "/**\n\x09* Returns the current focus method.\n\x09* @return the focus method being used\n\x09*/" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Returns the current focus method.\n@return the focus method being used" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocusMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "GetCurrentFocusMethod", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocusMethod_Statics::VirtualCameraPlayerControllerBase_eventGetCurrentFocusMethod_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocusMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocusMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocusMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocusMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocusMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocusMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequenceFrameRate_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct VirtualCameraPlayerControllerBase_eventGetCurrentSequenceFrameRate_Parms
		{
			FFrameRate ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequenceFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetCurrentSequenceFrameRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequenceFrameRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequenceFrameRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequenceFrameRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Sequencer|Playback" },
		{ "Comment", "/**\n\x09 * Get the frame rate of the currently selected sequence\n\x09 * @return the frame rate in frames per second\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Get the frame rate of the currently selected sequence\n@return the frame rate in frames per second" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequenceFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "GetCurrentSequenceFrameRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequenceFrameRate_Statics::VirtualCameraPlayerControllerBase_eventGetCurrentSequenceFrameRate_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequenceFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequenceFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequenceFrameRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequenceFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequenceFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequenceFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequencePlaybackEnd_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventGetCurrentSequencePlaybackEnd_Parms
		{
			FFrameNumber ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequencePlaybackEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetCurrentSequencePlaybackEnd_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequencePlaybackEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequencePlaybackEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequencePlaybackEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Sequencer|Playback" },
		{ "Comment", "/**\n\x09 * Get the end position of the currently selected sequence\n\x09 * @return the end position of the sequence in FrameNumber\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Get the end position of the currently selected sequence\n@return the end position of the sequence in FrameNumber" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequencePlaybackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "GetCurrentSequencePlaybackEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequencePlaybackEnd_Statics::VirtualCameraPlayerControllerBase_eventGetCurrentSequencePlaybackEnd_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequencePlaybackEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequencePlaybackEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequencePlaybackEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequencePlaybackEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequencePlaybackEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequencePlaybackEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequencePlaybackStart_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventGetCurrentSequencePlaybackStart_Parms
		{
			FFrameNumber ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequencePlaybackStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetCurrentSequencePlaybackStart_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequencePlaybackStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequencePlaybackStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequencePlaybackStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Sequencer|Playback" },
		{ "Comment", "/**\n\x09 * Get the start position of the currently selected sequence\n\x09 * @return the start position of the sequence in FrameNumber\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Get the start position of the currently selected sequence\n@return the start position of the sequence in FrameNumber" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequencePlaybackStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "GetCurrentSequencePlaybackStart", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequencePlaybackStart_Statics::VirtualCameraPlayerControllerBase_eventGetCurrentSequencePlaybackStart_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequencePlaybackStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequencePlaybackStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequencePlaybackStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequencePlaybackStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequencePlaybackStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequencePlaybackStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCustomTrackerLocationAndRotation_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutTrackerLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutTrackerRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCustomTrackerLocationAndRotation_Statics::NewProp_OutTrackerLocation = { "OutTrackerLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetCustomTrackerLocationAndRotation_Parms, OutTrackerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCustomTrackerLocationAndRotation_Statics::NewProp_OutTrackerRotation = { "OutTrackerRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetCustomTrackerLocationAndRotation_Parms, OutTrackerRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCustomTrackerLocationAndRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCustomTrackerLocationAndRotation_Statics::NewProp_OutTrackerLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCustomTrackerLocationAndRotation_Statics::NewProp_OutTrackerRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCustomTrackerLocationAndRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/**\n\x09 * Overridable function to allow user to get tracker data from blueprints.\n\x09 * @param OutTrackerLocation - The current location of the tracker being used\n\x09 * @param OutTrackerRotation - The current rotation of the tracker being used\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Overridable function to allow user to get tracker data from blueprints.\n@param OutTrackerLocation - The current location of the tracker being used\n@param OutTrackerRotation - The current rotation of the tracker being used" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCustomTrackerLocationAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "GetCustomTrackerLocationAndRotation", nullptr, nullptr, sizeof(VirtualCameraPlayerControllerBase_eventGetCustomTrackerLocationAndRotation_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCustomTrackerLocationAndRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCustomTrackerLocationAndRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCustomTrackerLocationAndRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCustomTrackerLocationAndRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCustomTrackerLocationAndRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCustomTrackerLocationAndRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDesiredDistanceUnits_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventGetDesiredDistanceUnits_Parms
		{
			EUnit ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDesiredDistanceUnits_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDesiredDistanceUnits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetDesiredDistanceUnits_Parms, ReturnValue), Z_Construct_UEnum_CoreUObject_EUnit, METADATA_PARAMS(nullptr, 0) }; // 1931954769
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDesiredDistanceUnits_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDesiredDistanceUnits_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDesiredDistanceUnits_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDesiredDistanceUnits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Settings" },
		{ "Comment", "/**\n\x09 * Returns previously set unit of distance.\n\x09 * @return DesiredUnits - The unit that is used for distance measures like focus distance\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Returns previously set unit of distance.\n@return DesiredUnits - The unit that is used for distance measures like focus distance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDesiredDistanceUnits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "GetDesiredDistanceUnits", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDesiredDistanceUnits_Statics::VirtualCameraPlayerControllerBase_eventGetDesiredDistanceUnits_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDesiredDistanceUnits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDesiredDistanceUnits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDesiredDistanceUnits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDesiredDistanceUnits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDesiredDistanceUnits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDesiredDistanceUnits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDistanceInDesiredUnits_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventGetDistanceInDesiredUnits_Parms
		{
			float InputDistance;
			EUnit ConversionUnit;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputDistance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConversionUnit_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConversionUnit_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConversionUnit;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDistanceInDesiredUnits_Statics::NewProp_InputDistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDistanceInDesiredUnits_Statics::NewProp_InputDistance = { "InputDistance", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetDistanceInDesiredUnits_Parms, InputDistance), METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDistanceInDesiredUnits_Statics::NewProp_InputDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDistanceInDesiredUnits_Statics::NewProp_InputDistance_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDistanceInDesiredUnits_Statics::NewProp_ConversionUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDistanceInDesiredUnits_Statics::NewProp_ConversionUnit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDistanceInDesiredUnits_Statics::NewProp_ConversionUnit = { "ConversionUnit", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetDistanceInDesiredUnits_Parms, ConversionUnit), Z_Construct_UEnum_CoreUObject_EUnit, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDistanceInDesiredUnits_Statics::NewProp_ConversionUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDistanceInDesiredUnits_Statics::NewProp_ConversionUnit_MetaData)) }; // 1931954769
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDistanceInDesiredUnits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetDistanceInDesiredUnits_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDistanceInDesiredUnits_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDistanceInDesiredUnits_Statics::NewProp_InputDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDistanceInDesiredUnits_Statics::NewProp_ConversionUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDistanceInDesiredUnits_Statics::NewProp_ConversionUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDistanceInDesiredUnits_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDistanceInDesiredUnits_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/**\n\x09 * Converts a distance in unreal units (cm) to other units of measurement for display.\n\x09 * @param InputDistance - A distance in Unreal Units to be converted\n\x09 * @param ConversionUnit - The desired unit of distance to be used\n\x09 * @return the distance converted and put into a string for display\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Converts a distance in unreal units (cm) to other units of measurement for display.\n@param InputDistance - A distance in Unreal Units to be converted\n@param ConversionUnit - The desired unit of distance to be used\n@return the distance converted and put into a string for display" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDistanceInDesiredUnits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "GetDistanceInDesiredUnits", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDistanceInDesiredUnits_Statics::VirtualCameraPlayerControllerBase_eventGetDistanceInDesiredUnits_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDistanceInDesiredUnits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDistanceInDesiredUnits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDistanceInDesiredUnits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDistanceInDesiredUnits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDistanceInDesiredUnits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDistanceInDesiredUnits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFilmbackPresetOptions_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventGetFilmbackPresetOptions_Parms
		{
			TArray<FString> OutFilmbackPresetsArray;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutFilmbackPresetsArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutFilmbackPresetsArray;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFilmbackPresetOptions_Statics::NewProp_OutFilmbackPresetsArray_Inner = { "OutFilmbackPresetsArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFilmbackPresetOptions_Statics::NewProp_OutFilmbackPresetsArray = { "OutFilmbackPresetsArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetFilmbackPresetOptions_Parms, OutFilmbackPresetsArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFilmbackPresetOptions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventGetFilmbackPresetOptions_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFilmbackPresetOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventGetFilmbackPresetOptions_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFilmbackPresetOptions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFilmbackPresetOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFilmbackPresetOptions_Statics::NewProp_OutFilmbackPresetsArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFilmbackPresetOptions_Statics::NewProp_OutFilmbackPresetsArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFilmbackPresetOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFilmbackPresetOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Cinematic Camera|Filmback" },
		{ "Comment", "/**\n\x09 * Stores the names of all available filmback presets into an array.\n\x09 * @param OutFilmbackPresets - Upon return, will contain all available filmback presets\n\x09 * @return true if operation was successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Stores the names of all available filmback presets into an array.\n@param OutFilmbackPresets - Upon return, will contain all available filmback presets\n@return true if operation was successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFilmbackPresetOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "GetFilmbackPresetOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFilmbackPresetOptions_Statics::VirtualCameraPlayerControllerBase_eventGetFilmbackPresetOptions_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFilmbackPresetOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFilmbackPresetOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFilmbackPresetOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFilmbackPresetOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFilmbackPresetOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFilmbackPresetOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFocusPlaneColor_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventGetFocusPlaneColor_Parms
		{
			FColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFocusPlaneColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetFocusPlaneColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFocusPlaneColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFocusPlaneColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFocusPlaneColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Cinematic Camera|Focus" },
		{ "Comment", "/**\n\x09 * Get the current color of the focus plane that should be used \n\x09 * @return - The name of the current or next sequence that will be recorded\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Get the current color of the focus plane that should be used\n@return - The name of the current or next sequence that will be recorded" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFocusPlaneColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "GetFocusPlaneColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFocusPlaneColor_Statics::VirtualCameraPlayerControllerBase_eventGetFocusPlaneColor_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFocusPlaneColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFocusPlaneColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFocusPlaneColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFocusPlaneColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFocusPlaneColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFocusPlaneColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetLevelSequenceLength_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventGetLevelSequenceLength_Parms
		{
			FFrameNumber ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetLevelSequenceLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetLevelSequenceLength_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetLevelSequenceLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetLevelSequenceLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetLevelSequenceLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Sequencer|Playback" },
		{ "Comment", "/**\n\x09 * Gets the length of the currently selected level sequence\n\x09 * @return the length of the level sequence in FrameNumber\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Gets the length of the currently selected level sequence\n@return the length of the level sequence in FrameNumber" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetLevelSequenceLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "GetLevelSequenceLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetLevelSequenceLength_Statics::VirtualCameraPlayerControllerBase_eventGetLevelSequenceLength_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetLevelSequenceLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetLevelSequenceLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetLevelSequenceLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetLevelSequenceLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetLevelSequenceLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetLevelSequenceLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetLevelSequences_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventGetLevelSequences_Parms
		{
			TArray<FLevelSequenceData> OutLevelSequenceNames;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutLevelSequenceNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutLevelSequenceNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetLevelSequences_Statics::NewProp_OutLevelSequenceNames_Inner = { "OutLevelSequenceNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLevelSequenceData, METADATA_PARAMS(nullptr, 0) }; // 3757659897
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetLevelSequences_Statics::NewProp_OutLevelSequenceNames = { "OutLevelSequenceNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetLevelSequences_Parms, OutLevelSequenceNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3757659897
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetLevelSequences_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetLevelSequences_Statics::NewProp_OutLevelSequenceNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetLevelSequences_Statics::NewProp_OutLevelSequenceNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetLevelSequences_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Sequencer|Playback" },
		{ "Comment", "/**\n\x09 * Returns the names of each level sequence asset in the project\n\x09 * @param OutLevelSequenceNames - Upon return, array will contain all available level sequence names\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Returns the names of each level sequence asset in the project\n@param OutLevelSequenceNames - Upon return, array will contain all available level sequence names" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetLevelSequences_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "GetLevelSequences", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetLevelSequences_Statics::VirtualCameraPlayerControllerBase_eventGetLevelSequences_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetLevelSequences_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetLevelSequences_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetLevelSequences_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetLevelSequences_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetLevelSequences()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetLevelSequences_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteAspectRatio_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventGetMatteAspectRatio_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteAspectRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetMatteAspectRatio_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteAspectRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteAspectRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Cinematic Camera|Filmback" },
		{ "Comment", "/**\n\x09 * Returns the current matte aspect ratio.\n\x09 * @return the current matte setting\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Returns the current matte aspect ratio.\n@return the current matte setting" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "GetMatteAspectRatio", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteAspectRatio_Statics::VirtualCameraPlayerControllerBase_eventGetMatteAspectRatio_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteAspectRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteAspectRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteAspectRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteOpacity_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventGetMatteOpacity_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteOpacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetMatteOpacity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteOpacity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteOpacity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Cinematic Camera|Filmback" },
		{ "Comment", "/**\n\x09 * Set the matte aspect ratio to a new value.\n\x09 * @return The desired matte opacity to use\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Set the matte aspect ratio to a new value.\n@return The desired matte opacity to use" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "GetMatteOpacity", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteOpacity_Statics::VirtualCameraPlayerControllerBase_eventGetMatteOpacity_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteValues_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventGetMatteValues_Parms
		{
			TArray<float> OutMatteValues;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutMatteValues_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutMatteValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteValues_Statics::NewProp_OutMatteValues_Inner = { "OutMatteValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteValues_Statics::NewProp_OutMatteValues = { "OutMatteValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetMatteValues_Parms, OutMatteValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteValues_Statics::NewProp_OutMatteValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteValues_Statics::NewProp_OutMatteValues,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Cinematic Camera|Filmback" },
		{ "Comment", "/**\n\x09 * Returns the values of all matte options.\n\x09 * @param OutMatteValues - Upon return, array will contain all matte values.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Returns the values of all matte options.\n@param OutMatteValues - Upon return, array will contain all matte values." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "GetMatteValues", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteValues_Statics::VirtualCameraPlayerControllerBase_eventGetMatteValues_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetPlaybackPosition_Statics
	{
		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct VirtualCameraPlayerControllerBase_eventGetPlaybackPosition_Parms
		{
			FFrameTime ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetPlaybackPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetPlaybackPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetPlaybackPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetPlaybackPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetPlaybackPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Sequencer|Playback" },
		{ "Comment", "/**\n\x09 * Gets the playback position of the level sequence\n\x09 * @return the current playback position\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Gets the playback position of the level sequence\n@return the current playback position" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetPlaybackPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "GetPlaybackPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetPlaybackPosition_Statics::VirtualCameraPlayerControllerBase_eventGetPlaybackPosition_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetPlaybackPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetPlaybackPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetPlaybackPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetPlaybackPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetPlaybackPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetPlaybackPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetPlaybackTimecode_Statics
	{
		struct FTimecode
		{
			int32 Hours;
			int32 Minutes;
			int32 Seconds;
			int32 Frames;
			bool bDropFrameFormat;
		};

		struct VirtualCameraPlayerControllerBase_eventGetPlaybackTimecode_Parms
		{
			FTimecode ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetPlaybackTimecode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetPlaybackTimecode_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetPlaybackTimecode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetPlaybackTimecode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetPlaybackTimecode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Sequencer|Playback" },
		{ "Comment", "/**\n\x09 * Gets the playback Timecode of the level sequence\n\x09 * @return the current playback Timecode\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Gets the playback Timecode of the level sequence\n@return the current playback Timecode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetPlaybackTimecode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "GetPlaybackTimecode", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetPlaybackTimecode_Statics::VirtualCameraPlayerControllerBase_eventGetPlaybackTimecode_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetPlaybackTimecode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetPlaybackTimecode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetPlaybackTimecode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetPlaybackTimecode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetPlaybackTimecode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetPlaybackTimecode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetScreenshotInfo_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventGetScreenshotInfo_Parms
		{
			FString ScreenshotName;
			FVirtualCameraScreenshot OutScreenshotInfo;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ScreenshotName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutScreenshotInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetScreenshotInfo_Statics::NewProp_ScreenshotName = { "ScreenshotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetScreenshotInfo_Parms, ScreenshotName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetScreenshotInfo_Statics::NewProp_OutScreenshotInfo = { "OutScreenshotInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetScreenshotInfo_Parms, OutScreenshotInfo), Z_Construct_UScriptStruct_FVirtualCameraScreenshot, METADATA_PARAMS(nullptr, 0) }; // 4274225689
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetScreenshotInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetScreenshotInfo_Statics::NewProp_ScreenshotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetScreenshotInfo_Statics::NewProp_OutScreenshotInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetScreenshotInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Screenshots" },
		{ "Comment", "/**\n\x09 * Returns the information associated with a Screenshot.\n\x09 * @param ScreenshotName - The name of the screenshot to retrieve\n\x09 * @param OutScreenshotInfo - Upon return, will hold the info for the screenshot.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Returns the information associated with a Screenshot.\n@param ScreenshotName - The name of the screenshot to retrieve\n@param OutScreenshotInfo - Upon return, will hold the info for the screenshot." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetScreenshotInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "GetScreenshotInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetScreenshotInfo_Statics::VirtualCameraPlayerControllerBase_eventGetScreenshotInfo_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetScreenshotInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetScreenshotInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetScreenshotInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetScreenshotInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetScreenshotInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetScreenshotInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetScreenshotNames_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventGetScreenshotNames_Parms
		{
			TArray<FString> OutArray;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetScreenshotNames_Statics::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetScreenshotNames_Statics::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetScreenshotNames_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetScreenshotNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetScreenshotNames_Statics::NewProp_OutArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetScreenshotNames_Statics::NewProp_OutArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetScreenshotNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Screenshots" },
		{ "Comment", "/**\n\x09 * Collects a list of existing screenshot names.\n\x09 * @param OutArray - Upon return, will store screenshot names.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Collects a list of existing screenshot names.\n@param OutArray - Upon return, will store screenshot names." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetScreenshotNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "GetScreenshotNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetScreenshotNames_Statics::VirtualCameraPlayerControllerBase_eventGetScreenshotNames_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetScreenshotNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetScreenshotNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetScreenshotNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetScreenshotNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetScreenshotNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetScreenshotNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetSettingsPresets_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventGetSettingsPresets_Parms
		{
			TMap<FString,FVirtualCameraSettingsPreset> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetSettingsPresets_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset, METADATA_PARAMS(nullptr, 0) }; // 1209101004
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetSettingsPresets_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetSettingsPresets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetSettingsPresets_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1209101004
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetSettingsPresets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetSettingsPresets_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetSettingsPresets_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetSettingsPresets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetSettingsPresets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Settings" },
		{ "Comment", "/**\n\x09 * Returns a sorted TMap of the current presets.\n\x09 * @return a sorted TMap of settings presets\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Returns a sorted TMap of the current presets.\n@return a sorted TMap of settings presets" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetSettingsPresets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "GetSettingsPresets", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetSettingsPresets_Statics::VirtualCameraPlayerControllerBase_eventGetSettingsPresets_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetSettingsPresets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetSettingsPresets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetSettingsPresets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetSettingsPresets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetSettingsPresets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetSettingsPresets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetTargetCamera_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventGetTargetCamera_Parms
		{
			ACineCameraActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetTargetCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetTargetCamera_Parms, ReturnValue), Z_Construct_UClass_ACineCameraActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetTargetCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetTargetCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetTargetCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/**\n\x09 * Returns the target camera that was spawned for this play\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Returns the target camera that was spawned for this play" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetTargetCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "GetTargetCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetTargetCamera_Statics::VirtualCameraPlayerControllerBase_eventGetTargetCamera_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetTargetCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetTargetCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetTargetCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetTargetCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetTargetCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetTargetCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetTouchInputState_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventGetTouchInputState_Parms
		{
			ETouchInputState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetTouchInputState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetTouchInputState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetTouchInputState_Parms, ReturnValue), Z_Construct_UEnum_VirtualCamera_ETouchInputState, METADATA_PARAMS(nullptr, 0) }; // 110538727
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetTouchInputState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetTouchInputState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetTouchInputState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetTouchInputState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Input" },
		{ "Comment", "/**\n\x09 * Sets the current state of touch input.\n\x09 * @return the current state of the input\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Sets the current state of touch input.\n@return the current state of the input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetTouchInputState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "GetTouchInputState", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetTouchInputState_Statics::VirtualCameraPlayerControllerBase_eventGetTouchInputState_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetTouchInputState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetTouchInputState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetTouchInputState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetTouchInputState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetTouchInputState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetTouchInputState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetWaypointInfo_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventGetWaypointInfo_Parms
		{
			FString WaypointName;
			FVirtualCameraWaypoint OutWaypointInfo;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_WaypointName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutWaypointInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetWaypointInfo_Statics::NewProp_WaypointName = { "WaypointName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetWaypointInfo_Parms, WaypointName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetWaypointInfo_Statics::NewProp_OutWaypointInfo = { "OutWaypointInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetWaypointInfo_Parms, OutWaypointInfo), Z_Construct_UScriptStruct_FVirtualCameraWaypoint, METADATA_PARAMS(nullptr, 0) }; // 3725296236
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetWaypointInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetWaypointInfo_Statics::NewProp_WaypointName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetWaypointInfo_Statics::NewProp_OutWaypointInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetWaypointInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Waypoints" },
		{ "Comment", "/**\n\x09 * Returns the information associated with a waypoint.\n\x09 * @param WaypointName - The name of the waypoint to retrieve\n\x09 * @param OutWaypointInfo - Upon return, will hold the info for that waypoint.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Returns the information associated with a waypoint.\n@param WaypointName - The name of the waypoint to retrieve\n@param OutWaypointInfo - Upon return, will hold the info for that waypoint." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetWaypointInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "GetWaypointInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetWaypointInfo_Statics::VirtualCameraPlayerControllerBase_eventGetWaypointInfo_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetWaypointInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetWaypointInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetWaypointInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetWaypointInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetWaypointInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetWaypointInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetWaypointNames_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventGetWaypointNames_Parms
		{
			TArray<FString> OutArray;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetWaypointNames_Statics::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetWaypointNames_Statics::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventGetWaypointNames_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetWaypointNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetWaypointNames_Statics::NewProp_OutArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetWaypointNames_Statics::NewProp_OutArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetWaypointNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Waypoints" },
		{ "Comment", "/**\n\x09 * Collects a list of existing waypoint names.\n\x09 * @param OutArray - Upon return, will store the waypoint names.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Collects a list of existing waypoint names.\n@param OutArray - Upon return, will store the waypoint names." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetWaypointNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "GetWaypointNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetWaypointNames_Statics::VirtualCameraPlayerControllerBase_eventGetWaypointNames_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetWaypointNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetWaypointNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetWaypointNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetWaypointNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetWaypointNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetWaypointNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_InitializeAutoFocusPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_InitializeAutoFocusPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/**\n\x09 * Sets the autofocus point to the correct starting location at the center of the screen\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Sets the autofocus point to the correct starting location at the center of the screen" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_InitializeAutoFocusPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "InitializeAutoFocusPoint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_InitializeAutoFocusPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_InitializeAutoFocusPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_InitializeAutoFocusPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_InitializeAutoFocusPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsAxisLocked_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventIsAxisLocked_Parms
		{
			EVirtualCameraAxis AxisToCheck;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AxisToCheck_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AxisToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsAxisLocked_Statics::NewProp_AxisToCheck_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsAxisLocked_Statics::NewProp_AxisToCheck = { "AxisToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventIsAxisLocked_Parms, AxisToCheck), Z_Construct_UEnum_VirtualCamera_EVirtualCameraAxis, METADATA_PARAMS(nullptr, 0) }; // 4214100908
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsAxisLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventIsAxisLocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsAxisLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventIsAxisLocked_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsAxisLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsAxisLocked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsAxisLocked_Statics::NewProp_AxisToCheck_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsAxisLocked_Statics::NewProp_AxisToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsAxisLocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsAxisLocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Movement" },
		{ "Comment", "/**\n\x09 * Checks if an axis is locked.\n\x09 * @param AxisToCheck - The axis being checked\n\x09 * @return true if locked false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Checks if an axis is locked.\n@param AxisToCheck - The axis being checked\n@return true if locked false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsAxisLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "IsAxisLocked", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsAxisLocked_Statics::VirtualCameraPlayerControllerBase_eventIsAxisLocked_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsAxisLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsAxisLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsAxisLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsAxisLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsAxisLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsAxisLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsFocusVisualizationActivated_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventIsFocusVisualizationActivated_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsFocusVisualizationActivated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventIsFocusVisualizationActivated_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsFocusVisualizationActivated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventIsFocusVisualizationActivated_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsFocusVisualizationActivated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsFocusVisualizationActivated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsFocusVisualizationActivated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsFocusVisualizationActivated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Cinematic Camera|Focus" },
		{ "Comment", "/**\n\x09 * Checks whether or not focus visualization is activate\n\x09 * @return the current state of touch event visualization\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Checks whether or not focus visualization is activate\n@return the current state of touch event visualization" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsFocusVisualizationActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "IsFocusVisualizationActivated", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsFocusVisualizationActivated_Statics::VirtualCameraPlayerControllerBase_eventIsFocusVisualizationActivated_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsFocusVisualizationActivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsFocusVisualizationActivated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsFocusVisualizationActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsFocusVisualizationActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsFocusVisualizationActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsFocusVisualizationActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsFocusVisualizationAllowed_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventIsFocusVisualizationAllowed_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsFocusVisualizationAllowed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventIsFocusVisualizationAllowed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsFocusVisualizationAllowed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventIsFocusVisualizationAllowed_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsFocusVisualizationAllowed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsFocusVisualizationAllowed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsFocusVisualizationAllowed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsFocusVisualizationAllowed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Cinematic Camera|Focus" },
		{ "Comment", "/**\n\x09 * Checks whether or not focus visualization can activate\n\x09 * @return the current state of touch event visualization\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Checks whether or not focus visualization can activate\n@return the current state of touch event visualization" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsFocusVisualizationAllowed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "IsFocusVisualizationAllowed", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsFocusVisualizationAllowed_Statics::VirtualCameraPlayerControllerBase_eventIsFocusVisualizationAllowed_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsFocusVisualizationAllowed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsFocusVisualizationAllowed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsFocusVisualizationAllowed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsFocusVisualizationAllowed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsFocusVisualizationAllowed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsFocusVisualizationAllowed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsPlaying_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventIsPlaying_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsPlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Sequencer|Playback" },
		{ "Comment", "/**\n\x09 * Check to see if the sequence is playing\n\x09 * @return if the sequence is playing\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Check to see if the sequence is playing\n@return if the sequence is playing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "IsPlaying", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsPlaying_Statics::VirtualCameraPlayerControllerBase_eventIsPlaying_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsSequencerLockedToCameraCut_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventIsSequencerLockedToCameraCut_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsSequencerLockedToCameraCut_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventIsSequencerLockedToCameraCut_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsSequencerLockedToCameraCut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventIsSequencerLockedToCameraCut_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsSequencerLockedToCameraCut_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsSequencerLockedToCameraCut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsSequencerLockedToCameraCut_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsSequencerLockedToCameraCut_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Sequencer|Playback" },
		{ "Comment", "/**\n\x09 * Gets the locked to camera cut from the active LevelSequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Gets the locked to camera cut from the active LevelSequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsSequencerLockedToCameraCut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "IsSequencerLockedToCameraCut", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsSequencerLockedToCameraCut_Statics::VirtualCameraPlayerControllerBase_eventIsSequencerLockedToCameraCut_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsSequencerLockedToCameraCut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsSequencerLockedToCameraCut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsSequencerLockedToCameraCut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsSequencerLockedToCameraCut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsSequencerLockedToCameraCut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsSequencerLockedToCameraCut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsTouchInputInFocusMode_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventIsTouchInputInFocusMode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsTouchInputInFocusMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventIsTouchInputInFocusMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsTouchInputInFocusMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventIsTouchInputInFocusMode_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsTouchInputInFocusMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsTouchInputInFocusMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsTouchInputInFocusMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsTouchInputInFocusMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Input" },
		{ "Comment", "/**\n\x09 * Helper to check if touch input state is in a touch focus mode.\n\x09 * @return if touch input is in touch focus mode\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Helper to check if touch input state is in a touch focus mode.\n@return if touch input is in touch focus mode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsTouchInputInFocusMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "IsTouchInputInFocusMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsTouchInputInFocusMode_Statics::VirtualCameraPlayerControllerBase_eventIsTouchInputInFocusMode_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsTouchInputInFocusMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsTouchInputInFocusMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsTouchInputInFocusMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsTouchInputInFocusMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsTouchInputInFocusMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsTouchInputInFocusMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsUsingGlobalBoom_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventIsUsingGlobalBoom_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsUsingGlobalBoom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventIsUsingGlobalBoom_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsUsingGlobalBoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventIsUsingGlobalBoom_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsUsingGlobalBoom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsUsingGlobalBoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsUsingGlobalBoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsUsingGlobalBoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Movement" },
		{ "Comment", "/**\n\x09 * Get whether or not global boom is being used when navigating with the joysticks\n\x09 * @param bShouldUseGlobalBoom - True if using global Z axis, false if using local Z axis\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Get whether or not global boom is being used when navigating with the joysticks\n@param bShouldUseGlobalBoom - True if using global Z axis, false if using local Z axis" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsUsingGlobalBoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "IsUsingGlobalBoom", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsUsingGlobalBoom_Statics::VirtualCameraPlayerControllerBase_eventIsUsingGlobalBoom_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsUsingGlobalBoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsUsingGlobalBoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsUsingGlobalBoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsUsingGlobalBoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsUsingGlobalBoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsUsingGlobalBoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsVirtualCameraControlledByRemoteSession_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsVirtualCameraControlledByRemoteSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventIsVirtualCameraControlledByRemoteSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsVirtualCameraControlledByRemoteSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventIsVirtualCameraControlledByRemoteSession_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsVirtualCameraControlledByRemoteSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsVirtualCameraControlledByRemoteSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsVirtualCameraControlledByRemoteSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsVirtualCameraControlledByRemoteSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/*\n\x09 * Is this machine should display the Virtual Camera UI and establish a connection with the remote session app.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "* Is this machine should display the Virtual Camera UI and establish a connection with the remote session app." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsVirtualCameraControlledByRemoteSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "IsVirtualCameraControlledByRemoteSession", nullptr, nullptr, sizeof(VirtualCameraPlayerControllerBase_eventIsVirtualCameraControlledByRemoteSession_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsVirtualCameraControlledByRemoteSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsVirtualCameraControlledByRemoteSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsVirtualCameraControlledByRemoteSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsVirtualCameraControlledByRemoteSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsVirtualCameraControlledByRemoteSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsVirtualCameraControlledByRemoteSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_JumpToLevelSequenceEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_JumpToLevelSequenceEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Sequencer|Playback" },
		{ "Comment", "/**\n\x09 * Goes to the end of the level sequence and pauses\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Goes to the end of the level sequence and pauses" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_JumpToLevelSequenceEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "JumpToLevelSequenceEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_JumpToLevelSequenceEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_JumpToLevelSequenceEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_JumpToLevelSequenceEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_JumpToLevelSequenceEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_JumpToLevelSequenceStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_JumpToLevelSequenceStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Sequencer|Playback" },
		{ "Comment", "/**\n\x09 * Goes to the start of the level sequence and pauses\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Goes to the start of the level sequence and pauses" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_JumpToLevelSequenceStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "JumpToLevelSequenceStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_JumpToLevelSequenceStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_JumpToLevelSequenceStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_JumpToLevelSequenceStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_JumpToLevelSequenceStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_JumpToPlaybackPosition_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventJumpToPlaybackPosition_Parms
		{
			FFrameNumber InFrameNumber;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFrameNumber_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InFrameNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_JumpToPlaybackPosition_Statics::NewProp_InFrameNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_JumpToPlaybackPosition_Statics::NewProp_InFrameNumber = { "InFrameNumber", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventJumpToPlaybackPosition_Parms, InFrameNumber), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_JumpToPlaybackPosition_Statics::NewProp_InFrameNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_JumpToPlaybackPosition_Statics::NewProp_InFrameNumber_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_JumpToPlaybackPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_JumpToPlaybackPosition_Statics::NewProp_InFrameNumber,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_JumpToPlaybackPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Sequencer|Playback" },
		{ "Comment", "/**\n\x09 * Sets the playback position of the level sequence.\n\x09 * @param InFrameNumber - New FrameNumber to jump to.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Sets the playback position of the level sequence.\n@param InFrameNumber - New FrameNumber to jump to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_JumpToPlaybackPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "JumpToPlaybackPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_JumpToPlaybackPosition_Statics::VirtualCameraPlayerControllerBase_eventJumpToPlaybackPosition_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_JumpToPlaybackPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_JumpToPlaybackPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_JumpToPlaybackPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_JumpToPlaybackPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_JumpToPlaybackPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_JumpToPlaybackPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadPreset_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventLoadPreset_Parms
		{
			FString PresetName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PresetName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadPreset_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventLoadPreset_Parms, PresetName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadPreset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventLoadPreset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventLoadPreset_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadPreset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadPreset_Statics::NewProp_PresetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadPreset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadPreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Settings" },
		{ "Comment", "/**\n\x09 * Loads a preset using its name as a string key.\n\x09 * @returns true if successful, false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Loads a preset using its name as a string key.\n@returns true if successful, false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "LoadPreset", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadPreset_Statics::VirtualCameraPlayerControllerBase_eventLoadPreset_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadScreenshotView_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventLoadScreenshotView_Parms
		{
			FString ScreenshotName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenshotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ScreenshotName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadScreenshotView_Statics::NewProp_ScreenshotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadScreenshotView_Statics::NewProp_ScreenshotName = { "ScreenshotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventLoadScreenshotView_Parms, ScreenshotName), METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadScreenshotView_Statics::NewProp_ScreenshotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadScreenshotView_Statics::NewProp_ScreenshotName_MetaData)) };
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadScreenshotView_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventLoadScreenshotView_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadScreenshotView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventLoadScreenshotView_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadScreenshotView_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadScreenshotView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadScreenshotView_Statics::NewProp_ScreenshotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadScreenshotView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadScreenshotView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Screenshots" },
		{ "Comment", "/**\n\x09 * Moves a camera to the location where a screenshot was taken and restores camera settings used for that screenshot.\n\x09 * @param ScreenshotIndex - The index of the screenshot in the Screenshots array\n\x09 * @return whether or not the load was successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Moves a camera to the location where a screenshot was taken and restores camera settings used for that screenshot.\n@param ScreenshotIndex - The index of the screenshot in the Screenshots array\n@return whether or not the load was successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadScreenshotView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "LoadScreenshotView", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadScreenshotView_Statics::VirtualCameraPlayerControllerBase_eventLoadScreenshotView_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadScreenshotView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadScreenshotView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadScreenshotView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadScreenshotView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadScreenshotView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadScreenshotView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_OnRecordEnabledStateChanged_Statics
	{
		static void NewProp_bIsRecordEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRecordEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_OnRecordEnabledStateChanged_Statics::NewProp_bIsRecordEnabled_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventOnRecordEnabledStateChanged_Parms*)Obj)->bIsRecordEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_OnRecordEnabledStateChanged_Statics::NewProp_bIsRecordEnabled = { "bIsRecordEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventOnRecordEnabledStateChanged_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_OnRecordEnabledStateChanged_Statics::NewProp_bIsRecordEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_OnRecordEnabledStateChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_OnRecordEnabledStateChanged_Statics::NewProp_bIsRecordEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_OnRecordEnabledStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/**\n\x09 * Blueprint Event for updating if a sequence can be recorded or not.\n\x09 * @param bIsRecordEnabled - If the loaded sequence can record or not.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Blueprint Event for updating if a sequence can be recorded or not.\n@param bIsRecordEnabled - If the loaded sequence can record or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_OnRecordEnabledStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "OnRecordEnabledStateChanged", nullptr, nullptr, sizeof(VirtualCameraPlayerControllerBase_eventOnRecordEnabledStateChanged_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_OnRecordEnabledStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_OnRecordEnabledStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_OnRecordEnabledStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_OnRecordEnabledStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_OnRecordEnabledStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_OnRecordEnabledStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_OnStopped_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_OnStopped_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/**\n\x09 * Blueprint Event for when a sequence stops playing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Blueprint Event for when a sequence stops playing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_OnStopped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "OnStopped", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_OnStopped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_OnStopped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_OnStopped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_OnStopped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_PauseLevelSequence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_PauseLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Sequencer|Playback" },
		{ "Comment", "/**\n\x09 * Pauses the playing of the current level sequence.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Pauses the playing of the current level sequence." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_PauseLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "PauseLevelSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_PauseLevelSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_PauseLevelSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_PauseLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_PauseLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_PlayLevelSequence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_PlayLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Sequencer|Playback" },
		{ "Comment", "/**\n\x09 * Plays current level sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Plays current level sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_PlayLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "PlayLevelSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_PlayLevelSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_PlayLevelSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_PlayLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_PlayLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_PlayLevelSequenceInReverse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_PlayLevelSequenceInReverse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Sequencer|Playback" },
		{ "Comment", "/**\n\x09 * Plays current level sequence in reverse\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Plays current level sequence in reverse" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_PlayLevelSequenceInReverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "PlayLevelSequenceInReverse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_PlayLevelSequenceInReverse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_PlayLevelSequenceInReverse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_PlayLevelSequenceInReverse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_PlayLevelSequenceInReverse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ResetCameraOffsetsToTracker_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ResetCameraOffsetsToTracker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Movement" },
		{ "Comment", "/**\n\x09 * Moves the camera back to actor root and aligns rotation with the input tracker.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Moves the camera back to actor root and aligns rotation with the input tracker." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ResetCameraOffsetsToTracker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "ResetCameraOffsetsToTracker", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ResetCameraOffsetsToTracker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ResetCameraOffsetsToTracker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ResetCameraOffsetsToTracker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ResetCameraOffsetsToTracker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ResumeLevelSequencePlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ResumeLevelSequencePlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Sequencer|Playback" },
		{ "Comment", "/**\n\x09 * Plays current level sequence from the current time.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Plays current level sequence from the current time." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ResumeLevelSequencePlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "ResumeLevelSequencePlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ResumeLevelSequencePlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ResumeLevelSequencePlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ResumeLevelSequencePlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ResumeLevelSequencePlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SaveHomeWaypoint_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventSaveHomeWaypoint_Parms
		{
			FString NewHomeWaypointName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewHomeWaypointName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewHomeWaypointName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SaveHomeWaypoint_Statics::NewProp_NewHomeWaypointName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SaveHomeWaypoint_Statics::NewProp_NewHomeWaypointName = { "NewHomeWaypointName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventSaveHomeWaypoint_Parms, NewHomeWaypointName), METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SaveHomeWaypoint_Statics::NewProp_NewHomeWaypointName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SaveHomeWaypoint_Statics::NewProp_NewHomeWaypointName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SaveHomeWaypoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SaveHomeWaypoint_Statics::NewProp_NewHomeWaypointName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SaveHomeWaypoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Waypoints" },
		{ "Comment", "/**\n\x09 * Stores the new home waypoint location.\n\x09 * @param NewHomeWaypointName - The name of the new home waypoint to use\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Stores the new home waypoint location.\n@param NewHomeWaypointName - The name of the new home waypoint to use" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SaveHomeWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "SaveHomeWaypoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SaveHomeWaypoint_Statics::VirtualCameraPlayerControllerBase_eventSaveHomeWaypoint_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SaveHomeWaypoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SaveHomeWaypoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SaveHomeWaypoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SaveHomeWaypoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SaveHomeWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SaveHomeWaypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SavePreset_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventSavePreset_Parms
		{
			bool bSaveCameraSettings;
			bool bSaveStabilization;
			bool bSaveAxisLocking;
			bool bSaveMotionScale;
			FString ReturnValue;
		};
		static void NewProp_bSaveCameraSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveCameraSettings;
		static void NewProp_bSaveStabilization_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveStabilization;
		static void NewProp_bSaveAxisLocking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveAxisLocking;
		static void NewProp_bSaveMotionScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveMotionScale;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SavePreset_Statics::NewProp_bSaveCameraSettings_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventSavePreset_Parms*)Obj)->bSaveCameraSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SavePreset_Statics::NewProp_bSaveCameraSettings = { "bSaveCameraSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventSavePreset_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SavePreset_Statics::NewProp_bSaveCameraSettings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SavePreset_Statics::NewProp_bSaveStabilization_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventSavePreset_Parms*)Obj)->bSaveStabilization = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SavePreset_Statics::NewProp_bSaveStabilization = { "bSaveStabilization", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventSavePreset_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SavePreset_Statics::NewProp_bSaveStabilization_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SavePreset_Statics::NewProp_bSaveAxisLocking_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventSavePreset_Parms*)Obj)->bSaveAxisLocking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SavePreset_Statics::NewProp_bSaveAxisLocking = { "bSaveAxisLocking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventSavePreset_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SavePreset_Statics::NewProp_bSaveAxisLocking_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SavePreset_Statics::NewProp_bSaveMotionScale_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventSavePreset_Parms*)Obj)->bSaveMotionScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SavePreset_Statics::NewProp_bSaveMotionScale = { "bSaveMotionScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventSavePreset_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SavePreset_Statics::NewProp_bSaveMotionScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SavePreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventSavePreset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SavePreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SavePreset_Statics::NewProp_bSaveCameraSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SavePreset_Statics::NewProp_bSaveStabilization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SavePreset_Statics::NewProp_bSaveAxisLocking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SavePreset_Statics::NewProp_bSaveMotionScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SavePreset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SavePreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Settings" },
		{ "Comment", "/**\n\x09 * Saves a preset into the list of presets.\n\x09 * @param bSaveCameraSettings - Should this preset save camera settings\n\x09 * @param bSaveStabilization - Should this preset save stabilization settings\n\x09 * @param bSaveAxisLocking - Should this preset save axis locking settings\n\x09 * @param bSaveMotionScale - Should this preset save motion scaled settings\n\x09 * @return the name of the preset\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Saves a preset into the list of presets.\n@param bSaveCameraSettings - Should this preset save camera settings\n@param bSaveStabilization - Should this preset save stabilization settings\n@param bSaveAxisLocking - Should this preset save axis locking settings\n@param bSaveMotionScale - Should this preset save motion scaled settings\n@return the name of the preset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SavePreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "SavePreset", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SavePreset_Statics::VirtualCameraPlayerControllerBase_eventSavePreset_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SavePreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SavePreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SavePreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SavePreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SavePreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SavePreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SaveWaypoint_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventSaveWaypoint_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SaveWaypoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventSaveWaypoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SaveWaypoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SaveWaypoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SaveWaypoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Waypoints" },
		{ "Comment", "/**\n\x09 * Stores the current pawn location as a waypoint.\n\x09 * @return the index of the new waypoint in the saved waypoints array\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Stores the current pawn location as a waypoint.\n@return the index of the new waypoint in the saved waypoints array" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SaveWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "SaveWaypoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SaveWaypoint_Statics::VirtualCameraPlayerControllerBase_eventSaveWaypoint_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SaveWaypoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SaveWaypoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SaveWaypoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SaveWaypoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SaveWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SaveWaypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetActiveLevelSequence_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventSetActiveLevelSequence_Parms
		{
			ULevelSequence* InNewLevelSequence;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNewLevelSequence;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetActiveLevelSequence_Statics::NewProp_InNewLevelSequence = { "InNewLevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventSetActiveLevelSequence_Parms, InNewLevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetActiveLevelSequence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventSetActiveLevelSequence_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetActiveLevelSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventSetActiveLevelSequence_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetActiveLevelSequence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetActiveLevelSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetActiveLevelSequence_Statics::NewProp_InNewLevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetActiveLevelSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetActiveLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Sequencer|Playback" },
		{ "Comment", "/**\n\x09 * Changes the active level sequence to a new level sequence.\n\x09 * @param LevelSequenceName - The name of the level sequence to select\n\x09 * @return true if a valid level sequence player was found, false if no level sequence player is currently available\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Changes the active level sequence to a new level sequence.\n@param LevelSequenceName - The name of the level sequence to select\n@return true if a valid level sequence player was found, false if no level sequence player is currently available" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetActiveLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "SetActiveLevelSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetActiveLevelSequence_Statics::VirtualCameraPlayerControllerBase_eventSetActiveLevelSequence_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetActiveLevelSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetActiveLevelSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetActiveLevelSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetActiveLevelSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetActiveLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetActiveLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAllowFocusPlaneVisualization_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventSetAllowFocusPlaneVisualization_Parms
		{
			bool bShouldAllowFocusVisualization;
		};
		static void NewProp_bShouldAllowFocusVisualization_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAllowFocusVisualization;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAllowFocusPlaneVisualization_Statics::NewProp_bShouldAllowFocusVisualization_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventSetAllowFocusPlaneVisualization_Parms*)Obj)->bShouldAllowFocusVisualization = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAllowFocusPlaneVisualization_Statics::NewProp_bShouldAllowFocusVisualization = { "bShouldAllowFocusVisualization", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventSetAllowFocusPlaneVisualization_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAllowFocusPlaneVisualization_Statics::NewProp_bShouldAllowFocusVisualization_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAllowFocusPlaneVisualization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAllowFocusPlaneVisualization_Statics::NewProp_bShouldAllowFocusVisualization,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAllowFocusPlaneVisualization_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Cinematic Camera|Focus" },
		{ "Comment", "/**\n\x09 * Sets whether or not to use focus visualization\n\x09 * @param bShouldAllowFocusVisualization - the current state of touch event visualization\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Sets whether or not to use focus visualization\n@param bShouldAllowFocusVisualization - the current state of touch event visualization" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAllowFocusPlaneVisualization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "SetAllowFocusPlaneVisualization", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAllowFocusPlaneVisualization_Statics::VirtualCameraPlayerControllerBase_eventSetAllowFocusPlaneVisualization_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAllowFocusPlaneVisualization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAllowFocusPlaneVisualization_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAllowFocusPlaneVisualization_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAllowFocusPlaneVisualization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAllowFocusPlaneVisualization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAllowFocusPlaneVisualization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAxisStabilizationScale_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventSetAxisStabilizationScale_Parms
		{
			EVirtualCameraAxis AxisToAdjust;
			float NewStabilizationAmount;
			float ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AxisToAdjust_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AxisToAdjust;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewStabilizationAmount;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAxisStabilizationScale_Statics::NewProp_AxisToAdjust_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAxisStabilizationScale_Statics::NewProp_AxisToAdjust = { "AxisToAdjust", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventSetAxisStabilizationScale_Parms, AxisToAdjust), Z_Construct_UEnum_VirtualCamera_EVirtualCameraAxis, METADATA_PARAMS(nullptr, 0) }; // 4214100908
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAxisStabilizationScale_Statics::NewProp_NewStabilizationAmount = { "NewStabilizationAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventSetAxisStabilizationScale_Parms, NewStabilizationAmount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAxisStabilizationScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventSetAxisStabilizationScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAxisStabilizationScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAxisStabilizationScale_Statics::NewProp_AxisToAdjust_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAxisStabilizationScale_Statics::NewProp_AxisToAdjust,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAxisStabilizationScale_Statics::NewProp_NewStabilizationAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAxisStabilizationScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAxisStabilizationScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Movement" },
		{ "Comment", "/**\n\x09 * Sets the stabilization rate for a given lock.\n\x09 * @param AxisToAdjust - The axis whose stabilization rate should be changed\n\x09 * @param NewStabilizationAmount - The stabilization amount we should attempt to set the value\n\x09 * @return the actual value the stabilization amount was set to after clamping\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Sets the stabilization rate for a given lock.\n@param AxisToAdjust - The axis whose stabilization rate should be changed\n@param NewStabilizationAmount - The stabilization amount we should attempt to set the value\n@return the actual value the stabilization amount was set to after clamping" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAxisStabilizationScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "SetAxisStabilizationScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAxisStabilizationScale_Statics::VirtualCameraPlayerControllerBase_eventSetAxisStabilizationScale_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAxisStabilizationScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAxisStabilizationScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAxisStabilizationScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAxisStabilizationScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAxisStabilizationScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAxisStabilizationScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentAperture_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventSetCurrentAperture_Parms
		{
			float NewAperture;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewAperture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentAperture_Statics::NewProp_NewAperture = { "NewAperture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventSetCurrentAperture_Parms, NewAperture), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentAperture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentAperture_Statics::NewProp_NewAperture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentAperture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Cinematic Camera|Aperture" },
		{ "Comment", "/**\n\x09 * Set the current aperture value on the camera.\n\x09 * @param NewAperture - The current aperture of the camera component\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Set the current aperture value on the camera.\n@param NewAperture - The current aperture of the camera component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentAperture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "SetCurrentAperture", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentAperture_Statics::VirtualCameraPlayerControllerBase_eventSetCurrentAperture_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentAperture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentAperture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentAperture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentAperture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentAperture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentAperture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocalLength_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventSetCurrentFocalLength_Parms
		{
			float NewFocalLength;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewFocalLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFocalLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocalLength_Statics::NewProp_NewFocalLength_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocalLength_Statics::NewProp_NewFocalLength = { "NewFocalLength", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventSetCurrentFocalLength_Parms, NewFocalLength), METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocalLength_Statics::NewProp_NewFocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocalLength_Statics::NewProp_NewFocalLength_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocalLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocalLength_Statics::NewProp_NewFocalLength,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocalLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Cinematic Camera|Focal Length" },
		{ "Comment", "/**\n\x09 * Sets the current focal length of the cinematic camera to a given value.\n\x09 * @param NewFocalLength - The target focal length of the camera\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Sets the current focal length of the cinematic camera to a given value.\n@param NewFocalLength - The target focal length of the camera" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocalLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "SetCurrentFocalLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocalLength_Statics::VirtualCameraPlayerControllerBase_eventSetCurrentFocalLength_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocalLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocalLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocalLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocalLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocalLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocalLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocusDistance_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventSetCurrentFocusDistance_Parms
		{
			float NewFocusDistance;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewFocusDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFocusDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocusDistance_Statics::NewProp_NewFocusDistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocusDistance_Statics::NewProp_NewFocusDistance = { "NewFocusDistance", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventSetCurrentFocusDistance_Parms, NewFocusDistance), METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocusDistance_Statics::NewProp_NewFocusDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocusDistance_Statics::NewProp_NewFocusDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocusDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocusDistance_Statics::NewProp_NewFocusDistance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocusDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Cinematic Camera|Focus" },
		{ "Comment", "/**\n\x09 * Sets the current focus distance of the cinematic camera to a given value.\n\x09 * @param NewFocusDistance - The target focus distance of the camera\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Sets the current focus distance of the cinematic camera to a given value.\n@param NewFocusDistance - The target focus distance of the camera" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocusDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "SetCurrentFocusDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocusDistance_Statics::VirtualCameraPlayerControllerBase_eventSetCurrentFocusDistance_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocusDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocusDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocusDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocusDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocusDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocusDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetDesiredDistanceUnits_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventSetDesiredDistanceUnits_Parms
		{
			EUnit DesiredUnits;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DesiredUnits_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredUnits_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DesiredUnits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetDesiredDistanceUnits_Statics::NewProp_DesiredUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetDesiredDistanceUnits_Statics::NewProp_DesiredUnits_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetDesiredDistanceUnits_Statics::NewProp_DesiredUnits = { "DesiredUnits", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventSetDesiredDistanceUnits_Parms, DesiredUnits), Z_Construct_UEnum_CoreUObject_EUnit, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetDesiredDistanceUnits_Statics::NewProp_DesiredUnits_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetDesiredDistanceUnits_Statics::NewProp_DesiredUnits_MetaData)) }; // 1931954769
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetDesiredDistanceUnits_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetDesiredDistanceUnits_Statics::NewProp_DesiredUnits_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetDesiredDistanceUnits_Statics::NewProp_DesiredUnits,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetDesiredDistanceUnits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Settings" },
		{ "Comment", "/**\n\x09 * Sets unit of distance.\n\x09 * @param DesiredUnits - The new unit to use for distance measures like focus distance\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Sets unit of distance.\n@param DesiredUnits - The new unit to use for distance measures like focus distance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetDesiredDistanceUnits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "SetDesiredDistanceUnits", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetDesiredDistanceUnits_Statics::VirtualCameraPlayerControllerBase_eventSetDesiredDistanceUnits_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetDesiredDistanceUnits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetDesiredDistanceUnits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetDesiredDistanceUnits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetDesiredDistanceUnits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetDesiredDistanceUnits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetDesiredDistanceUnits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFilmbackPresetOption_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventSetFilmbackPresetOption_Parms
		{
			FString NewFilmbackPreset;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewFilmbackPreset_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewFilmbackPreset;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFilmbackPresetOption_Statics::NewProp_NewFilmbackPreset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFilmbackPresetOption_Statics::NewProp_NewFilmbackPreset = { "NewFilmbackPreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventSetFilmbackPresetOption_Parms, NewFilmbackPreset), METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFilmbackPresetOption_Statics::NewProp_NewFilmbackPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFilmbackPresetOption_Statics::NewProp_NewFilmbackPreset_MetaData)) };
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFilmbackPresetOption_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventSetFilmbackPresetOption_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFilmbackPresetOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventSetFilmbackPresetOption_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFilmbackPresetOption_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFilmbackPresetOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFilmbackPresetOption_Statics::NewProp_NewFilmbackPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFilmbackPresetOption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFilmbackPresetOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Cinematic Camera|Filmback" },
		{ "Comment", "/**\n\x09 * Set the filmback settings to a new filmback preset.\n\x09 * @return true if operation was successful; false if NewFilmbackPreset is not a valid option\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Set the filmback settings to a new filmback preset.\n@return true if operation was successful; false if NewFilmbackPreset is not a valid option" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFilmbackPresetOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "SetFilmbackPresetOption", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFilmbackPresetOption_Statics::VirtualCameraPlayerControllerBase_eventSetFilmbackPresetOption_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFilmbackPresetOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFilmbackPresetOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFilmbackPresetOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFilmbackPresetOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFilmbackPresetOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFilmbackPresetOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusMethod_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventSetFocusMethod_Parms
		{
			EVirtualCameraFocusMethod NewFocusMethod;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewFocusMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewFocusMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewFocusMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusMethod_Statics::NewProp_NewFocusMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusMethod_Statics::NewProp_NewFocusMethod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusMethod_Statics::NewProp_NewFocusMethod = { "NewFocusMethod", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventSetFocusMethod_Parms, NewFocusMethod), Z_Construct_UEnum_VirtualCamera_EVirtualCameraFocusMethod, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusMethod_Statics::NewProp_NewFocusMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusMethod_Statics::NewProp_NewFocusMethod_MetaData)) }; // 3704608848
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusMethod_Statics::NewProp_NewFocusMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusMethod_Statics::NewProp_NewFocusMethod,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Cinematic Camera|Focus" },
		{ "Comment", "/**\n\x09 * Sets the camera focus method.\n\x09 * @param NewFocusMethod - The new focus method to be used by the camera\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Sets the camera focus method.\n@param NewFocusMethod - The new focus method to be used by the camera" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "SetFocusMethod", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusMethod_Statics::VirtualCameraPlayerControllerBase_eventSetFocusMethod_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusPlaneColor_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventSetFocusPlaneColor_Parms
		{
			FColor NewFocusPlaneColor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewFocusPlaneColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewFocusPlaneColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusPlaneColor_Statics::NewProp_NewFocusPlaneColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusPlaneColor_Statics::NewProp_NewFocusPlaneColor = { "NewFocusPlaneColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventSetFocusPlaneColor_Parms, NewFocusPlaneColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusPlaneColor_Statics::NewProp_NewFocusPlaneColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusPlaneColor_Statics::NewProp_NewFocusPlaneColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusPlaneColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusPlaneColor_Statics::NewProp_NewFocusPlaneColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusPlaneColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Cinematic Camera|Focus" },
		{ "Comment", "/**\n\x09 * Changes focus plane color.\n\x09 * @param - The new color for the focus plane when focus Visualization is activate\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Changes focus plane color.\n@param - The new color for the focus plane when focus Visualization is activate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusPlaneColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "SetFocusPlaneColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusPlaneColor_Statics::VirtualCameraPlayerControllerBase_eventSetFocusPlaneColor_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusPlaneColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusPlaneColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusPlaneColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusPlaneColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusPlaneColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusPlaneColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusVisualization_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventSetFocusVisualization_Parms
		{
			bool bShowFocusVisualization;
		};
		static void NewProp_bShowFocusVisualization_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFocusVisualization;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusVisualization_Statics::NewProp_bShowFocusVisualization_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventSetFocusVisualization_Parms*)Obj)->bShowFocusVisualization = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusVisualization_Statics::NewProp_bShowFocusVisualization = { "bShowFocusVisualization", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventSetFocusVisualization_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusVisualization_Statics::NewProp_bShowFocusVisualization_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusVisualization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusVisualization_Statics::NewProp_bShowFocusVisualization,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusVisualization_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Cinematic Camera|Focus" },
		{ "Comment", "/**\n\x09 * Toggles focus visualization tools on camera.\n\x09 * @param bShowFocusVisualization - The desired state of the visualization tools\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Toggles focus visualization tools on camera.\n@param bShowFocusVisualization - The desired state of the visualization tools" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusVisualization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "SetFocusVisualization", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusVisualization_Statics::VirtualCameraPlayerControllerBase_eventSetFocusVisualization_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusVisualization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusVisualization_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusVisualization_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusVisualization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusVisualization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusVisualization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetInputSource_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventSetInputSource_Parms
		{
			ETrackerInputSource InInputSource;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InInputSource_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InInputSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetInputSource_Statics::NewProp_InInputSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetInputSource_Statics::NewProp_InInputSource = { "InInputSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventSetInputSource_Parms, InInputSource), Z_Construct_UEnum_VirtualCamera_ETrackerInputSource, METADATA_PARAMS(nullptr, 0) }; // 1576094559
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetInputSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetInputSource_Statics::NewProp_InInputSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetInputSource_Statics::NewProp_InInputSource,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetInputSource_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Camera Settings" },
		{ "Comment", "/**\n\x09 * Set the input source\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Set the input source" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetInputSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "SetInputSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetInputSource_Statics::VirtualCameraPlayerControllerBase_eventSetInputSource_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetInputSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetInputSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetInputSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetInputSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetInputSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetInputSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteAspectRatio_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventSetMatteAspectRatio_Parms
		{
			float NewMatteAspectRatio;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewMatteAspectRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMatteAspectRatio;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteAspectRatio_Statics::NewProp_NewMatteAspectRatio_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteAspectRatio_Statics::NewProp_NewMatteAspectRatio = { "NewMatteAspectRatio", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventSetMatteAspectRatio_Parms, NewMatteAspectRatio), METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteAspectRatio_Statics::NewProp_NewMatteAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteAspectRatio_Statics::NewProp_NewMatteAspectRatio_MetaData)) };
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteAspectRatio_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventSetMatteAspectRatio_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteAspectRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventSetMatteAspectRatio_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteAspectRatio_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteAspectRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteAspectRatio_Statics::NewProp_NewMatteAspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteAspectRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Cinematic Camera|Filmback" },
		{ "Comment", "/**\n\x09 * Set the matte aspect ratio to a new value.\n\x09 * @param NewMatteAspectRatio - The desired matte aspect to use\n\x09 * @return true if operation was successful; false if NewMattePreset is not a valid input\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Set the matte aspect ratio to a new value.\n@param NewMatteAspectRatio - The desired matte aspect to use\n@return true if operation was successful; false if NewMattePreset is not a valid input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "SetMatteAspectRatio", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteAspectRatio_Statics::VirtualCameraPlayerControllerBase_eventSetMatteAspectRatio_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteAspectRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteAspectRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteAspectRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteOpacity_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventSetMatteOpacity_Parms
		{
			float NewMatteOpacity;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewMatteOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMatteOpacity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteOpacity_Statics::NewProp_NewMatteOpacity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteOpacity_Statics::NewProp_NewMatteOpacity = { "NewMatteOpacity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventSetMatteOpacity_Parms, NewMatteOpacity), METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteOpacity_Statics::NewProp_NewMatteOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteOpacity_Statics::NewProp_NewMatteOpacity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteOpacity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteOpacity_Statics::NewProp_NewMatteOpacity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Cinematic Camera|Filmback" },
		{ "Comment", "/**\n\x09 * Set the matte aspect ratio to a new value.\n\x09 * @param NewMatteOpacity - The desired matte aspect opacity to use\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Set the matte aspect ratio to a new value.\n@param NewMatteOpacity - The desired matte aspect opacity to use" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "SetMatteOpacity", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteOpacity_Statics::VirtualCameraPlayerControllerBase_eventSetMatteOpacity_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMovementScale_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventSetMovementScale_Parms
		{
			EVirtualCameraAxis AxisToAdjust;
			float NewMovementScale;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AxisToAdjust_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisToAdjust_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AxisToAdjust;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewMovementScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMovementScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMovementScale_Statics::NewProp_AxisToAdjust_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMovementScale_Statics::NewProp_AxisToAdjust_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMovementScale_Statics::NewProp_AxisToAdjust = { "AxisToAdjust", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventSetMovementScale_Parms, AxisToAdjust), Z_Construct_UEnum_VirtualCamera_EVirtualCameraAxis, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMovementScale_Statics::NewProp_AxisToAdjust_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMovementScale_Statics::NewProp_AxisToAdjust_MetaData)) }; // 4214100908
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMovementScale_Statics::NewProp_NewMovementScale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMovementScale_Statics::NewProp_NewMovementScale = { "NewMovementScale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventSetMovementScale_Parms, NewMovementScale), METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMovementScale_Statics::NewProp_NewMovementScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMovementScale_Statics::NewProp_NewMovementScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMovementScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMovementScale_Statics::NewProp_AxisToAdjust_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMovementScale_Statics::NewProp_AxisToAdjust,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMovementScale_Statics::NewProp_NewMovementScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMovementScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Movement" },
		{ "Comment", "/**\n\x09 * Sets the movement scale of the camera actor.\n\x09 * @param AxisToAdjust - The axis to set movement scale on (setting for rotation axes is allowed but has no effect)\n\x09 * @param NewMovementScale - The desired scaling factor for calculating movement along this axis\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Sets the movement scale of the camera actor.\n@param AxisToAdjust - The axis to set movement scale on (setting for rotation axes is allowed but has no effect)\n@param NewMovementScale - The desired scaling factor for calculating movement along this axis" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMovementScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "SetMovementScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMovementScale_Statics::VirtualCameraPlayerControllerBase_eventSetMovementScale_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMovementScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMovementScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMovementScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMovementScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMovementScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMovementScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetPresetFavoriteStatus_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventSetPresetFavoriteStatus_Parms
		{
			FString PresetName;
			bool bIsFavorite;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PresetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFavorite_MetaData[];
#endif
		static void NewProp_bIsFavorite_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFavorite;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetPresetFavoriteStatus_Statics::NewProp_PresetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetPresetFavoriteStatus_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventSetPresetFavoriteStatus_Parms, PresetName), METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetPresetFavoriteStatus_Statics::NewProp_PresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetPresetFavoriteStatus_Statics::NewProp_PresetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetPresetFavoriteStatus_Statics::NewProp_bIsFavorite_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetPresetFavoriteStatus_Statics::NewProp_bIsFavorite_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventSetPresetFavoriteStatus_Parms*)Obj)->bIsFavorite = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetPresetFavoriteStatus_Statics::NewProp_bIsFavorite = { "bIsFavorite", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventSetPresetFavoriteStatus_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetPresetFavoriteStatus_Statics::NewProp_bIsFavorite_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetPresetFavoriteStatus_Statics::NewProp_bIsFavorite_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetPresetFavoriteStatus_Statics::NewProp_bIsFavorite_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetPresetFavoriteStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetPresetFavoriteStatus_Statics::NewProp_PresetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetPresetFavoriteStatus_Statics::NewProp_bIsFavorite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetPresetFavoriteStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Screenshots" },
		{ "Comment", "/**\n\x09 * Sets whether or not a preset is favorited\n\x09 * @param PresetName - The name of the preset to adjust favorite setting for\n\x09 * @param bIsFavorite - Whether settings should be saved\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Sets whether or not a preset is favorited\n@param PresetName - The name of the preset to adjust favorite setting for\n@param bIsFavorite - Whether settings should be saved" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetPresetFavoriteStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "SetPresetFavoriteStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetPresetFavoriteStatus_Statics::VirtualCameraPlayerControllerBase_eventSetPresetFavoriteStatus_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetPresetFavoriteStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetPresetFavoriteStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetPresetFavoriteStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetPresetFavoriteStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetPresetFavoriteStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetPresetFavoriteStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetSaveSettingsWhenClosing_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventSetSaveSettingsWhenClosing_Parms
		{
			bool bShouldSettingsSave;
		};
		static void NewProp_bShouldSettingsSave_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldSettingsSave;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetSaveSettingsWhenClosing_Statics::NewProp_bShouldSettingsSave_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventSetSaveSettingsWhenClosing_Parms*)Obj)->bShouldSettingsSave = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetSaveSettingsWhenClosing_Statics::NewProp_bShouldSettingsSave = { "bShouldSettingsSave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventSetSaveSettingsWhenClosing_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetSaveSettingsWhenClosing_Statics::NewProp_bShouldSettingsSave_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetSaveSettingsWhenClosing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetSaveSettingsWhenClosing_Statics::NewProp_bShouldSettingsSave,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetSaveSettingsWhenClosing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Settings" },
		{ "Comment", "/**\n\x09 * Sets whether settings should be saved on exit.\n\x09 * @param bShouldSettingsSave - Whether settings should be saved\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Sets whether settings should be saved on exit.\n@param bShouldSettingsSave - Whether settings should be saved" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetSaveSettingsWhenClosing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "SetSaveSettingsWhenClosing", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetSaveSettingsWhenClosing_Statics::VirtualCameraPlayerControllerBase_eventSetSaveSettingsWhenClosing_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetSaveSettingsWhenClosing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetSaveSettingsWhenClosing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetSaveSettingsWhenClosing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetSaveSettingsWhenClosing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetSaveSettingsWhenClosing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetSaveSettingsWhenClosing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetScreenshotFavoriteStatus_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventSetScreenshotFavoriteStatus_Parms
		{
			FString ScreenshotName;
			bool bIsFavorite;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenshotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ScreenshotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFavorite_MetaData[];
#endif
		static void NewProp_bIsFavorite_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFavorite;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetScreenshotFavoriteStatus_Statics::NewProp_ScreenshotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetScreenshotFavoriteStatus_Statics::NewProp_ScreenshotName = { "ScreenshotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventSetScreenshotFavoriteStatus_Parms, ScreenshotName), METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetScreenshotFavoriteStatus_Statics::NewProp_ScreenshotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetScreenshotFavoriteStatus_Statics::NewProp_ScreenshotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetScreenshotFavoriteStatus_Statics::NewProp_bIsFavorite_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetScreenshotFavoriteStatus_Statics::NewProp_bIsFavorite_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventSetScreenshotFavoriteStatus_Parms*)Obj)->bIsFavorite = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetScreenshotFavoriteStatus_Statics::NewProp_bIsFavorite = { "bIsFavorite", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventSetScreenshotFavoriteStatus_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetScreenshotFavoriteStatus_Statics::NewProp_bIsFavorite_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetScreenshotFavoriteStatus_Statics::NewProp_bIsFavorite_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetScreenshotFavoriteStatus_Statics::NewProp_bIsFavorite_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetScreenshotFavoriteStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetScreenshotFavoriteStatus_Statics::NewProp_ScreenshotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetScreenshotFavoriteStatus_Statics::NewProp_bIsFavorite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetScreenshotFavoriteStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Screenshots" },
		{ "Comment", "/**\n\x09 * Sets whether or not a screenshot is favorited\n\x09 * @param ScreenshotName - The name of the screenshot to adjust favorite setting for\n\x09 * @param bIsFavorite - Whether settings should be saved\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Sets whether or not a screenshot is favorited\n@param ScreenshotName - The name of the screenshot to adjust favorite setting for\n@param bIsFavorite - Whether settings should be saved" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetScreenshotFavoriteStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "SetScreenshotFavoriteStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetScreenshotFavoriteStatus_Statics::VirtualCameraPlayerControllerBase_eventSetScreenshotFavoriteStatus_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetScreenshotFavoriteStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetScreenshotFavoriteStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetScreenshotFavoriteStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetScreenshotFavoriteStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetScreenshotFavoriteStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetScreenshotFavoriteStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetSequencerLockedToCameraCut_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventSetSequencerLockedToCameraCut_Parms
		{
			bool bLockView;
		};
		static void NewProp_bLockView_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockView;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetSequencerLockedToCameraCut_Statics::NewProp_bLockView_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventSetSequencerLockedToCameraCut_Parms*)Obj)->bLockView = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetSequencerLockedToCameraCut_Statics::NewProp_bLockView = { "bLockView", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventSetSequencerLockedToCameraCut_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetSequencerLockedToCameraCut_Statics::NewProp_bLockView_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetSequencerLockedToCameraCut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetSequencerLockedToCameraCut_Statics::NewProp_bLockView,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetSequencerLockedToCameraCut_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Sequencer|Playback" },
		{ "Comment", "/**\n\x09 * Sets the locked to camera cut from the active LevelSequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Sets the locked to camera cut from the active LevelSequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetSequencerLockedToCameraCut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "SetSequencerLockedToCameraCut", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetSequencerLockedToCameraCut_Statics::VirtualCameraPlayerControllerBase_eventSetSequencerLockedToCameraCut_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetSequencerLockedToCameraCut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetSequencerLockedToCameraCut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetSequencerLockedToCameraCut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetSequencerLockedToCameraCut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetSequencerLockedToCameraCut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetSequencerLockedToCameraCut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetTouchInputState_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventSetTouchInputState_Parms
		{
			ETouchInputState NewInputState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewInputState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewInputState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetTouchInputState_Statics::NewProp_NewInputState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetTouchInputState_Statics::NewProp_NewInputState = { "NewInputState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventSetTouchInputState_Parms, NewInputState), Z_Construct_UEnum_VirtualCamera_ETouchInputState, METADATA_PARAMS(nullptr, 0) }; // 110538727
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetTouchInputState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetTouchInputState_Statics::NewProp_NewInputState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetTouchInputState_Statics::NewProp_NewInputState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetTouchInputState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Input" },
		{ "Comment", "/**\n\x09 * Sets the current state of touch input.\n\x09 * @param NewInputState - The new state of the input\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Sets the current state of touch input.\n@param NewInputState - The new state of the input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetTouchInputState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "SetTouchInputState", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetTouchInputState_Statics::VirtualCameraPlayerControllerBase_eventSetTouchInputState_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetTouchInputState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetTouchInputState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetTouchInputState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetTouchInputState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetTouchInputState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetTouchInputState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetUseGlobalBoom_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventSetUseGlobalBoom_Parms
		{
			bool bShouldUseGlobalBoom;
		};
		static void NewProp_bShouldUseGlobalBoom_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldUseGlobalBoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetUseGlobalBoom_Statics::NewProp_bShouldUseGlobalBoom_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventSetUseGlobalBoom_Parms*)Obj)->bShouldUseGlobalBoom = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetUseGlobalBoom_Statics::NewProp_bShouldUseGlobalBoom = { "bShouldUseGlobalBoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventSetUseGlobalBoom_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetUseGlobalBoom_Statics::NewProp_bShouldUseGlobalBoom_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetUseGlobalBoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetUseGlobalBoom_Statics::NewProp_bShouldUseGlobalBoom,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetUseGlobalBoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Movement" },
		{ "Comment", "/**\n\x09 * Sets whether or not global boom should be used when navigating with the joysticks\n\x09 * @param bShouldUseGlobalBoom - True to use global Z axis, false to use local Z axis\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Sets whether or not global boom should be used when navigating with the joysticks\n@param bShouldUseGlobalBoom - True to use global Z axis, false to use local Z axis" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetUseGlobalBoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "SetUseGlobalBoom", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetUseGlobalBoom_Statics::VirtualCameraPlayerControllerBase_eventSetUseGlobalBoom_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetUseGlobalBoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetUseGlobalBoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetUseGlobalBoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetUseGlobalBoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetUseGlobalBoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetUseGlobalBoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetWaypointFavoriteStatus_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventSetWaypointFavoriteStatus_Parms
		{
			FString WaypointName;
			bool bIsFavorite;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaypointName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WaypointName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFavorite_MetaData[];
#endif
		static void NewProp_bIsFavorite_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFavorite;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetWaypointFavoriteStatus_Statics::NewProp_WaypointName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetWaypointFavoriteStatus_Statics::NewProp_WaypointName = { "WaypointName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventSetWaypointFavoriteStatus_Parms, WaypointName), METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetWaypointFavoriteStatus_Statics::NewProp_WaypointName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetWaypointFavoriteStatus_Statics::NewProp_WaypointName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetWaypointFavoriteStatus_Statics::NewProp_bIsFavorite_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetWaypointFavoriteStatus_Statics::NewProp_bIsFavorite_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventSetWaypointFavoriteStatus_Parms*)Obj)->bIsFavorite = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetWaypointFavoriteStatus_Statics::NewProp_bIsFavorite = { "bIsFavorite", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventSetWaypointFavoriteStatus_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetWaypointFavoriteStatus_Statics::NewProp_bIsFavorite_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetWaypointFavoriteStatus_Statics::NewProp_bIsFavorite_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetWaypointFavoriteStatus_Statics::NewProp_bIsFavorite_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetWaypointFavoriteStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetWaypointFavoriteStatus_Statics::NewProp_WaypointName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetWaypointFavoriteStatus_Statics::NewProp_bIsFavorite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetWaypointFavoriteStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Waypoints" },
		{ "Comment", "/**\n\x09 * Sets whether or not a waypoint is favorited\n\x09 * @param WaypointName - The name of the waypoint to adjust favorite setting for\n\x09 * @param bIsFavorite - Whether settings should be saved\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Sets whether or not a waypoint is favorited\n@param WaypointName - The name of the waypoint to adjust favorite setting for\n@param bIsFavorite - Whether settings should be saved" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetWaypointFavoriteStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "SetWaypointFavoriteStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetWaypointFavoriteStatus_Statics::VirtualCameraPlayerControllerBase_eventSetWaypointFavoriteStatus_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetWaypointFavoriteStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetWaypointFavoriteStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetWaypointFavoriteStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetWaypointFavoriteStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetWaypointFavoriteStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetWaypointFavoriteStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetZeroDutchOnLock_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventSetZeroDutchOnLock_Parms
		{
			bool bInValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInValue_MetaData[];
#endif
		static void NewProp_bInValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetZeroDutchOnLock_Statics::NewProp_bInValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetZeroDutchOnLock_Statics::NewProp_bInValue_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventSetZeroDutchOnLock_Parms*)Obj)->bInValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetZeroDutchOnLock_Statics::NewProp_bInValue = { "bInValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventSetZeroDutchOnLock_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetZeroDutchOnLock_Statics::NewProp_bInValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetZeroDutchOnLock_Statics::NewProp_bInValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetZeroDutchOnLock_Statics::NewProp_bInValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetZeroDutchOnLock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetZeroDutchOnLock_Statics::NewProp_bInValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetZeroDutchOnLock_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Movement" },
		{ "Comment", "/**\n\x09 * Set the value for the option to zero out dutch when locking that axis.\n\x09 * @param bInValue - The new setting to use for zeroing dutch on lock\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Set the value for the option to zero out dutch when locking that axis.\n@param bInValue - The new setting to use for zeroing dutch on lock" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetZeroDutchOnLock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "SetZeroDutchOnLock", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetZeroDutchOnLock_Statics::VirtualCameraPlayerControllerBase_eventSetZeroDutchOnLock_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetZeroDutchOnLock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetZeroDutchOnLock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetZeroDutchOnLock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetZeroDutchOnLock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetZeroDutchOnLock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetZeroDutchOnLock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ShouldSaveSettingsWhenClosing_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventShouldSaveSettingsWhenClosing_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ShouldSaveSettingsWhenClosing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventShouldSaveSettingsWhenClosing_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ShouldSaveSettingsWhenClosing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventShouldSaveSettingsWhenClosing_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ShouldSaveSettingsWhenClosing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ShouldSaveSettingsWhenClosing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ShouldSaveSettingsWhenClosing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ShouldSaveSettingsWhenClosing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Settings" },
		{ "Comment", "/**\n\x09 * Check whether settings should save when closing\n\x09 * @return whether settings should save when closing\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Check whether settings should save when closing\n@return whether settings should save when closing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ShouldSaveSettingsWhenClosing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "ShouldSaveSettingsWhenClosing", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ShouldSaveSettingsWhenClosing_Statics::VirtualCameraPlayerControllerBase_eventShouldSaveSettingsWhenClosing_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ShouldSaveSettingsWhenClosing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ShouldSaveSettingsWhenClosing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ShouldSaveSettingsWhenClosing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ShouldSaveSettingsWhenClosing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ShouldSaveSettingsWhenClosing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ShouldSaveSettingsWhenClosing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ShouldUpdateTargetCameraTransform_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ShouldUpdateTargetCameraTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventShouldUpdateTargetCameraTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ShouldUpdateTargetCameraTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventShouldUpdateTargetCameraTransform_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ShouldUpdateTargetCameraTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ShouldUpdateTargetCameraTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ShouldUpdateTargetCameraTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ShouldUpdateTargetCameraTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/*\n\x09 * In multi user session, how should we update the information across different sessions.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "* In multi user session, how should we update the information across different sessions." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ShouldUpdateTargetCameraTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "ShouldUpdateTargetCameraTransform", nullptr, nullptr, sizeof(VirtualCameraPlayerControllerBase_eventShouldUpdateTargetCameraTransform_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ShouldUpdateTargetCameraTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ShouldUpdateTargetCameraTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ShouldUpdateTargetCameraTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ShouldUpdateTargetCameraTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ShouldUpdateTargetCameraTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ShouldUpdateTargetCameraTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_StopLevelSequencePlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_StopLevelSequencePlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Sequencer|Playback" },
		{ "Comment", "/**\n\x09 * Stops the currently playing level sequence.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Stops the currently playing level sequence." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_StopLevelSequencePlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "StopLevelSequencePlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_StopLevelSequencePlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_StopLevelSequencePlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_StopLevelSequencePlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_StopLevelSequencePlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TakeScreenshot_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventTakeScreenshot_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TakeScreenshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventTakeScreenshot_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TakeScreenshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TakeScreenshot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TakeScreenshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Screenshots" },
		{ "Comment", "/**\n\x09 * Takes a screenshot from the current view and saves the location and camera settings.\n\x09 * @return the index of the saved screenshot in the screenshots array\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Takes a screenshot from the current view and saves the location and camera settings.\n@return the index of the saved screenshot in the screenshots array" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TakeScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "TakeScreenshot", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TakeScreenshot_Statics::VirtualCameraPlayerControllerBase_eventTakeScreenshot_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TakeScreenshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TakeScreenshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TakeScreenshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TakeScreenshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TakeScreenshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TakeScreenshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TeleportToHomeWaypoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TeleportToHomeWaypoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Waypoints" },
		{ "Comment", "/**\n\x09 * Teleports to the current marked home waypoint.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Teleports to the current marked home waypoint." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TeleportToHomeWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "TeleportToHomeWaypoint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TeleportToHomeWaypoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TeleportToHomeWaypoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TeleportToHomeWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TeleportToHomeWaypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TeleportToWaypoint_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventTeleportToWaypoint_Parms
		{
			FString WaypointIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaypointIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WaypointIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TeleportToWaypoint_Statics::NewProp_WaypointIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TeleportToWaypoint_Statics::NewProp_WaypointIndex = { "WaypointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventTeleportToWaypoint_Parms, WaypointIndex), METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TeleportToWaypoint_Statics::NewProp_WaypointIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TeleportToWaypoint_Statics::NewProp_WaypointIndex_MetaData)) };
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TeleportToWaypoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventTeleportToWaypoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TeleportToWaypoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventTeleportToWaypoint_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TeleportToWaypoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TeleportToWaypoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TeleportToWaypoint_Statics::NewProp_WaypointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TeleportToWaypoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TeleportToWaypoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Waypoints" },
		{ "Comment", "/**\n\x09 * Teleports the pawn to a specific location.\n\x09 * @param WaypointIndex - The index of the target waypoint in the waypoints array\n\x09 * @return if the teleport was successful, return true\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Teleports the pawn to a specific location.\n@param WaypointIndex - The index of the target waypoint in the waypoints array\n@return if the teleport was successful, return true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TeleportToWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "TeleportToWaypoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TeleportToWaypoint_Statics::VirtualCameraPlayerControllerBase_eventTeleportToWaypoint_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TeleportToWaypoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TeleportToWaypoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TeleportToWaypoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TeleportToWaypoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TeleportToWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TeleportToWaypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisFreeze_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventToggleAxisFreeze_Parms
		{
			EVirtualCameraAxis AxisToToggle;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AxisToToggle_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisToToggle_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AxisToToggle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisFreeze_Statics::NewProp_AxisToToggle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisFreeze_Statics::NewProp_AxisToToggle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisFreeze_Statics::NewProp_AxisToToggle = { "AxisToToggle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventToggleAxisFreeze_Parms, AxisToToggle), Z_Construct_UEnum_VirtualCamera_EVirtualCameraAxis, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisFreeze_Statics::NewProp_AxisToToggle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisFreeze_Statics::NewProp_AxisToToggle_MetaData)) }; // 4214100908
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisFreeze_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventToggleAxisFreeze_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisFreeze_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventToggleAxisFreeze_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisFreeze_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisFreeze_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisFreeze_Statics::NewProp_AxisToToggle_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisFreeze_Statics::NewProp_AxisToToggle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisFreeze_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisFreeze_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Movement" },
		{ "Comment", "/**\n\x09 * Toggles the freeze on a given axis; returns new frozen state.\n\x09 * @param AxisToToggle - The axis whose lock should be toggled\n\x09 * @return the new frozen state of AxisToToggle (true = frozen)\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Toggles the freeze on a given axis; returns new frozen state.\n@param AxisToToggle - The axis whose lock should be toggled\n@return the new frozen state of AxisToToggle (true = frozen)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisFreeze_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "ToggleAxisFreeze", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisFreeze_Statics::VirtualCameraPlayerControllerBase_eventToggleAxisFreeze_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisFreeze_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisFreeze_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisFreeze_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisFreeze_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisFreeze()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisFreeze_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisLock_Statics
	{
		struct VirtualCameraPlayerControllerBase_eventToggleAxisLock_Parms
		{
			EVirtualCameraAxis AxisToToggle;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AxisToToggle_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisToToggle_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AxisToToggle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisLock_Statics::NewProp_AxisToToggle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisLock_Statics::NewProp_AxisToToggle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisLock_Statics::NewProp_AxisToToggle = { "AxisToToggle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventToggleAxisLock_Parms, AxisToToggle), Z_Construct_UEnum_VirtualCamera_EVirtualCameraAxis, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisLock_Statics::NewProp_AxisToToggle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisLock_Statics::NewProp_AxisToToggle_MetaData)) }; // 4214100908
	void Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisLock_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCameraPlayerControllerBase_eventToggleAxisLock_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisLock_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPlayerControllerBase_eventToggleAxisLock_Parms), &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisLock_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisLock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisLock_Statics::NewProp_AxisToToggle_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisLock_Statics::NewProp_AxisToToggle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisLock_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisLock_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera|Movement" },
		{ "Comment", "/**\n\x09 * Toggles the lock on a given axis; returns new locked state.\n\x09 * @param AxisToToggle - The axis whose lock should be turned on/off\n\x09 * @return the new locked state of AxisToToggle (true = locked)\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Toggles the lock on a given axis; returns new locked state.\n@param AxisToToggle - The axis whose lock should be turned on/off\n@return the new locked state of AxisToToggle (true = locked)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisLock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "ToggleAxisLock", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisLock_Statics::VirtualCameraPlayerControllerBase_eventToggleAxisLock_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisLock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisLock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisLock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisLock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisLock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisLock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_UpdateFocusReticle_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewReticleLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_UpdateFocusReticle_Statics::NewProp_NewReticleLocation = { "NewReticleLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPlayerControllerBase_eventUpdateFocusReticle_Parms, NewReticleLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_UpdateFocusReticle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_UpdateFocusReticle_Statics::NewProp_NewReticleLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_UpdateFocusReticle_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/**\n\x09 * Blueprint Event for updating position of autofocus reticle.\n\x09 * @param NewReticleLocation - The new location of the autofocus reticle\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Blueprint Event for updating position of autofocus reticle.\n@param NewReticleLocation - The new location of the autofocus reticle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_UpdateFocusReticle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPlayerControllerBase, nullptr, "UpdateFocusReticle", nullptr, nullptr, sizeof(VirtualCameraPlayerControllerBase_eventUpdateFocusReticle_Parms), Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_UpdateFocusReticle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_UpdateFocusReticle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_UpdateFocusReticle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_UpdateFocusReticle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_UpdateFocusReticle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_UpdateFocusReticle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVirtualCameraPlayerControllerBase);
	UClass* Z_Construct_UClass_AVirtualCameraPlayerControllerBase_NoRegister()
	{
		return AVirtualCameraPlayerControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputSource_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputSource_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LiveLinkTargetName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LiveLinkTargetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackerPreOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrackerPreOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackerPostOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrackerPostOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetCameraActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TargetCameraActorClass;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RequiredSequencerRecorderCameraSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredSequencerRecorderCameraSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RequiredSequencerRecorderCameraSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnOffsetReset_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOffsetReset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelSequencePlaybackController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LevelSequencePlaybackController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetCameraActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetCameraActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCachedIsVirtualCameraControlledByRemoteSession_MetaData[];
#endif
		static void NewProp_bCachedIsVirtualCameraControlledByRemoteSession_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCachedIsVirtualCameraControlledByRemoteSession;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCachedShouldUpdateTargetCameraTransform_MetaData[];
#endif
		static void NewProp_bCachedShouldUpdateTargetCameraTransform_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCachedShouldUpdateTargetCameraTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualCamera,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ActivateGameViewport, "ActivateGameViewport" }, // 284515697
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_AddBlendableToCamera, "AddBlendableToCamera" }, // 1938643141
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_BroadcastOffsetReset, "BroadcastOffsetReset" }, // 4259288820
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeAperturePreset, "ChangeAperturePreset" }, // 822321299
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ChangeFocalLengthPreset, "ChangeFocalLengthPreset" }, // 902993615
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ClearActiveLevelSequence, "ClearActiveLevelSequence" }, // 3757431859
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeletePreset, "DeletePreset" }, // 3970931891
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeleteScreenshot, "DeleteScreenshot" }, // 3375340073
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_DeleteWaypoint, "DeleteWaypoint" }, // 4132233598
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_FocusMethodChanged, "FocusMethodChanged" }, // 121696601
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetActiveLevelSequence, "GetActiveLevelSequence" }, // 2414779239
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetActiveLevelSequenceName, "GetActiveLevelSequenceName" }, // 946348436
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisMovementScale, "GetAxisMovementScale" }, // 1585850487
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetAxisStabilizationScale, "GetAxisStabilizationScale" }, // 1954931782
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentAperture, "GetCurrentAperture" }, // 1769999753
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFilmbackName, "GetCurrentFilmbackName" }, // 3623083488
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocalLength, "GetCurrentFocalLength" }, // 1382177481
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocusDistance, "GetCurrentFocusDistance" }, // 2947637681
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentFocusMethod, "GetCurrentFocusMethod" }, // 3782071281
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequenceFrameRate, "GetCurrentSequenceFrameRate" }, // 3134362717
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequencePlaybackEnd, "GetCurrentSequencePlaybackEnd" }, // 981936026
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCurrentSequencePlaybackStart, "GetCurrentSequencePlaybackStart" }, // 3723995025
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetCustomTrackerLocationAndRotation, "GetCustomTrackerLocationAndRotation" }, // 4206963791
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDesiredDistanceUnits, "GetDesiredDistanceUnits" }, // 1618579128
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetDistanceInDesiredUnits, "GetDistanceInDesiredUnits" }, // 3796536409
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFilmbackPresetOptions, "GetFilmbackPresetOptions" }, // 1719492182
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetFocusPlaneColor, "GetFocusPlaneColor" }, // 998047898
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetLevelSequenceLength, "GetLevelSequenceLength" }, // 4284291289
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetLevelSequences, "GetLevelSequences" }, // 2443994810
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteAspectRatio, "GetMatteAspectRatio" }, // 2194609101
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteOpacity, "GetMatteOpacity" }, // 2480400307
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetMatteValues, "GetMatteValues" }, // 3512928414
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetPlaybackPosition, "GetPlaybackPosition" }, // 3291702075
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetPlaybackTimecode, "GetPlaybackTimecode" }, // 3999505648
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetScreenshotInfo, "GetScreenshotInfo" }, // 1389193725
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetScreenshotNames, "GetScreenshotNames" }, // 1460201411
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetSettingsPresets, "GetSettingsPresets" }, // 1624466182
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetTargetCamera, "GetTargetCamera" }, // 2149221154
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetTouchInputState, "GetTouchInputState" }, // 4285782526
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetWaypointInfo, "GetWaypointInfo" }, // 3013200103
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_GetWaypointNames, "GetWaypointNames" }, // 2073448397
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_InitializeAutoFocusPoint, "InitializeAutoFocusPoint" }, // 2806821745
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsAxisLocked, "IsAxisLocked" }, // 2756956092
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsFocusVisualizationActivated, "IsFocusVisualizationActivated" }, // 781076178
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsFocusVisualizationAllowed, "IsFocusVisualizationAllowed" }, // 151141220
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsPlaying, "IsPlaying" }, // 294203181
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsSequencerLockedToCameraCut, "IsSequencerLockedToCameraCut" }, // 4224631000
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsTouchInputInFocusMode, "IsTouchInputInFocusMode" }, // 3586117276
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsUsingGlobalBoom, "IsUsingGlobalBoom" }, // 1716925773
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_IsVirtualCameraControlledByRemoteSession, "IsVirtualCameraControlledByRemoteSession" }, // 541909918
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_JumpToLevelSequenceEnd, "JumpToLevelSequenceEnd" }, // 3762066265
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_JumpToLevelSequenceStart, "JumpToLevelSequenceStart" }, // 3213349507
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_JumpToPlaybackPosition, "JumpToPlaybackPosition" }, // 3140533147
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadPreset, "LoadPreset" }, // 79927425
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_LoadScreenshotView, "LoadScreenshotView" }, // 2419444090
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_OnRecordEnabledStateChanged, "OnRecordEnabledStateChanged" }, // 3509062966
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_OnStopped, "OnStopped" }, // 3523319503
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_PauseLevelSequence, "PauseLevelSequence" }, // 595646451
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_PlayLevelSequence, "PlayLevelSequence" }, // 2641766746
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_PlayLevelSequenceInReverse, "PlayLevelSequenceInReverse" }, // 457551352
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ResetCameraOffsetsToTracker, "ResetCameraOffsetsToTracker" }, // 1473869238
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ResumeLevelSequencePlay, "ResumeLevelSequencePlay" }, // 2417396005
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SaveHomeWaypoint, "SaveHomeWaypoint" }, // 3252254703
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SavePreset, "SavePreset" }, // 3244048852
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SaveWaypoint, "SaveWaypoint" }, // 3616668777
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetActiveLevelSequence, "SetActiveLevelSequence" }, // 4233856293
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAllowFocusPlaneVisualization, "SetAllowFocusPlaneVisualization" }, // 3683096747
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetAxisStabilizationScale, "SetAxisStabilizationScale" }, // 791378225
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentAperture, "SetCurrentAperture" }, // 4149817822
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocalLength, "SetCurrentFocalLength" }, // 372351751
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetCurrentFocusDistance, "SetCurrentFocusDistance" }, // 1788116617
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetDesiredDistanceUnits, "SetDesiredDistanceUnits" }, // 3150601241
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFilmbackPresetOption, "SetFilmbackPresetOption" }, // 43524596
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusMethod, "SetFocusMethod" }, // 4024217693
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusPlaneColor, "SetFocusPlaneColor" }, // 2141828244
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetFocusVisualization, "SetFocusVisualization" }, // 3432097835
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetInputSource, "SetInputSource" }, // 2154235181
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteAspectRatio, "SetMatteAspectRatio" }, // 1924198710
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMatteOpacity, "SetMatteOpacity" }, // 1359305421
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetMovementScale, "SetMovementScale" }, // 2771472978
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetPresetFavoriteStatus, "SetPresetFavoriteStatus" }, // 4006575526
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetSaveSettingsWhenClosing, "SetSaveSettingsWhenClosing" }, // 3339717388
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetScreenshotFavoriteStatus, "SetScreenshotFavoriteStatus" }, // 3250884873
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetSequencerLockedToCameraCut, "SetSequencerLockedToCameraCut" }, // 1992033178
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetTouchInputState, "SetTouchInputState" }, // 3906933705
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetUseGlobalBoom, "SetUseGlobalBoom" }, // 3355118118
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetWaypointFavoriteStatus, "SetWaypointFavoriteStatus" }, // 2186533815
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_SetZeroDutchOnLock, "SetZeroDutchOnLock" }, // 2177944403
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ShouldSaveSettingsWhenClosing, "ShouldSaveSettingsWhenClosing" }, // 2890334633
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ShouldUpdateTargetCameraTransform, "ShouldUpdateTargetCameraTransform" }, // 1663858112
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_StopLevelSequencePlay, "StopLevelSequencePlay" }, // 3495587776
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TakeScreenshot, "TakeScreenshot" }, // 452713466
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TeleportToHomeWaypoint, "TeleportToHomeWaypoint" }, // 315831301
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_TeleportToWaypoint, "TeleportToWaypoint" }, // 2863072739
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisFreeze, "ToggleAxisFreeze" }, // 1387501883
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_ToggleAxisLock, "ToggleAxisLock" }, // 1401143486
		{ &Z_Construct_UFunction_AVirtualCameraPlayerControllerBase_UpdateFocusReticle, "UpdateFocusReticle" }, // 3280055209
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "VirtualCameraPlayerControllerBase.h" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_InputSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_InputSource_MetaData[] = {
		{ "BlueprintSetter", "SetInputSource" },
		{ "Category", "Camera Settings" },
		{ "Comment", "/** Allows user to select which tracker input should be used */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Allows user to select which tracker input should be used" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_InputSource = { "InputSource", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVirtualCameraPlayerControllerBase, InputSource), Z_Construct_UEnum_VirtualCamera_ETrackerInputSource, METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_InputSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_InputSource_MetaData)) }; // 1576094559
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_LiveLinkTargetName_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "Comment", "/** Controller for level sequence playback */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Controller for level sequence playback" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_LiveLinkTargetName = { "LiveLinkTargetName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVirtualCameraPlayerControllerBase, LiveLinkTargetName), METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_LiveLinkTargetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_LiveLinkTargetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_TrackerPreOffset_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "Comment", "/** Offset applied to calculated location before tracker transform is added */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Offset applied to calculated location before tracker transform is added" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_TrackerPreOffset = { "TrackerPreOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVirtualCameraPlayerControllerBase, TrackerPreOffset), Z_Construct_UScriptStruct_FTrackingOffset, METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_TrackerPreOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_TrackerPreOffset_MetaData)) }; // 3579961433
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_TrackerPostOffset_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "Comment", "/** Offset applied to calculated location after tracker transform is added */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Offset applied to calculated location after tracker transform is added" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_TrackerPostOffset = { "TrackerPostOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVirtualCameraPlayerControllerBase, TrackerPostOffset), Z_Construct_UScriptStruct_FTrackingOffset, METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_TrackerPostOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_TrackerPostOffset_MetaData)) }; // 3579961433
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_TargetCameraActorClass_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "Comment", "/** Class of CameraActor to spawn to allow user to use their own customized camera */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Class of CameraActor to spawn to allow user to use their own customized camera" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_TargetCameraActorClass = { "TargetCameraActorClass", nullptr, (EPropertyFlags)0x0014000002000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVirtualCameraPlayerControllerBase, TargetCameraActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ACineCameraActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_TargetCameraActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_TargetCameraActorClass_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_RequiredSequencerRecorderCameraSettings_Inner = { "RequiredSequencerRecorderCameraSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_RequiredSequencerRecorderCameraSettings_MetaData[] = {
		{ "Category", "Recording" },
		{ "Comment", "/** Array of any properties that should be recorded */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Array of any properties that should be recorded" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_RequiredSequencerRecorderCameraSettings = { "RequiredSequencerRecorderCameraSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVirtualCameraPlayerControllerBase, RequiredSequencerRecorderCameraSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_RequiredSequencerRecorderCameraSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_RequiredSequencerRecorderCameraSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_OnOffsetReset_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_OnOffsetReset = { "OnOffsetReset", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVirtualCameraPlayerControllerBase, OnOffsetReset), Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraResetOffsetsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_OnOffsetReset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_OnOffsetReset_MetaData)) }; // 1608290498
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_RootActor_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_RootActor = { "RootActor", nullptr, (EPropertyFlags)0x0014000000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVirtualCameraPlayerControllerBase, RootActor), Z_Construct_UClass_AVPRootActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_RootActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_RootActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_LevelSequencePlaybackController_MetaData[] = {
		{ "Comment", "/** Controller for level sequence playback */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Controller for level sequence playback" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_LevelSequencePlaybackController = { "LevelSequencePlaybackController", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVirtualCameraPlayerControllerBase, LevelSequencePlaybackController), Z_Construct_UClass_ULevelSequencePlaybackController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_LevelSequencePlaybackController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_LevelSequencePlaybackController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_TargetCameraActor_MetaData[] = {
		{ "Comment", "/** Target camera that is spawned or possessed on begin play for the sequence controller */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Target camera that is spawned or possessed on begin play for the sequence controller" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_TargetCameraActor = { "TargetCameraActor", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVirtualCameraPlayerControllerBase, TargetCameraActor), Z_Construct_UClass_ACineCameraActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_TargetCameraActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_TargetCameraActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_bCachedIsVirtualCameraControlledByRemoteSession_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Cached value for IsVirtualCameraControlledByRemoteSession() */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Cached value for IsVirtualCameraControlledByRemoteSession()" },
	};
#endif
	void Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_bCachedIsVirtualCameraControlledByRemoteSession_SetBit(void* Obj)
	{
		((AVirtualCameraPlayerControllerBase*)Obj)->bCachedIsVirtualCameraControlledByRemoteSession = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_bCachedIsVirtualCameraControlledByRemoteSession = { "bCachedIsVirtualCameraControlledByRemoteSession", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AVirtualCameraPlayerControllerBase), &Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_bCachedIsVirtualCameraControlledByRemoteSession_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_bCachedIsVirtualCameraControlledByRemoteSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_bCachedIsVirtualCameraControlledByRemoteSession_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_bCachedShouldUpdateTargetCameraTransform_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Cached value for IsVirtualCameraControlledByRemoteSession() */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPlayerControllerBase.h" },
		{ "ToolTip", "Cached value for IsVirtualCameraControlledByRemoteSession()" },
	};
#endif
	void Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_bCachedShouldUpdateTargetCameraTransform_SetBit(void* Obj)
	{
		((AVirtualCameraPlayerControllerBase*)Obj)->bCachedShouldUpdateTargetCameraTransform = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_bCachedShouldUpdateTargetCameraTransform = { "bCachedShouldUpdateTargetCameraTransform", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AVirtualCameraPlayerControllerBase), &Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_bCachedShouldUpdateTargetCameraTransform_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_bCachedShouldUpdateTargetCameraTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_bCachedShouldUpdateTargetCameraTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_InputSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_InputSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_LiveLinkTargetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_TrackerPreOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_TrackerPostOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_TargetCameraActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_RequiredSequencerRecorderCameraSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_RequiredSequencerRecorderCameraSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_OnOffsetReset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_RootActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_LevelSequencePlaybackController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_TargetCameraActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_bCachedIsVirtualCameraControlledByRemoteSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::NewProp_bCachedShouldUpdateTargetCameraTransform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVirtualCameraPlayerControllerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::ClassParams = {
		&AVirtualCameraPlayerControllerBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::PropPointers),
		0,
		0x009002A5u,
		METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVirtualCameraPlayerControllerBase()
	{
		if (!Z_Registration_Info_UClass_AVirtualCameraPlayerControllerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVirtualCameraPlayerControllerBase.OuterSingleton, Z_Construct_UClass_AVirtualCameraPlayerControllerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVirtualCameraPlayerControllerBase.OuterSingleton;
	}
	template<> VIRTUALCAMERA_API UClass* StaticClass<AVirtualCameraPlayerControllerBase>()
	{
		return AVirtualCameraPlayerControllerBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVirtualCameraPlayerControllerBase);
	AVirtualCameraPlayerControllerBase::~AVirtualCameraPlayerControllerBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPlayerControllerBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPlayerControllerBase_h_Statics::EnumInfo[] = {
		{ ETrackerInputSource_StaticEnum, TEXT("ETrackerInputSource"), &Z_Registration_Info_UEnum_ETrackerInputSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1576094559U) },
		{ ETouchInputState_StaticEnum, TEXT("ETouchInputState"), &Z_Registration_Info_UEnum_ETouchInputState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 110538727U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPlayerControllerBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVirtualCameraPlayerControllerBase, AVirtualCameraPlayerControllerBase::StaticClass, TEXT("AVirtualCameraPlayerControllerBase"), &Z_Registration_Info_UClass_AVirtualCameraPlayerControllerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVirtualCameraPlayerControllerBase), 2740937020U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPlayerControllerBase_h_4059384767(TEXT("/Script/VirtualCamera"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPlayerControllerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPlayerControllerBase_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPlayerControllerBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPlayerControllerBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
