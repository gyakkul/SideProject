// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WebBrowser.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WEBBROWSERWIDGET_WebBrowser_generated_h
#error "WebBrowser.generated.h already included, missing '#pragma once' in WebBrowser.h"
#endif
#define WEBBROWSERWIDGET_WebBrowser_generated_h

#define FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_20_DELEGATE \
static void FOnUrlChanged_DelegateWrapper(const FMulticastScriptDelegate& OnUrlChanged, FText const& Text);


#define FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_21_DELEGATE \
static void FOnBeforePopup_DelegateWrapper(const FMulticastScriptDelegate& OnBeforePopup, const FString& URL, const FString& Frame);


#define FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_22_DELEGATE \
static void FOnConsoleMessage_DelegateWrapper(const FMulticastScriptDelegate& OnConsoleMessage, const FString& Message, const FString& Source, int32 Line);


#define FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_17_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetUrl); \
	DECLARE_FUNCTION(execGetTitleText); \
	DECLARE_FUNCTION(execExecuteJavascript); \
	DECLARE_FUNCTION(execLoadString); \
	DECLARE_FUNCTION(execLoadURL);


#define FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetUrl); \
	DECLARE_FUNCTION(execGetTitleText); \
	DECLARE_FUNCTION(execExecuteJavascript); \
	DECLARE_FUNCTION(execLoadString); \
	DECLARE_FUNCTION(execLoadURL);


#define FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_17_ACCESSORS
#define FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebBrowser(); \
	friend struct Z_Construct_UClass_UWebBrowser_Statics; \
public: \
	DECLARE_CLASS(UWebBrowser, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebBrowserWidget"), NO_API) \
	DECLARE_SERIALIZER(UWebBrowser)


#define FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUWebBrowser(); \
	friend struct Z_Construct_UClass_UWebBrowser_Statics; \
public: \
	DECLARE_CLASS(UWebBrowser, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebBrowserWidget"), NO_API) \
	DECLARE_SERIALIZER(UWebBrowser)


#define FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebBrowser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebBrowser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebBrowser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebBrowser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebBrowser(UWebBrowser&&); \
	NO_API UWebBrowser(const UWebBrowser&); \
public: \
	NO_API virtual ~UWebBrowser();


#define FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebBrowser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebBrowser(UWebBrowser&&); \
	NO_API UWebBrowser(const UWebBrowser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebBrowser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebBrowser); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebBrowser) \
	NO_API virtual ~UWebBrowser();


#define FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_17_ACCESSORS \
	FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_17_INCLASS \
	FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_17_ACCESSORS \
	FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WebBrowser."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEBBROWSERWIDGET_API UClass* StaticClass<class UWebBrowser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
