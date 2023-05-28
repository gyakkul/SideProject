// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraComponentPoolMethodEnum.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraComponentPoolMethodEnum_generated_h
#error "NiagaraComponentPoolMethodEnum.generated.h already included, missing '#pragma once' in NiagaraComponentPoolMethodEnum.h"
#endif
#define NIAGARA_NiagaraComponentPoolMethodEnum_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentPoolMethodEnum_h


#define FOREACH_ENUM_ENCPOOLMETHOD(op) \
	op(ENCPoolMethod::None) \
	op(ENCPoolMethod::AutoRelease) \
	op(ENCPoolMethod::ManualRelease) \
	op(ENCPoolMethod::ManualRelease_OnComplete) \
	op(ENCPoolMethod::FreeInPool) 

enum class ENCPoolMethod : uint8;
template<> struct TIsUEnumClass<ENCPoolMethod> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENCPoolMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
