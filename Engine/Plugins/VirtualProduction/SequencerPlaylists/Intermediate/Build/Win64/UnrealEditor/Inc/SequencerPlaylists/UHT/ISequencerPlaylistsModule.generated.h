// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ISequencerPlaylistsModule.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEQUENCERPLAYLISTS_ISequencerPlaylistsModule_generated_h
#error "ISequencerPlaylistsModule.generated.h already included, missing '#pragma once' in ISequencerPlaylistsModule.h"
#endif
#define SEQUENCERPLAYLISTS_ISequencerPlaylistsModule_generated_h

#define FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_ISequencerPlaylistsModule_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState_Statics; \
	SEQUENCERPLAYLISTS_API static class UScriptStruct* StaticStruct();


template<> SEQUENCERPLAYLISTS_API UScriptStruct* StaticStruct<struct FSequencerPlaylistPlaybackState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_ISequencerPlaylistsModule_h


#define FOREACH_ENUM_ESEQUENCERPLAYLISTPLAYBACKDIRECTION(op) \
	op(ESequencerPlaylistPlaybackDirection::Forward) \
	op(ESequencerPlaylistPlaybackDirection::Reverse) 

enum class ESequencerPlaylistPlaybackDirection : uint8;
template<> struct TIsUEnumClass<ESequencerPlaylistPlaybackDirection> { enum { Value = true }; };
template<> SEQUENCERPLAYLISTS_API UEnum* StaticEnum<ESequencerPlaylistPlaybackDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
