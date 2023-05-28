// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BoneControllers/AnimNode_FootPlacement.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMATIONWARPINGRUNTIME_AnimNode_FootPlacement_generated_h
#error "AnimNode_FootPlacement.generated.h already included, missing '#pragma once' in AnimNode_FootPlacement.h"
#endif
#define ANIMATIONWARPINGRUNTIME_AnimNode_FootPlacement_generated_h

#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_FootPlacement_h_206_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics; \
	ANIMATIONWARPINGRUNTIME_API static class UScriptStruct* StaticStruct();


template<> ANIMATIONWARPINGRUNTIME_API UScriptStruct* StaticStruct<struct FFootPlacementInterpolationSettings>();

#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_FootPlacement_h_240_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics; \
	ANIMATIONWARPINGRUNTIME_API static class UScriptStruct* StaticStruct();


template<> ANIMATIONWARPINGRUNTIME_API UScriptStruct* StaticStruct<struct FFootPlacementTraceSettings>();

#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_FootPlacement_h_285_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFootPlacementRootDefinition_Statics; \
	ANIMATIONWARPINGRUNTIME_API static class UScriptStruct* StaticStruct();


template<> ANIMATIONWARPINGRUNTIME_API UScriptStruct* StaticStruct<struct FFootPlacementRootDefinition>();

#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_FootPlacement_h_328_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics; \
	ANIMATIONWARPINGRUNTIME_API static class UScriptStruct* StaticStruct();


template<> ANIMATIONWARPINGRUNTIME_API UScriptStruct* StaticStruct<struct FFootPlacementPelvisSettings>();

#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_FootPlacement_h_375_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics; \
	ANIMATIONWARPINGRUNTIME_API static class UScriptStruct* StaticStruct();


template<> ANIMATIONWARPINGRUNTIME_API UScriptStruct* StaticStruct<struct FFootPlacemenLegDefinition>();

#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_FootPlacement_h_410_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics; \
	ANIMATIONWARPINGRUNTIME_API static class UScriptStruct* StaticStruct();


template<> ANIMATIONWARPINGRUNTIME_API UScriptStruct* StaticStruct<struct FFootPlacementPlantSettings>();

#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_FootPlacement_h_475_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_SkeletalControlBase Super;


template<> ANIMATIONWARPINGRUNTIME_API UScriptStruct* StaticStruct<struct FAnimNode_FootPlacement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_FootPlacement_h


#define FOREACH_ENUM_EFOOTPLACEMENTLOCKTYPE(op) \
	op(EFootPlacementLockType::Unlocked) \
	op(EFootPlacementLockType::PivotAroundBall) \
	op(EFootPlacementLockType::PivotAroundAnkle) \
	op(EFootPlacementLockType::LockRotation) 

enum class EFootPlacementLockType : uint8;
template<> struct TIsUEnumClass<EFootPlacementLockType> { enum { Value = true }; };
template<> ANIMATIONWARPINGRUNTIME_API UEnum* StaticEnum<EFootPlacementLockType>();

#define FOREACH_ENUM_EPELVISHEIGHTMODE(op) \
	op(EPelvisHeightMode::AllLegs) \
	op(EPelvisHeightMode::AllPlantedFeet) \
	op(EPelvisHeightMode::FrontPlantedFeetUphill_FrontFeetDownhill) 

enum class EPelvisHeightMode : uint8;
template<> struct TIsUEnumClass<EPelvisHeightMode> { enum { Value = true }; };
template<> ANIMATIONWARPINGRUNTIME_API UEnum* StaticEnum<EPelvisHeightMode>();

#define FOREACH_ENUM_EACTORMOVEMENTCOMPENSATIONMODE(op) \
	op(EActorMovementCompensationMode::ComponentSpace) \
	op(EActorMovementCompensationMode::WorldSpace) \
	op(EActorMovementCompensationMode::SuddenMotionOnly) 

enum class EActorMovementCompensationMode : uint8;
template<> struct TIsUEnumClass<EActorMovementCompensationMode> { enum { Value = true }; };
template<> ANIMATIONWARPINGRUNTIME_API UEnum* StaticEnum<EActorMovementCompensationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
