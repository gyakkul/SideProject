// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/ReplicatedState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ReplicatedState_generated_h
#error "ReplicatedState.generated.h already included, missing '#pragma once' in ReplicatedState.h"
#endif
#define ENGINE_ReplicatedState_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicatedState_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRepAttachment_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRepAttachment>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicatedState_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigidBodyState_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRigidBodyState>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicatedState_h_119_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRepMovement_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRepMovement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicatedState_h


#define FOREACH_ENUM_EVECTORQUANTIZATION(op) \
	op(EVectorQuantization::RoundWholeNumber) \
	op(EVectorQuantization::RoundOneDecimal) \
	op(EVectorQuantization::RoundTwoDecimals) 

enum class EVectorQuantization : uint8;
template<> struct TIsUEnumClass<EVectorQuantization> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EVectorQuantization>();

#define FOREACH_ENUM_EROTATORQUANTIZATION(op) \
	op(ERotatorQuantization::ByteComponents) \
	op(ERotatorQuantization::ShortComponents) 

enum class ERotatorQuantization : uint8;
template<> struct TIsUEnumClass<ERotatorQuantization> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ERotatorQuantization>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
