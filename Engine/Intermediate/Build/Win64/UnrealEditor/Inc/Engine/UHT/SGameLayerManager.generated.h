// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Slate/SGameLayerManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SGameLayerManager_generated_h
#error "SGameLayerManager.generated.h already included, missing '#pragma once' in SGameLayerManager.h"
#endif
#define ENGINE_SGameLayerManager_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Slate_SGameLayerManager_h


#define FOREACH_ENUM_EWINDOWTITLEBARMODE(op) \
	op(EWindowTitleBarMode::Overlay) \
	op(EWindowTitleBarMode::VerticalBox) 

enum class EWindowTitleBarMode : uint8;
template<> struct TIsUEnumClass<EWindowTitleBarMode> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EWindowTitleBarMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
