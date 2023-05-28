// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Math/Simulation/CRSimPointForce.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_CRSimPointForce_generated_h
#error "CRSimPointForce.generated.h already included, missing '#pragma once' in CRSimPointForce.h"
#endif
#define CONTROLRIG_CRSimPointForce_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointForce_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCRSimPointForce_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FCRSimPointForce>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointForce_h


#define FOREACH_ENUM_ECRSIMPOINTFORCETYPE(op) \
	op(ECRSimPointForceType::Direction) 

enum class ECRSimPointForceType : uint8;
template<> struct TIsUEnumClass<ECRSimPointForceType> { enum { Value = true }; };
template<> CONTROLRIG_API UEnum* StaticEnum<ECRSimPointForceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
