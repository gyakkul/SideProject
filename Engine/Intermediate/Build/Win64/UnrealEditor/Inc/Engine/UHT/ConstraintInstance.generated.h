// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsEngine/ConstraintInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ConstraintInstance_generated_h
#error "ConstraintInstance.generated.h already included, missing '#pragma once' in ConstraintInstance.h"
#endif
#define ENGINE_ConstraintInstance_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstance_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FConstraintProfileProperties>();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstance_h_198_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstraintInstanceBase_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FConstraintInstanceBase>();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstance_h_238_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstraintInstance_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FConstraintInstanceBase Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FConstraintInstance>();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstance_h_1193_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FConstraintInstanceAccessor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstance_h


#define FOREACH_ENUM_ECONSTRAINTTRANSFORMCOMPONENTFLAGS(op) \
	op(EConstraintTransformComponentFlags::None) \
	op(EConstraintTransformComponentFlags::ChildPosition) \
	op(EConstraintTransformComponentFlags::ChildRotation) \
	op(EConstraintTransformComponentFlags::ParentPosition) \
	op(EConstraintTransformComponentFlags::ParentRotation) \
	op(EConstraintTransformComponentFlags::AllChild) \
	op(EConstraintTransformComponentFlags::AllParent) \
	op(EConstraintTransformComponentFlags::AllPosition) \
	op(EConstraintTransformComponentFlags::AllRotation) \
	op(EConstraintTransformComponentFlags::All) 

enum class EConstraintTransformComponentFlags : uint8;
template<> struct TIsUEnumClass<EConstraintTransformComponentFlags> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EConstraintTransformComponentFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
