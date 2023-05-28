// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonActionWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputAction;
struct FDataTableRowHandle;
struct FSlateBrush;
#ifdef COMMONUI_CommonActionWidget_generated_h
#error "CommonActionWidget.generated.h already included, missing '#pragma once' in CommonActionWidget.h"
#endif
#define COMMONUI_CommonActionWidget_generated_h

#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_62_DELEGATE \
static void FOnInputMethodChanged_DelegateWrapper(const FMulticastScriptDelegate& OnInputMethodChanged, bool bUsingGamepad);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_25_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsHeldAction); \
	DECLARE_FUNCTION(execSetIconRimBrush); \
	DECLARE_FUNCTION(execSetInputActions); \
	DECLARE_FUNCTION(execSetInputAction); \
	DECLARE_FUNCTION(execSetEnhancedInputAction); \
	DECLARE_FUNCTION(execGetDisplayText); \
	DECLARE_FUNCTION(execGetIcon);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsHeldAction); \
	DECLARE_FUNCTION(execSetIconRimBrush); \
	DECLARE_FUNCTION(execSetInputActions); \
	DECLARE_FUNCTION(execSetInputAction); \
	DECLARE_FUNCTION(execSetEnhancedInputAction); \
	DECLARE_FUNCTION(execGetDisplayText); \
	DECLARE_FUNCTION(execGetIcon);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_25_ACCESSORS
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_25_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCommonActionWidget, NO_API)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonActionWidget(); \
	friend struct Z_Construct_UClass_UCommonActionWidget_Statics; \
public: \
	DECLARE_CLASS(UCommonActionWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonActionWidget) \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_25_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUCommonActionWidget(); \
	friend struct Z_Construct_UClass_UCommonActionWidget_Statics; \
public: \
	DECLARE_CLASS(UCommonActionWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonActionWidget) \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_25_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonActionWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonActionWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonActionWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonActionWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonActionWidget(UCommonActionWidget&&); \
	NO_API UCommonActionWidget(const UCommonActionWidget&); \
public: \
	NO_API virtual ~UCommonActionWidget();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonActionWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonActionWidget(UCommonActionWidget&&); \
	NO_API UCommonActionWidget(const UCommonActionWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonActionWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonActionWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonActionWidget) \
	NO_API virtual ~UCommonActionWidget();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_22_PROLOG
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_25_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_25_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_25_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_25_INCLASS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_25_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_25_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CommonActionWidget."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_API UClass* StaticClass<class UCommonActionWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
