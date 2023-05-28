// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterface/NiagaraDataInterfaceDataChannelCommon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraDataInterfaceDataChannelCommon_generated_h
#error "NiagaraDataInterfaceDataChannelCommon.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceDataChannelCommon.h"
#endif
#define NIAGARA_NiagaraDataInterfaceDataChannelCommon_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDataChannelCommon_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNDIDataChannelFunctionInfo_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNDIDataChannelFunctionInfo>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDataChannelCommon_h_146_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNDIDataChannel_GPUScriptParameterAccessInfo_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNDIDataChannel_GPUScriptParameterAccessInfo>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDataChannelCommon_h_158_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNDIDataChannelCompiledData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDataChannelCommon_h


#define FOREACH_ENUM_ENIAGARADATACHANNELALLOCATIONMODE(op) \
	op(ENiagaraDataChannelAllocationMode::Static) 

enum class ENiagaraDataChannelAllocationMode : uint8;
template<> struct TIsUEnumClass<ENiagaraDataChannelAllocationMode> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDataChannelAllocationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
