// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Slider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef UMG_Slider_generated_h
#error "Slider.generated.h already included, missing '#pragma once' in Slider.h"
#endif
#define UMG_Slider_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h_14_DELEGATE \
UMG_API void FOnMouseCaptureBeginEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMouseCaptureBeginEvent);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h_15_DELEGATE \
UMG_API void FOnMouseCaptureEndEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMouseCaptureEndEvent);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h_16_DELEGATE \
UMG_API void FOnControllerCaptureBeginEvent_DelegateWrapper(const FMulticastScriptDelegate& OnControllerCaptureBeginEvent);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h_17_DELEGATE \
UMG_API void FOnControllerCaptureEndEvent_DelegateWrapper(const FMulticastScriptDelegate& OnControllerCaptureEndEvent);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h_18_DELEGATE \
UMG_API void FOnFloatValueChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnFloatValueChangedEvent, float Value);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSliderHandleColor); \
	DECLARE_FUNCTION(execSetSliderBarColor); \
	DECLARE_FUNCTION(execSetStepSize); \
	DECLARE_FUNCTION(execSetLocked); \
	DECLARE_FUNCTION(execSetIndentHandle); \
	DECLARE_FUNCTION(execSetMaxValue); \
	DECLARE_FUNCTION(execSetMinValue); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetNormalizedValue); \
	DECLARE_FUNCTION(execGetValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSliderHandleColor); \
	DECLARE_FUNCTION(execSetSliderBarColor); \
	DECLARE_FUNCTION(execSetStepSize); \
	DECLARE_FUNCTION(execSetLocked); \
	DECLARE_FUNCTION(execSetIndentHandle); \
	DECLARE_FUNCTION(execSetMaxValue); \
	DECLARE_FUNCTION(execSetMinValue); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetNormalizedValue); \
	DECLARE_FUNCTION(execGetValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_ACCESSORS \
static void GetValue_WrapperImpl(const void* Object, void* OutValue); \
static void SetValue_WrapperImpl(void* Object, const void* InValue); \
static void GetMinValue_WrapperImpl(const void* Object, void* OutValue); \
static void SetMinValue_WrapperImpl(void* Object, const void* InValue); \
static void GetMaxValue_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaxValue_WrapperImpl(void* Object, const void* InValue); \
static void GetWidgetStyle_WrapperImpl(const void* Object, void* OutValue); \
static void SetWidgetStyle_WrapperImpl(void* Object, const void* InValue); \
static void GetOrientation_WrapperImpl(const void* Object, void* OutValue); \
static void SetOrientation_WrapperImpl(void* Object, const void* InValue); \
static void GetSliderBarColor_WrapperImpl(const void* Object, void* OutValue); \
static void SetSliderBarColor_WrapperImpl(void* Object, const void* InValue); \
static void GetSliderHandleColor_WrapperImpl(const void* Object, void* OutValue); \
static void SetSliderHandleColor_WrapperImpl(void* Object, const void* InValue); \
static void GetIndentHandle_WrapperImpl(const void* Object, void* OutValue); \
static void SetIndentHandle_WrapperImpl(void* Object, const void* InValue); \
static void GetLocked_WrapperImpl(const void* Object, void* OutValue); \
static void SetLocked_WrapperImpl(void* Object, const void* InValue); \
static void GetStepSize_WrapperImpl(const void* Object, void* OutValue); \
static void SetStepSize_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSlider(); \
	friend struct Z_Construct_UClass_USlider_Statics; \
public: \
	DECLARE_CLASS(USlider, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(USlider)


#define FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUSlider(); \
	friend struct Z_Construct_UClass_USlider_Statics; \
public: \
	DECLARE_CLASS(USlider, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(USlider)


#define FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlider(USlider&&); \
	NO_API USlider(const USlider&); \
public: \
	NO_API virtual ~USlider();


#define FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlider(USlider&&); \
	NO_API USlider(const USlider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlider) \
	NO_API virtual ~USlider();


#define FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(UMG_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(Value) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(Value) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h_25_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_STANDARD_CONSTRUCTORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_FIELDNOTIFY \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_ENHANCED_CONSTRUCTORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h_28_FIELDNOTIFY \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Slider."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class USlider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_Slider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
