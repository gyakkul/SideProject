// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EyeTrackerTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EYETRACKER_EyeTrackerTypes_generated_h
#error "EyeTrackerTypes.generated.h already included, missing '#pragma once' in EyeTrackerTypes.h"
#endif
#define EYETRACKER_EyeTrackerTypes_generated_h

#define FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerTypes_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics; \
	EYETRACKER_API static class UScriptStruct* StaticStruct();


template<> EYETRACKER_API UScriptStruct* StaticStruct<struct FEyeTrackerGazeData>();

#define FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerTypes_h_81_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics; \
	EYETRACKER_API static class UScriptStruct* StaticStruct();


template<> EYETRACKER_API UScriptStruct* StaticStruct<struct FEyeTrackerStereoGazeData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerTypes_h


#define FOREACH_ENUM_EEYETRACKERSTATUS(op) \
	op(EEyeTrackerStatus::NotConnected) \
	op(EEyeTrackerStatus::NotTracking) \
	op(EEyeTrackerStatus::Tracking) 

enum class EEyeTrackerStatus : uint8;
template<> struct TIsUEnumClass<EEyeTrackerStatus> { enum { Value = true }; };
template<> EYETRACKER_API UEnum* StaticEnum<EEyeTrackerStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
