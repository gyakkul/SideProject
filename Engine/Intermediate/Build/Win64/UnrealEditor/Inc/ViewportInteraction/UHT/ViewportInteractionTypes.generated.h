// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ViewportInteractionTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VIEWPORTINTERACTION_ViewportInteractionTypes_generated_h
#error "ViewportInteractionTypes.generated.h already included, missing '#pragma once' in ViewportInteractionTypes.h"
#endif
#define VIEWPORTINTERACTION_ViewportInteractionTypes_generated_h

#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractionTypes_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VIEWPORTINTERACTION_API UScriptStruct* StaticStruct<struct FViewportActionKeyInput>();

#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractionTypes_h_116_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTransformGizmoHandlePlacement_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VIEWPORTINTERACTION_API UScriptStruct* StaticStruct<struct FTransformGizmoHandlePlacement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractionTypes_h


#define FOREACH_ENUM_EVIEWPORTINTERACTIONDRAGGINGMODE(op) \
	op(EViewportInteractionDraggingMode::Nothing) \
	op(EViewportInteractionDraggingMode::TransformablesWithGizmo) \
	op(EViewportInteractionDraggingMode::TransformablesAtLaserImpact) \
	op(EViewportInteractionDraggingMode::AssistingDrag) \
	op(EViewportInteractionDraggingMode::TransformablesFreely) \
	op(EViewportInteractionDraggingMode::World) \
	op(EViewportInteractionDraggingMode::Interactable) \
	op(EViewportInteractionDraggingMode::Material) 

enum class EViewportInteractionDraggingMode : uint8;
template<> struct TIsUEnumClass<EViewportInteractionDraggingMode> { enum { Value = true }; };
template<> VIEWPORTINTERACTION_API UEnum* StaticEnum<EViewportInteractionDraggingMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
