// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassNavigationTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSNAVIGATION_MassNavigationTypes_generated_h
#error "MassNavigationTypes.generated.h already included, missing '#pragma once' in MassNavigationTypes.h"
#endif
#define MASSNAVIGATION_MassNavigationTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationTypes_h


#define FOREACH_ENUM_EMASSMOVEMENTACTION(op) \
	op(EMassMovementAction::Stand) \
	op(EMassMovementAction::Move) \
	op(EMassMovementAction::Animate) 

enum class EMassMovementAction : uint8;
template<> struct TIsUEnumClass<EMassMovementAction> { enum { Value = true }; };
template<> MASSNAVIGATION_API UEnum* StaticEnum<EMassMovementAction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
