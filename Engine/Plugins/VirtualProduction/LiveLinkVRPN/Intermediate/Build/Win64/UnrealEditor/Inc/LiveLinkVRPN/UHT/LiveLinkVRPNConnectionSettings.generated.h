// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkVRPNConnectionSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVELINKVRPN_LiveLinkVRPNConnectionSettings_generated_h
#error "LiveLinkVRPNConnectionSettings.generated.h already included, missing '#pragma once' in LiveLinkVRPNConnectionSettings.h"
#endif
#define LIVELINKVRPN_LiveLinkVRPNConnectionSettings_generated_h

#define FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNConnectionSettings_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LIVELINKVRPN_API UScriptStruct* StaticStruct<struct FLiveLinkVRPNConnectionSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNConnectionSettings_h


#define FOREACH_ENUM_EVRPNDEVICETYPE(op) \
	op(EVRPNDeviceType::Analog) \
	op(EVRPNDeviceType::Dial) \
	op(EVRPNDeviceType::Button) \
	op(EVRPNDeviceType::Tracker) 

enum class EVRPNDeviceType : uint8;
template<> struct TIsUEnumClass<EVRPNDeviceType> { enum { Value = true }; };
template<> LIVELINKVRPN_API UEnum* StaticEnum<EVRPNDeviceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
