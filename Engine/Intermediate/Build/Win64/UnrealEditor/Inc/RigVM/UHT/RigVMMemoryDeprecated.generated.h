// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMCore/RigVMMemoryDeprecated.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMMemoryDeprecated_generated_h
#error "RigVMMemoryDeprecated.generated.h already included, missing '#pragma once' in RigVMMemoryDeprecated.h"
#endif
#define RIGVM_RigVMMemoryDeprecated_generated_h

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryDeprecated_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMRegister_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMRegister>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryDeprecated_h_198_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMRegisterOffset>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryDeprecated_h_318_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMMemoryContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryDeprecated_h


#define FOREACH_ENUM_ERIGVMREGISTERTYPE(op) \
	op(ERigVMRegisterType::Plain) \
	op(ERigVMRegisterType::String) \
	op(ERigVMRegisterType::Name) \
	op(ERigVMRegisterType::Struct) \
	op(ERigVMRegisterType::Invalid) 

enum class ERigVMRegisterType : uint8;
template<> struct TIsUEnumClass<ERigVMRegisterType> { enum { Value = true }; };
template<> RIGVM_API UEnum* StaticEnum<ERigVMRegisterType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
