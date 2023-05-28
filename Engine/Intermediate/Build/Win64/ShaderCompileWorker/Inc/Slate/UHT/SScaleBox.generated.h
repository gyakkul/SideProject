// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/Layout/SScaleBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLATE_SScaleBox_generated_h
#error "SScaleBox.generated.h already included, missing '#pragma once' in SScaleBox.h"
#endif
#define SLATE_SScaleBox_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Slate_Public_Widgets_Layout_SScaleBox_h


#define FOREACH_ENUM_ESTRETCHDIRECTION(op) \
	op(EStretchDirection::Both) \
	op(EStretchDirection::DownOnly) \
	op(EStretchDirection::UpOnly) 

namespace EStretchDirection { enum Type : int; }
template<> SLATE_API UEnum* StaticEnum<EStretchDirection::Type>();

#define FOREACH_ENUM_ESTRETCH(op) \
	op(EStretch::None) \
	op(EStretch::Fill) \
	op(EStretch::ScaleToFit) \
	op(EStretch::ScaleToFitX) \
	op(EStretch::ScaleToFitY) \
	op(EStretch::ScaleToFill) \
	op(EStretch::ScaleBySafeZone) \
	op(EStretch::UserSpecified) \
	op(EStretch::UserSpecifiedWithClipping) 

namespace EStretch { enum Type : int; }
template<> SLATE_API UEnum* StaticEnum<EStretch::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
