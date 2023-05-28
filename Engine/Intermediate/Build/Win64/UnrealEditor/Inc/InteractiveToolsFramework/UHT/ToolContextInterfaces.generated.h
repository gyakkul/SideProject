// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolContextInterfaces.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_ToolContextInterfaces_generated_h
#error "ToolContextInterfaces.generated.h already included, missing '#pragma once' in ToolContextInterfaces.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_ToolContextInterfaces_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolContextInterfaces_h


#define FOREACH_ENUM_ESTANDARDTOOLCONTEXTMATERIALS(op) \
	op(EStandardToolContextMaterials::VertexColorMaterial) 

enum class EStandardToolContextMaterials;
template<> struct TIsUEnumClass<EStandardToolContextMaterials> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EStandardToolContextMaterials>();

#define FOREACH_ENUM_ETOOLCONTEXTCOORDINATESYSTEM(op) \
	op(EToolContextCoordinateSystem::World) \
	op(EToolContextCoordinateSystem::Local) 

enum class EToolContextCoordinateSystem;
template<> struct TIsUEnumClass<EToolContextCoordinateSystem> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EToolContextCoordinateSystem>();

#define FOREACH_ENUM_ETOOLCONTEXTTRANSFORMGIZMOMODE(op) \
	op(EToolContextTransformGizmoMode::NoGizmo) \
	op(EToolContextTransformGizmoMode::Translation) \
	op(EToolContextTransformGizmoMode::Rotation) \
	op(EToolContextTransformGizmoMode::Scale) \
	op(EToolContextTransformGizmoMode::Combined) 

enum class EToolContextTransformGizmoMode : uint8;
template<> struct TIsUEnumClass<EToolContextTransformGizmoMode> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EToolContextTransformGizmoMode>();

#define FOREACH_ENUM_ETOOLMESSAGELEVEL(op) \
	op(EToolMessageLevel::Internal) \
	op(EToolMessageLevel::UserMessage) \
	op(EToolMessageLevel::UserNotification) \
	op(EToolMessageLevel::UserWarning) \
	op(EToolMessageLevel::UserError) 

enum class EToolMessageLevel;
template<> struct TIsUEnumClass<EToolMessageLevel> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EToolMessageLevel>();

#define FOREACH_ENUM_ESELECTEDOBJECTSMODIFICATIONTYPE(op) \
	op(ESelectedObjectsModificationType::Replace) \
	op(ESelectedObjectsModificationType::Add) \
	op(ESelectedObjectsModificationType::Remove) \
	op(ESelectedObjectsModificationType::Clear) 

enum class ESelectedObjectsModificationType;
template<> struct TIsUEnumClass<ESelectedObjectsModificationType> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<ESelectedObjectsModificationType>();

#define FOREACH_ENUM_EVIEWINTERACTIONSTATE(op) \
	op(EViewInteractionState::None) \
	op(EViewInteractionState::Hovered) \
	op(EViewInteractionState::Focused) 

enum class EViewInteractionState;
template<> struct TIsUEnumClass<EViewInteractionState> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EViewInteractionState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
