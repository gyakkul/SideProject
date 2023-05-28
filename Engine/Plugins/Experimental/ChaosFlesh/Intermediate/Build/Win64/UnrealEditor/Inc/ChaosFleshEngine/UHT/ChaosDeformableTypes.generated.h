// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosFlesh/ChaosDeformableTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSFLESHENGINE_ChaosDeformableTypes_generated_h
#error "ChaosDeformableTypes.generated.h already included, missing '#pragma once' in ChaosDeformableTypes.h"
#endif
#define CHAOSFLESHENGINE_ChaosDeformableTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableTypes_h


#define FOREACH_ENUM_EDEFORMABLEEXECUTIONMODEL(op) \
	op(EDeformableExecutionModel::Chaos_Deformable_PrePhysics) \
	op(EDeformableExecutionModel::Chaos_Deformable_DuringPhysics) \
	op(EDeformableExecutionModel::Chaos_Deformable_PostPhysics) \
	op(EDeformableExecutionModel::Chaos_Max) 

enum class EDeformableExecutionModel : uint8;
template<> struct TIsUEnumClass<EDeformableExecutionModel> { enum { Value = true }; };
template<> CHAOSFLESHENGINE_API UEnum* StaticEnum<EDeformableExecutionModel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
