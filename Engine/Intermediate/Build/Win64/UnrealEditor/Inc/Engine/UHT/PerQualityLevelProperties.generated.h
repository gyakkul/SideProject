// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PerQualityLevelProperties.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PerQualityLevelProperties_generated_h
#error "PerQualityLevelProperties.generated.h already included, missing '#pragma once' in PerQualityLevelProperties.h"
#endif
#define ENGINE_PerQualityLevelProperties_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_PerQualityLevelProperties_h_182_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPerQualityLevelInt>();

#define FID_Engine_Source_Runtime_Engine_Public_PerQualityLevelProperties_h_224_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPerQualityLevelFloat>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_PerQualityLevelProperties_h


#define FOREACH_ENUM_EPERQUALITYLEVELS(op) \
	op(EPerQualityLevels::Low) \
	op(EPerQualityLevels::Medium) \
	op(EPerQualityLevels::High) \
	op(EPerQualityLevels::Epic) \
	op(EPerQualityLevels::Cinematic) \
	op(EPerQualityLevels::Num) 

enum class EPerQualityLevels : uint8;
template<> struct TIsUEnumClass<EPerQualityLevels> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EPerQualityLevels>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
