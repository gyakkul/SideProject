// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConcertSequencerMessages.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONCERTSYNCCORE_ConcertSequencerMessages_generated_h
#error "ConcertSequencerMessages.generated.h already included, missing '#pragma once' in ConcertSequencerMessages.h"
#endif
#define CONCERTSYNCCORE_ConcertSequencerMessages_generated_h

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSequencerState_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertSequencerState>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSequencerOpenEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertSequencerOpenEvent>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSequencerCloseEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertSequencerCloseEvent>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_96_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSequencerStateEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertSequencerStateEvent>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_109_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSequencerStateSyncEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertSequencerStateSyncEvent>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h_122_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSequencerTimeAdjustmentEvent_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertSequencerTimeAdjustmentEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertSequencerMessages_h


#define FOREACH_ENUM_ECONCERTMOVIESCENEPLAYERSTATUS(op) \
	op(EConcertMovieScenePlayerStatus::Stopped) \
	op(EConcertMovieScenePlayerStatus::Playing) \
	op(EConcertMovieScenePlayerStatus::Scrubbing) \
	op(EConcertMovieScenePlayerStatus::Jumping) \
	op(EConcertMovieScenePlayerStatus::Stepping) \
	op(EConcertMovieScenePlayerStatus::Paused) 

enum class EConcertMovieScenePlayerStatus : uint8;
template<> struct TIsUEnumClass<EConcertMovieScenePlayerStatus> { enum { Value = true }; };
template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EConcertMovieScenePlayerStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
