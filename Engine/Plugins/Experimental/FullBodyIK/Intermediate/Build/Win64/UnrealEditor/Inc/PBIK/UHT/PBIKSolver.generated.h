// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/PBIKSolver.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PBIK_PBIKSolver_generated_h
#error "PBIKSolver.generated.h already included, missing '#pragma once' in PBIKSolver.h"
#endif
#define PBIK_PBIKSolver_generated_h

#define FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_Core_PBIKSolver_h_109_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRootPrePullSettings_Statics; \
	PBIK_API static class UScriptStruct* StaticStruct();


template<> PBIK_API UScriptStruct* StaticStruct<struct FRootPrePullSettings>();

#define FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_Core_PBIKSolver_h_147_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PBIK_API UScriptStruct* StaticStruct<struct FPBIKSolverSettings>();

#define FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_Core_PBIKSolver_h_194_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPBIKSolver_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PBIK_API UScriptStruct* StaticStruct<struct FPBIKSolver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_Core_PBIKSolver_h


#define FOREACH_ENUM_EPBIKROOTBEHAVIOR(op) \
	op(EPBIKRootBehavior::PrePull) \
	op(EPBIKRootBehavior::PinToInput) \
	op(EPBIKRootBehavior::Free) 

enum class EPBIKRootBehavior : uint8;
template<> struct TIsUEnumClass<EPBIKRootBehavior> { enum { Value = true }; };
template<> PBIK_API UEnum* StaticEnum<EPBIKRootBehavior>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
