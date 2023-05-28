// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolMenuMisc.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOOLMENUS_ToolMenuMisc_generated_h
#error "ToolMenuMisc.generated.h already included, missing '#pragma once' in ToolMenuMisc.h"
#endif
#define TOOLMENUS_ToolMenuMisc_generated_h

#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuMisc_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FToolMenuStringCommand_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TOOLMENUS_API UScriptStruct* StaticStruct<struct FToolMenuStringCommand>();

#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuMisc_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FToolMenuInsert_Statics; \
	TOOLMENUS_API static class UScriptStruct* StaticStruct();


template<> TOOLMENUS_API UScriptStruct* StaticStruct<struct FToolMenuInsert>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuMisc_h


#define FOREACH_ENUM_ETOOLMENUSTRINGCOMMANDTYPE(op) \
	op(EToolMenuStringCommandType::Command) \
	op(EToolMenuStringCommandType::Python) \
	op(EToolMenuStringCommandType::Custom) 

enum class EToolMenuStringCommandType : uint8;
template<> struct TIsUEnumClass<EToolMenuStringCommandType> { enum { Value = true }; };
template<> TOOLMENUS_API UEnum* StaticEnum<EToolMenuStringCommandType>();

#define FOREACH_ENUM_ETOOLMENUINSERTTYPE(op) \
	op(EToolMenuInsertType::Default) \
	op(EToolMenuInsertType::Before) \
	op(EToolMenuInsertType::After) \
	op(EToolMenuInsertType::First) 

enum class EToolMenuInsertType : uint8;
template<> struct TIsUEnumClass<EToolMenuInsertType> { enum { Value = true }; };
template<> TOOLMENUS_API UEnum* StaticEnum<EToolMenuInsertType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
