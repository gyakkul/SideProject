// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimNode_Inertialization.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimNode_Inertialization_generated_h
#error "AnimNode_Inertialization.generated.h already included, missing '#pragma once' in AnimNode_Inertialization.h"
#endif
#define ENGINE_AnimNode_Inertialization_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h_118_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInertializationRequest_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInertializationRequest>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h_159_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInertializationPose_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInertializationPose>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h_207_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInertializationBoneDiff_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInertializationBoneDiff>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h_252_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInertializationCurveDiff_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInertializationCurveDiff>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h_273_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInertializationPoseDiff_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInertializationPoseDiff>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h_333_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimNode_Inertialization>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h


#define FOREACH_ENUM_EINERTIALIZATIONSTATE(op) \
	op(EInertializationState::Inactive) \
	op(EInertializationState::Pending) \
	op(EInertializationState::Active) 

enum class EInertializationState : uint8;
template<> struct TIsUEnumClass<EInertializationState> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EInertializationState>();

#define FOREACH_ENUM_EINERTIALIZATIONBONESTATE(op) \
	op(EInertializationBoneState::Invalid) \
	op(EInertializationBoneState::Valid) \
	op(EInertializationBoneState::Excluded) 

enum class EInertializationBoneState : uint8;
template<> struct TIsUEnumClass<EInertializationBoneState> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EInertializationBoneState>();

#define FOREACH_ENUM_EINERTIALIZATIONSPACE(op) \
	op(EInertializationSpace::Default) \
	op(EInertializationSpace::WorldSpace) \
	op(EInertializationSpace::WorldRotation) 

enum class EInertializationSpace : uint8;
template<> struct TIsUEnumClass<EInertializationSpace> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EInertializationSpace>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
