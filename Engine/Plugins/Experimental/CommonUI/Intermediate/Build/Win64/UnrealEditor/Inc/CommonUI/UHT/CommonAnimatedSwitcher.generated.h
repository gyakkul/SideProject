// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonAnimatedSwitcher.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONUI_CommonAnimatedSwitcher_generated_h
#error "CommonAnimatedSwitcher.generated.h already included, missing '#pragma once' in CommonAnimatedSwitcher.h"
#endif
#define COMMONUI_CommonAnimatedSwitcher_generated_h

#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_19_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsTransitionPlaying); \
	DECLARE_FUNCTION(execIsCurrentlySwitching); \
	DECLARE_FUNCTION(execSetDisableTransitionAnimation); \
	DECLARE_FUNCTION(execHasWidgets); \
	DECLARE_FUNCTION(execActivatePreviousWidget); \
	DECLARE_FUNCTION(execActivateNextWidget);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsTransitionPlaying); \
	DECLARE_FUNCTION(execIsCurrentlySwitching); \
	DECLARE_FUNCTION(execSetDisableTransitionAnimation); \
	DECLARE_FUNCTION(execHasWidgets); \
	DECLARE_FUNCTION(execActivatePreviousWidget); \
	DECLARE_FUNCTION(execActivateNextWidget);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_19_ACCESSORS
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonAnimatedSwitcher(); \
	friend struct Z_Construct_UClass_UCommonAnimatedSwitcher_Statics; \
public: \
	DECLARE_CLASS(UCommonAnimatedSwitcher, UWidgetSwitcher, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonAnimatedSwitcher)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUCommonAnimatedSwitcher(); \
	friend struct Z_Construct_UClass_UCommonAnimatedSwitcher_Statics; \
public: \
	DECLARE_CLASS(UCommonAnimatedSwitcher, UWidgetSwitcher, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonAnimatedSwitcher)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonAnimatedSwitcher(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonAnimatedSwitcher) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonAnimatedSwitcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonAnimatedSwitcher); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonAnimatedSwitcher(UCommonAnimatedSwitcher&&); \
	NO_API UCommonAnimatedSwitcher(const UCommonAnimatedSwitcher&); \
public: \
	NO_API virtual ~UCommonAnimatedSwitcher();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonAnimatedSwitcher(UCommonAnimatedSwitcher&&); \
	NO_API UCommonAnimatedSwitcher(const UCommonAnimatedSwitcher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonAnimatedSwitcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonAnimatedSwitcher); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonAnimatedSwitcher) \
	NO_API virtual ~UCommonAnimatedSwitcher();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_19_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_19_INCLASS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_19_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_API UClass* StaticClass<class UCommonAnimatedSwitcher>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
