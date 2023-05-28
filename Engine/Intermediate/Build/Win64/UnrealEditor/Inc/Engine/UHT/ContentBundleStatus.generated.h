// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/ContentBundle/ContentBundleStatus.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ContentBundleStatus_generated_h
#error "ContentBundleStatus.generated.h already included, missing '#pragma once' in ContentBundleStatus.h"
#endif
#define ENGINE_ContentBundleStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleStatus_h


#define FOREACH_ENUM_ECONTENTBUNDLESTATUS(op) \
	op(EContentBundleStatus::Registered) \
	op(EContentBundleStatus::ReadyToInject) \
	op(EContentBundleStatus::FailedToInject) \
	op(EContentBundleStatus::ContentInjected) \
	op(EContentBundleStatus::Unknown) 

enum class EContentBundleStatus;
template<> struct TIsUEnumClass<EContentBundleStatus> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EContentBundleStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
