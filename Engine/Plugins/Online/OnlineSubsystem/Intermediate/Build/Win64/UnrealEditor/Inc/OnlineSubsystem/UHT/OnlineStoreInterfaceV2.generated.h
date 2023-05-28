// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/OnlineStoreInterfaceV2.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONLINESUBSYSTEM_OnlineStoreInterfaceV2_generated_h
#error "OnlineStoreInterfaceV2.generated.h already included, missing '#pragma once' in OnlineStoreInterfaceV2.h"
#endif
#define ONLINESUBSYSTEM_OnlineStoreInterfaceV2_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_OnlineStoreInterfaceV2_h


#define FOREACH_ENUM_EINAPPPURCHASESTATE(op) \
	op(EInAppPurchaseState::Unknown) \
	op(EInAppPurchaseState::Success) \
	op(EInAppPurchaseState::Failed) \
	op(EInAppPurchaseState::Cancelled) \
	op(EInAppPurchaseState::Invalid) \
	op(EInAppPurchaseState::NotAllowed) \
	op(EInAppPurchaseState::Restored) \
	op(EInAppPurchaseState::AlreadyOwned) 

namespace EInAppPurchaseState { enum Type : int; }
template<> ONLINESUBSYSTEM_API UEnum* StaticEnum<EInAppPurchaseState::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
