// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/PoseSearchLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POSESEARCH_PoseSearchLibrary_generated_h
#error "PoseSearchLibrary.generated.h already included, missing '#pragma once' in PoseSearchLibrary.h"
#endif
#define POSESEARCH_PoseSearchLibrary_generated_h

#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> POSESEARCH_API UScriptStruct* StaticStruct<struct FMotionMatchingSettings>();

#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMotionMatchingState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> POSESEARCH_API UScriptStruct* StaticStruct<struct FMotionMatchingState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h


#define FOREACH_ENUM_EMOTIONMATCHINGFLAGS(op) \
	op(EMotionMatchingFlags::None) \
	op(EMotionMatchingFlags::JumpedToPose) 

enum class EMotionMatchingFlags : uint8;
template<> struct TIsUEnumClass<EMotionMatchingFlags> { enum { Value = true }; };
template<> POSESEARCH_API UEnum* StaticEnum<EMotionMatchingFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
