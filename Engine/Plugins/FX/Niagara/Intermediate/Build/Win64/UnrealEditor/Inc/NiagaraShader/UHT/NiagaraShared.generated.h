// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraShared.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARASHADER_NiagaraShared_generated_h
#error "NiagaraShared.generated.h already included, missing '#pragma once' in NiagaraShared.h"
#endif
#define NIAGARASHADER_NiagaraShared_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics; \
	NIAGARASHADER_API static class UScriptStruct* StaticStruct();


template<> NIAGARASHADER_API UScriptStruct* StaticStruct<struct FNiagaraCompileEvent>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_147_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NIAGARASHADER_API UScriptStruct* StaticStruct<struct FNiagaraDataInterfaceGeneratedFunction>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_219_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NIAGARASHADER_API UScriptStruct* StaticStruct<struct FNiagaraDataInterfaceGPUParamInfo>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_253_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics; \
	NIAGARASHADER_API static class UScriptStruct* StaticStruct();


template<> NIAGARASHADER_API UScriptStruct* StaticStruct<struct FNiagaraShaderScriptExternalConstant>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_274_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NIAGARASHADER_API UScriptStruct* StaticStruct<struct FNiagaraShaderScriptParametersMetadata>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_697_DELEGATE \
NIAGARASHADER_API void FOnNiagaraScriptCompilationComplete_DelegateWrapper(const FMulticastScriptDelegate& OnNiagaraScriptCompilationComplete);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h


#define FOREACH_ENUM_FNIAGARACOMPILEEVENTSEVERITY(op) \
	op(FNiagaraCompileEventSeverity::Log) \
	op(FNiagaraCompileEventSeverity::Display) \
	op(FNiagaraCompileEventSeverity::Warning) \
	op(FNiagaraCompileEventSeverity::Error) 

enum class FNiagaraCompileEventSeverity : uint8;
template<> struct TIsUEnumClass<FNiagaraCompileEventSeverity> { enum { Value = true }; };
template<> NIAGARASHADER_API UEnum* StaticEnum<FNiagaraCompileEventSeverity>();

#define FOREACH_ENUM_FNIAGARACOMPILEEVENTSOURCE(op) \
	op(FNiagaraCompileEventSource::Unset) \
	op(FNiagaraCompileEventSource::ScriptDependency) 

enum class FNiagaraCompileEventSource : uint8;
template<> struct TIsUEnumClass<FNiagaraCompileEventSource> { enum { Value = true }; };
template<> NIAGARASHADER_API UEnum* StaticEnum<FNiagaraCompileEventSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
