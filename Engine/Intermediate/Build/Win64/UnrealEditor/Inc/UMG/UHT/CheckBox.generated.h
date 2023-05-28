// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/CheckBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECheckBoxState : uint8;
#ifdef UMG_CheckBox_generated_h
#error "CheckBox.generated.h already included, missing '#pragma once' in CheckBox.h"
#endif
#define UMG_CheckBox_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_19_DELEGATE \
UMG_API void FOnCheckBoxComponentStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCheckBoxComponentStateChanged, bool bIsChecked);


#define FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPressMethod); \
	DECLARE_FUNCTION(execSetTouchMethod); \
	DECLARE_FUNCTION(execSetClickMethod); \
	DECLARE_FUNCTION(execSetCheckedState); \
	DECLARE_FUNCTION(execSetIsChecked); \
	DECLARE_FUNCTION(execGetCheckedState); \
	DECLARE_FUNCTION(execIsChecked); \
	DECLARE_FUNCTION(execIsPressed);


#define FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPressMethod); \
	DECLARE_FUNCTION(execSetTouchMethod); \
	DECLARE_FUNCTION(execSetClickMethod); \
	DECLARE_FUNCTION(execSetCheckedState); \
	DECLARE_FUNCTION(execSetIsChecked); \
	DECLARE_FUNCTION(execGetCheckedState); \
	DECLARE_FUNCTION(execIsChecked); \
	DECLARE_FUNCTION(execIsPressed);


#define FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_ACCESSORS \
static void GetCheckedState_WrapperImpl(const void* Object, void* OutValue); \
static void SetCheckedState_WrapperImpl(void* Object, const void* InValue); \
static void GetWidgetStyle_WrapperImpl(const void* Object, void* OutValue); \
static void SetWidgetStyle_WrapperImpl(void* Object, const void* InValue); \
static void GetClickMethod_WrapperImpl(const void* Object, void* OutValue); \
static void SetClickMethod_WrapperImpl(void* Object, const void* InValue); \
static void GetTouchMethod_WrapperImpl(const void* Object, void* OutValue); \
static void SetTouchMethod_WrapperImpl(void* Object, const void* InValue); \
static void GetPressMethod_WrapperImpl(const void* Object, void* OutValue); \
static void SetPressMethod_WrapperImpl(void* Object, const void* InValue); \
static void GetIsFocusable_WrapperImpl(const void* Object, void* OutValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCheckBox(); \
	friend struct Z_Construct_UClass_UCheckBox_Statics; \
public: \
	DECLARE_CLASS(UCheckBox, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UCheckBox)


#define FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUCheckBox(); \
	friend struct Z_Construct_UClass_UCheckBox_Statics; \
public: \
	DECLARE_CLASS(UCheckBox, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UCheckBox)


#define FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCheckBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCheckBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCheckBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheckBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCheckBox(UCheckBox&&); \
	NO_API UCheckBox(const UCheckBox&); \
public: \
	NO_API virtual ~UCheckBox();


#define FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCheckBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCheckBox(UCheckBox&&); \
	NO_API UCheckBox(const UCheckBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCheckBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheckBox); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCheckBox) \
	NO_API virtual ~UCheckBox();


#define FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(UMG_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(CheckedState) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(CheckedState) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_29_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_STANDARD_CONSTRUCTORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_FIELDNOTIFY \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_ENHANCED_CONSTRUCTORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_FIELDNOTIFY \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CheckBox."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UCheckBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
