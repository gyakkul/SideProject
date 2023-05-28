// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HLOD/HLODLevelExclusion.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_HLODLevelExclusion_generated_h
#error "HLODLevelExclusion.generated.h already included, missing '#pragma once' in HLODLevelExclusion.h"
#endif
#define ENGINE_HLODLevelExclusion_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODLevelExclusion_h


#define FOREACH_ENUM_EHLODLEVELEXCLUSION(op) \
	op(EHLODLevelExclusion::HLOD0) \
	op(EHLODLevelExclusion::HLOD1) \
	op(EHLODLevelExclusion::HLOD2) \
	op(EHLODLevelExclusion::HLOD3) \
	op(EHLODLevelExclusion::HLOD4) \
	op(EHLODLevelExclusion::HLOD5) \
	op(EHLODLevelExclusion::HLOD6) \
	op(EHLODLevelExclusion::HLOD7) 

enum class EHLODLevelExclusion : uint8;
template<> struct TIsUEnumClass<EHLODLevelExclusion> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EHLODLevelExclusion>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
