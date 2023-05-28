// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NUTEnum.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETCODEUNITTEST_NUTEnum_generated_h
#error "NUTEnum.generated.h already included, missing '#pragma once' in NUTEnum.h"
#endif
#define NETCODEUNITTEST_NUTEnum_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Public_NUTEnum_h


#define FOREACH_ENUM_EMINCLIENTFLAGS(op) \
	op(EMinClientFlags::None) \
	op(EMinClientFlags::AcceptActors) \
	op(EMinClientFlags::AcceptRPCs) \
	op(EMinClientFlags::SendRPCs) \
	op(EMinClientFlags::AcceptRepNotifies) \
	op(EMinClientFlags::SkipControlJoin) \
	op(EMinClientFlags::BeaconConnect) \
	op(EMinClientFlags::NotifyNetActors) \
	op(EMinClientFlags::NotifyProcessNetEvent) \
	op(EMinClientFlags::DumpReceivedRaw) \
	op(EMinClientFlags::DumpSendRaw) \
	op(EMinClientFlags::DumpReceivedRPC) \
	op(EMinClientFlags::DumpSendRPC) 

enum class EMinClientFlags : uint32;
template<> struct TIsUEnumClass<EMinClientFlags> { enum { Value = true }; };
template<> NETCODEUNITTEST_API UEnum* StaticEnum<EMinClientFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
