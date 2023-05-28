// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptimusDataDomain.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPTIMUSCORE_OptimusDataDomain_generated_h
#error "OptimusDataDomain.generated.h already included, missing '#pragma once' in OptimusDataDomain.h"
#endif
#define OPTIMUSCORE_OptimusDataDomain_generated_h

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDataDomain_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOptimusDataDomain_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<struct FOptimusDataDomain>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDataDomain_h


#define FOREACH_ENUM_EOPTIMUSDATADOMAINTYPE(op) \
	op(EOptimusDataDomainType::Dimensional) \
	op(EOptimusDataDomainType::Expression) 

enum class EOptimusDataDomainType;
template<> struct TIsUEnumClass<EOptimusDataDomainType> { enum { Value = true }; };
template<> OPTIMUSCORE_API UEnum* StaticEnum<EOptimusDataDomainType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
