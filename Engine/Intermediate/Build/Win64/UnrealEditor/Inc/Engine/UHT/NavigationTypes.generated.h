// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/Navigation/NavigationTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavigationTypes_generated_h
#error "NavigationTypes.generated.h already included, missing '#pragma once' in NavigationTypes.h"
#endif
#define ENGINE_NavigationTypes_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_290_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovementProperties_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMovementProperties>();

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_327_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavAgentProperties_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMovementProperties Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNavAgentProperties>();

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_397_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavDataConfig_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FNavAgentProperties Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNavDataConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h


#define FOREACH_ENUM_ENAVIGATIONOPTIONFLAG(op) \
	op(ENavigationOptionFlag::Default) \
	op(ENavigationOptionFlag::Enable) \
	op(ENavigationOptionFlag::Disable) 

namespace ENavigationOptionFlag { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ENavigationOptionFlag::Type>();

#define FOREACH_ENUM_ENAVDATAGATHERINGMODE(op) \
	op(ENavDataGatheringMode::Default) \
	op(ENavDataGatheringMode::Instant) \
	op(ENavDataGatheringMode::Lazy) 

enum class ENavDataGatheringMode : uint8;
template<> struct TIsUEnumClass<ENavDataGatheringMode> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ENavDataGatheringMode>();

#define FOREACH_ENUM_ENAVDATAGATHERINGMODECONFIG(op) \
	op(ENavDataGatheringModeConfig::Invalid) \
	op(ENavDataGatheringModeConfig::Instant) \
	op(ENavDataGatheringModeConfig::Lazy) 

enum class ENavDataGatheringModeConfig : uint8;
template<> struct TIsUEnumClass<ENavDataGatheringModeConfig> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ENavDataGatheringModeConfig>();

#define FOREACH_ENUM_ENAVPATHEVENT(op) \
	op(ENavPathEvent::Cleared) \
	op(ENavPathEvent::NewPath) \
	op(ENavPathEvent::UpdatedDueToGoalMoved) \
	op(ENavPathEvent::UpdatedDueToNavigationChanged) \
	op(ENavPathEvent::Invalidated) \
	op(ENavPathEvent::RePathFailed) \
	op(ENavPathEvent::MetaPathUpdate) \
	op(ENavPathEvent::Custom) 

namespace ENavPathEvent { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ENavPathEvent::Type>();

#define FOREACH_ENUM_ENAVIGATIONQUERYRESULT(op) \
	op(ENavigationQueryResult::Invalid) \
	op(ENavigationQueryResult::Error) \
	op(ENavigationQueryResult::Fail) \
	op(ENavigationQueryResult::Success) 

namespace ENavigationQueryResult { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ENavigationQueryResult::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
