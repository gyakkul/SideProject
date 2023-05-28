// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/ReplayResult.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ReplayResult_generated_h
#error "ReplayResult.generated.h already included, missing '#pragma once' in ReplayResult.h"
#endif
#define ENGINE_ReplayResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Net_ReplayResult_h


#define FOREACH_ENUM_EREPLAYRESULT(op) \
	op(EReplayResult::Success) \
	op(EReplayResult::ReplayNotFound) \
	op(EReplayResult::Corrupt) \
	op(EReplayResult::UnsupportedCheckpoint) \
	op(EReplayResult::GameSpecific) \
	op(EReplayResult::InitConnect) \
	op(EReplayResult::LoadMap) \
	op(EReplayResult::Serialization) \
	op(EReplayResult::StreamerError) \
	op(EReplayResult::ConnectionClosed) \
	op(EReplayResult::MissingArchive) \
	op(EReplayResult::Unknown) 

enum class EReplayResult : uint32;
template<> struct TIsUEnumClass<EReplayResult> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EReplayResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
