// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsEngine/ConstraintDrives.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ConstraintDrives_generated_h
#error "ConstraintDrives.generated.h already included, missing '#pragma once' in ConstraintDrives.h"
#endif
#define ENGINE_ConstraintDrives_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintDrives_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstraintDrive_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FConstraintDrive>();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintDrives_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLinearDriveConstraint_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FLinearDriveConstraint>();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintDrives_h_119_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAngularDriveConstraint_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAngularDriveConstraint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintDrives_h


#define FOREACH_ENUM_EANGULARDRIVEMODE(op) \
	op(EAngularDriveMode::SLERP) \
	op(EAngularDriveMode::TwistAndSwing) 

namespace EAngularDriveMode { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EAngularDriveMode::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
