// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraPlatformSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraPlatformSet_generated_h
#error "NiagaraPlatformSet.generated.h already included, missing '#pragma once' in NiagaraPlatformSet.h"
#endif
#define NIAGARA_NiagaraPlatformSet_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPlatformSet_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraDeviceProfileStateEntry>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPlatformSet_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraPlatformSetConflictEntry>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPlatformSet_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraPlatformSetConflictInfo>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPlatformSet_h_190_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraPlatformSetCVarCondition>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPlatformSet_h_283_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraPlatformSetRedirect>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPlatformSet_h_310_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraPlatformSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPlatformSet_h


#define FOREACH_ENUM_ENIAGARAPLATFORMSELECTIONSTATE(op) \
	op(ENiagaraPlatformSelectionState::Default) \
	op(ENiagaraPlatformSelectionState::Enabled) \
	op(ENiagaraPlatformSelectionState::Disabled) 

enum class ENiagaraPlatformSelectionState : uint8;
template<> struct TIsUEnumClass<ENiagaraPlatformSelectionState> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraPlatformSelectionState>();

#define FOREACH_ENUM_ENIAGARAPLATFORMSETSTATE(op) \
	op(ENiagaraPlatformSetState::Disabled) \
	op(ENiagaraPlatformSetState::Enabled) \
	op(ENiagaraPlatformSetState::Active) \
	op(ENiagaraPlatformSetState::Unknown) 

enum class ENiagaraPlatformSetState : uint8;
template<> struct TIsUEnumClass<ENiagaraPlatformSetState> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraPlatformSetState>();

#define FOREACH_ENUM_ENIAGARACVARCONDITIONRESPONSE(op) \
	op(ENiagaraCVarConditionResponse::None) \
	op(ENiagaraCVarConditionResponse::Enable) \
	op(ENiagaraCVarConditionResponse::Disable) 

enum class ENiagaraCVarConditionResponse : uint8;
template<> struct TIsUEnumClass<ENiagaraCVarConditionResponse> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraCVarConditionResponse>();

#define FOREACH_ENUM_ENIAGARADEVICEPROFILEREDIRECTMODE(op) \
	op(ENiagaraDeviceProfileRedirectMode::CVar) \
	op(ENiagaraDeviceProfileRedirectMode::DeviceProfile) 

enum class ENiagaraDeviceProfileRedirectMode : uint8;
template<> struct TIsUEnumClass<ENiagaraDeviceProfileRedirectMode> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDeviceProfileRedirectMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
