// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ComboBoxKey.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
#ifdef UMG_ComboBoxKey_generated_h
#error "ComboBoxKey.generated.h already included, missing '#pragma once' in ComboBoxKey.h"
#endif
#define UMG_ComboBoxKey_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_25_DELEGATE \
static void FOnSelectionChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnSelectionChangedEvent, FName SelectedItem, ESelectInfo::Type SelectionType);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_26_DELEGATE \
static void FOnOpeningEvent_DelegateWrapper(const FMulticastScriptDelegate& OnOpeningEvent);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_27_DELEGATE \
static UWidget* FGenerateWidgetEvent_DelegateWrapper(const FScriptDelegate& GenerateWidgetEvent, FName Item);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsOpen); \
	DECLARE_FUNCTION(execGetSelectedOption); \
	DECLARE_FUNCTION(execSetSelectedOption); \
	DECLARE_FUNCTION(execClearSelection); \
	DECLARE_FUNCTION(execClearOptions); \
	DECLARE_FUNCTION(execRemoveOption); \
	DECLARE_FUNCTION(execAddOption);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsOpen); \
	DECLARE_FUNCTION(execGetSelectedOption); \
	DECLARE_FUNCTION(execSetSelectedOption); \
	DECLARE_FUNCTION(execClearSelection); \
	DECLARE_FUNCTION(execClearOptions); \
	DECLARE_FUNCTION(execRemoveOption); \
	DECLARE_FUNCTION(execAddOption);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_ACCESSORS \
static void GetWidgetStyle_WrapperImpl(const void* Object, void* OutValue); \
static void SetWidgetStyle_WrapperImpl(void* Object, const void* InValue); \
static void GetItemStyle_WrapperImpl(const void* Object, void* OutValue); \
static void SetItemStyle_WrapperImpl(void* Object, const void* InValue); \
static void GetScrollBarStyle_WrapperImpl(const void* Object, void* OutValue); \
static void GetForegroundColor_WrapperImpl(const void* Object, void* OutValue); \
static void GetContentPadding_WrapperImpl(const void* Object, void* OutValue); \
static void SetContentPadding_WrapperImpl(void* Object, const void* InValue); \
static void GetMaxListHeight_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaxListHeight_WrapperImpl(void* Object, const void* InValue); \
static void GetbHasDownArrow_WrapperImpl(const void* Object, void* OutValue); \
static void SetbHasDownArrow_WrapperImpl(void* Object, const void* InValue); \
static void GetbEnableGamepadNavigationMode_WrapperImpl(const void* Object, void* OutValue); \
static void SetbEnableGamepadNavigationMode_WrapperImpl(void* Object, const void* InValue); \
static void GetbIsFocusable_WrapperImpl(const void* Object, void* OutValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComboBoxKey(); \
	friend struct Z_Construct_UClass_UComboBoxKey_Statics; \
public: \
	DECLARE_CLASS(UComboBoxKey, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UComboBoxKey)


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUComboBoxKey(); \
	friend struct Z_Construct_UClass_UComboBoxKey_Statics; \
public: \
	DECLARE_CLASS(UComboBoxKey, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UComboBoxKey)


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComboBoxKey(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComboBoxKey) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComboBoxKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComboBoxKey); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComboBoxKey(UComboBoxKey&&); \
	NO_API UComboBoxKey(const UComboBoxKey&); \
public: \
	NO_API virtual ~UComboBoxKey();


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComboBoxKey(UComboBoxKey&&); \
	NO_API UComboBoxKey(const UComboBoxKey&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComboBoxKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComboBoxKey); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UComboBoxKey) \
	NO_API virtual ~UComboBoxKey();


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(UMG_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(SelectedOption) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(SelectedOption) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_17_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_STANDARD_CONSTRUCTORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_FIELDNOTIFY \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_ENHANCED_CONSTRUCTORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_FIELDNOTIFY \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UComboBoxKey>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
