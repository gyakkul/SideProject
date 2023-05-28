// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonRotator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONUI_CommonRotator_generated_h
#error "CommonRotator.generated.h already included, missing '#pragma once' in CommonRotator.h"
#endif
#define COMMONUI_CommonRotator_generated_h

#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRotator_h_13_DELEGATE \
COMMONUI_API void FOnRotated_DelegateWrapper(const FMulticastScriptDelegate& OnRotated, int32 Value);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRotator_h_21_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRotator_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execShiftTextRight); \
	DECLARE_FUNCTION(execShiftTextLeft); \
	DECLARE_FUNCTION(execGetSelectedIndex); \
	DECLARE_FUNCTION(execSetSelectedItem); \
	DECLARE_FUNCTION(execGetSelectedText); \
	DECLARE_FUNCTION(execPopulateTextLabels);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRotator_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShiftTextRight); \
	DECLARE_FUNCTION(execShiftTextLeft); \
	DECLARE_FUNCTION(execGetSelectedIndex); \
	DECLARE_FUNCTION(execSetSelectedItem); \
	DECLARE_FUNCTION(execGetSelectedText); \
	DECLARE_FUNCTION(execPopulateTextLabels);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRotator_h_21_ACCESSORS
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRotator_h_21_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRotator_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonRotator(); \
	friend struct Z_Construct_UClass_UCommonRotator_Statics; \
public: \
	DECLARE_CLASS(UCommonRotator, UCommonButtonBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonRotator)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRotator_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUCommonRotator(); \
	friend struct Z_Construct_UClass_UCommonRotator_Statics; \
public: \
	DECLARE_CLASS(UCommonRotator, UCommonButtonBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonRotator)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRotator_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonRotator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonRotator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonRotator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonRotator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonRotator(UCommonRotator&&); \
	NO_API UCommonRotator(const UCommonRotator&); \
public: \
	NO_API virtual ~UCommonRotator();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRotator_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonRotator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonRotator(UCommonRotator&&); \
	NO_API UCommonRotator(const UCommonRotator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonRotator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonRotator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonRotator) \
	NO_API virtual ~UCommonRotator();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRotator_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRotator_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRotator_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRotator_h_21_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRotator_h_21_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRotator_h_21_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRotator_h_21_INCLASS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRotator_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRotator_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRotator_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRotator_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRotator_h_21_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRotator_h_21_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRotator_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRotator_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CommonRotator."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_API UClass* StaticClass<class UCommonRotator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonRotator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
