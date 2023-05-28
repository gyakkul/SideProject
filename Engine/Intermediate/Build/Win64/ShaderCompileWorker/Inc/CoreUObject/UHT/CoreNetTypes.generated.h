// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UObject/CoreNetTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COREUOBJECT_CoreNetTypes_generated_h
#error "CoreNetTypes.generated.h already included, missing '#pragma once' in CoreNetTypes.h"
#endif
#define COREUOBJECT_CoreNetTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CoreNetTypes_h


#define FOREACH_ENUM_ELIFETIMECONDITION(op) \
	op(COND_None) \
	op(COND_InitialOnly) \
	op(COND_OwnerOnly) \
	op(COND_SkipOwner) \
	op(COND_SimulatedOnly) \
	op(COND_AutonomousOnly) \
	op(COND_SimulatedOrPhysics) \
	op(COND_InitialOrOwner) \
	op(COND_Custom) \
	op(COND_ReplayOrOwner) \
	op(COND_ReplayOnly) \
	op(COND_SimulatedOnlyNoReplay) \
	op(COND_SimulatedOrPhysicsNoReplay) \
	op(COND_SkipReplay) \
	op(COND_Never) \
	op(COND_NetGroup) \
	op(COND_Max) 

enum ELifetimeCondition : int;
template<> COREUOBJECT_API UEnum* StaticEnum<ELifetimeCondition>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
