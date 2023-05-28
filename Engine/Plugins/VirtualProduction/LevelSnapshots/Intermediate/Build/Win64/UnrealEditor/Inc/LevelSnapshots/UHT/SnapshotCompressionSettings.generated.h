// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/SnapshotCompressionSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEVELSNAPSHOTS_SnapshotCompressionSettings_generated_h
#error "SnapshotCompressionSettings.generated.h already included, missing '#pragma once' in SnapshotCompressionSettings.h"
#endif
#define LEVELSNAPSHOTS_SnapshotCompressionSettings_generated_h

#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_SnapshotCompressionSettings_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSnapshotCompressionSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<struct FSnapshotCompressionSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_SnapshotCompressionSettings_h


#define FOREACH_ENUM_ESNAPSHOTCOMPRESSIONLEVEL(op) \
	op(ESnapshotCompressionLevel::HyperFast4) \
	op(ESnapshotCompressionLevel::HyperFast3) \
	op(ESnapshotCompressionLevel::HyperFast2) \
	op(ESnapshotCompressionLevel::HyperFast1) \
	op(ESnapshotCompressionLevel::None) \
	op(ESnapshotCompressionLevel::SuperFast) \
	op(ESnapshotCompressionLevel::VeryFast) \
	op(ESnapshotCompressionLevel::Fast) \
	op(ESnapshotCompressionLevel::Normal) \
	op(ESnapshotCompressionLevel::Optimal1) \
	op(ESnapshotCompressionLevel::Optimal2) \
	op(ESnapshotCompressionLevel::Optimal3) \
	op(ESnapshotCompressionLevel::Optimal4) 

enum class ESnapshotCompressionLevel : int8;
template<> struct TIsUEnumClass<ESnapshotCompressionLevel> { enum { Value = true }; };
template<> LEVELSNAPSHOTS_API UEnum* StaticEnum<ESnapshotCompressionLevel>();

#define FOREACH_ENUM_ESNAPSHOTCOMPRESSOR(op) \
	op(ESnapshotCompressor::Selkie) \
	op(ESnapshotCompressor::Mermaid) \
	op(ESnapshotCompressor::Kraken) \
	op(ESnapshotCompressor::Leviathan) 

enum class ESnapshotCompressor : uint8;
template<> struct TIsUEnumClass<ESnapshotCompressor> { enum { Value = true }; };
template<> LEVELSNAPSHOTS_API UEnum* StaticEnum<ESnapshotCompressor>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
