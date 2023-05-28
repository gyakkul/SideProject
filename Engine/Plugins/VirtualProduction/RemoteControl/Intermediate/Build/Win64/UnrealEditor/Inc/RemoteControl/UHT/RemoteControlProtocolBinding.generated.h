// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RemoteControlProtocolBinding.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef REMOTECONTROL_RemoteControlProtocolBinding_generated_h
#error "RemoteControlProtocolBinding.generated.h already included, missing '#pragma once' in RemoteControlProtocolBinding.h"
#endif
#define REMOTECONTROL_RemoteControlProtocolBinding_generated_h

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlProtocolBinding_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics; \
	static class UScriptStruct* StaticStruct();


template<> REMOTECONTROL_API UScriptStruct* StaticStruct<struct FRemoteControlProtocolMapping>();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlProtocolBinding_h_371_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics; \
	static class UScriptStruct* StaticStruct();


template<> REMOTECONTROL_API UScriptStruct* StaticStruct<struct FRemoteControlProtocolEntity>();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlProtocolBinding_h_574_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics; \
	static class UScriptStruct* StaticStruct();


template<> REMOTECONTROL_API UScriptStruct* StaticStruct<struct FRemoteControlProtocolBinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlProtocolBinding_h


#define FOREACH_ENUM_ERCBINDINGSTATUS(op) \
	op(ERCBindingStatus::Unassigned) \
	op(ERCBindingStatus::Awaiting) \
	op(ERCBindingStatus::Bound) 

enum class ERCBindingStatus : uint8;
template<> struct TIsUEnumClass<ERCBindingStatus> { enum { Value = true }; };
template<> REMOTECONTROL_API UEnum* StaticEnum<ERCBindingStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
