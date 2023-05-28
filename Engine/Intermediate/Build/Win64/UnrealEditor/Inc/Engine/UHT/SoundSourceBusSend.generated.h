// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundSourceBusSend.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundSourceBusSend_generated_h
#error "SoundSourceBusSend.generated.h already included, missing '#pragma once' in SoundSourceBusSend.h"
#endif
#define ENGINE_SoundSourceBusSend_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBusSend_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundSourceBusSendInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBusSend_h


#define FOREACH_ENUM_ESOURCEBUSSENDLEVELCONTROLMETHOD(op) \
	op(ESourceBusSendLevelControlMethod::Linear) \
	op(ESourceBusSendLevelControlMethod::CustomCurve) \
	op(ESourceBusSendLevelControlMethod::Manual) 

enum class ESourceBusSendLevelControlMethod : uint8;
template<> struct TIsUEnumClass<ESourceBusSendLevelControlMethod> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ESourceBusSendLevelControlMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
