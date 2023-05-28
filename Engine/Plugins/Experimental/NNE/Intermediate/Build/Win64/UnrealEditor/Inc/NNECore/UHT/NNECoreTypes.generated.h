// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NNECoreTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NNECORE_NNECoreTypes_generated_h
#error "NNECoreTypes.generated.h already included, missing '#pragma once' in NNECoreTypes.h"
#endif
#define NNECORE_NNECoreTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreTypes_h


#define FOREACH_ENUM_ENNETENSORDATATYPE(op) \
	op(ENNETensorDataType::None) \
	op(ENNETensorDataType::Char) \
	op(ENNETensorDataType::Boolean) \
	op(ENNETensorDataType::Half) \
	op(ENNETensorDataType::Float) \
	op(ENNETensorDataType::Double) \
	op(ENNETensorDataType::Int8) \
	op(ENNETensorDataType::Int16) \
	op(ENNETensorDataType::Int32) \
	op(ENNETensorDataType::Int64) \
	op(ENNETensorDataType::UInt8) \
	op(ENNETensorDataType::UInt16) \
	op(ENNETensorDataType::UInt32) \
	op(ENNETensorDataType::UInt64) \
	op(ENNETensorDataType::Complex64) \
	op(ENNETensorDataType::Complex128) \
	op(ENNETensorDataType::BFloat16) 

enum class ENNETensorDataType : uint8;
template<> struct TIsUEnumClass<ENNETensorDataType> { enum { Value = true }; };
template<> NNECORE_API UEnum* StaticEnum<ENNETensorDataType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
