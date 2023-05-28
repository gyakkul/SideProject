// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraHlslTranslator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARAEDITOR_NiagaraHlslTranslator_generated_h
#error "NiagaraHlslTranslator.generated.h already included, missing '#pragma once' in NiagaraHlslTranslator.h"
#endif
#define NIAGARAEDITOR_NiagaraHlslTranslator_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraHlslTranslator_h


#define FOREACH_ENUM_ENIAGARADATASETACCESSMODE(op) \
	op(ENiagaraDataSetAccessMode::AppendConsume) \
	op(ENiagaraDataSetAccessMode::Direct) \
	op(ENiagaraDataSetAccessMode::Num) 

enum class ENiagaraDataSetAccessMode : uint8;
template<> struct TIsUEnumClass<ENiagaraDataSetAccessMode> { enum { Value = true }; };
template<> NIAGARAEDITOR_API UEnum* StaticEnum<ENiagaraDataSetAccessMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
