// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "XRGestureConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HEADMOUNTEDDISPLAY_XRGestureConfig_generated_h
#error "XRGestureConfig.generated.h already included, missing '#pragma once' in XRGestureConfig.h"
#endif
#define HEADMOUNTEDDISPLAY_XRGestureConfig_generated_h

#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_XRGestureConfig_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FXRGestureConfig_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HEADMOUNTEDDISPLAY_API UScriptStruct* StaticStruct<struct FXRGestureConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_HeadMountedDisplay_Public_XRGestureConfig_h


#define FOREACH_ENUM_ESPATIALINPUTGESTUREAXIS(op) \
	op(ESpatialInputGestureAxis::None) \
	op(ESpatialInputGestureAxis::Manipulation) \
	op(ESpatialInputGestureAxis::Navigation) \
	op(ESpatialInputGestureAxis::NavigationRails) 

enum class ESpatialInputGestureAxis : uint8;
template<> struct TIsUEnumClass<ESpatialInputGestureAxis> { enum { Value = true }; };
template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<ESpatialInputGestureAxis>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
