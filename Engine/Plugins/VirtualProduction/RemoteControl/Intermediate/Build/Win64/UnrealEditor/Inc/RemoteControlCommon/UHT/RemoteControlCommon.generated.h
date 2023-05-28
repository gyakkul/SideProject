// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RemoteControlCommon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef REMOTECONTROLCOMMON_RemoteControlCommon_generated_h
#error "RemoteControlCommon.generated.h already included, missing '#pragma once' in RemoteControlCommon.h"
#endif
#define REMOTECONTROLCOMMON_RemoteControlCommon_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RemoteControlCommon_h


#define FOREACH_ENUM_ERCPROTOCOLBINDING(op) \
	op(ERCProtocolBinding::Added) \
	op(ERCProtocolBinding::Removed) 
#define FOREACH_ENUM_ERCMASK(op) \
	op(ERCMask::NoMask) \
	op(ERCMask::MaskA) \
	op(ERCMask::MaskB) \
	op(ERCMask::MaskC) \
	op(ERCMask::MaskD) 

enum class ERCMask : uint8;
template<> struct TIsUEnumClass<ERCMask> { enum { Value = true }; };
template<> REMOTECONTROLCOMMON_API UEnum* StaticEnum<ERCMask>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
