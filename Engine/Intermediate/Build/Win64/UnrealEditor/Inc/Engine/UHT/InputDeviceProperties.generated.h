// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/InputDeviceProperties.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputDeviceId;
struct FPlatformUserId;
#ifdef ENGINE_InputDeviceProperties_generated_h
#error "InputDeviceProperties.generated.h already included, missing '#pragma once' in InputDeviceProperties.h"
#endif
#define ENGINE_InputDeviceProperties_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_RPC_WRAPPERS \
	virtual void ResetDeviceProperty_Implementation(const FPlatformUserId PlatformUser, const FInputDeviceId DeviceId); \
	virtual void EvaluateDeviceProperty_Implementation(const FPlatformUserId PlatformUser, const FInputDeviceId DeviceId, const float DeltaTime, const float Duration); \
 \
	DECLARE_FUNCTION(execApplyDeviceProperty); \
	DECLARE_FUNCTION(execResetDeviceProperty); \
	DECLARE_FUNCTION(execEvaluateDeviceProperty);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyDeviceProperty); \
	DECLARE_FUNCTION(execResetDeviceProperty); \
	DECLARE_FUNCTION(execEvaluateDeviceProperty);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputDeviceProperty(); \
	friend struct Z_Construct_UClass_UInputDeviceProperty_Statics; \
public: \
	DECLARE_CLASS(UInputDeviceProperty, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputDeviceProperty)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUInputDeviceProperty(); \
	friend struct Z_Construct_UClass_UInputDeviceProperty_Statics; \
public: \
	DECLARE_CLASS(UInputDeviceProperty, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputDeviceProperty)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputDeviceProperty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputDeviceProperty) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputDeviceProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDeviceProperty); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputDeviceProperty(UInputDeviceProperty&&); \
	NO_API UInputDeviceProperty(const UInputDeviceProperty&); \
public: \
	NO_API virtual ~UInputDeviceProperty();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputDeviceProperty(UInputDeviceProperty&&); \
	NO_API UInputDeviceProperty(const UInputDeviceProperty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputDeviceProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDeviceProperty); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputDeviceProperty) \
	NO_API virtual ~UInputDeviceProperty();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_31_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInputDeviceProperty>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_165_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDeviceColorData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDeviceColorData>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_190_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_190_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_190_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_190_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_190_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUColorInputDeviceProperty(); \
	friend struct Z_Construct_UClass_UColorInputDeviceProperty_Statics; \
public: \
	DECLARE_CLASS(UColorInputDeviceProperty, UInputDeviceProperty, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UColorInputDeviceProperty)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_190_INCLASS \
private: \
	static void StaticRegisterNativesUColorInputDeviceProperty(); \
	friend struct Z_Construct_UClass_UColorInputDeviceProperty_Statics; \
public: \
	DECLARE_CLASS(UColorInputDeviceProperty, UInputDeviceProperty, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UColorInputDeviceProperty)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_190_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UColorInputDeviceProperty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UColorInputDeviceProperty) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UColorInputDeviceProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UColorInputDeviceProperty); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UColorInputDeviceProperty(UColorInputDeviceProperty&&); \
	NO_API UColorInputDeviceProperty(const UColorInputDeviceProperty&); \
public: \
	NO_API virtual ~UColorInputDeviceProperty();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_190_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UColorInputDeviceProperty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UColorInputDeviceProperty(UColorInputDeviceProperty&&); \
	NO_API UColorInputDeviceProperty(const UColorInputDeviceProperty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UColorInputDeviceProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UColorInputDeviceProperty); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UColorInputDeviceProperty) \
	NO_API virtual ~UColorInputDeviceProperty();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_187_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_190_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_190_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_190_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_190_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_190_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_190_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_190_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_190_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_190_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_190_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_190_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_190_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UColorInputDeviceProperty>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_220_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDeviceColorCurveData>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_244_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_244_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_244_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_244_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_244_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUColorInputDeviceCurveProperty(); \
	friend struct Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics; \
public: \
	DECLARE_CLASS(UColorInputDeviceCurveProperty, UInputDeviceProperty, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UColorInputDeviceCurveProperty)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_244_INCLASS \
private: \
	static void StaticRegisterNativesUColorInputDeviceCurveProperty(); \
	friend struct Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics; \
public: \
	DECLARE_CLASS(UColorInputDeviceCurveProperty, UInputDeviceProperty, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UColorInputDeviceCurveProperty)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_244_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UColorInputDeviceCurveProperty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UColorInputDeviceCurveProperty) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UColorInputDeviceCurveProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UColorInputDeviceCurveProperty); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UColorInputDeviceCurveProperty(UColorInputDeviceCurveProperty&&); \
	NO_API UColorInputDeviceCurveProperty(const UColorInputDeviceCurveProperty&); \
