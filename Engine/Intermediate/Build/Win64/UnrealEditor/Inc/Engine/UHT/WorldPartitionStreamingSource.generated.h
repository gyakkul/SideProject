// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionStreamingSource.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_WorldPartitionStreamingSource_generated_h
#error "WorldPartitionStreamingSource.generated.h already included, missing '#pragma once' in WorldPartitionStreamingSource.h"
#endif
#define ENGINE_WorldPartitionStreamingSource_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingSource_h_87_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStreamingSourceShape_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FStreamingSourceShape>();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingSource_h_236_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FWorldPartitionStreamingQuerySource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingSource_h


#define FOREACH_ENUM_ESTREAMINGSOURCETARGETBEHAVIOR(op) \
	op(EStreamingSourceTargetBehavior::Include) \
	op(EStreamingSourceTargetBehavior::Exclude) 

enum class EStreamingSourceTargetBehavior : uint8;
template<> struct TIsUEnumClass<EStreamingSourceTargetBehavior> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EStreamingSourceTargetBehavior>();

#define FOREACH_ENUM_ESTREAMINGSOURCETARGETSTATE(op) \
	op(EStreamingSourceTargetState::Loaded) \
	op(EStreamingSourceTargetState::Activated) 

enum class EStreamingSourceTargetState : uint8;
template<> struct TIsUEnumClass<EStreamingSourceTargetState> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EStreamingSourceTargetState>();

#define FOREACH_ENUM_ESTREAMINGSOURCEPRIORITY(op) \
	op(EStreamingSourcePriority::Highest) \
	op(EStreamingSourcePriority::High) \
	op(EStreamingSourcePriority::Normal) \
	op(EStreamingSourcePriority::Low) \
	op(EStreamingSourcePriority::Lowest) \
	op(EStreamingSourcePriority::Default) 

enum class EStreamingSourcePriority : uint8;
template<> struct TIsUEnumClass<EStreamingSourcePriority> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EStreamingSourcePriority>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
