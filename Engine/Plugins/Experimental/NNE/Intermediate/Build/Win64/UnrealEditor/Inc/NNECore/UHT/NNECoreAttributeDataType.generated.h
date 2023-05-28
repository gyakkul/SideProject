// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NNECoreAttributeDataType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NNECORE_NNECoreAttributeDataType_generated_h
#error "NNECoreAttributeDataType.generated.h already included, missing '#pragma once' in NNECoreAttributeDataType.h"
#endif
#define NNECORE_NNECoreAttributeDataType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Internal_NNECoreAttributeDataType_h


#define FOREACH_ENUM_ENNEATTRIBUTEDATATYPE(op) \
	op(ENNEAttributeDataType::None) \
	op(ENNEAttributeDataType::Float) \
	op(ENNEAttributeDataType::FloatArray) \
	op(ENNEAttributeDataType::Int32) \
	op(ENNEAttributeDataType::Int32Array) \
	op(ENNEAttributeDataType::String) \
	op(ENNEAttributeDataType::StringArray) 

enum class ENNEAttributeDataType : uint8;
template<> struct TIsUEnumClass<ENNEAttributeDataType> { enum { Value = true }; };
template<> NNECORE_API UEnum* StaticEnum<ENNEAttributeDataType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
