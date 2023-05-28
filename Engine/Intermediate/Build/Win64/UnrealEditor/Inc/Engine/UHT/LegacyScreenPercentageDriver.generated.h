// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LegacyScreenPercentageDriver.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LegacyScreenPercentageDriver_generated_h
#error "LegacyScreenPercentageDriver.generated.h already included, missing '#pragma once' in LegacyScreenPercentageDriver.h"
#endif
#define ENGINE_LegacyScreenPercentageDriver_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_LegacyScreenPercentageDriver_h


#define FOREACH_ENUM_ESCREENPERCENTAGEMODE(op) \
	op(EScreenPercentageMode::Manual) \
	op(EScreenPercentageMode::BasedOnDisplayResolution) \
	op(EScreenPercentageMode::BasedOnDPIScale) 

enum class EScreenPercentageMode;
template<> struct TIsUEnumClass<EScreenPercentageMode> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EScreenPercentageMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
