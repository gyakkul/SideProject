// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptimusDataType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPTIMUSCORE_OptimusDataType_generated_h
#error "OptimusDataType.generated.h already included, missing '#pragma once' in OptimusDataType.h"
#endif
#define OPTIMUSCORE_OptimusDataType_generated_h

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDataType_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOptimusDataType_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FOptimusDataType>();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDataType_h_122_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOptimusDataTypeRef_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FOptimusDataTypeRef>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDataType_h


#define FOREACH_ENUM_EOPTIMUSDATATYPEUSAGEFLAGS(op) \
	op(EOptimusDataTypeUsageFlags::None) \
	op(EOptimusDataTypeUsageFlags::Resource) \
	op(EOptimusDataTypeUsageFlags::Variable) \
	op(EOptimusDataTypeUsageFlags::AnimAttributes) 

enum class EOptimusDataTypeUsageFlags : uint8;
template<> struct TIsUEnumClass<EOptimusDataTypeUsageFlags> { enum { Value = true }; };
template<> OPTIMUSCORE_API UEnum* StaticEnum<EOptimusDataTypeUsageFlags>();

#define FOREACH_ENUM_EOPTIMUSDATATYPEFLAGS(op) \
	op(EOptimusDataTypeFlags::None) \
	op(EOptimusDataTypeFlags::IsStructType) \
	op(EOptimusDataTypeFlags::ShowElements) 

enum class EOptimusDataTypeFlags : uint8;
template<> struct TIsUEnumClass<EOptimusDataTypeFlags> { enum { Value = true }; };
template<> OPTIMUSCORE_API UEnum* StaticEnum<EOptimusDataTypeFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
