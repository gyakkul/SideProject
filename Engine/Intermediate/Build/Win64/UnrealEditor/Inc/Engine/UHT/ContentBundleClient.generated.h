// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/ContentBundle/ContentBundleClient.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ContentBundleClient_generated_h
#error "ContentBundleClient.generated.h already included, missing '#pragma once' in ContentBundleClient.h"
#endif
#define ENGINE_ContentBundleClient_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleClient_h


#define FOREACH_ENUM_ECONTENTBUNDLECLIENTSTATE(op) \
	op(EContentBundleClientState::Unregistered) \
	op(EContentBundleClientState::Registered) \
	op(EContentBundleClientState::ContentInjectionRequested) \
	op(EContentBundleClientState::ContentRemovalRequested) \
	op(EContentBundleClientState::RegistrationFailed) 

enum class EContentBundleClientState;
template<> struct TIsUEnumClass<EContentBundleClientState> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EContentBundleClientState>();

#define FOREACH_ENUM_EWORLDCONTENTSTATE(op) \
	op(EWorldContentState::NoContent) \
	op(EWorldContentState::ContentBundleInjected) 

enum class EWorldContentState;
template<> struct TIsUEnumClass<EWorldContentState> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EWorldContentState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
