// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Slate/SCommonAnimatedSwitcher.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONUI_SCommonAnimatedSwitcher_generated_h
#error "SCommonAnimatedSwitcher.generated.h already included, missing '#pragma once' in SCommonAnimatedSwitcher.h"
#endif
#define COMMONUI_SCommonAnimatedSwitcher_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Slate_SCommonAnimatedSwitcher_h


#define FOREACH_ENUM_ECOMMONSWITCHERTRANSITION(op) \
	op(ECommonSwitcherTransition::FadeOnly) \
	op(ECommonSwitcherTransition::Horizontal) \
	op(ECommonSwitcherTransition::Vertical) \
	op(ECommonSwitcherTransition::Zoom) 

enum class ECommonSwitcherTransition : uint8;
template<> struct TIsUEnumClass<ECommonSwitcherTransition> { enum { Value = true }; };
template<> COMMONUI_API UEnum* StaticEnum<ECommonSwitcherTransition>();

#define FOREACH_ENUM_ETRANSITIONCURVE(op) \
	op(ETransitionCurve::Linear) \
	op(ETransitionCurve::QuadIn) \
	op(ETransitionCurve::QuadOut) \
	op(ETransitionCurve::QuadInOut) \
	op(ETransitionCurve::CubicIn) \
	op(ETransitionCurve::CubicOut) \
	op(ETransitionCurve::CubicInOut) 

enum class ETransitionCurve : uint8;
template<> struct TIsUEnumClass<ETransitionCurve> { enum { Value = true }; };
template<> COMMONUI_API UEnum* StaticEnum<ETransitionCurve>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
