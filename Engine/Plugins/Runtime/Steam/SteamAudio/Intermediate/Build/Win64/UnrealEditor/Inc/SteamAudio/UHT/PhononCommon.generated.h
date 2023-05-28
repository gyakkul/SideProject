// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhononCommon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMAUDIO_PhononCommon_generated_h
#error "PhononCommon.generated.h already included, missing '#pragma once' in PhononCommon.h"
#endif
#define STEAMAUDIO_PhononCommon_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononCommon_h


#define FOREACH_ENUM_EQUALITYSETTINGS(op) \
	op(EQualitySettings::LOW) \
	op(EQualitySettings::MEDIUM) \
	op(EQualitySettings::HIGH) \
	op(EQualitySettings::CUSTOM) 

enum class EQualitySettings : uint8;
template<> struct TIsUEnumClass<EQualitySettings> { enum { Value = true }; };
template<> STEAMAUDIO_API UEnum* StaticEnum<EQualitySettings>();

#define FOREACH_ENUM_EIPLSPATIALIZATIONMETHOD(op) \
	op(EIplSpatializationMethod::PANNING) \
	op(EIplSpatializationMethod::HRTF) 

enum class EIplSpatializationMethod : uint8;
template<> struct TIsUEnumClass<EIplSpatializationMethod> { enum { Value = true }; };
template<> STEAMAUDIO_API UEnum* StaticEnum<EIplSpatializationMethod>();

#define FOREACH_ENUM_EIPLHRTFINTERPOLATIONMETHOD(op) \
	op(EIplHrtfInterpolationMethod::NEAREST) \
	op(EIplHrtfInterpolationMethod::BILINEAR) 

enum class EIplHrtfInterpolationMethod : uint8;
template<> struct TIsUEnumClass<EIplHrtfInterpolationMethod> { enum { Value = true }; };
template<> STEAMAUDIO_API UEnum* StaticEnum<EIplHrtfInterpolationMethod>();

#define FOREACH_ENUM_EIPLDIRECTOCCLUSIONMETHOD(op) \
	op(EIplDirectOcclusionMethod::RAYCAST) \
	op(EIplDirectOcclusionMethod::VOLUMETRIC) 

enum class EIplDirectOcclusionMethod : uint8;
template<> struct TIsUEnumClass<EIplDirectOcclusionMethod> { enum { Value = true }; };
template<> STEAMAUDIO_API UEnum* StaticEnum<EIplDirectOcclusionMethod>();

#define FOREACH_ENUM_EIPLDIRECTOCCLUSIONMODE(op) \
	op(EIplDirectOcclusionMode::NONE) \
	op(EIplDirectOcclusionMode::DIRECTOCCLUSION_NOTRANSMISSION) \
	op(EIplDirectOcclusionMode::DIRECTOCCLUSION_TRANSMISSIONBYVOLUME) \
	op(EIplDirectOcclusionMode::DIRECTOCCLUSION_TRANSMISSIONBYFREQUENCY) 

enum class EIplDirectOcclusionMode : uint8;
template<> struct TIsUEnumClass<EIplDirectOcclusionMode> { enum { Value = true }; };
template<> STEAMAUDIO_API UEnum* StaticEnum<EIplDirectOcclusionMode>();

#define FOREACH_ENUM_EIPLSIMULATIONTYPE(op) \
	op(EIplSimulationType::REALTIME) \
	op(EIplSimulationType::BAKED) \
	op(EIplSimulationType::DISABLED) 

enum class EIplSimulationType : uint8;
template<> struct TIsUEnumClass<EIplSimulationType> { enum { Value = true }; };
template<> STEAMAUDIO_API UEnum* StaticEnum<EIplSimulationType>();

#define FOREACH_ENUM_EIPLCONVOLUTIONTYPE(op) \
	op(EIplConvolutionType::PHONON) \
	op(EIplConvolutionType::TRUEAUDIONEXT) 

enum class EIplConvolutionType : uint8;
template<> struct TIsUEnumClass<EIplConvolutionType> { enum { Value = true }; };
template<> STEAMAUDIO_API UEnum* StaticEnum<EIplConvolutionType>();

#define FOREACH_ENUM_EIPLRAYTRACERTYPE(op) \
	op(EIplRayTracerType::PHONON) \
	op(EIplRayTracerType::EMBREE) \
	op(EIplRayTracerType::RADEONRAYS) 

enum class EIplRayTracerType : uint8;
template<> struct TIsUEnumClass<EIplRayTracerType> { enum { Value = true }; };
template<> STEAMAUDIO_API UEnum* StaticEnum<EIplRayTracerType>();

#define FOREACH_ENUM_EIPLAUDIOENGINE(op) \
	op(EIplAudioEngine::UNREAL) 

enum class EIplAudioEngine : uint8;
template<> struct TIsUEnumClass<EIplAudioEngine> { enum { Value = true }; };
template<> STEAMAUDIO_API UEnum* StaticEnum<EIplAudioEngine>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
