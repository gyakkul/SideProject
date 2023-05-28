// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Input/VCamInputDeviceConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VCAMCORE_VCamInputDeviceConfig_generated_h
#error "VCamInputDeviceConfig.generated.h already included, missing '#pragma once' in VCamInputDeviceConfig.h"
#endif
#define VCAMCORE_VCamInputDeviceConfig_generated_h

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Input_VCamInputDeviceConfig_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVCamInputDeviceID_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VCAMCORE_API UScriptStruct* StaticStruct<struct FVCamInputDeviceID>();

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Input_VCamInputDeviceConfig_h_81_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVCamInputDeviceConfig_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VCAMCORE_API UScriptStruct* StaticStruct<struct FVCamInputDeviceConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Input_VCamInputDeviceConfig_h


#define FOREACH_ENUM_EVCAMINPUTLOGGINGMODE(op) \
	op(EVCamInputLoggingMode::None) \
	op(EVCamInputLoggingMode::OnlyConsumable) \
	op(EVCamInputLoggingMode::OnlyGamepad) \
	op(EVCamInputLoggingMode::All) \
	op(EVCamInputLoggingMode::AllExceptMouse) 

enum class EVCamInputLoggingMode : uint8;
template<> struct TIsUEnumClass<EVCamInputLoggingMode> { enum { Value = true }; };
template<> VCAMCORE_API UEnum* StaticEnum<EVCamInputLoggingMode>();

#define FOREACH_ENUM_EVCAMINPUTMODE(op) \
	op(EVCamInputMode::Allow) \
	op(EVCamInputMode::Ignore) 

enum class EVCamInputMode : uint8;
template<> struct TIsUEnumClass<EVCamInputMode> { enum { Value = true }; };
template<> VCAMCORE_API UEnum* StaticEnum<EVCamInputMode>();

#define FOREACH_ENUM_EVCAMGAMEPADINPUTMODE(op) \
	op(EVCamGamepadInputMode::Allow) \
	op(EVCamGamepadInputMode::AllowAndConsume) \
	op(EVCamGamepadInputMode::Ignore) \
	op(EVCamGamepadInputMode::IgnoreAndConsume) 

enum class EVCamGamepadInputMode : uint8;
template<> struct TIsUEnumClass<EVCamGamepadInputMode> { enum { Value = true }; };
template<> VCAMCORE_API UEnum* StaticEnum<EVCamGamepadInputMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
