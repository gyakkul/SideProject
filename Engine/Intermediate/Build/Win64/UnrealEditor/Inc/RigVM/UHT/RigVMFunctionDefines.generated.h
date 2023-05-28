// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/RigVMFunctionDefines.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunctionDefines_generated_h
#error "RigVMFunctionDefines.generated.h already included, missing '#pragma once' in RigVMFunctionDefines.h"
#endif
#define RIGVM_RigVMFunctionDefines_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunctionDefines_h


#define FOREACH_ENUM_ERIGVMTRANSFORMSPACE(op) \
	op(ERigVMTransformSpace::LocalSpace) \
	op(ERigVMTransformSpace::GlobalSpace) \
	op(ERigVMTransformSpace::Max) 

enum class ERigVMTransformSpace : uint8;
template<> struct TIsUEnumClass<ERigVMTransformSpace> { enum { Value = true }; };
template<> RIGVM_API UEnum* StaticEnum<ERigVMTransformSpace>();

#define FOREACH_ENUM_ERIGVMCLAMPSPATIALMODE(op) \
	op(ERigVMClampSpatialMode::Plane) \
	op(ERigVMClampSpatialMode::Cylinder) \
	op(ERigVMClampSpatialMode::Sphere) 

namespace ERigVMClampSpatialMode { enum Type : int; }
template<> RIGVM_API UEnum* StaticEnum<ERigVMClampSpatialMode::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
