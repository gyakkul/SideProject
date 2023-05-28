// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/SlateEnums.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLATECORE_SlateEnums_generated_h
#error "SlateEnums.generated.h already included, missing '#pragma once' in SlateEnums.h"
#endif
#define SLATECORE_SlateEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_SlateCore_Public_Types_SlateEnums_h


#define FOREACH_ENUM_EBUTTONCLICKMETHOD(op) \
	op(EButtonClickMethod::DownAndUp) \
	op(EButtonClickMethod::MouseDown) \
	op(EButtonClickMethod::MouseUp) \
	op(EButtonClickMethod::PreciseClick) 

namespace EButtonClickMethod { enum Type : int; }
template<> SLATECORE_API UEnum* StaticEnum<EButtonClickMethod::Type>();

#define FOREACH_ENUM_EBUTTONTOUCHMETHOD(op) \
	op(EButtonTouchMethod::DownAndUp) \
	op(EButtonTouchMethod::Down) \
	op(EButtonTouchMethod::PreciseTap) 

namespace EButtonTouchMethod { enum Type : int; }
template<> SLATECORE_API UEnum* StaticEnum<EButtonTouchMethod::Type>();

#define FOREACH_ENUM_EBUTTONPRESSMETHOD(op) \
	op(EButtonPressMethod::DownAndUp) \
	op(EButtonPressMethod::ButtonPress) \
	op(EButtonPressMethod::ButtonRelease) 

namespace EButtonPressMethod { enum Type : int; }
template<> SLATECORE_API UEnum* StaticEnum<EButtonPressMethod::Type>();

#define FOREACH_ENUM_EUINAVIGATION(op) \
	op(EUINavigation::Left) \
	op(EUINavigation::Right) \
	op(EUINavigation::Up) \
	op(EUINavigation::Down) \
	op(EUINavigation::Next) \
	op(EUINavigation::Previous) \
	op(EUINavigation::Num) \
	op(EUINavigation::Invalid) 

enum class EUINavigation : uint8;
template<> struct TIsUEnumClass<EUINavigation> { enum { Value = true }; };
template<> SLATECORE_API UEnum* StaticEnum<EUINavigation>();

#define FOREACH_ENUM_EUINAVIGATIONACTION(op) \
	op(EUINavigationAction::Accept) \
	op(EUINavigationAction::Back) \
	op(EUINavigationAction::Num) \
	op(EUINavigationAction::Invalid) 

enum class EUINavigationAction : uint8;
template<> struct TIsUEnumClass<EUINavigationAction> { enum { Value = true }; };
template<> SLATECORE_API UEnum* StaticEnum<EUINavigationAction>();

#define FOREACH_ENUM_ENAVIGATIONSOURCE(op) \
	op(ENavigationSource::FocusedWidget) \
	op(ENavigationSource::WidgetUnderCursor) 

enum class ENavigationSource : uint8;
template<> struct TIsUEnumClass<ENavigationSource> { enum { Value = true }; };
template<> SLATECORE_API UEnum* StaticEnum<ENavigationSource>();

#define FOREACH_ENUM_ENAVIGATIONGENESIS(op) \
	op(ENavigationGenesis::Keyboard) \
	op(ENavigationGenesis::Controller) \
	op(ENavigationGenesis::User) 

enum class ENavigationGenesis : uint8;
template<> struct TIsUEnumClass<ENavigationGenesis> { enum { Value = true }; };
template<> SLATECORE_API UEnum* StaticEnum<ENavigationGenesis>();

#define FOREACH_ENUM_EHORIZONTALALIGNMENT(op) \
	op(HAlign_Fill) \
	op(HAlign_Left) \
	op(HAlign_Center) \
	op(HAlign_Right) 

enum EHorizontalAlignment : int;
template<> SLATECORE_API UEnum* StaticEnum<EHorizontalAlignment>();

#define FOREACH_ENUM_EVERTICALALIGNMENT(op) \
	op(VAlign_Fill) \
	op(VAlign_Top) \
	op(VAlign_Center) \
	op(VAlign_Bottom) 

enum EVerticalAlignment : int;
template<> SLATECORE_API UEnum* StaticEnum<EVerticalAlignment>();

#define FOREACH_ENUM_EMENUPLACEMENT(op) \
	op(MenuPlacement_BelowAnchor) \
	op(MenuPlacement_CenteredBelowAnchor) \
	op(MenuPlacement_BelowRightAnchor) \
	op(MenuPlacement_ComboBox) \
	op(MenuPlacement_ComboBoxRight) \
	op(MenuPlacement_MenuRight) \
	op(MenuPlacement_AboveAnchor) \
	op(MenuPlacement_CenteredAboveAnchor) \
	op(MenuPlacement_AboveRightAnchor) \
	op(MenuPlacement_MenuLeft) \
	op(MenuPlacement_Center) \
	op(MenuPlacement_RightLeftCenter) \
	op(MenuPlacement_MatchBottomLeft) 

enum EMenuPlacement : int;
template<> SLATECORE_API UEnum* StaticEnum<EMenuPlacement>();

#define FOREACH_ENUM_EORIENTATION(op) \
	op(Orient_Horizontal) \
	op(Orient_Vertical) 

enum EOrientation : int;
template<> SLATECORE_API UEnum* StaticEnum<EOrientation>();

#define FOREACH_ENUM_ESCROLLDIRECTION(op) \
	op(Scroll_Down) \
	op(Scroll_Up) 

enum EScrollDirection : int;
template<> SLATECORE_API UEnum* StaticEnum<EScrollDirection>();

#define FOREACH_ENUM_ETEXTCOMMIT(op) \
	op(ETextCommit::Default) \
	op(ETextCommit::OnEnter) \
	op(ETextCommit::OnUserMovedFocus) \
	op(ETextCommit::OnCleared) 

namespace ETextCommit { enum Type : int; }
template<> SLATECORE_API UEnum* StaticEnum<ETextCommit::Type>();

#define FOREACH_ENUM_ESELECTINFO(op) \
	op(ESelectInfo::OnKeyPress) \
	op(ESelectInfo::OnNavigation) \
	op(ESelectInfo::OnMouseClick) \
	op(ESelectInfo::Direct) 

namespace ESelectInfo { enum Type : int; }
template<> SLATECORE_API UEnum* StaticEnum<ESelectInfo::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
