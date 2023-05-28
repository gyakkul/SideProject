// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionChannelMaskParameterColor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionChannelMaskParameterColor_generated_h
#error "MaterialExpressionChannelMaskParameterColor.generated.h already included, missing '#pragma once' in MaterialExpressionChannelMaskParameterColor.h"
#endif
#define ENGINE_MaterialExpressionChannelMaskParameterColor_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameterColor_h


#define FOREACH_ENUM_ECHANNELMASKPARAMETERCOLOR(op) \
	op(EChannelMaskParameterColor::Red) \
	op(EChannelMaskParameterColor::Green) \
	op(EChannelMaskParameterColor::Blue) \
	op(EChannelMaskParameterColor::Alpha) 

namespace EChannelMaskParameterColor { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EChannelMaskParameterColor::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
