// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRigElementDetails.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIGEDITOR_ControlRigElementDetails_generated_h
#error "ControlRigElementDetails.generated.h already included, missing '#pragma once' in ControlRigElementDetails.h"
#endif
#define CONTROLRIGEDITOR_ControlRigElementDetails_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_ControlRigElementDetails_h


#define FOREACH_ENUM_ERIGELEMENTDETAILSTRANSFORMCOMPONENT(op) \
	op(ERigElementDetailsTransformComponent::TranslationX) \
	op(ERigElementDetailsTransformComponent::TranslationY) \
	op(ERigElementDetailsTransformComponent::TranslationZ) \
	op(ERigElementDetailsTransformComponent::RotationRoll) \
	op(ERigElementDetailsTransformComponent::RotationPitch) \
	op(ERigElementDetailsTransformComponent::RotationYaw) \
	op(ERigElementDetailsTransformComponent::ScaleX) \
	op(ERigElementDetailsTransformComponent::ScaleY) \
	op(ERigElementDetailsTransformComponent::ScaleZ) 

enum class ERigElementDetailsTransformComponent : uint8;
template<> struct TIsUEnumClass<ERigElementDetailsTransformComponent> { enum { Value = true }; };
template<> CONTROLRIGEDITOR_API UEnum* StaticEnum<ERigElementDetailsTransformComponent>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
