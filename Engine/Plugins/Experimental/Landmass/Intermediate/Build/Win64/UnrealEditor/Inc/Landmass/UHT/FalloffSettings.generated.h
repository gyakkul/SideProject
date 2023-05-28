// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FalloffSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDMASS_FalloffSettings_generated_h
#error "FalloffSettings.generated.h already included, missing '#pragma once' in FalloffSettings.h"
#endif
#define LANDMASS_FalloffSettings_generated_h

#define FID_Engine_Plugins_Experimental_Landmass_Source_Runtime_Public_FalloffSettings_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics; \
	LANDMASS_API static class UScriptStruct* StaticStruct();


template<> LANDMASS_API UScriptStruct* StaticStruct<struct FLandmassFalloffSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Landmass_Source_Runtime_Public_FalloffSettings_h


#define FOREACH_ENUM_EBRUSHFALLOFFMODE(op) \
	op(EBrushFalloffMode::Angle) \
	op(EBrushFalloffMode::Width) 

enum class EBrushFalloffMode : uint8;
template<> struct TIsUEnumClass<EBrushFalloffMode> { enum { Value = true }; };
template<> LANDMASS_API UEnum* StaticEnum<EBrushFalloffMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
