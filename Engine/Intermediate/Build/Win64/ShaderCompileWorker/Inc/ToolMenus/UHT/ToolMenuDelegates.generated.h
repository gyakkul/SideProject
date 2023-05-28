// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolMenuDelegates.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECheckBoxState : uint8;
struct FToolMenuContext;
#ifdef TOOLMENUS_ToolMenuDelegates_generated_h
#error "ToolMenuDelegates.generated.h already included, missing '#pragma once' in ToolMenuDelegates.h"
#endif
#define TOOLMENUS_ToolMenuDelegates_generated_h

#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuDelegates_h_35_DELEGATE \
TOOLMENUS_API void FToolMenuDynamicExecuteAction_DelegateWrapper(const FScriptDelegate& ToolMenuDynamicExecuteAction, FToolMenuContext const& Context);


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuDelegates_h_36_DELEGATE \
TOOLMENUS_API bool FToolMenuDynamicCanExecuteAction_DelegateWrapper(const FScriptDelegate& ToolMenuDynamicCanExecuteAction, FToolMenuContext const& Context);


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuDelegates_h_37_DELEGATE \
TOOLMENUS_API bool FToolMenuDynamicIsActionChecked_DelegateWrapper(const FScriptDelegate& ToolMenuDynamicIsActionChecked, FToolMenuContext const& Context);


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuDelegates_h_38_DELEGATE \
TOOLMENUS_API ECheckBoxState FToolMenuDynamicGetActionCheckState_DelegateWrapper(const FScriptDelegate& ToolMenuDynamicGetActionCheckState, FToolMenuContext const& Context);


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuDelegates_h_39_DELEGATE \
TOOLMENUS_API bool FToolMenuDynamicIsActionButtonVisible_DelegateWrapper(const FScriptDelegate& ToolMenuDynamicIsActionButtonVisible, FToolMenuContext const& Context);


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuDelegates_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TOOLMENUS_API UScriptStruct* StaticStruct<struct FToolDynamicUIAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuDelegates_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
