// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/ViewportSplitScreen.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ViewportSplitScreen_generated_h
#error "ViewportSplitScreen.generated.h already included, missing '#pragma once' in ViewportSplitScreen.h"
#endif
#define ENGINE_ViewportSplitScreen_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_ViewportSplitScreen_h


#define FOREACH_ENUM_ESPLITSCREENTYPE(op) \
	op(ESplitScreenType::None) \
	op(ESplitScreenType::TwoPlayer_Horizontal) \
	op(ESplitScreenType::TwoPlayer_Vertical) \
	op(ESplitScreenType::ThreePlayer_FavorTop) \
	op(ESplitScreenType::ThreePlayer_FavorBottom) \
	op(ESplitScreenType::ThreePlayer_Vertical) \
	op(ESplitScreenType::ThreePlayer_Horizontal) \
	op(ESplitScreenType::FourPlayer_Grid) \
	op(ESplitScreenType::FourPlayer_Vertical) \
	op(ESplitScreenType::FourPlayer_Horizontal) \
	op(ESplitScreenType::SplitTypeCount) 

namespace ESplitScreenType { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ESplitScreenType::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
