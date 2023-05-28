// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhononMaterial.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMAUDIO_PhononMaterial_generated_h
#error "PhononMaterial.generated.h already included, missing '#pragma once' in PhononMaterial.h"
#endif
#define STEAMAUDIO_PhononMaterial_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononMaterial_h


#define FOREACH_ENUM_EPHONONMATERIAL(op) \
	op(EPhononMaterial::GENERIC) \
	op(EPhononMaterial::BRICK) \
	op(EPhononMaterial::CONCRETE) \
	op(EPhononMaterial::CERAMIC) \
	op(EPhononMaterial::GRAVEL) \
	op(EPhononMaterial::CARPET) \
	op(EPhononMaterial::GLASS) \
	op(EPhononMaterial::PLASTER) \
	op(EPhononMaterial::WOOD) \
	op(EPhononMaterial::METAL) \
	op(EPhononMaterial::ROCK) \
	op(EPhononMaterial::CUSTOM) 

enum class EPhononMaterial : uint8;
template<> struct TIsUEnumClass<EPhononMaterial> { enum { Value = true }; };
template<> STEAMAUDIO_API UEnum* StaticEnum<EPhononMaterial>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
