// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IKRigDataTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IKRIG_IKRigDataTypes_generated_h
#error "IKRigDataTypes.generated.h already included, missing '#pragma once' in IKRigDataTypes.h"
#endif
#define IKRIG_IKRigDataTypes_generated_h

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_IKRigDataTypes_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIKRigGoal_Statics; \
	static class UScriptStruct* StaticStruct();


template<> IKRIG_API UScriptStruct* StaticStruct<struct FIKRigGoal>();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_IKRigDataTypes_h_152_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIKRigGoalContainer_Statics; \
	static class UScriptStruct* StaticStruct();


template<> IKRIG_API UScriptStruct* StaticStruct<struct FIKRigGoalContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_IKRigDataTypes_h


#define FOREACH_ENUM_EIKRIGGOALSPACE(op) \
	op(EIKRigGoalSpace::Component) \
	op(EIKRigGoalSpace::Additive) \
	op(EIKRigGoalSpace::World) 

enum class EIKRigGoalSpace : uint8;
template<> struct TIsUEnumClass<EIKRigGoalSpace> { enum { Value = true }; };
template<> IKRIG_API UEnum* StaticEnum<EIKRigGoalSpace>();

#define FOREACH_ENUM_EIKRIGGOALTRANSFORMSOURCE(op) \
	op(EIKRigGoalTransformSource::Manual) \
	op(EIKRigGoalTransformSource::Bone) \
	op(EIKRigGoalTransformSource::ActorComponent) 

enum class EIKRigGoalTransformSource : uint8;
template<> struct TIsUEnumClass<EIKRigGoalTransformSource> { enum { Value = true }; };
template<> IKRIG_API UEnum* StaticEnum<EIKRigGoalTransformSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
