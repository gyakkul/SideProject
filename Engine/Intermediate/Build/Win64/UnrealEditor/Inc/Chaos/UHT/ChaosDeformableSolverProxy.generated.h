// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chaos/Deformable/ChaosDeformableSolverProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOS_ChaosDeformableSolverProxy_generated_h
#error "ChaosDeformableSolverProxy.generated.h already included, missing '#pragma once' in ChaosDeformableSolverProxy.h"
#endif
#define CHAOS_ChaosDeformableSolverProxy_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Chaos_Public_Chaos_Deformable_ChaosDeformableSolverProxy_h


#define FOREACH_ENUM_CHAOSDEFORMABLESIMSPACE(op) \
	op(World) \
	op(ComponentXf) \
	op(Bone) 

enum ChaosDeformableSimSpace : uint8;
template<> CHAOS_API UEnum* StaticEnum<ChaosDeformableSimSpace>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
