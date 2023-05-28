// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonTabListWidgetBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonAnimatedSwitcher;
class UCommonButtonBase;
class UWidget;
enum class ESlateVisibility : uint8;
#ifdef COMMONUI_CommonTabListWidgetBase_generated_h
#error "CommonTabListWidgetBase.generated.h already included, missing '#pragma once' in CommonTabListWidgetBase.h"
#endif
#define COMMONUI_CommonTabListWidgetBase_generated_h

#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics; \
	COMMONUI_API static class UScriptStruct* StaticStruct();


template<> COMMONUI_API UScriptStruct* StaticStruct<struct FCommonRegisteredTabInfo>();

#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_50_DELEGATE \
static void FOnTabSelected_DelegateWrapper(const FMulticastScriptDelegate& OnTabSelected, FName TabId);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_57_DELEGATE \
static void FOnTabButtonCreation_DelegateWrapper(const FMulticastScriptDelegate& OnTabButtonCreation, FName TabId, UCommonButtonBase* TabButton);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_64_DELEGATE \
static void FOnTabButtonRemoval_DelegateWrapper(const FMulticastScriptDelegate& OnTabButtonRemoval, FName TabId, UCommonButtonBase* TabButton);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_71_DELEGATE \
static void FOnTabListRebuilt_DelegateWrapper(const FMulticastScriptDelegate& OnTabListRebuilt);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_46_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_46_RPC_WRAPPERS \
	virtual void HandleTabRemoval_Implementation(FName TabNameID, UCommonButtonBase* TabButton); \
	virtual void HandleTabCreation_Implementation(FName TabNameID, UCommonButtonBase* TabButton); \
 \
	DECLARE_FUNCTION(execHandleNextTabInputAction); \
	DECLARE_FUNCTION(execHandlePreviousTabInputAction); \
	DECLARE_FUNCTION(execHandleTabButtonSelected); \
	DECLARE_FUNCTION(execHandleTabRemoval); \
	DECLARE_FUNCTION(execHandleTabCreation); \
	DECLARE_FUNCTION(execGetTabButtonBaseByID); \
	DECLARE_FUNCTION(execSetListeningForInput); \
	DECLARE_FUNCTION(execDisableTabWithReason); \
	DECLARE_FUNCTION(execSetTabInteractionEnabled); \
	DECLARE_FUNCTION(execSetTabEnabled); \
	DECLARE_FUNCTION(execSetTabVisibility); \
	DECLARE_FUNCTION(execGetTabIdAtIndex); \
	DECLARE_FUNCTION(execGetSelectedTabId); \
	DECLARE_FUNCTION(execSelectTabByID); \
	DECLARE_FUNCTION(execGetTabCount); \
	DECLARE_FUNCTION(execRemoveAllTabs); \
	DECLARE_FUNCTION(execRemoveTab); \
	DECLARE_FUNCTION(execRegisterTab); \
	DECLARE_FUNCTION(execGetLinkedSwitcher); \
	DECLARE_FUNCTION(execSetLinkedSwitcher); \
	DECLARE_FUNCTION(execGetActiveTab);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HandleTabRemoval_Implementation(FName TabNameID, UCommonButtonBase* TabButton); \
	virtual void HandleTabCreation_Implementation(FName TabNameID, UCommonButtonBase* TabButton); \
 \
	DECLARE_FUNCTION(execHandleNextTabInputAction); \
	DECLARE_FUNCTION(execHandlePreviousTabInputAction); \
	DECLARE_FUNCTION(execHandleTabButtonSelected); \
	DECLARE_FUNCTION(execHandleTabRemoval); \
	DECLARE_FUNCTION(execHandleTabCreation); \
	DECLARE_FUNCTION(execGetTabButtonBaseByID); \
	DECLARE_FUNCTION(execSetListeningForInput); \
	DECLARE_FUNCTION(execDisableTabWithReason); \
	DECLARE_FUNCTION(execSetTabInteractionEnabled); \
	DECLARE_FUNCTION(execSetTabEnabled); \
	DECLARE_FUNCTION(execSetTabVisibility); \
	DECLARE_FUNCTION(execGetTabIdAtIndex); \
	DECLARE_FUNCTION(execGetSelectedTabId); \
	DECLARE_FUNCTION(execSelectTabByID); \
	DECLARE_FUNCTION(execGetTabCount); \
	DECLARE_FUNCTION(execRemoveAllTabs); \
	DECLARE_FUNCTION(execRemoveTab); \
	DECLARE_FUNCTION(execRegisterTab); \
	DECLARE_FUNCTION(execGetLinkedSwitcher); \
	DECLARE_FUNCTION(execSetLinkedSwitcher); \
	DECLARE_FUNCTION(execGetActiveTab);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_46_ACCESSORS
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_46_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonTabListWidgetBase(); \
	friend struct Z_Construct_UClass_UCommonTabListWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UCommonTabListWidgetBase, UCommonUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonTabListWidgetBase)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUCommonTabListWidgetBase(); \
	friend struct Z_Construct_UClass_UCommonTabListWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UCommonTabListWidgetBase, UCommonUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonTabListWidgetBase)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonTabListWidgetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonTabListWidgetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonTabListWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonTabListWidgetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonTabListWidgetBase(UCommonTabListWidgetBase&&); \
	NO_API UCommonTabListWidgetBase(const UCommonTabListWidgetBase&); \
public: \
	NO_API virtual ~UCommonTabListWidgetBase();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonTabListWidgetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonTabListWidgetBase(UCommonTabListWidgetBase&&); \
	NO_API UCommonTabListWidgetBase(const UCommonTabListWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonTabListWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonTabListWidgetBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonTabListWidgetBase) \
	NO_API virtual ~UCommonTabListWidgetBase();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_43_PROLOG
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_46_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_46_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_46_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_46_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_46_INCLASS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_46_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_46_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_46_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h_46_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CommonTabListWidgetBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_API UClass* StaticClass<class UCommonTabListWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonTabListWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
