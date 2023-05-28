// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ResonanceAudioEnums.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RESONANCEAUDIO_ResonanceAudioEnums_generated_h
#error "ResonanceAudioEnums.generated.h already included, missing '#pragma once' in ResonanceAudioEnums.h"
#endif
#define RESONANCEAUDIO_ResonanceAudioEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioEnums_h


#define FOREACH_ENUM_ERAQUALITYMODE(op) \
	op(ERaQualityMode::STEREO_PANNING) \
	op(ERaQualityMode::BINAURAL_LOW) \
	op(ERaQualityMode::BINAURAL_MEDIUM) \
	op(ERaQualityMode::BINAURAL_HIGH) 

enum class ERaQualityMode : uint8;
template<> struct TIsUEnumClass<ERaQualityMode> { enum { Value = true }; };
template<> RESONANCEAUDIO_API UEnum* StaticEnum<ERaQualityMode>();

#define FOREACH_ENUM_ERASPATIALIZATIONMETHOD(op) \
	op(ERaSpatializationMethod::STEREO_PANNING) \
	op(ERaSpatializationMethod::HRTF) 

enum class ERaSpatializationMethod : uint8;
template<> struct TIsUEnumClass<ERaSpatializationMethod> { enum { Value = true }; };
template<> RESONANCEAUDIO_API UEnum* StaticEnum<ERaSpatializationMethod>();

#define FOREACH_ENUM_ERADISTANCEROLLOFFMODEL(op) \
	op(ERaDistanceRolloffModel::LOGARITHMIC) \
	op(ERaDistanceRolloffModel::LINEAR) \
	op(ERaDistanceRolloffModel::NONE) 

enum class ERaDistanceRolloffModel : uint8;
template<> struct TIsUEnumClass<ERaDistanceRolloffModel> { enum { Value = true }; };
template<> RESONANCEAUDIO_API UEnum* StaticEnum<ERaDistanceRolloffModel>();

#define FOREACH_ENUM_ERAMATERIALNAME(op) \
	op(ERaMaterialName::TRANSPARENT) \
	op(ERaMaterialName::ACOUSTIC_CEILING_TILES) \
	op(ERaMaterialName::BRICK_BARE) \
	op(ERaMaterialName::BRICK_PAINTED) \
	op(ERaMaterialName::CONCRETE_BLOCK_COARSE) \
	op(ERaMaterialName::CONCRETE_BLOCK_PAINTED) \
	op(ERaMaterialName::CURTAIN_HEAVY) \
	op(ERaMaterialName::FIBER_GLASS_INSULATION) \
	op(ERaMaterialName::GLASS_THIN) \
	op(ERaMaterialName::GLASS_THICK) \
	op(ERaMaterialName::GRASS) \
	op(ERaMaterialName::LINOLEUM_ON_CONCRETE) \
	op(ERaMaterialName::MARBLE) \
	op(ERaMaterialName::METAL) \
	op(ERaMaterialName::PARQUET_ONCONCRETE) \
	op(ERaMaterialName::PLASTER_ROUGH) \
	op(ERaMaterialName::PLASTER_SMOOTH) \
	op(ERaMaterialName::PLYWOOD_PANEL) \
	op(ERaMaterialName::POLISHED_CONCRETE_OR_TILE) \
	op(ERaMaterialName::SHEETROCK) \
	op(ERaMaterialName::WATER_OR_ICE_SURFACE) \
	op(ERaMaterialName::WOOD_CEILING) \
	op(ERaMaterialName::WOOD_PANEL) \
	op(ERaMaterialName::UNIFORM) 

enum class ERaMaterialName : uint8;
template<> struct TIsUEnumClass<ERaMaterialName> { enum { Value = true }; };
template<> RESONANCEAUDIO_API UEnum* StaticEnum<ERaMaterialName>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
