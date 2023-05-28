// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/SkinnedAssetCommon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SkinnedAssetCommon_generated_h
#error "SkinnedAssetCommon.generated.h already included, missing '#pragma once' in SkinnedAssetCommon.h"
#endif
#define ENGINE_SkinnedAssetCommon_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAssetCommon_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSectionReference_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSectionReference>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAssetCommon_h_97_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSkeletalMeshLODInfo>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAssetCommon_h_233_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkeletalMaterial_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSkeletalMaterial>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAssetCommon_h


#define FOREACH_ENUM_ESKINCACHEUSAGE(op) \
	op(ESkinCacheUsage::Auto) \
	op(ESkinCacheUsage::Disabled) \
	op(ESkinCacheUsage::Enabled) 

enum class ESkinCacheUsage : uint8;
template<> struct TIsUEnumClass<ESkinCacheUsage> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ESkinCacheUsage>();

#define FOREACH_ENUM_ESKINCACHEDEFAULTBEHAVIOR(op) \
	op(ESkinCacheDefaultBehavior::Exclusive) \
	op(ESkinCacheDefaultBehavior::Inclusive) 

enum class ESkinCacheDefaultBehavior : uint8;
template<> struct TIsUEnumClass<ESkinCacheDefaultBehavior> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ESkinCacheDefaultBehavior>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
