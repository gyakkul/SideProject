// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BoneControllers/AnimNode_RigidBody.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_AnimNode_RigidBody_generated_h
#error "AnimNode_RigidBody.generated.h already included, missing '#pragma once' in AnimNode_RigidBody.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_RigidBody_generated_h

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimSpaceSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FSimSpaceSettings>();

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_h_149_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_SkeletalControlBase Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FAnimNode_RigidBody>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_h


#define FOREACH_ENUM_ESIMULATIONSPACE(op) \
	op(ESimulationSpace::ComponentSpace) \
	op(ESimulationSpace::WorldSpace) \
	op(ESimulationSpace::BaseBoneSpace) 

enum class ESimulationSpace : uint8;
template<> struct TIsUEnumClass<ESimulationSpace> { enum { Value = true }; };
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ESimulationSpace>();

#define FOREACH_ENUM_ESIMULATIONTIMING(op) \
	op(ESimulationTiming::Default) \
	op(ESimulationTiming::Synchronous) \
	op(ESimulationTiming::Deferred) 

enum class ESimulationTiming : uint8;
template<> struct TIsUEnumClass<ESimulationTiming> { enum { Value = true }; };
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ESimulationTiming>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
