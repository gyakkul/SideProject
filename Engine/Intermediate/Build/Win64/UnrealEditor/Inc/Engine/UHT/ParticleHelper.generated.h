// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ParticleHelper.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleHelper_generated_h
#error "ParticleHelper.generated.h already included, missing '#pragma once' in ParticleHelper.h"
#endif
#define ENGINE_ParticleHelper_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_ParticleHelper_h


#define FOREACH_ENUM_EPARTICLEDETAILMODE(op) \
	op(PDM_Low) \
	op(PDM_Medium) \
	op(PDM_High) 

enum EParticleDetailMode : int;
template<> ENGINE_API UEnum* StaticEnum<EParticleDetailMode>();

#define FOREACH_ENUM_EPARTICLESIGNIFICANCELEVEL(op) \
	op(EParticleSignificanceLevel::Low) \
	op(EParticleSignificanceLevel::Medium) \
	op(EParticleSignificanceLevel::High) \
	op(EParticleSignificanceLevel::Critical) \
	op(EParticleSignificanceLevel::Num) 

enum class EParticleSignificanceLevel : uint8;
template<> struct TIsUEnumClass<EParticleSignificanceLevel> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EParticleSignificanceLevel>();

#define FOREACH_ENUM_EPARTICLESYSTEMINSIGNIFICANCEREACTION(op) \
	op(EParticleSystemInsignificanceReaction::Auto) \
	op(EParticleSystemInsignificanceReaction::Complete) \
	op(EParticleSystemInsignificanceReaction::DisableTick) \
	op(EParticleSystemInsignificanceReaction::DisableTickAndKill) \
	op(EParticleSystemInsignificanceReaction::Num) 

enum class EParticleSystemInsignificanceReaction : uint8;
template<> struct TIsUEnumClass<EParticleSystemInsignificanceReaction> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EParticleSystemInsignificanceReaction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
