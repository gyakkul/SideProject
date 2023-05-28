// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/MaterialMerging.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialMerging_generated_h
#error "MaterialMerging.generated.h already included, missing '#pragma once' in MaterialMerging.h"
#endif
#define ENGINE_MaterialMerging_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MaterialMerging_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialProxySettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMaterialProxySettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_MaterialMerging_h


#define FOREACH_ENUM_ETEXTURESIZINGTYPE(op) \
	op(TextureSizingType_UseSingleTextureSize) \
	op(TextureSizingType_UseAutomaticBiasedSizes) \
	op(TextureSizingType_UseManualOverrideTextureSize) \
	op(TextureSizingType_UseSimplygonAutomaticSizing) \
	op(TextureSizingType_AutomaticFromTexelDensity) \
	op(TextureSizingType_AutomaticFromMeshScreenSize) \
	op(TextureSizingType_AutomaticFromMeshDrawDistance) 

enum ETextureSizingType : int;
template<> ENGINE_API UEnum* StaticEnum<ETextureSizingType>();

#define FOREACH_ENUM_EMATERIALMERGETYPE(op) \
	op(MaterialMergeType_Default) \
	op(MaterialMergeType_Simplygon) 

enum EMaterialMergeType : int;
template<> ENGINE_API UEnum* StaticEnum<EMaterialMergeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
