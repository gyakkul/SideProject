// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/PlayerMuteList.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PlayerMuteList_generated_h
#error "PlayerMuteList.generated.h already included, missing '#pragma once' in PlayerMuteList.h"
#endif
#define ENGINE_PlayerMuteList_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerMuteList_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerMuteList_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPlayerMuteList>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerMuteList_h


#define FOREACH_ENUM_EVOICEBLOCKREASONS(op) \
	op(EVoiceBlockReasons::None) \
	op(EVoiceBlockReasons::Muted) \
	op(EVoiceBlockReasons::MutedBy) \
	op(EVoiceBlockReasons::Gameplay) \
	op(EVoiceBlockReasons::Blocked) \
	op(EVoiceBlockReasons::BlockedBy) 

enum class EVoiceBlockReasons : uint8;
template<> struct TIsUEnumClass<EVoiceBlockReasons> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EVoiceBlockReasons>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
