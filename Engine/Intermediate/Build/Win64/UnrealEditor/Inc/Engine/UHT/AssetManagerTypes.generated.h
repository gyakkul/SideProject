// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/AssetManagerTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AssetManagerTypes_generated_h
#error "AssetManagerTypes.generated.h already included, missing '#pragma once' in AssetManagerTypes.h"
#endif
#define ENGINE_AssetManagerTypes_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerTypes_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPrimaryAssetRules>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerTypes_h_138_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPrimaryAssetTypeInfo>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerTypes_h_258_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAssetManagerSearchRules>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerTypes_h


#define FOREACH_ENUM_EPRIMARYASSETCOOKRULE(op) \
	op(EPrimaryAssetCookRule::Unknown) \
	op(EPrimaryAssetCookRule::NeverCook) \
	op(EPrimaryAssetCookRule::ProductionNeverCook) \
	op(EPrimaryAssetCookRule::DevelopmentCook) \
	op(EPrimaryAssetCookRule::DevelopmentAlwaysProductionNeverCook) \
	op(EPrimaryAssetCookRule::DevelopmentAlwaysCook) \
	op(EPrimaryAssetCookRule::DevelopmentAlwaysProductionUnknownCook) \
	op(EPrimaryAssetCookRule::AlwaysCook) 

enum class EPrimaryAssetCookRule : uint8;
template<> struct TIsUEnumClass<EPrimaryAssetCookRule> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EPrimaryAssetCookRule>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
