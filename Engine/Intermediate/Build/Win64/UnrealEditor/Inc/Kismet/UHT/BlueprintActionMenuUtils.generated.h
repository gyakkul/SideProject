// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintActionMenuUtils.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KISMET_BlueprintActionMenuUtils_generated_h
#error "BlueprintActionMenuUtils.generated.h already included, missing '#pragma once' in BlueprintActionMenuUtils.h"
#endif
#define KISMET_BlueprintActionMenuUtils_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Kismet_Public_BlueprintActionMenuUtils_h


#define FOREACH_ENUM_ECONTEXTTARGETFLAGS(op) \
	op(EContextTargetFlags::TARGET_Blueprint) \
	op(EContextTargetFlags::TARGET_SubComponents) \
	op(EContextTargetFlags::TARGET_NodeTarget) \
	op(EContextTargetFlags::TARGET_PinObject) \
	op(EContextTargetFlags::TARGET_SiblingPinObjects) \
	op(EContextTargetFlags::TARGET_BlueprintLibraries) \
	op(EContextTargetFlags::TARGET_NonImportedTypes) \
	op(EContextTargetFlags::ContextTargetFlagsEnd) 

namespace EContextTargetFlags { enum Type : int; }
template<> KISMET_API UEnum* StaticEnum<EContextTargetFlags::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
