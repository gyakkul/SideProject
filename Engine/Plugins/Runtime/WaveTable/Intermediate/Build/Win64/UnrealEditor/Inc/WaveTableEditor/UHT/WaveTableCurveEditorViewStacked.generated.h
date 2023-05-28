// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaveTableCurveEditorViewStacked.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WAVETABLEEDITOR_WaveTableCurveEditorViewStacked_generated_h
#error "WaveTableCurveEditorViewStacked.generated.h already included, missing '#pragma once' in WaveTableCurveEditorViewStacked.h"
#endif
#define WAVETABLEEDITOR_WaveTableCurveEditorViewStacked_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTableEditor_Public_WaveTableCurveEditorViewStacked_h


#define FOREACH_ENUM_EWAVETABLECURVESOURCE(op) \
	op(EWaveTableCurveSource::Custom) \
	op(EWaveTableCurveSource::Expression) \
	op(EWaveTableCurveSource::Shared) \
	op(EWaveTableCurveSource::Unset) 

enum class EWaveTableCurveSource : uint8;
template<> struct TIsUEnumClass<EWaveTableCurveSource> { enum { Value = true }; };
template<> WAVETABLEEDITOR_API UEnum* StaticEnum<EWaveTableCurveSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
