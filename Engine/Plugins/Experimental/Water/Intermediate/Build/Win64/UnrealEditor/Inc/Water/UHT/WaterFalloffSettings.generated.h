// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterFalloffSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WATER_WaterFalloffSettings_generated_h
#error "WaterFalloffSettings.generated.h already included, missing '#pragma once' in WaterFalloffSettings.h"
#endif
#define WATER_WaterFalloffSettings_generated_h

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterFalloffSettings_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics; \
	WATER_API static class UScriptStruct* StaticStruct();


template<> WATER_API UScriptStruct* StaticStruct<struct FWaterFalloffSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterFalloffSettings_h


#define FOREACH_ENUM_EWATERBRUSHFALLOFFMODE(op) \
	op(EWaterBrushFalloffMode::Angle) \
	op(EWaterBrushFalloffMode::Width) 

enum class EWaterBrushFalloffMode : uint8;
template<> struct TIsUEnumClass<EWaterBrushFalloffMode> { enum { Value = true }; };
template<> WATER_API UEnum* StaticEnum<EWaterBrushFalloffMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
