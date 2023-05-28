// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/LevelEditorPlayNetworkEmulationSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_LevelEditorPlayNetworkEmulationSettings_generated_h
#error "LevelEditorPlayNetworkEmulationSettings.generated.h already included, missing '#pragma once' in LevelEditorPlayNetworkEmulationSettings.h"
#endif
#define UNREALED_LevelEditorPlayNetworkEmulationSettings_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlayNetworkEmulationSettings_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNetworkEmulationPacketSettings_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FNetworkEmulationPacketSettings>();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlayNetworkEmulationSettings_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FLevelEditorPlayNetworkEmulationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlayNetworkEmulationSettings_h


#define FOREACH_ENUM_NETWORKEMULATIONTARGET(op) \
	op(NetworkEmulationTarget::Server) \
	op(NetworkEmulationTarget::Client) \
	op(NetworkEmulationTarget::Any) 

enum class NetworkEmulationTarget;
template<> struct TIsUEnumClass<NetworkEmulationTarget> { enum { Value = true }; };
template<> UNREALED_API UEnum* StaticEnum<NetworkEmulationTarget>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
