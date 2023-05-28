// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonUILibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
#ifdef COMMONUI_CommonUILibrary_generated_h
#error "CommonUILibrary.generated.h already included, missing '#pragma once' in CommonUILibrary.h"
#endif
#define COMMONUI_CommonUILibrary_generated_h

#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_14_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindParentWidgetOfType);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindParentWidgetOfType);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_14_ACCESSORS
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonUILibrary(); \
	friend struct Z_Construct_UClass_UCommonUILibrary_Statics; \
public: \
	DECLARE_CLASS(UCommonUILibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonUILibrary)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUCommonUILibrary(); \
	friend struct Z_Construct_UClass_UCommonUILibrary_Statics; \
public: \
	DECLARE_CLASS(UCommonUILibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonUILibrary)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonUILibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonUILibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonUILibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUILibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonUILibrary(UCommonUILibrary&&); \
	NO_API UCommonUILibrary(const UCommonUILibrary&); \
public: \
	NO_API virtual ~UCommonUILibrary();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonUILibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonUILibrary(UCommonUILibrary&&); \
	NO_API UCommonUILibrary(const UCommonUILibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonUILibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUILibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonUILibrary) \
	NO_API virtual ~UCommonUILibrary();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_14_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_14_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_14_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_14_INCLASS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_14_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_14_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CommonUILibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_API UClass* StaticClass<class UCommonUILibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUILibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
