// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassLookAtFragments.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSAIBEHAVIOR_MassLookAtFragments_generated_h
#error "MassLookAtFragments.generated.h already included, missing '#pragma once' in MassLookAtFragments.h"
#endif
#define MASSAIBEHAVIOR_MassLookAtFragments_generated_h

#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtFragments_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassLookAtFragment_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMassFragment Super;


template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<struct FMassLookAtFragment>();

#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtFragments_h_119_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassLookAtTargetTag_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMassTag Super;


template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<struct FMassLookAtTargetTag>();

#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtFragments_h_126_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassLookAtTrajectoryPoint_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<struct FMassLookAtTrajectoryPoint>();

#define FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtFragments_h_148_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassLookAtTrajectoryFragment_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMassFragment Super;


template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<struct FMassLookAtTrajectoryFragment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtFragments_h


#define FOREACH_ENUM_EMASSLOOKATMODE(op) \
	op(EMassLookAtMode::LookForward) \
	op(EMassLookAtMode::LookAlongPath) \
	op(EMassLookAtMode::LookAtEntity) 

enum class EMassLookAtMode : uint8;
template<> struct TIsUEnumClass<EMassLookAtMode> { enum { Value = true }; };
template<> MASSAIBEHAVIOR_API UEnum* StaticEnum<EMassLookAtMode>();

#define FOREACH_ENUM_EMASSLOOKATGAZEMODE(op) \
	op(EMassLookAtGazeMode::None) \
	op(EMassLookAtGazeMode::Constant) \
	op(EMassLookAtGazeMode::Glance) 

enum class EMassLookAtGazeMode : uint8;
template<> struct TIsUEnumClass<EMassLookAtGazeMode> { enum { Value = true }; };
template<> MASSAIBEHAVIOR_API UEnum* StaticEnum<EMassLookAtGazeMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
