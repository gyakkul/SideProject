// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/MVVMBindingMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODELVIEWVIEWMODEL_MVVMBindingMode_generated_h
#error "MVVMBindingMode.generated.h already included, missing '#pragma once' in MVVMBindingMode.h"
#endif
#define MODELVIEWVIEWMODEL_MVVMBindingMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMBindingMode_h


#define FOREACH_ENUM_EMVVMBINDINGMODE(op) \
	op(EMVVMBindingMode::OneTimeToDestination) \
	op(EMVVMBindingMode::OneWayToDestination) \
	op(EMVVMBindingMode::TwoWay) \
	op(EMVVMBindingMode::OneTimeToSource) \
	op(EMVVMBindingMode::OneWayToSource) 

enum class EMVVMBindingMode : uint8;
template<> struct TIsUEnumClass<EMVVMBindingMode> { enum { Value = true }; };
template<> MODELVIEWVIEWMODEL_API UEnum* StaticEnum<EMVVMBindingMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
