// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonActivatableWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonActivatableWidget;
class UWidget;
enum class ESlateVisibility : uint8;
#ifdef COMMONUI_CommonActivatableWidget_generated_h
#error "CommonActivatableWidget.generated.h already included, missing '#pragma once' in CommonActivatableWidget.h"
#endif
#define COMMONUI_CommonActivatableWidget_generated_h

#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_13_DELEGATE \
COMMONUI_API void FOnWidgetActivationChanged_DelegateWrapper(const FMulticastScriptDelegate& OnWidgetActivationChanged);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_36_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDesiredFocusTarget); \
	DECLARE_FUNCTION(execBindVisibilityToActivation); \
	DECLARE_FUNCTION(execSetBindVisibilities); \
	DECLARE_FUNCTION(execDeactivateWidget); \
	DECLARE_FUNCTION(execActivateWidget); \
	DECLARE_FUNCTION(execIsActivated);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDesiredFocusTarget); \
	DECLARE_FUNCTION(execBindVisibilityToActivation); \
	DECLARE_FUNCTION(execSetBindVisibilities); \
	DECLARE_FUNCTION(execDeactivateWidget); \
	DECLARE_FUNCTION(execActivateWidget); \
	DECLARE_FUNCTION(execIsActivated);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_36_ACCESSORS
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_36_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonActivatableWidget(); \
	friend struct Z_Construct_UClass_UCommonActivatableWidget_Statics; \
public: \
	DECLARE_CLASS(UCommonActivatableWidget, UCommonUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonActivatableWidget)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUCommonActivatableWidget(); \
	friend struct Z_Construct_UClass_UCommonActivatableWidget_Statics; \
public: \
	DECLARE_CLASS(UCommonActivatableWidget, UCommonUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonActivatableWidget)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonActivatableWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonActivatableWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonActivatableWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonActivatableWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonActivatableWidget(UCommonActivatableWidget&&); \
	NO_API UCommonActivatableWidget(const UCommonActivatableWidget&); \
public: \
	NO_API virtual ~UCommonActivatableWidget();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonActivatableWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonActivatableWidget(UCommonActivatableWidget&&); \
	NO_API UCommonActivatableWidget(const UCommonActivatableWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonActivatableWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonActivatableWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonActivatableWidget) \
	NO_API virtual ~UCommonActivatableWidget();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_33_PROLOG
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_36_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_36_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_36_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_36_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_36_INCLASS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_36_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_36_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_36_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_API UClass* StaticClass<class UCommonActivatableWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
