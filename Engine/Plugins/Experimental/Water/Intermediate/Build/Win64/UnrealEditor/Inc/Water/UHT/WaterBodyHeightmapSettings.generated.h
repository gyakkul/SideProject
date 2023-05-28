// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterBodyHeightmapSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WATER_WaterBodyHeightmapSettings_generated_h
#error "WaterBodyHeightmapSettings.generated.h already included, missing '#pragma once' in WaterBodyHeightmapSettings.h"
#endif
#define WATER_WaterBodyHeightmapSettings_generated_h

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyHeightmapSettings_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics; \
	WATER_API static class UScriptStruct* StaticStruct();


template<> WATER_API UScriptStruct* StaticStruct<struct FWaterBodyHeightmapSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyHeightmapSettings_h


#define FOREACH_ENUM_EWATERBRUSHBLENDTYPE(op) \
	op(EWaterBrushBlendType::AlphaBlend) \
	op(EWaterBrushBlendType::Min) \
	op(EWaterBrushBlendType::Max) \
	op(EWaterBrushBlendType::Additive) 

enum class EWaterBrushBlendType : uint8;
template<> struct TIsUEnumClass<EWaterBrushBlendType> { enum { Value = true }; };
template<> WATER_API UEnum* StaticEnum<EWaterBrushBlendType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
