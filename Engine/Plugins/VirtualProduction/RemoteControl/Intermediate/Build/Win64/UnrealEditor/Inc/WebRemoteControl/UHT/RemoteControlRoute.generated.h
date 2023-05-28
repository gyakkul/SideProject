// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RemoteControlRoute.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WEBREMOTECONTROL_RemoteControlRoute_generated_h
#error "RemoteControlRoute.generated.h already included, missing '#pragma once' in RemoteControlRoute.h"
#endif
#define WEBREMOTECONTROL_RemoteControlRoute_generated_h

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Private_RemoteControlRoute_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteControlRouteDescription_Statics; \
	WEBREMOTECONTROL_API static class UScriptStruct* StaticStruct();


template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<struct FRemoteControlRouteDescription>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Private_RemoteControlRoute_h


#define FOREACH_ENUM_EREMOTECONTROLHTTPVERBS(op) \
	op(ERemoteControlHttpVerbs::None) \
	op(ERemoteControlHttpVerbs::Get) \
	op(ERemoteControlHttpVerbs::Post) \
	op(ERemoteControlHttpVerbs::Put) \
	op(ERemoteControlHttpVerbs::Patch) \
	op(ERemoteControlHttpVerbs::Delete) \
	op(ERemoteControlHttpVerbs::Options) 

enum class ERemoteControlHttpVerbs : uint16;
template<> struct TIsUEnumClass<ERemoteControlHttpVerbs> { enum { Value = true }; };
template<> WEBREMOTECONTROL_API UEnum* StaticEnum<ERemoteControlHttpVerbs>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
