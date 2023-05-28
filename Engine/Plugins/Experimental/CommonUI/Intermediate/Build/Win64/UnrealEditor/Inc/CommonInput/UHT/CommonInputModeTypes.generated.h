// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonInputModeTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONINPUT_CommonInputModeTypes_generated_h
#error "CommonInputModeTypes.generated.h already included, missing '#pragma once' in CommonInputModeTypes.h"
#endif
#define COMMONINPUT_CommonInputModeTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputModeTypes_h


#define FOREACH_ENUM_ECOMMONINPUTMODE(op) \
	op(ECommonInputMode::Menu) \
	op(ECommonInputMode::Game) \
	op(ECommonInputMode::All) 

enum class ECommonInputMode : uint8;
template<> struct TIsUEnumClass<ECommonInputMode> { enum { Value = true }; };
template<> COMMONINPUT_API UEnum* StaticEnum<ECommonInputMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
