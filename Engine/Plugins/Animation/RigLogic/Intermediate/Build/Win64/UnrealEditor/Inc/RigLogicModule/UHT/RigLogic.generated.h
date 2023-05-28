// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigLogic.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGLOGICMODULE_RigLogic_generated_h
#error "RigLogic.generated.h already included, missing '#pragma once' in RigLogic.h"
#endif
#define RIGLOGICMODULE_RigLogic_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_RigLogic_h


#define FOREACH_ENUM_ERIGLOGICCALCULATIONTYPE(op) \
	op(ERigLogicCalculationType::Scalar) \
	op(ERigLogicCalculationType::SSE) \
	op(ERigLogicCalculationType::AVX) 

enum class ERigLogicCalculationType : uint8;
template<> struct TIsUEnumClass<ERigLogicCalculationType> { enum { Value = true }; };
template<> RIGLOGICMODULE_API UEnum* StaticEnum<ERigLogicCalculationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
