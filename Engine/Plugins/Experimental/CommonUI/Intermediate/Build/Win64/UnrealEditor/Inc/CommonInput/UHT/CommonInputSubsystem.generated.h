// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonInputSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECommonInputType : uint8;
#ifdef COMMONINPUT_CommonInputSubsystem_generated_h
#error "CommonInputSubsystem.generated.h already included, missing '#pragma once' in CommonInputSubsystem.h"
#endif
#define COMMONINPUT_CommonInputSubsystem_generated_h

#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_23_DELEGATE \
COMMONINPUT_API void FInputMethodChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& InputMethodChangedDelegate, ECommonInputType bNewInputType);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_30_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBroadcastInputMethodChanged); \
	DECLARE_FUNCTION(execShouldShowInputKeys); \
	DECLARE_FUNCTION(execIsUsingPointerInput); \
	DECLARE_FUNCTION(execSetGamepadInputType); \
	DECLARE_FUNCTION(execGetCurrentGamepadName); \
	DECLARE_FUNCTION(execSetCurrentInputType); \
	DECLARE_FUNCTION(execGetDefaultInputType); \
	DECLARE_FUNCTION(execGetCurrentInputType); \
	DECLARE_FUNCTION(execIsInputMethodActive);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBroadcastInputMethodChanged); \
	DECLARE_FUNCTION(execShouldShowInputKeys); \
	DECLARE_FUNCTION(execIsUsingPointerInput); \
	DECLARE_FUNCTION(execSetGamepadInputType); \
	DECLARE_FUNCTION(execGetCurrentGamepadName); \
	DECLARE_FUNCTION(execSetCurrentInputType); \
	DECLARE_FUNCTION(execGetDefaultInputType); \
	DECLARE_FUNCTION(execGetCurrentInputType); \
	DECLARE_FUNCTION(execIsInputMethodActive);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_30_ACCESSORS
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonInputSubsystem(); \
	friend struct Z_Construct_UClass_UCommonInputSubsystem_Statics; \
public: \
	DECLARE_CLASS(UCommonInputSubsystem, ULocalPlayerSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonInput"), NO_API) \
	DECLARE_SERIALIZER(UCommonInputSubsystem)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUCommonInputSubsystem(); \
	friend struct Z_Construct_UClass_UCommonInputSubsystem_Statics; \
public: \
	DECLARE_CLASS(UCommonInputSubsystem, ULocalPlayerSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonInput"), NO_API) \
	DECLARE_SERIALIZER(UCommonInputSubsystem)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonInputSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonInputSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonInputSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonInputSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonInputSubsystem(UCommonInputSubsystem&&); \
	NO_API UCommonInputSubsystem(const UCommonInputSubsystem&); \
public: \
	NO_API virtual ~UCommonInputSubsystem();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonInputSubsystem(UCommonInputSubsystem&&); \
	NO_API UCommonInputSubsystem(const UCommonInputSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonInputSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonInputSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonInputSubsystem) \
	NO_API virtual ~UCommonInputSubsystem();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_27_PROLOG
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_30_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_30_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_30_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_30_INCLASS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_30_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_30_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONINPUT_API UClass* StaticClass<class UCommonInputSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
