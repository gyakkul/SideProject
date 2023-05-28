// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolMenu.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UToolMenu;
class UToolMenuEntryScript;
class UToolMenuSectionDynamic;
enum class EMultiBoxType : uint8;
enum class EToolMenuInsertType : uint8;
struct FToolMenuEntry;
struct FToolMenuOwner;
#ifdef TOOLMENUS_ToolMenu_generated_h
#error "ToolMenu.generated.h already included, missing '#pragma once' in ToolMenu.h"
#endif
#define TOOLMENUS_ToolMenu_generated_h

#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_19_SPARSE_DATA
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddSubMenuScript); \
	DECLARE_FUNCTION(execAddMenuEntryObject); \
	DECLARE_FUNCTION(execAddMenuEntry); \
	DECLARE_FUNCTION(execAddDynamicSectionScript); \
	DECLARE_FUNCTION(execAddSectionScript); \
	DECLARE_FUNCTION(execInitMenu);


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddSubMenuScript); \
	DECLARE_FUNCTION(execAddMenuEntryObject); \
	DECLARE_FUNCTION(execAddMenuEntry); \
	DECLARE_FUNCTION(execAddDynamicSectionScript); \
	DECLARE_FUNCTION(execAddSectionScript); \
	DECLARE_FUNCTION(execInitMenu);


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_19_ACCESSORS
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToolMenu(); \
	friend struct Z_Construct_UClass_UToolMenu_Statics; \
public: \
	DECLARE_CLASS(UToolMenu, UToolMenuBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolMenus"), NO_API) \
	DECLARE_SERIALIZER(UToolMenu)


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUToolMenu(); \
	friend struct Z_Construct_UClass_UToolMenu_Statics; \
public: \
	DECLARE_CLASS(UToolMenu, UToolMenuBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolMenus"), NO_API) \
	DECLARE_SERIALIZER(UToolMenu)


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UToolMenu(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToolMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UToolMenu(UToolMenu&&); \
	NO_API UToolMenu(const UToolMenu&); \
public: \
	NO_API virtual ~UToolMenu();


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UToolMenu(UToolMenu&&); \
	NO_API UToolMenu(const UToolMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToolMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolMenu); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UToolMenu) \
	NO_API virtual ~UToolMenu();


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_16_PROLOG
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_19_SPARSE_DATA \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_19_ACCESSORS \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_19_INCLASS \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_19_SPARSE_DATA \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_19_ACCESSORS \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOOLMENUS_API UClass* StaticClass<class UToolMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_ToolMenus_Public_ToolMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
