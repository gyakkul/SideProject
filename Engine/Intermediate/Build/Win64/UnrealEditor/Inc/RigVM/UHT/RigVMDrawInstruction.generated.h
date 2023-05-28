// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMCore/RigVMDrawInstruction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMDrawInstruction_generated_h
#error "RigVMDrawInstruction.generated.h already included, missing '#pragma once' in RigVMDrawInstruction.h"
#endif
#define RIGVM_RigVMDrawInstruction_generated_h

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMDrawInstruction_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMDrawInstruction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMDrawInstruction_h


#define FOREACH_ENUM_ERIGVMDRAWSETTINGS(op) \
	op(ERigVMDrawSettings::Points) \
	op(ERigVMDrawSettings::Lines) \
	op(ERigVMDrawSettings::LineStrip) \
	op(ERigVMDrawSettings::DynamicMesh) 

namespace ERigVMDrawSettings { enum Primitive : int; }
template<> RIGVM_API UEnum* StaticEnum<ERigVMDrawSettings::Primitive>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
