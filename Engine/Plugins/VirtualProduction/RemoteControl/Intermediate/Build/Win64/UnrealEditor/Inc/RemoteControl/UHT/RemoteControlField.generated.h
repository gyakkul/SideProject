// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RemoteControlField.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef REMOTECONTROL_RemoteControlField_generated_h
#error "RemoteControlField.generated.h already included, missing '#pragma once' in RemoteControlField.h"
#endif
#define REMOTECONTROL_RemoteControlField_generated_h

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlField_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteControlField_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRemoteControlEntity Super;


template<> REMOTECONTROL_API UScriptStruct* StaticStruct<struct FRemoteControlField>();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlField_h_133_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteControlProperty_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRemoteControlField Super;


template<> REMOTECONTROL_API UScriptStruct* StaticStruct<struct FRemoteControlProperty>();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlField_h_239_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteControlFunction_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRemoteControlField Super;


template<> REMOTECONTROL_API UScriptStruct* StaticStruct<struct FRemoteControlFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlField_h


#define FOREACH_ENUM_EEXPOSEDFIELDTYPE(op) \
	op(EExposedFieldType::Invalid) \
	op(EExposedFieldType::Property) \
	op(EExposedFieldType::Function) 

enum class EExposedFieldType : uint8;
template<> struct TIsUEnumClass<EExposedFieldType> { enum { Value = true }; };
template<> REMOTECONTROL_API UEnum* StaticEnum<EExposedFieldType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
