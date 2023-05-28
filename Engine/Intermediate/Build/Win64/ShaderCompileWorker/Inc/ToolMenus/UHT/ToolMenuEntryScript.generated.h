// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolMenuEntryScript.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UToolMenu;
enum class ECheckBoxState : uint8;
struct FScriptSlateIcon;
struct FToolMenuContext;
#ifdef TOOLMENUS_ToolMenuEntryScript_generated_h
#error "ToolMenuEntryScript.generated.h already included, missing '#pragma once' in ToolMenuEntryScript.h"
#endif
#define TOOLMENUS_ToolMenuEntryScript_generated_h

#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScriptSlateIcon_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TOOLMENUS_API UScriptStruct* StaticStruct<struct FScriptSlateIcon>();

#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FToolMenuEntryScriptDataAdvanced_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TOOLMENUS_API UScriptStruct* StaticStruct<struct FToolMenuEntryScriptDataAdvanced>();

#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_85_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FToolMenuEntryScriptData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TOOLMENUS_API UScriptStruct* StaticStruct<struct FToolMenuEntryScriptData>();

#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_121_SPARSE_DATA
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_121_RPC_WRAPPERS \
	virtual FScriptSlateIcon GetIcon_Implementation(FToolMenuContext const& Context) const; \
	virtual FText GetToolTip_Implementation(FToolMenuContext const& Context) const; \
	virtual FText GetLabel_Implementation(FToolMenuContext const& Context) const; \
	virtual bool IsVisible_Implementation(FToolMenuContext const& Context) const; \
	virtual ECheckBoxState GetCheckState_Implementation(FToolMenuContext const& Context) const; \
	virtual bool CanExecute_Implementation(FToolMenuContext const& Context) const; \
 \
	DECLARE_FUNCTION(execInitEntry); \
	DECLARE_FUNCTION(execRegisterMenuEntry); \
	DECLARE_FUNCTION(execGetIcon); \
	DECLARE_FUNCTION(execGetToolTip); \
	DECLARE_FUNCTION(execGetLabel); \
	DECLARE_FUNCTION(execIsVisible); \
	DECLARE_FUNCTION(execGetCheckState); \
	DECLARE_FUNCTION(execCanExecute);


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_121_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitEntry); \
	DECLARE_FUNCTION(execRegisterMenuEntry); \
	DECLARE_FUNCTION(execGetIcon); \
	DECLARE_FUNCTION(execGetToolTip); \
	DECLARE_FUNCTION(execGetLabel); \
	DECLARE_FUNCTION(execIsVisible); \
	DECLARE_FUNCTION(execGetCheckState); \
	DECLARE_FUNCTION(execCanExecute);


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_121_ACCESSORS
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_121_CALLBACK_WRAPPERS
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_121_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToolMenuEntryScript(); \
	friend struct Z_Construct_UClass_UToolMenuEntryScript_Statics; \
public: \
	DECLARE_CLASS(UToolMenuEntryScript, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ToolMenus"), NO_API) \
	DECLARE_SERIALIZER(UToolMenuEntryScript)


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_121_INCLASS \
private: \
	static void StaticRegisterNativesUToolMenuEntryScript(); \
	friend struct Z_Construct_UClass_UToolMenuEntryScript_Statics; \
public: \
	DECLARE_CLASS(UToolMenuEntryScript, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ToolMenus"), NO_API) \
	DECLARE_SERIALIZER(UToolMenuEntryScript)


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_121_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UToolMenuEntryScript(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolMenuEntryScript) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToolMenuEntryScript); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolMenuEntryScript); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UToolMenuEntryScript(UToolMenuEntryScript&&); \
	NO_API UToolMenuEntryScript(const UToolMenuEntryScript&); \
public: \
	NO_API virtual ~UToolMenuEntryScript();


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_121_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UToolMenuEntryScript(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UToolMenuEntryScript(UToolMenuEntryScript&&); \
	NO_API UToolMenuEntryScript(const UToolMenuEntryScript&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToolMenuEntryScript); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolMenuEntryScript); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolMenuEntryScript) \
	NO_API virtual ~UToolMenuEntryScript();


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_118_PROLOG
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_121_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_121_SPARSE_DATA \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_121_RPC_WRAPPERS \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_121_ACCESSORS \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_121_CALLBACK_WRAPPERS \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_121_INCLASS \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_121_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_121_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_121_SPARSE_DATA \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_121_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_121_ACCESSORS \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_121_CALLBACK_WRAPPERS \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_121_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h_121_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOOLMENUS_API UClass* StaticClass<class UToolMenuEntryScript>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuEntryScript_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
