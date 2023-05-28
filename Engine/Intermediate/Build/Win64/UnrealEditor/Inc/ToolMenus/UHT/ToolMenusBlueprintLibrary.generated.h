// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolMenusBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UToolMenuEntryScript;
enum class EToolMenuStringCommandType : uint8;
struct FScriptSlateIcon;
struct FToolMenuContext;
struct FToolMenuEntry;
struct FToolMenuOwner;
struct FToolMenuSection;
struct FToolMenuStringCommand;
#ifdef TOOLMENUS_ToolMenusBlueprintLibrary_generated_h
#error "ToolMenusBlueprintLibrary.generated.h already included, missing '#pragma once' in ToolMenusBlueprintLibrary.h"
#endif
#define TOOLMENUS_ToolMenusBlueprintLibrary_generated_h

#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_20_SPARSE_DATA
#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindByClass);


#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindByClass);


#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_20_ACCESSORS
#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToolMenuContextExtensions(); \
	friend struct Z_Construct_UClass_UToolMenuContextExtensions_Statics; \
public: \
	DECLARE_CLASS(UToolMenuContextExtensions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolMenus"), NO_API) \
	DECLARE_SERIALIZER(UToolMenuContextExtensions)


#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUToolMenuContextExtensions(); \
	friend struct Z_Construct_UClass_UToolMenuContextExtensions_Statics; \
public: \
	DECLARE_CLASS(UToolMenuContextExtensions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolMenus"), NO_API) \
	DECLARE_SERIALIZER(UToolMenuContextExtensions)


#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UToolMenuContextExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolMenuContextExtensions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToolMenuContextExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolMenuContextExtensions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UToolMenuContextExtensions(UToolMenuContextExtensions&&); \
	NO_API UToolMenuContextExtensions(const UToolMenuContextExtensions&); \
public: \
	NO_API virtual ~UToolMenuContextExtensions();


#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UToolMenuContextExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UToolMenuContextExtensions(UToolMenuContextExtensions&&); \
	NO_API UToolMenuContextExtensions(const UToolMenuContextExtensions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToolMenuContextExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolMenuContextExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolMenuContextExtensions) \
	NO_API virtual ~UToolMenuContextExtensions();


#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_17_PROLOG
#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_20_SPARSE_DATA \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_20_ACCESSORS \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_20_INCLASS \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_20_SPARSE_DATA \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_20_ACCESSORS \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOOLMENUS_API UClass* StaticClass<class UToolMenuContextExtensions>();

#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_31_SPARSE_DATA
#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitMenuEntry); \
	DECLARE_FUNCTION(execSetStringCommand); \
	DECLARE_FUNCTION(execSetIcon); \
	DECLARE_FUNCTION(execGetToolTip); \
	DECLARE_FUNCTION(execSetToolTip); \
	DECLARE_FUNCTION(execGetLabel); \
	DECLARE_FUNCTION(execSetLabel); \
	DECLARE_FUNCTION(execBreakToolMenuOwner); \
	DECLARE_FUNCTION(execMakeToolMenuOwner); \
	DECLARE_FUNCTION(execBreakStringCommand); \
	DECLARE_FUNCTION(execMakeStringCommand); \
	DECLARE_FUNCTION(execBreakScriptSlateIcon); \
	DECLARE_FUNCTION(execMakeScriptSlateIcon);


#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitMenuEntry); \
	DECLARE_FUNCTION(execSetStringCommand); \
	DECLARE_FUNCTION(execSetIcon); \
	DECLARE_FUNCTION(execGetToolTip); \
	DECLARE_FUNCTION(execSetToolTip); \
	DECLARE_FUNCTION(execGetLabel); \
	DECLARE_FUNCTION(execSetLabel); \
	DECLARE_FUNCTION(execBreakToolMenuOwner); \
	DECLARE_FUNCTION(execMakeToolMenuOwner); \
	DECLARE_FUNCTION(execBreakStringCommand); \
	DECLARE_FUNCTION(execMakeStringCommand); \
	DECLARE_FUNCTION(execBreakScriptSlateIcon); \
	DECLARE_FUNCTION(execMakeScriptSlateIcon);


#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_31_ACCESSORS
#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToolMenuEntryExtensions(); \
	friend struct Z_Construct_UClass_UToolMenuEntryExtensions_Statics; \
public: \
	DECLARE_CLASS(UToolMenuEntryExtensions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolMenus"), NO_API) \
	DECLARE_SERIALIZER(UToolMenuEntryExtensions)


#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUToolMenuEntryExtensions(); \
	friend struct Z_Construct_UClass_UToolMenuEntryExtensions_Statics; \
public: \
	DECLARE_CLASS(UToolMenuEntryExtensions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolMenus"), NO_API) \
	DECLARE_SERIALIZER(UToolMenuEntryExtensions)


#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UToolMenuEntryExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolMenuEntryExtensions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToolMenuEntryExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolMenuEntryExtensions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UToolMenuEntryExtensions(UToolMenuEntryExtensions&&); \
	NO_API UToolMenuEntryExtensions(const UToolMenuEntryExtensions&); \
public: \
	NO_API virtual ~UToolMenuEntryExtensions();


#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UToolMenuEntryExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UToolMenuEntryExtensions(UToolMenuEntryExtensions&&); \
	NO_API UToolMenuEntryExtensions(const UToolMenuEntryExtensions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToolMenuEntryExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolMenuEntryExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolMenuEntryExtensions) \
	NO_API virtual ~UToolMenuEntryExtensions();


#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_28_PROLOG
#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_31_SPARSE_DATA \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_31_RPC_WRAPPERS \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_31_ACCESSORS \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_31_INCLASS \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_31_SPARSE_DATA \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_31_ACCESSORS \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOOLMENUS_API UClass* StaticClass<class UToolMenuEntryExtensions>();

#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_78_SPARSE_DATA
#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_78_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddEntryObject); \
	DECLARE_FUNCTION(execAddEntry); \
	DECLARE_FUNCTION(execGetLabel); \
	DECLARE_FUNCTION(execSetLabel);


#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddEntryObject); \
	DECLARE_FUNCTION(execAddEntry); \
	DECLARE_FUNCTION(execGetLabel); \
	DECLARE_FUNCTION(execSetLabel);


#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_78_ACCESSORS
#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToolMenuSectionExtensions(); \
	friend struct Z_Construct_UClass_UToolMenuSectionExtensions_Statics; \
public: \
	DECLARE_CLASS(UToolMenuSectionExtensions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolMenus"), NO_API) \
	DECLARE_SERIALIZER(UToolMenuSectionExtensions)


#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_78_INCLASS \
private: \
	static void StaticRegisterNativesUToolMenuSectionExtensions(); \
	friend struct Z_Construct_UClass_UToolMenuSectionExtensions_Statics; \
public: \
	DECLARE_CLASS(UToolMenuSectionExtensions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolMenus"), NO_API) \
	DECLARE_SERIALIZER(UToolMenuSectionExtensions)


#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_78_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UToolMenuSectionExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolMenuSectionExtensions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToolMenuSectionExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolMenuSectionExtensions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UToolMenuSectionExtensions(UToolMenuSectionExtensions&&); \
	NO_API UToolMenuSectionExtensions(const UToolMenuSectionExtensions&); \
public: \
	NO_API virtual ~UToolMenuSectionExtensions();


#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_78_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UToolMenuSectionExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UToolMenuSectionExtensions(UToolMenuSectionExtensions&&); \
	NO_API UToolMenuSectionExtensions(const UToolMenuSectionExtensions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToolMenuSectionExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolMenuSectionExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolMenuSectionExtensions) \
	NO_API virtual ~UToolMenuSectionExtensions();


#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_75_PROLOG
#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_78_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_78_SPARSE_DATA \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_78_RPC_WRAPPERS \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_78_ACCESSORS \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_78_INCLASS \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_78_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_78_SPARSE_DATA \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_78_ACCESSORS \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_78_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOOLMENUS_API UClass* StaticClass<class UToolMenuSectionExtensions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_ToolMenus_Private_ToolMenusBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
