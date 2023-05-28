// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AITypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AITypes_generated_h
#error "AITypes.generated.h already included, missing '#pragma once' in AITypes.h"
#endif
#define AIMODULE_AITypes_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_AITypes_h_436_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAIRequestID_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FAIRequestID>();

#define FID_Engine_Source_Runtime_AIModule_Classes_AITypes_h_495_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAIMoveRequest_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FAIMoveRequest>();

#define FID_Engine_Source_Runtime_AIModule_Classes_AITypes_h_627_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIntervalCountdown_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FIntervalCountdown>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_AITypes_h


#define FOREACH_ENUM_EAIOPTIONFLAG(op) \
	op(EAIOptionFlag::Default) \
	op(EAIOptionFlag::Enable) \
	op(EAIOptionFlag::Disable) 

namespace EAIOptionFlag { enum Type : int; }
template<> AIMODULE_API UEnum* StaticEnum<EAIOptionFlag::Type>();

#define FOREACH_ENUM_FAIDISTANCETYPE(op) \
	op(FAIDistanceType::Distance3D) \
	op(FAIDistanceType::Distance2D) \
	op(FAIDistanceType::DistanceZ) 

enum class FAIDistanceType : uint8;
template<> struct TIsUEnumClass<FAIDistanceType> { enum { Value = true }; };
template<> AIMODULE_API UEnum* StaticEnum<FAIDistanceType>();

#define FOREACH_ENUM_EPAWNACTIONABORTSTATE(op) \
	op(EPawnActionAbortState::NeverStarted) \
	op(EPawnActionAbortState::NotBeingAborted) \
	op(EPawnActionAbortState::MarkPendingAbort) \
	op(EPawnActionAbortState::LatentAbortInProgress) \
	op(EPawnActionAbortState::AbortDone) 

namespace EPawnActionAbortState { enum Type : int; }
template<> AIMODULE_API UEnum* StaticEnum<EPawnActionAbortState::Type>();

#define FOREACH_ENUM_EPAWNACTIONRESULT(op) \
	op(EPawnActionResult::NotStarted) \
	op(EPawnActionResult::InProgress) \
	op(EPawnActionResult::Success) \
	op(EPawnActionResult::Failed) \
	op(EPawnActionResult::Aborted) 

namespace EPawnActionResult { enum Type : int; }
template<> AIMODULE_API UEnum* StaticEnum<EPawnActionResult::Type>();

#define FOREACH_ENUM_EPAWNACTIONEVENTTYPE(op) \
	op(EPawnActionEventType::Invalid) \
	op(EPawnActionEventType::FailedToStart) \
	op(EPawnActionEventType::InstantAbort) \
	op(EPawnActionEventType::FinishedAborting) \
	op(EPawnActionEventType::FinishedExecution) \
	op(EPawnActionEventType::Push) 

namespace EPawnActionEventType { enum Type : int; }
template<> AIMODULE_API UEnum* StaticEnum<EPawnActionEventType::Type>();

#define FOREACH_ENUM_EAIREQUESTPRIORITY(op) \
	op(EAIRequestPriority::SoftScript) \
	op(EAIRequestPriority::Logic) \
	op(EAIRequestPriority::HardScript) \
	op(EAIRequestPriority::Reaction) \
	op(EAIRequestPriority::Ultimate) 

namespace EAIRequestPriority { enum Type : int; }
template<> AIMODULE_API UEnum* StaticEnum<EAIRequestPriority::Type>();

#define FOREACH_ENUM_EAILOCKSOURCE(op) \
	op(EAILockSource::Animation) \
	op(EAILockSource::Logic) \
	op(EAILockSource::Script) \
	op(EAILockSource::Gameplay) 

namespace EAILockSource { enum Type : int; }
template<> AIMODULE_API UEnum* StaticEnum<EAILockSource::Type>();

#define FOREACH_ENUM_EGENERICAICHECK(op) \
	op(EGenericAICheck::Less) \
	op(EGenericAICheck::LessOrEqual) \
	op(EGenericAICheck::Equal) \
	op(EGenericAICheck::NotEqual) \
	op(EGenericAICheck::GreaterOrEqual) \
	op(EGenericAICheck::Greater) \
	op(EGenericAICheck::IsTrue) 

enum class EGenericAICheck : uint8;
template<> struct TIsUEnumClass<EGenericAICheck> { enum { Value = true }; };
template<> AIMODULE_API UEnum* StaticEnum<EGenericAICheck>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
