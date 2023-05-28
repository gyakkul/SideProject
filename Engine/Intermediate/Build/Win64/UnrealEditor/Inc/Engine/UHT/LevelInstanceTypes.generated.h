// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelInstance/LevelInstanceTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LevelInstanceTypes_generated_h
#error "LevelInstanceTypes.generated.h already included, missing '#pragma once' in LevelInstanceTypes.h"
#endif
#define ENGINE_LevelInstanceTypes_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceTypes_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNewLevelInstanceParams_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNewLevelInstanceParams>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceTypes_h


#define FOREACH_ENUM_ELEVELINSTANCERUNTIMEBEHAVIOR(op) \
	op(ELevelInstanceRuntimeBehavior::None) \
	op(ELevelInstanceRuntimeBehavior::Embedded_Deprecated) \
	op(ELevelInstanceRuntimeBehavior::Partitioned) \
	op(ELevelInstanceRuntimeBehavior::LevelStreaming) 

enum class ELevelInstanceRuntimeBehavior : uint8;
template<> struct TIsUEnumClass<ELevelInstanceRuntimeBehavior> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ELevelInstanceRuntimeBehavior>();

#define FOREACH_ENUM_ELEVELINSTANCECREATIONTYPE(op) \
	op(ELevelInstanceCreationType::LevelInstance) \
	op(ELevelInstanceCreationType::PackedLevelActor) 

enum class ELevelInstanceCreationType : uint8;
template<> struct TIsUEnumClass<ELevelInstanceCreationType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ELevelInstanceCreationType>();

#define FOREACH_ENUM_ELEVELINSTANCEPIVOTTYPE(op) \
	op(ELevelInstancePivotType::CenterMinZ) \
	op(ELevelInstancePivotType::Center) \
	op(ELevelInstancePivotType::Actor) \
	op(ELevelInstancePivotType::WorldOrigin) 

enum class ELevelInstancePivotType : uint8;
template<> struct TIsUEnumClass<ELevelInstancePivotType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ELevelInstancePivotType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
