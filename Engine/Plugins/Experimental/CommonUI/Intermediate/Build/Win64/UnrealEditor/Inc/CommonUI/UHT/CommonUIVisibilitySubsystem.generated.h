// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonUIVisibilitySubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonUIVisibilitySubsystem;
#ifdef COMMONUI_CommonUIVisibilitySubsystem_generated_h
#error "CommonUIVisibilitySubsystem.generated.h already included, missing '#pragma once' in CommonUIVisibilitySubsystem.h"
#endif
#define COMMONUI_CommonUIVisibilitySubsystem_generated_h

#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_17_DELEGATE \
COMMONUI_API void FHardwareVisibilityTagsChangedDynamicEvent_DelegateWrapper(const FMulticastScriptDelegate& HardwareVisibilityTagsChangedDynamicEvent, UCommonUIVisibilitySubsystem* TagSubsystem);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_22_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_22_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_22_ACCESSORS
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonUIVisibilitySubsystem(); \
	friend struct Z_Construct_UClass_UCommonUIVisibilitySubsystem_Statics; \
public: \
	DECLARE_CLASS(UCommonUIVisibilitySubsystem, ULocalPlayerSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonUIVisibilitySubsystem)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUCommonUIVisibilitySubsystem(); \
	friend struct Z_Construct_UClass_UCommonUIVisibilitySubsystem_Statics; \
public: \
	DECLARE_CLASS(UCommonUIVisibilitySubsystem, ULocalPlayerSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonUIVisibilitySubsystem)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonUIVisibilitySubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonUIVisibilitySubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonUIVisibilitySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUIVisibilitySubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonUIVisibilitySubsystem(UCommonUIVisibilitySubsystem&&); \
	NO_API UCommonUIVisibilitySubsystem(const UCommonUIVisibilitySubsystem&); \
public: \
	NO_API virtual ~UCommonUIVisibilitySubsystem();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonUIVisibilitySubsystem(UCommonUIVisibilitySubsystem&&); \
	NO_API UCommonUIVisibilitySubsystem(const UCommonUIVisibilitySubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonUIVisibilitySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUIVisibilitySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonUIVisibilitySubsystem) \
	NO_API virtual ~UCommonUIVisibilitySubsystem();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_22_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_22_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_22_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_22_INCLASS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_22_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_22_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_API UClass* StaticClass<class UCommonUIVisibilitySubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUIVisibilitySubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
