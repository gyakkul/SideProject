// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIEPLAYER_MoviePlayer_generated_h
#error "MoviePlayer.generated.h already included, missing '#pragma once' in MoviePlayer.h"
#endif
#define MOVIEPLAYER_MoviePlayer_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayer_h


#define FOREACH_ENUM_EMOVIEPLAYBACKTYPE(op) \
	op(MT_Normal) \
	op(MT_Looped) \
	op(MT_LoadingLoop) 

enum EMoviePlaybackType : int;
template<> MOVIEPLAYER_API UEnum* StaticEnum<EMoviePlaybackType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
