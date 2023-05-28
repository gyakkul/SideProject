// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BodySetupEnums.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PHYSICSCORE_BodySetupEnums_generated_h
#error "BodySetupEnums.generated.h already included, missing '#pragma once' in BodySetupEnums.h"
#endif
#define PHYSICSCORE_BodySetupEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_PhysicsCore_Public_BodySetupEnums_h


#define FOREACH_ENUM_ECOLLISIONTRACEFLAG(op) \
	op(CTF_UseDefault) \
	op(CTF_UseSimpleAndComplex) \
	op(CTF_UseSimpleAsComplex) \
	op(CTF_UseComplexAsSimple) 

enum ECollisionTraceFlag : int;
template<> PHYSICSCORE_API UEnum* StaticEnum<ECollisionTraceFlag>();

#define FOREACH_ENUM_EPHYSICSTYPE(op) \
	op(PhysType_Default) \
	op(PhysType_Kinematic) \
	op(PhysType_Simulated) 

enum EPhysicsType : int;
template<> PHYSICSCORE_API UEnum* StaticEnum<EPhysicsType>();

#define FOREACH_ENUM_EBODYCOLLISIONRESPONSE(op) \
	op(EBodyCollisionResponse::BodyCollision_Enabled) \
	op(EBodyCollisionResponse::BodyCollision_Disabled) 

namespace EBodyCollisionResponse { enum Type : int; }
template<> PHYSICSCORE_API UEnum* StaticEnum<EBodyCollisionResponse::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
