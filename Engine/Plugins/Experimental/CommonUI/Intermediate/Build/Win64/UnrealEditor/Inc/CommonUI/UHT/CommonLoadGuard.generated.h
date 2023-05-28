// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonLoadGuard.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FMargin;
#ifdef COMMONUI_CommonLoadGuard_generated_h
#error "CommonLoadGuard.generated.h already included, missing '#pragma once' in CommonLoadGuard.h"
#endif
#define COMMONUI_CommonLoadGuard_generated_h

#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_96_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_96_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_96_ACCESSORS
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_96_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoadGuardSlot(); \
	friend struct Z_Construct_UClass_ULoadGuardSlot_Statics; \
public: \
	DECLARE_CLASS(ULoadGuardSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(ULoadGuardSlot)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_96_INCLASS \
private: \
	static void StaticRegisterNativesULoadGuardSlot(); \
	friend struct Z_Construct_UClass_ULoadGuardSlot_Statics; \
public: \
	DECLARE_CLASS(ULoadGuardSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(ULoadGuardSlot)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_96_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoadGuardSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadGuardSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadGuardSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadGuardSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadGuardSlot(ULoadGuardSlot&&); \
	NO_API ULoadGuardSlot(const ULoadGuardSlot&); \
public: \
	NO_API virtual ~ULoadGuardSlot();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_96_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoadGuardSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadGuardSlot(ULoadGuardSlot&&); \
	NO_API ULoadGuardSlot(const ULoadGuardSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadGuardSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadGuardSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadGuardSlot) \
	NO_API virtual ~ULoadGuardSlot();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_93_PROLOG
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_96_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_96_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_96_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_96_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_96_INCLASS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_96_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_96_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_96_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_96_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_96_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_API UClass* StaticClass<class ULoadGuardSlot>();

#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_133_DELEGATE \
COMMONUI_API void FOnLoadGuardStateChangedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnLoadGuardStateChangedDynamic, bool bIsLoading);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_198_DELEGATE \
static void FOnAssetLoaded_DelegateWrapper(const FScriptDelegate& OnAssetLoaded, UObject* Object);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_146_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_146_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_GuardAndLoadAsset); \
	DECLARE_FUNCTION(execIsLoading); \
	DECLARE_FUNCTION(execSetIsLoading); \
	DECLARE_FUNCTION(execSetLoadingText);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_GuardAndLoadAsset); \
	DECLARE_FUNCTION(execIsLoading); \
	DECLARE_FUNCTION(execSetIsLoading); \
	DECLARE_FUNCTION(execSetLoadingText);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_146_ACCESSORS
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_146_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCommonLoadGuard, NO_API)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_146_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonLoadGuard(); \
	friend struct Z_Construct_UClass_UCommonLoadGuard_Statics; \
public: \
	DECLARE_CLASS(UCommonLoadGuard, UContentWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonLoadGuard) \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_146_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_146_INCLASS \
private: \
	static void StaticRegisterNativesUCommonLoadGuard(); \
	friend struct Z_Construct_UClass_UCommonLoadGuard_Statics; \
public: \
	DECLARE_CLASS(UCommonLoadGuard, UContentWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonLoadGuard) \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_146_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_146_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonLoadGuard(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonLoadGuard) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonLoadGuard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonLoadGuard); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonLoadGuard(UCommonLoadGuard&&); \
	NO_API UCommonLoadGuard(const UCommonLoadGuard&); \
public: \
	NO_API virtual ~UCommonLoadGuard();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_146_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonLoadGuard(UCommonLoadGuard&&); \
	NO_API UCommonLoadGuard(const UCommonLoadGuard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonLoadGuard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonLoadGuard); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonLoadGuard) \
	NO_API virtual ~UCommonLoadGuard();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_143_PROLOG
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_146_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_146_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_146_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_146_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_146_INCLASS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_146_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_146_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_146_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_146_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_146_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_146_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_API UClass* StaticClass<class UCommonLoadGuard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
