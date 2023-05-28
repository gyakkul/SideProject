// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonInputTypeEnum.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONINPUT_CommonInputTypeEnum_generated_h
#error "CommonInputTypeEnum.generated.h already included, missing '#pragma once' in CommonInputTypeEnum.h"
#endif
#define COMMONINPUT_CommonInputTypeEnum_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputTypeEnum_h


#define FOREACH_ENUM_ECOMMONINPUTTYPE(op) \
	op(ECommonInputType::MouseAndKeyboard) \
	op(ECommonInputType::Gamepad) \
	op(ECommonInputType::Touch) \
	op(ECommonInputType::Count) 

enum class ECommonInputType : uint8;
template<> struct TIsUEnumClass<ECommonInputType> { enum { Value = true }; };
template<> COMMONINPUT_API UEnum* StaticEnum<ECommonInputType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
