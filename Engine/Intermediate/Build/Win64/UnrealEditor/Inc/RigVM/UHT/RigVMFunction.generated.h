// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMCore/RigVMFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_generated_h
#error "RigVMFunction.generated.h already included, missing '#pragma once' in RigVMFunction.h"
#endif
#define RIGVM_RigVMFunction_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMFunction_h


#define FOREACH_ENUM_ERIGVMPINDIRECTION(op) \
	op(ERigVMPinDirection::Input) \
	op(ERigVMPinDirection::Output) \
	op(ERigVMPinDirection::IO) \
	op(ERigVMPinDirection::Visible) \
	op(ERigVMPinDirection::Hidden) \
	op(ERigVMPinDirection::Invalid) 

enum class ERigVMPinDirection : uint8;
template<> struct TIsUEnumClass<ERigVMPinDirection> { enum { Value = true }; };
template<> RIGVM_API UEnum* StaticEnum<ERigVMPinDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
