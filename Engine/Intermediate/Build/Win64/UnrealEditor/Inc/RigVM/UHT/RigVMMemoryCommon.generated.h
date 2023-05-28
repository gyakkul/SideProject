// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMCore/RigVMMemoryCommon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMMemoryCommon_generated_h
#error "RigVMMemoryCommon.generated.h already included, missing '#pragma once' in RigVMMemoryCommon.h"
#endif
#define RIGVM_RigVMMemoryCommon_generated_h

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryCommon_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMOperand_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMOperand>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryCommon_h


#define FOREACH_ENUM_ERIGVMMEMORYTYPE(op) \
	op(ERigVMMemoryType::Work) \
	op(ERigVMMemoryType::Literal) \
	op(ERigVMMemoryType::External) \
	op(ERigVMMemoryType::Debug) \
	op(ERigVMMemoryType::Invalid) 

enum class ERigVMMemoryType : uint8;
template<> struct TIsUEnumClass<ERigVMMemoryType> { enum { Value = true }; };
template<> RIGVM_API UEnum* StaticEnum<ERigVMMemoryType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