public: \
	NO_API virtual ~UColorInputDeviceCurveProperty();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_244_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UColorInputDeviceCurveProperty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UColorInputDeviceCurveProperty(UColorInputDeviceCurveProperty&&); \
	NO_API UColorInputDeviceCurveProperty(const UColorInputDeviceCurveProperty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UColorInputDeviceCurveProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UColorInputDeviceCurveProperty); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UColorInputDeviceCurveProperty) \
	NO_API virtual ~UColorInputDeviceCurveProperty();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_241_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_244_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_244_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_244_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_244_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_244_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_244_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_244_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_244_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_244_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_244_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_244_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_244_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UColorInputDeviceCurveProperty>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_275_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDeviceTriggerBaseData>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_290_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_290_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_290_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_290_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_290_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputDeviceTriggerEffect(); \
	friend struct Z_Construct_UClass_UInputDeviceTriggerEffect_Statics; \
public: \
	DECLARE_CLASS(UInputDeviceTriggerEffect, UInputDeviceProperty, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputDeviceTriggerEffect)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_290_INCLASS \
private: \
	static void StaticRegisterNativesUInputDeviceTriggerEffect(); \
	friend struct Z_Construct_UClass_UInputDeviceTriggerEffect_Statics; \
public: \
	DECLARE_CLASS(UInputDeviceTriggerEffect, UInputDeviceProperty, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputDeviceTriggerEffect)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_290_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputDeviceTriggerEffect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputDeviceTriggerEffect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputDeviceTriggerEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDeviceTriggerEffect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputDeviceTriggerEffect(UInputDeviceTriggerEffect&&); \
	NO_API UInputDeviceTriggerEffect(const UInputDeviceTriggerEffect&); \
public: \
	NO_API virtual ~UInputDeviceTriggerEffect();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_290_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputDeviceTriggerEffect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputDeviceTriggerEffect(UInputDeviceTriggerEffect&&); \
	NO_API UInputDeviceTriggerEffect(const UInputDeviceTriggerEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputDeviceTriggerEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDeviceTriggerEffect); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputDeviceTriggerEffect) \
	NO_API virtual ~UInputDeviceTriggerEffect();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_287_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_290_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_290_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_290_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_290_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_290_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_290_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_290_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_290_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_290_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_290_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_290_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_290_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInputDeviceTriggerEffect>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_313_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDeviceTriggerFeedbackData>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_333_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_333_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_333_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_333_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_333_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputDeviceTriggerFeedbackProperty(); \
	friend struct Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics; \
public: \
	DECLARE_CLASS(UInputDeviceTriggerFeedbackProperty, UInputDeviceTriggerEffect, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputDeviceTriggerFeedbackProperty)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_333_INCLASS \
private: \
	static void StaticRegisterNativesUInputDeviceTriggerFeedbackProperty(); \
	friend struct Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics; \
public: \
	DECLARE_CLASS(UInputDeviceTriggerFeedbackProperty, UInputDeviceTriggerEffect, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputDeviceTriggerFeedbackProperty)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_333_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputDeviceTriggerFeedbackProperty(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputDeviceTriggerFeedbackProperty) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputDeviceTriggerFeedbackProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDeviceTriggerFeedbackProperty); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputDeviceTriggerFeedbackProperty(UInputDeviceTriggerFeedbackProperty&&); \
	NO_API UInputDeviceTriggerFeedbackProperty(const UInputDeviceTriggerFeedbackProperty&); \
public: \
	NO_API virtual ~UInputDeviceTriggerFeedbackProperty();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_333_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputDeviceTriggerFeedbackProperty(UInputDeviceTriggerFeedbackProperty&&); \
	NO_API UInputDeviceTriggerFeedbackProperty(const UInputDeviceTriggerFeedbackProperty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputDeviceTriggerFeedbackProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDeviceTriggerFeedbackProperty); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputDeviceTriggerFeedbackProperty) \
	NO_API virtual ~UInputDeviceTriggerFeedbackProperty();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_330_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_333_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_333_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_333_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_333_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_333_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_333_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_333_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_333_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_333_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_333_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_333_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_333_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInputDeviceTriggerFeedbackProperty>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_366_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDeviceTriggerTriggerResistanceData>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_392_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_392_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_392_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_392_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_392_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputDeviceTriggerResistanceProperty(); \
	friend struct Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics; \
public: \
	DECLARE_CLASS(UInputDeviceTriggerResistanceProperty, UInputDeviceTriggerEffect, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputDeviceTriggerResistanceProperty)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_392_INCLASS \
private: \
	static void StaticRegisterNativesUInputDeviceTriggerResistanceProperty(); \
	friend struct Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics; \
