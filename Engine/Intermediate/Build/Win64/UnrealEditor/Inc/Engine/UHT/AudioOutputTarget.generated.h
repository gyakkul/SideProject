// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/AudioOutputTarget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AudioOutputTarget_generated_h
#error "AudioOutputTarget.generated.h already included, missing '#pragma once' in AudioOutputTarget.h"
#endif
#define ENGINE_AudioOutputTarget_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioOutputTarget_h


#define FOREACH_ENUM_EAUDIOOUTPUTTARGET(op) \
	op(EAudioOutputTarget::Speaker) \
	op(EAudioOutputTarget::Controller) \
	op(EAudioOutputTarget::ControllerFallbackToSpeaker) 

namespace EAudioOutputTarget { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EAudioOutputTarget::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
