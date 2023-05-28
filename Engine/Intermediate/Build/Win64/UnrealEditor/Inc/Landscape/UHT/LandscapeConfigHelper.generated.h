// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeConfigHelper.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_LandscapeConfigHelper_generated_h
#error "LandscapeConfigHelper.generated.h already included, missing '#pragma once' in LandscapeConfigHelper.h"
#endif
#define LANDSCAPE_LandscapeConfigHelper_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Public_LandscapeConfigHelper_h


#define FOREACH_ENUM_ELANDSCAPERESIZEMODE(op) \
	op(ELandscapeResizeMode::Resample) \
	op(ELandscapeResizeMode::Clip) \
	op(ELandscapeResizeMode::Expand) 

enum class ELandscapeResizeMode : uint8;
template<> struct TIsUEnumClass<ELandscapeResizeMode> { enum { Value = true }; };
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeResizeMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
