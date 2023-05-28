// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaveTableSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WAVETABLE_WaveTableSettings_generated_h
#error "WaveTableSettings.generated.h already included, missing '#pragma once' in WaveTableSettings.h"
#endif
#define WAVETABLE_WaveTableSettings_generated_h

#define FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableSettings_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaveTableSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WAVETABLE_API UScriptStruct* StaticStruct<struct FWaveTableSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableSettings_h


#define FOREACH_ENUM_EWAVETABLERESOLUTION(op) \
	op(EWaveTableResolution::None) \
	op(EWaveTableResolution::Res_8) \
	op(EWaveTableResolution::Res_16) \
	op(EWaveTableResolution::Res_32) \
	op(EWaveTableResolution::Res_64) \
	op(EWaveTableResolution::Res_128) \
	op(EWaveTableResolution::Res_256) \
	op(EWaveTableResolution::Res_512) \
	op(EWaveTableResolution::Res_1024) \
	op(EWaveTableResolution::Res_2048) \
	op(EWaveTableResolution::Res_4096) \
	op(EWaveTableResolution::Res_Max) \
	op(EWaveTableResolution::Maximum) 

enum class EWaveTableResolution : uint8;
template<> struct TIsUEnumClass<EWaveTableResolution> { enum { Value = true }; };
template<> WAVETABLE_API UEnum* StaticEnum<EWaveTableResolution>();

#define FOREACH_ENUM_EWAVETABLECURVE(op) \
	op(EWaveTableCurve::Linear) \
	op(EWaveTableCurve::Linear_Inv) \
	op(EWaveTableCurve::Exp) \
	op(EWaveTableCurve::Exp_Inverse) \
	op(EWaveTableCurve::Log) \
	op(EWaveTableCurve::Sin) \
	op(EWaveTableCurve::Sin_Full) \
	op(EWaveTableCurve::SCurve) \
	op(EWaveTableCurve::Shared) \
	op(EWaveTableCurve::Custom) \
	op(EWaveTableCurve::File) \
	op(EWaveTableCurve::Count) 

enum class EWaveTableCurve : uint8;
template<> struct TIsUEnumClass<EWaveTableCurve> { enum { Value = true }; };
template<> WAVETABLE_API UEnum* StaticEnum<EWaveTableCurve>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
