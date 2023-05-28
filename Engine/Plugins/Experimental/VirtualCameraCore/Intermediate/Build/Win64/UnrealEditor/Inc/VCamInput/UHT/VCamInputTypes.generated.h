// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VCamInputTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAnalogInputEvent;
struct FKeyEvent;
struct FMotionEvent;
struct FPointerEvent;
#ifdef VCAMINPUT_VCamInputTypes_generated_h
#error "VCamInputTypes.generated.h already included, missing '#pragma once' in VCamInputTypes.h"
#endif
#define VCAMINPUT_VCamInputTypes_generated_h

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputTypes_h_12_DELEGATE \
VCAMINPUT_API void FKeyInputDelegate_DelegateWrapper(const FScriptDelegate& KeyInputDelegate, float DeltaTime, FKeyEvent const& KeyEvent);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputTypes_h_13_DELEGATE \
VCAMINPUT_API void FAnalogInputDelegate_DelegateWrapper(const FScriptDelegate& AnalogInputDelegate, float DeltaTime, FAnalogInputEvent const& AnalogEvent);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputTypes_h_14_DELEGATE \
VCAMINPUT_API void FPointerInputDelegate_DelegateWrapper(const FScriptDelegate& PointerInputDelegate, float DeltaTime, FPointerEvent const& MouseEvent);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputTypes_h_15_DELEGATE \
VCAMINPUT_API void FMotionInputEvent_DelegateWrapper(const FScriptDelegate& MotionInputEvent, float DeltaTime, FMotionEvent const& MotionEvent);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
