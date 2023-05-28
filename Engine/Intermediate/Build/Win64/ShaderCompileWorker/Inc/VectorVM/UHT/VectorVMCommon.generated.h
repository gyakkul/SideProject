// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VectorVMCommon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VECTORVM_VectorVMCommon_generated_h
#error "VectorVMCommon.generated.h already included, missing '#pragma once' in VectorVMCommon.h"
#endif
#define VECTORVM_VectorVMCommon_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_VectorVM_Public_VectorVMCommon_h


#define FOREACH_ENUM_EVECTORVMBASETYPES(op) \
	op(EVectorVMBaseTypes::Float) \
	op(EVectorVMBaseTypes::Int) \
	op(EVectorVMBaseTypes::Bool) \
	op(EVectorVMBaseTypes::Num) 

enum class EVectorVMBaseTypes : uint8;
template<> struct TIsUEnumClass<EVectorVMBaseTypes> { enum { Value = true }; };
template<> VECTORVM_API UEnum* StaticEnum<EVectorVMBaseTypes>();

#define FOREACH_ENUM_EVECTORVMOPERANDLOCATION(op) \
	op(EVectorVMOperandLocation::Register) \
	op(EVectorVMOperandLocation::Constant) \
	op(EVectorVMOperandLocation::Num) 

enum class EVectorVMOperandLocation : uint8;
template<> struct TIsUEnumClass<EVectorVMOperandLocation> { enum { Value = true }; };
template<> VECTORVM_API UEnum* StaticEnum<EVectorVMOperandLocation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
