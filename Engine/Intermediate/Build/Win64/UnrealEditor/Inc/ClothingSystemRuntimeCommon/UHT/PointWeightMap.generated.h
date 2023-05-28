// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PointWeightMap.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLOTHINGSYSTEMRUNTIMECOMMON_PointWeightMap_generated_h
#error "PointWeightMap.generated.h already included, missing '#pragma once' in PointWeightMap.h"
#endif
#define CLOTHINGSYSTEMRUNTIMECOMMON_PointWeightMap_generated_h

#define FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_PointWeightMap_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPointWeightMap_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* StaticStruct<struct FPointWeightMap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_PointWeightMap_h


#define FOREACH_ENUM_EWEIGHTMAPTARGETCOMMON(op) \
	op(EWeightMapTargetCommon::None) \
	op(EWeightMapTargetCommon::MaxDistance) \
	op(EWeightMapTargetCommon::BackstopDistance) \
	op(EWeightMapTargetCommon::BackstopRadius) \
	op(EWeightMapTargetCommon::AnimDriveStiffness) \
	op(EWeightMapTargetCommon::AnimDriveDamping_DEPRECATED) 

enum class EWeightMapTargetCommon : uint8;
template<> struct TIsUEnumClass<EWeightMapTargetCommon> { enum { Value = true }; };
template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UEnum* StaticEnum<EWeightMapTargetCommon>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
