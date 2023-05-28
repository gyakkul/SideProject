// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraCore.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARACORE_NiagaraCore_generated_h
#error "NiagaraCore.generated.h already included, missing '#pragma once' in NiagaraCore.h"
#endif
#define NIAGARACORE_NiagaraCore_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCore_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraVariableCommonReference_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NIAGARACORE_API UScriptStruct* StaticStruct<struct FNiagaraVariableCommonReference>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCore_h


#define FOREACH_ENUM_ENIAGARAITERATIONSOURCE(op) \
	op(ENiagaraIterationSource::Particles) \
	op(ENiagaraIterationSource::DataInterface) \
	op(ENiagaraIterationSource::DirectSet) 

enum class ENiagaraIterationSource : uint8;
template<> struct TIsUEnumClass<ENiagaraIterationSource> { enum { Value = true }; };
template<> NIAGARACORE_API UEnum* StaticEnum<ENiagaraIterationSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
