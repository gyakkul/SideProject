// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraActions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARAEDITOR_NiagaraActions_generated_h
#error "NiagaraActions.generated.h already included, missing '#pragma once' in NiagaraActions.h"
#endif
#define NIAGARAEDITOR_NiagaraActions_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraActions_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraActionSourceData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<struct FNiagaraActionSourceData>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraActions_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraMenuAction_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<struct FNiagaraMenuAction>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraActions_h_115_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraMenuAction_Base_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<struct FNiagaraMenuAction_Base>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraActions_h_157_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraMenuAction_Generic_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FNiagaraMenuAction_Base Super;


template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<struct FNiagaraMenuAction_Generic>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraActions_h_203_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraAction_NewNode_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FNiagaraMenuAction_Generic Super;


template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<struct FNiagaraAction_NewNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraActions_h


#define FOREACH_ENUM_ENIAGARAMENUSECTIONS(op) \
	op(ENiagaraMenuSections::Suggested) \
	op(ENiagaraMenuSections::General) 

enum class ENiagaraMenuSections : uint8;
template<> struct TIsUEnumClass<ENiagaraMenuSections> { enum { Value = true }; };
template<> NIAGARAEDITOR_API UEnum* StaticEnum<ENiagaraMenuSections>();

#define FOREACH_ENUM_ESCRIPTSOURCE(op) \
	op(EScriptSource::Niagara) \
	op(EScriptSource::Game) \
	op(EScriptSource::Plugins) \
	op(EScriptSource::Developer) \
	op(EScriptSource::Unknown) 

enum class EScriptSource : uint8;
template<> struct TIsUEnumClass<EScriptSource> { enum { Value = true }; };
template<> NIAGARAEDITOR_API UEnum* StaticEnum<EScriptSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
