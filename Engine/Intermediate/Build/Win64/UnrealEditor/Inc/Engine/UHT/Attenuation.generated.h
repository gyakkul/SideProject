// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/Attenuation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Attenuation_generated_h
#error "Attenuation.generated.h already included, missing '#pragma once' in Attenuation.h"
#endif
#define ENGINE_Attenuation_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Attenuation_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBaseAttenuationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_Attenuation_h


#define FOREACH_ENUM_EATTENUATIONDISTANCEMODEL(op) \
	op(EAttenuationDistanceModel::Linear) \
	op(EAttenuationDistanceModel::Logarithmic) \
	op(EAttenuationDistanceModel::Inverse) \
	op(EAttenuationDistanceModel::LogReverse) \
	op(EAttenuationDistanceModel::NaturalSound) \
	op(EAttenuationDistanceModel::Custom) 

enum class EAttenuationDistanceModel : uint8;
template<> struct TIsUEnumClass<EAttenuationDistanceModel> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EAttenuationDistanceModel>();

#define FOREACH_ENUM_EATTENUATIONSHAPE(op) \
	op(EAttenuationShape::Sphere) \
	op(EAttenuationShape::Capsule) \
	op(EAttenuationShape::Box) \
	op(EAttenuationShape::Cone) 

namespace EAttenuationShape { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EAttenuationShape::Type>();

#define FOREACH_ENUM_ENATURALSOUNDFALLOFFMODE(op) \
	op(ENaturalSoundFalloffMode::Continues) \
	op(ENaturalSoundFalloffMode::Silent) \
	op(ENaturalSoundFalloffMode::Hold) 

enum class ENaturalSoundFalloffMode : uint8;
template<> struct TIsUEnumClass<ENaturalSoundFalloffMode> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ENaturalSoundFalloffMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
