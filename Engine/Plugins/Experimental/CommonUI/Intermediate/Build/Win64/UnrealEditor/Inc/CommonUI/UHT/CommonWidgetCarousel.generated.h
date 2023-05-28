// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonWidgetCarousel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonWidgetCarousel;
class UWidget;
#ifdef COMMONUI_CommonWidgetCarousel_generated_h
#error "CommonWidgetCarousel.generated.h already included, missing '#pragma once' in CommonWidgetCarousel.h"
#endif
#define COMMONUI_CommonWidgetCarousel_generated_h

#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_15_DELEGATE \
COMMONUI_API void FOnCurrentPageIndexChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCurrentPageIndexChanged, UCommonWidgetCarousel* CarouselWidget, int32 CurrentPageIndex);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_23_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPreviousPage); \
	DECLARE_FUNCTION(execNextPage); \
	DECLARE_FUNCTION(execEndAutoScrolling); \
	DECLARE_FUNCTION(execBeginAutoScrolling); \
	DECLARE_FUNCTION(execGetWidgetAtIndex); \
	DECLARE_FUNCTION(execSetActiveWidget); \
	DECLARE_FUNCTION(execSetActiveWidgetIndex); \
	DECLARE_FUNCTION(execGetActiveWidgetIndex);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPreviousPage); \
	DECLARE_FUNCTION(execNextPage); \
	DECLARE_FUNCTION(execEndAutoScrolling); \
	DECLARE_FUNCTION(execBeginAutoScrolling); \
	DECLARE_FUNCTION(execGetWidgetAtIndex); \
	DECLARE_FUNCTION(execSetActiveWidget); \
	DECLARE_FUNCTION(execSetActiveWidgetIndex); \
	DECLARE_FUNCTION(execGetActiveWidgetIndex);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_23_ACCESSORS
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonWidgetCarousel(); \
	friend struct Z_Construct_UClass_UCommonWidgetCarousel_Statics; \
public: \
	DECLARE_CLASS(UCommonWidgetCarousel, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonWidgetCarousel)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUCommonWidgetCarousel(); \
	friend struct Z_Construct_UClass_UCommonWidgetCarousel_Statics; \
public: \
	DECLARE_CLASS(UCommonWidgetCarousel, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonWidgetCarousel)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonWidgetCarousel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonWidgetCarousel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonWidgetCarousel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonWidgetCarousel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonWidgetCarousel(UCommonWidgetCarousel&&); \
	NO_API UCommonWidgetCarousel(const UCommonWidgetCarousel&); \
public: \
	NO_API virtual ~UCommonWidgetCarousel();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonWidgetCarousel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonWidgetCarousel(UCommonWidgetCarousel&&); \
	NO_API UCommonWidgetCarousel(const UCommonWidgetCarousel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonWidgetCarousel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonWidgetCarousel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonWidgetCarousel) \
	NO_API virtual ~UCommonWidgetCarousel();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_23_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_23_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_23_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_23_INCLASS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_23_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_23_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CommonWidgetCarousel."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_API UClass* StaticClass<class UCommonWidgetCarousel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
