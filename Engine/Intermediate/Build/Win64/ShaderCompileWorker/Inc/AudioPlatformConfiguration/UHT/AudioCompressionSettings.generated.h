// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioCompressionSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOPLATFORMCONFIGURATION_AudioCompressionSettings_generated_h
#error "AudioCompressionSettings.generated.h already included, missing '#pragma once' in AudioCompressionSettings.h"
#endif
#define AUDIOPLATFORMCONFIGURATION_AudioCompressionSettings_generated_h

#define FID_Engine_Source_Runtime_AudioPlatformConfiguration_Public_AudioCompressionSettings_h_150_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUDIOPLATFORMCONFIGURATION_API UScriptStruct* StaticStruct<struct FPlatformRuntimeAudioCompressionOverrides>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioPlatformConfiguration_Public_AudioCompressionSettings_h


#define FOREACH_ENUM_ESOUNDWAVESAMPLERATESETTINGS(op) \
	op(ESoundwaveSampleRateSettings::Max) \
	op(ESoundwaveSampleRateSettings::High) \
	op(ESoundwaveSampleRateSettings::Medium) \
	op(ESoundwaveSampleRateSettings::Low) \
	op(ESoundwaveSampleRateSettings::Min) \
	op(ESoundwaveSampleRateSettings::MatchDevice_DEPRECATED) 

enum class ESoundwaveSampleRateSettings : uint8;
template<> struct TIsUEnumClass<ESoundwaveSampleRateSettings> { enum { Value = true }; };
template<> AUDIOPLATFORMCONFIGURATION_API UEnum* StaticEnum<ESoundwaveSampleRateSettings>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
