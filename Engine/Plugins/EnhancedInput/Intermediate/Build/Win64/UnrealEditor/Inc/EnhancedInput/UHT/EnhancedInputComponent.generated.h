// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnhancedInputComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputAction;
struct FInputActionValue;
struct FKey;
#ifdef ENHANCEDINPUT_EnhancedInputComponent_generated_h
#error "EnhancedInputComponent.generated.h already included, missing '#pragma once' in EnhancedInputComponent.h"
#endif
#define ENHANCEDINPUT_EnhancedInputComponent_generated_h

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_17_DELEGATE \
ENHANCEDINPUT_API void FInputDebugKeyHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputDebugKeyHandlerDynamicSignature, FKey Key, FInputActionValue ActionValue);


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_23_DELEGATE \
ENHANCEDINPUT_API void FEnhancedInputActionHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& EnhancedInputActionHandlerDynamicSignature, FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const UInputAction* SourceAction);


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_330_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_330_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBoundActionValue);


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_330_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBoundActionValue);


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_330_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_330_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnhancedInputComponent(); \
	friend struct Z_Construct_UClass_UEnhancedInputComponent_Statics; \
public: \
	DECLARE_CLASS(UEnhancedInputComponent, UInputComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UEnhancedInputComponent)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_330_INCLASS \
private: \
	static void StaticRegisterNativesUEnhancedInputComponent(); \
	friend struct Z_Construct_UClass_UEnhancedInputComponent_Statics; \
public: \
	DECLARE_CLASS(UEnhancedInputComponent, UInputComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UEnhancedInputComponent)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_330_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnhancedInputComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnhancedInputComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnhancedInputComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedInputComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnhancedInputComponent(UEnhancedInputComponent&&); \
	NO_API UEnhancedInputComponent(const UEnhancedInputComponent&); \
public: \
	NO_API virtual ~UEnhancedInputComponent();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_330_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnhancedInputComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnhancedInputComponent(UEnhancedInputComponent&&); \
	NO_API UEnhancedInputComponent(const UEnhancedInputComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnhancedInputComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedInputComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnhancedInputComponent) \
	NO_API virtual ~UEnhancedInputComponent();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_326_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_330_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_330_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_330_RPC_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_330_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_330_INCLASS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_330_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_330_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_330_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_330_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_330_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_330_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h_330_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EnhancedInputComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UEnhancedInputComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
