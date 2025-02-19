// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonLazyWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef COMMONUI_CommonLazyWidget_generated_h
#error "CommonLazyWidget.generated.h already included, missing '#pragma once' in CommonLazyWidget.h"
#endif
#define COMMONUI_CommonLazyWidget_generated_h

#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_21_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsLoading); \
	DECLARE_FUNCTION(execGetContent); \
	DECLARE_FUNCTION(execSetLazyContent);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsLoading); \
	DECLARE_FUNCTION(execGetContent); \
	DECLARE_FUNCTION(execSetLazyContent);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_21_ACCESSORS
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonLazyWidget(); \
	friend struct Z_Construct_UClass_UCommonLazyWidget_Statics; \
public: \
	DECLARE_CLASS(UCommonLazyWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonLazyWidget)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUCommonLazyWidget(); \
	friend struct Z_Construct_UClass_UCommonLazyWidget_Statics; \
public: \
	DECLARE_CLASS(UCommonLazyWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonLazyWidget)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonLazyWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonLazyWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonLazyWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonLazyWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonLazyWidget(UCommonLazyWidget&&); \
	NO_API UCommonLazyWidget(const UCommonLazyWidget&); \
public: \
	NO_API virtual ~UCommonLazyWidget();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonLazyWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonLazyWidget(UCommonLazyWidget&&); \
	NO_API UCommonLazyWidget(const UCommonLazyWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonLazyWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonLazyWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonLazyWidget) \
	NO_API virtual ~UCommonLazyWidget();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_21_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_21_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_21_INCLASS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_21_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CommonLazyWidget."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_API UClass* StaticClass<class UCommonLazyWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
