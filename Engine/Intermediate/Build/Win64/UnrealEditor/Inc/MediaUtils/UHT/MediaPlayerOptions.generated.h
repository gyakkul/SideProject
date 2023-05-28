// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaPlayerOptions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MEDIAUTILS_MediaPlayerOptions_generated_h
#error "MediaPlayerOptions.generated.h already included, missing '#pragma once' in MediaPlayerOptions.h"
#endif
#define MEDIAUTILS_MediaPlayerOptions_generated_h

#define FID_Engine_Source_Runtime_MediaUtils_Public_MediaPlayerOptions_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics; \
	MEDIAUTILS_API static class UScriptStruct* StaticStruct();


template<> MEDIAUTILS_API UScriptStruct* StaticStruct<struct FMediaPlayerTrackOptions>();

#define FID_Engine_Source_Runtime_MediaUtils_Public_MediaPlayerOptions_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics; \
	MEDIAUTILS_API static class UScriptStruct* StaticStruct();


template<> MEDIAUTILS_API UScriptStruct* StaticStruct<struct FMediaPlayerOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MediaUtils_Public_MediaPlayerOptions_h


#define FOREACH_ENUM_EMEDIAPLAYEROPTIONBOOLEANOVERRIDE(op) \
	op(EMediaPlayerOptionBooleanOverride::UseMediaPlayerSetting) \
	op(EMediaPlayerOptionBooleanOverride::Enabled) \
	op(EMediaPlayerOptionBooleanOverride::Disabled) 

enum class EMediaPlayerOptionBooleanOverride : uint8;
template<> struct TIsUEnumClass<EMediaPlayerOptionBooleanOverride> { enum { Value = true }; };
template<> MEDIAUTILS_API UEnum* StaticEnum<EMediaPlayerOptionBooleanOverride>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
