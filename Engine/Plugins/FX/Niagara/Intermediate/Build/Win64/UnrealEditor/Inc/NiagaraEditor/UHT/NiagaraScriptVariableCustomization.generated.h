// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Customizations/NiagaraScriptVariableCustomization.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARAEDITOR_NiagaraScriptVariableCustomization_generated_h
#error "NiagaraScriptVariableCustomization.generated.h already included, missing '#pragma once' in NiagaraScriptVariableCustomization.h"
#endif
#define NIAGARAEDITOR_NiagaraScriptVariableCustomization_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraScriptVariableCustomization_h


#define FOREACH_ENUM_ENIAGARALIBRARYSYNCHRONIZEDDEFAULTMODE(op) \
	op(ENiagaraLibrarySynchronizedDefaultMode::Definition) \
	op(ENiagaraLibrarySynchronizedDefaultMode::Value) \
	op(ENiagaraLibrarySynchronizedDefaultMode::Binding) \
	op(ENiagaraLibrarySynchronizedDefaultMode::Custom) \
	op(ENiagaraLibrarySynchronizedDefaultMode::FailIfPreviouslyNotSet) 

enum class ENiagaraLibrarySynchronizedDefaultMode : uint8;
template<> struct TIsUEnumClass<ENiagaraLibrarySynchronizedDefaultMode> { enum { Value = true }; };
template<> NIAGARAEDITOR_API UEnum* StaticEnum<ENiagaraLibrarySynchronizedDefaultMode>();

#define FOREACH_ENUM_ENIAGARALIBRARYSOURCEDEFAULTMODE(op) \
	op(ENiagaraLibrarySourceDefaultMode::Value) \
	op(ENiagaraLibrarySourceDefaultMode::Binding) \
	op(ENiagaraLibrarySourceDefaultMode::FailIfPreviouslyNotSet) 

enum class ENiagaraLibrarySourceDefaultMode : uint8;
template<> struct TIsUEnumClass<ENiagaraLibrarySourceDefaultMode> { enum { Value = true }; };
template<> NIAGARAEDITOR_API UEnum* StaticEnum<ENiagaraLibrarySourceDefaultMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