public: \
	DECLARE_CLASS(UInputDeviceTriggerResistanceProperty, UInputDeviceTriggerEffect, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputDeviceTriggerResistanceProperty)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_392_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputDeviceTriggerResistanceProperty(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputDeviceTriggerResistanceProperty) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputDeviceTriggerResistanceProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDeviceTriggerResistanceProperty); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputDeviceTriggerResistanceProperty(UInputDeviceTriggerResistanceProperty&&); \
	NO_API UInputDeviceTriggerResistanceProperty(const UInputDeviceTriggerResistanceProperty&); \
public: \
	NO_API virtual ~UInputDeviceTriggerResistanceProperty();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_392_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputDeviceTriggerResistanceProperty(UInputDeviceTriggerResistanceProperty&&); \
	NO_API UInputDeviceTriggerResistanceProperty(const UInputDeviceTriggerResistanceProperty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputDeviceTriggerResistanceProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDeviceTriggerResistanceProperty); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputDeviceTriggerResistanceProperty) \
	NO_API virtual ~UInputDeviceTriggerResistanceProperty();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_389_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_392_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_392_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_392_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_392_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_392_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_392_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_392_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_392_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_392_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_392_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_392_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_392_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInputDeviceTriggerResistanceProperty>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_425_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDeviceTriggerTriggerVibrationData>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_449_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_449_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_449_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_449_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_449_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputDeviceTriggerVibrationProperty(); \
	friend struct Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics; \
public: \
	DECLARE_CLASS(UInputDeviceTriggerVibrationProperty, UInputDeviceTriggerEffect, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputDeviceTriggerVibrationProperty)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_449_INCLASS \
private: \
	static void StaticRegisterNativesUInputDeviceTriggerVibrationProperty(); \
	friend struct Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics; \
public: \
	DECLARE_CLASS(UInputDeviceTriggerVibrationProperty, UInputDeviceTriggerEffect, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputDeviceTriggerVibrationProperty)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_449_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputDeviceTriggerVibrationProperty(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputDeviceTriggerVibrationProperty) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputDeviceTriggerVibrationProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDeviceTriggerVibrationProperty); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputDeviceTriggerVibrationProperty(UInputDeviceTriggerVibrationProperty&&); \
	NO_API UInputDeviceTriggerVibrationProperty(const UInputDeviceTriggerVibrationProperty&); \
public: \
	NO_API virtual ~UInputDeviceTriggerVibrationProperty();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_449_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputDeviceTriggerVibrationProperty(UInputDeviceTriggerVibrationProperty&&); \
	NO_API UInputDeviceTriggerVibrationProperty(const UInputDeviceTriggerVibrationProperty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputDeviceTriggerVibrationProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDeviceTriggerVibrationProperty); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputDeviceTriggerVibrationProperty) \
	NO_API virtual ~UInputDeviceTriggerVibrationProperty();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_446_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_449_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_449_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_449_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_449_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_449_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_449_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_449_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_449_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_449_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_449_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_449_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_449_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInputDeviceTriggerVibrationProperty>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_485_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAudioBasedVibrationData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAudioBasedVibrationData>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_502_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_502_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_502_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_502_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_502_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputDeviceAudioBasedVibrationProperty(); \
	friend struct Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics; \
public: \
	DECLARE_CLASS(UInputDeviceAudioBasedVibrationProperty, UInputDeviceProperty, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputDeviceAudioBasedVibrationProperty)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_502_INCLASS \
private: \
	static void StaticRegisterNativesUInputDeviceAudioBasedVibrationProperty(); \
	friend struct Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics; \
public: \
	DECLARE_CLASS(UInputDeviceAudioBasedVibrationProperty, UInputDeviceProperty, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputDeviceAudioBasedVibrationProperty)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_502_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputDeviceAudioBasedVibrationProperty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputDeviceAudioBasedVibrationProperty) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputDeviceAudioBasedVibrationProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDeviceAudioBasedVibrationProperty); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputDeviceAudioBasedVibrationProperty(UInputDeviceAudioBasedVibrationProperty&&); \
	NO_API UInputDeviceAudioBasedVibrationProperty(const UInputDeviceAudioBasedVibrationProperty&); \
public: \
	NO_API virtual ~UInputDeviceAudioBasedVibrationProperty();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_502_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputDeviceAudioBasedVibrationProperty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputDeviceAudioBasedVibrationProperty(UInputDeviceAudioBasedVibrationProperty&&); \
	NO_API UInputDeviceAudioBasedVibrationProperty(const UInputDeviceAudioBasedVibrationProperty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputDeviceAudioBasedVibrationProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDeviceAudioBasedVibrationProperty); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputDeviceAudioBasedVibrationProperty) \
	NO_API virtual ~UInputDeviceAudioBasedVibrationProperty();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_499_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_502_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_502_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_502_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_502_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_502_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_502_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_502_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_502_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_502_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_502_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_502_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_502_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInputDeviceAudioBasedVibrationProperty>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
