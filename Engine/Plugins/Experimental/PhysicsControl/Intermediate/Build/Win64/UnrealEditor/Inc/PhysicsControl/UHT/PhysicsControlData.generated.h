// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsControlData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PHYSICSCONTROL_PhysicsControlData_generated_h
#error "PhysicsControlData.generated.h already included, missing '#pragma once' in PhysicsControlData.h"
#endif
#define PHYSICSCONTROL_PhysicsControlData_generated_h

#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlData_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPhysicsControlData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PHYSICSCONTROL_API UScriptStruct* StaticStruct<struct FPhysicsControlData>();

#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlData_h_107_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPhysicsControlMultiplier_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PHYSICSCONTROL_API UScriptStruct* StaticStruct<struct FPhysicsControlMultiplier>();

#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlData_h_154_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPhysicsControlTarget_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PHYSICSCONTROL_API UScriptStruct* StaticStruct<struct FPhysicsControlTarget>();

#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlData_h_198_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPhysicsControlSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PHYSICSCONTROL_API UScriptStruct* StaticStruct<struct FPhysicsControlSettings>();

#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlData_h_248_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPhysicsControl_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PHYSICSCONTROL_API UScriptStruct* StaticStruct<struct FPhysicsControl>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlData_h


#define FOREACH_ENUM_EPHYSICSMOVEMENTTYPE(op) \
	op(EPhysicsMovementType::Static) \
	op(EPhysicsMovementType::Kinematic) \
	op(EPhysicsMovementType::Simulated) 

enum class EPhysicsMovementType : uint8;
template<> struct TIsUEnumClass<EPhysicsMovementType> { enum { Value = true }; };
template<> PHYSICSCONTROL_API UEnum* StaticEnum<EPhysicsMovementType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
