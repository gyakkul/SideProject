// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Math/Simulation/CRSimSoftCollision.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_CRSimSoftCollision_generated_h
#error "CRSimSoftCollision.generated.h already included, missing '#pragma once' in CRSimSoftCollision.h"
#endif
#define CONTROLRIG_CRSimSoftCollision_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimSoftCollision_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FCRSimSoftCollision>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimSoftCollision_h


#define FOREACH_ENUM_ECRSIMSOFTCOLLISIONTYPE(op) \
	op(ECRSimSoftCollisionType::Plane) \
	op(ECRSimSoftCollisionType::Sphere) \
	op(ECRSimSoftCollisionType::Cone) 

enum class ECRSimSoftCollisionType : uint8;
template<> struct TIsUEnumClass<ECRSimSoftCollisionType> { enum { Value = true }; };
template<> CONTROLRIG_API UEnum* StaticEnum<ECRSimSoftCollisionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
