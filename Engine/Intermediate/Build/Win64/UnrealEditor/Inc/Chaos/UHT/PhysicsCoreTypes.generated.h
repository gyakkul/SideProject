// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsCoreTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOS_PhysicsCoreTypes_generated_h
#error "PhysicsCoreTypes.generated.h already included, missing '#pragma once' in PhysicsCoreTypes.h"
#endif
#define CHAOS_PhysicsCoreTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Chaos_Public_PhysicsCoreTypes_h


#define FOREACH_ENUM_ECHAOSSOLVERTICKMODE(op) \
	op(EChaosSolverTickMode::Fixed) \
	op(EChaosSolverTickMode::Variable) \
	op(EChaosSolverTickMode::VariableCapped) \
	op(EChaosSolverTickMode::VariableCappedWithTarget) 

enum class EChaosSolverTickMode : uint8;
template<> struct TIsUEnumClass<EChaosSolverTickMode> { enum { Value = true }; };
template<> CHAOS_API UEnum* StaticEnum<EChaosSolverTickMode>();

#define FOREACH_ENUM_ECHAOSTHREADINGMODE(op) \
	op(EChaosThreadingMode::DedicatedThread) \
	op(EChaosThreadingMode::TaskGraph) \
	op(EChaosThreadingMode::SingleThread) \
	op(EChaosThreadingMode::Num) \
	op(EChaosThreadingMode::Invalid) 

enum class EChaosThreadingMode : uint8;
template<> struct TIsUEnumClass<EChaosThreadingMode> { enum { Value = true }; };
template<> CHAOS_API UEnum* StaticEnum<EChaosThreadingMode>();

#define FOREACH_ENUM_ECHAOSBUFFERMODE(op) \
	op(EChaosBufferMode::Double) \
	op(EChaosBufferMode::Triple) \
	op(EChaosBufferMode::Num) \
	op(EChaosBufferMode::Invalid) 

enum class EChaosBufferMode : uint8;
template<> struct TIsUEnumClass<EChaosBufferMode> { enum { Value = true }; };
template<> CHAOS_API UEnum* StaticEnum<EChaosBufferMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
