// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Kismet2/KismetDebugUtilities.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_KismetDebugUtilities_generated_h
#error "KismetDebugUtilities.generated.h already included, missing '#pragma once' in KismetDebugUtilities.h"
#endif
#define UNREALED_KismetDebugUtilities_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Kismet2_KismetDebugUtilities_h


#define FOREACH_ENUM_EBLUEPRINTBREAKPOINTRELOADMETHOD(op) \
	op(EBlueprintBreakpointReloadMethod::RestoreAll) \
	op(EBlueprintBreakpointReloadMethod::RestoreAllAndDisable) \
	op(EBlueprintBreakpointReloadMethod::DiscardAll) 

enum class EBlueprintBreakpointReloadMethod;
template<> struct TIsUEnumClass<EBlueprintBreakpointReloadMethod> { enum { Value = true }; };
template<> UNREALED_API UEnum* StaticEnum<EBlueprintBreakpointReloadMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
