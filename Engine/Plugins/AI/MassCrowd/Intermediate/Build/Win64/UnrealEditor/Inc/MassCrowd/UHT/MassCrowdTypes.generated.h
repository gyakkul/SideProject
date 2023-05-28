// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassCrowdTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSCROWD_MassCrowdTypes_generated_h
#error "MassCrowdTypes.generated.h already included, missing '#pragma once' in MassCrowdTypes.h"
#endif
#define MASSCROWD_MassCrowdTypes_generated_h

#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdTypes_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCrowdTrackingLaneData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MASSCROWD_API UScriptStruct* StaticStruct<struct FCrowdTrackingLaneData>();

#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdTypes_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCrowdWaitSlot_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MASSCROWD_API UScriptStruct* StaticStruct<struct FCrowdWaitSlot>();

#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdTypes_h_81_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCrowdWaitAreaData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MASSCROWD_API UScriptStruct* StaticStruct<struct FCrowdWaitAreaData>();

#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdTypes_h_105_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCrowdBranchingLaneData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MASSCROWD_API UScriptStruct* StaticStruct<struct FCrowdBranchingLaneData>();

#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdTypes_h_119_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FZoneGraphCrowdLaneData_Statics; \
	MASSCROWD_API static class UScriptStruct* StaticStruct();


template<> MASSCROWD_API UScriptStruct* StaticStruct<struct FZoneGraphCrowdLaneData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdTypes_h


#define FOREACH_ENUM_ECROWDLANESTATE(op) \
	op(ECrowdLaneState::Opened) \
	op(ECrowdLaneState::Closed) 

enum class ECrowdLaneState : uint8;
template<> struct TIsUEnumClass<ECrowdLaneState> { enum { Value = true }; };
template<> MASSCROWD_API UEnum* StaticEnum<ECrowdLaneState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
