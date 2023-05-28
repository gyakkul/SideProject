// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraTickBehaviorEnum.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraTickBehaviorEnum_generated_h
#error "NiagaraTickBehaviorEnum.generated.h already included, missing '#pragma once' in NiagaraTickBehaviorEnum.h"
#endif
#define NIAGARA_NiagaraTickBehaviorEnum_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraTickBehaviorEnum_h


#define FOREACH_ENUM_ENIAGARATICKBEHAVIOR(op) \
	op(ENiagaraTickBehavior::UsePrereqs) \
	op(ENiagaraTickBehavior::UseComponentTickGroup) \
	op(ENiagaraTickBehavior::ForceTickFirst) \
	op(ENiagaraTickBehavior::ForceTickLast) 

enum class ENiagaraTickBehavior : uint8;
template<> struct TIsUEnumClass<ENiagaraTickBehavior> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraTickBehavior>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
