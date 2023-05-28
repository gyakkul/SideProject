// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataInterfaceEmitterBinding.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraDataInterfaceEmitterBinding_generated_h
#error "NiagaraDataInterfaceEmitterBinding.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceEmitterBinding.h"
#endif
#define NIAGARA_NiagaraDataInterfaceEmitterBinding_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceEmitterBinding_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraDataInterfaceEmitterBinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceEmitterBinding_h


#define FOREACH_ENUM_ENIAGARADATAINTERFACEEMITTERBINDINGMODE(op) \
	op(ENiagaraDataInterfaceEmitterBindingMode::Self) \
	op(ENiagaraDataInterfaceEmitterBindingMode::Other) 

enum class ENiagaraDataInterfaceEmitterBindingMode;
template<> struct TIsUEnumClass<ENiagaraDataInterfaceEmitterBindingMode> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDataInterfaceEmitterBindingMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
