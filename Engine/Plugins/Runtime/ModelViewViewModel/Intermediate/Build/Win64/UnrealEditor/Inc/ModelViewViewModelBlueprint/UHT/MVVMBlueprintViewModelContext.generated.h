// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MVVMBlueprintViewModelContext.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODELVIEWVIEWMODELBLUEPRINT_MVVMBlueprintViewModelContext_generated_h
#error "MVVMBlueprintViewModelContext.generated.h already included, missing '#pragma once' in MVVMBlueprintViewModelContext.h"
#endif
#define MODELVIEWVIEWMODELBLUEPRINT_MVVMBlueprintViewModelContext_generated_h

#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintViewModelContext_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MODELVIEWVIEWMODELBLUEPRINT_API UScriptStruct* StaticStruct<struct FMVVMBlueprintViewModelContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintViewModelContext_h


#define FOREACH_ENUM_EMVVMBLUEPRINTVIEWMODELCONTEXTCREATIONTYPE(op) \
	op(EMVVMBlueprintViewModelContextCreationType::Manual) \
	op(EMVVMBlueprintViewModelContextCreationType::CreateInstance) \
	op(EMVVMBlueprintViewModelContextCreationType::GlobalViewModelCollection) \
	op(EMVVMBlueprintViewModelContextCreationType::PropertyPath) 

enum class EMVVMBlueprintViewModelContextCreationType : uint8;
template<> struct TIsUEnumClass<EMVVMBlueprintViewModelContextCreationType> { enum { Value = true }; };
template<> MODELVIEWVIEWMODELBLUEPRINT_API UEnum* StaticEnum<EMVVMBlueprintViewModelContextCreationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
