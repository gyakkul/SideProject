// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InputMappingQuery.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENHANCEDINPUT_InputMappingQuery_generated_h
#error "InputMappingQuery.generated.h already included, missing '#pragma once' in InputMappingQuery.h"
#endif
#define ENHANCEDINPUT_InputMappingQuery_generated_h

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingQuery_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMappingQueryIssue_Statics; \
	ENHANCEDINPUT_API static class UScriptStruct* StaticStruct();


template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<struct FMappingQueryIssue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingQuery_h


#define FOREACH_ENUM_EMAPPINGQUERYRESULT(op) \
	op(EMappingQueryResult::Error_EnhancedInputNotEnabled) \
	op(EMappingQueryResult::Error_InputContextNotInActiveContexts) \
	op(EMappingQueryResult::Error_InvalidAction) \
	op(EMappingQueryResult::NotMappable) \
	op(EMappingQueryResult::MappingAvailable) 

enum class EMappingQueryResult : uint8;
template<> struct TIsUEnumClass<EMappingQueryResult> { enum { Value = true }; };
template<> ENHANCEDINPUT_API UEnum* StaticEnum<EMappingQueryResult>();

#define FOREACH_ENUM_EMAPPINGQUERYISSUE(op) \
	op(EMappingQueryIssue::NoIssue) \
	op(EMappingQueryIssue::ReservedByAction) \
	op(EMappingQueryIssue::HidesExistingMapping) \
	op(EMappingQueryIssue::HiddenByExistingMapping) \
	op(EMappingQueryIssue::CollisionWithMappingInSameContext) \
	op(EMappingQueryIssue::ForcesTypePromotion) \
	op(EMappingQueryIssue::ForcesTypeDemotion) 

enum class EMappingQueryIssue : uint8;
template<> struct TIsUEnumClass<EMappingQueryIssue> { enum { Value = true }; };
template<> ENHANCEDINPUT_API UEnum* StaticEnum<EMappingQueryIssue>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
