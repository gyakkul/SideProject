// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosCloth/ChaosWeightMapTarget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSCLOTH_ChaosWeightMapTarget_generated_h
#error "ChaosWeightMapTarget.generated.h already included, missing '#pragma once' in ChaosWeightMapTarget.h"
#endif
#define CHAOSCLOTH_ChaosWeightMapTarget_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosCloth_Source_Chaos_Private_ChaosCloth_ChaosWeightMapTarget_h


#define FOREACH_ENUM_ECHAOSWEIGHTMAPTARGET(op) \
	op(EChaosWeightMapTarget::None) \
	op(EChaosWeightMapTarget::MaxDistance) \
	op(EChaosWeightMapTarget::BackstopDistance) \
	op(EChaosWeightMapTarget::BackstopRadius) \
	op(EChaosWeightMapTarget::AnimDriveStiffness) \
	op(EChaosWeightMapTarget::AnimDriveDamping) \
	op(EChaosWeightMapTarget::TetherStiffness) \
	op(EChaosWeightMapTarget::TetherScale) \
	op(EChaosWeightMapTarget::Drag) \
	op(EChaosWeightMapTarget::Lift) \
	op(EChaosWeightMapTarget::EdgeStiffness) \
	op(EChaosWeightMapTarget::BendingStiffness) \
	op(EChaosWeightMapTarget::AreaStiffness) \
	op(EChaosWeightMapTarget::BucklingStiffness) \
	op(EChaosWeightMapTarget::Pressure) 

enum class EChaosWeightMapTarget : uint8;
template<> struct TIsUEnumClass<EChaosWeightMapTarget> { enum { Value = true }; };
template<> CHAOSCLOTH_API UEnum* StaticEnum<EChaosWeightMapTarget>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
