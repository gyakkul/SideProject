// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterBodyTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WATER_WaterBodyTypes_generated_h
#error "WaterBodyTypes.generated.h already included, missing '#pragma once' in WaterBodyTypes.h"
#endif
#define WATER_WaterBodyTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyTypes_h


#define FOREACH_ENUM_EWATERBODYTYPE(op) \
	op(EWaterBodyType::River) \
	op(EWaterBodyType::Lake) \
	op(EWaterBodyType::Ocean) \
	op(EWaterBodyType::Transition) \
	op(EWaterBodyType::Num) 

enum class EWaterBodyType : uint8;
template<> struct TIsUEnumClass<EWaterBodyType> { enum { Value = true }; };
template<> WATER_API UEnum* StaticEnum<EWaterBodyType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
