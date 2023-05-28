// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FindInBlueprintManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KISMET_FindInBlueprintManager_generated_h
#error "FindInBlueprintManager.generated.h already included, missing '#pragma once' in FindInBlueprintManager.h"
#endif
#define KISMET_FindInBlueprintManager_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Kismet_Public_FindInBlueprintManager_h


#define FOREACH_ENUM_EFIBVERSION(op) \
	op(FIB_VER_NONE) \
	op(FIB_VER_BASE) \
	op(FIB_VER_VARIABLE_REFERENCE) \
	op(FIB_VER_INTERFACE_GRAPHS) \
	op(FIB_VER_PLUS_ONE) \
	op(FIB_VER_LATEST) 

enum EFiBVersion : int;
template<> KISMET_API UEnum* StaticEnum<EFiBVersion>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
