// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGizmos/GizmoElementShared.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_GizmoElementShared_generated_h
#error "GizmoElementShared.generated.h already included, missing '#pragma once' in GizmoElementShared.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_GizmoElementShared_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementShared_h


#define FOREACH_ENUM_EGIZMOELEMENTSTATE(op) \
	op(EGizmoElementState::None) \
	op(EGizmoElementState::Visible) \
	op(EGizmoElementState::Hittable) \
	op(EGizmoElementState::VisibleAndHittable) 

enum class EGizmoElementState : uint8;
template<> struct TIsUEnumClass<EGizmoElementState> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EGizmoElementState>();

#define FOREACH_ENUM_EGIZMOELEMENTINTERACTIONSTATE(op) \
	op(EGizmoElementInteractionState::None) \
	op(EGizmoElementInteractionState::Hovering) \
	op(EGizmoElementInteractionState::Interacting) 

enum class EGizmoElementInteractionState;
template<> struct TIsUEnumClass<EGizmoElementInteractionState> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EGizmoElementInteractionState>();

#define FOREACH_ENUM_EGIZMOELEMENTVIEWDEPENDENTTYPE(op) \
	op(EGizmoElementViewDependentType::None) \
	op(EGizmoElementViewDependentType::Axis) \
	op(EGizmoElementViewDependentType::Plane) 

enum class EGizmoElementViewDependentType;
template<> struct TIsUEnumClass<EGizmoElementViewDependentType> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EGizmoElementViewDependentType>();

#define FOREACH_ENUM_EGIZMOELEMENTVIEWALIGNTYPE(op) \
	op(EGizmoElementViewAlignType::None) \
	op(EGizmoElementViewAlignType::PointOnly) \
	op(EGizmoElementViewAlignType::PointEye) \
	op(EGizmoElementViewAlignType::PointScreen) \
	op(EGizmoElementViewAlignType::Axial) 

enum class EGizmoElementViewAlignType;
template<> struct TIsUEnumClass<EGizmoElementViewAlignType> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EGizmoElementViewAlignType>();

#define FOREACH_ENUM_EGIZMOELEMENTPARTIALTYPE(op) \
	op(EGizmoElementPartialType::None) \
	op(EGizmoElementPartialType::Partial) \
	op(EGizmoElementPartialType::PartialViewDependent) 

enum class EGizmoElementPartialType;
template<> struct TIsUEnumClass<EGizmoElementPartialType> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EGizmoElementPartialType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
