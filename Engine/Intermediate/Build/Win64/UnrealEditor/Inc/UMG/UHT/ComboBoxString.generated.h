// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ComboBoxString.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_ComboBoxString_generated_h
#error "ComboBoxString.generated.h already included, missing '#pragma once' in ComboBoxString.h"
#endif
#define UMG_ComboBoxString_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_25_DELEGATE \
static void FOnSelectionChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnSelectionChangedEvent, const FString& SelectedItem, ESelectInfo::Type SelectionType);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_26_DELEGATE \
static void FOnOpeningEvent_DelegateWrapper(const FMulticastScriptDelegate& OnOpeningEvent);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsOpen); \
	DECLARE_FUNCTION(execGetOptionCount); \
	DECLARE_FUNCTION(execGetSelectedIndex); \
	DECLARE_FUNCTION(execGetSelectedOption); \
	DECLARE_FUNCTION(execSetSelectedIndex); \
	DECLARE_FUNCTION(execSetSelectedOption); \
	DECLARE_FUNCTION(execRefreshOptions); \
	DECLARE_FUNCTION(execClearSelection); \
	DECLARE_FUNCTION(execClearOptions); \
	DECLARE_FUNCTION(execGetOptionAtIndex); \
	DECLARE_FUNCTION(execFindOptionIndex); \
	DECLARE_FUNCTION(execRemoveOption); \
	DECLARE_FUNCTION(execAddOption);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsOpen); \
	DECLARE_FUNCTION(execGetOptionCount); \
	DECLARE_FUNCTION(execGetSelectedIndex); \
	DECLARE_FUNCTION(execGetSelectedOption); \
	DECLARE_FUNCTION(execSetSelectedIndex); \
	DECLARE_FUNCTION(execSetSelectedOption); \
	DECLARE_FUNCTION(execRefreshOptions); \
	DECLARE_FUNCTION(execClearSelection); \
	DECLARE_FUNCTION(execClearOptions); \
	DECLARE_FUNCTION(execGetOptionAtIndex); \
	DECLARE_FUNCTION(execFindOptionIndex); \
	DECLARE_FUNCTION(execRemoveOption); \
	DECLARE_FUNCTION(execAddOption);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_ACCESSORS \
static void GetWidgetStyle_WrapperImpl(const void* Object, void* OutValue); \
static void SetWidgetStyle_WrapperImpl(void* Object, const void* InValue); \
static void GetItemStyle_WrapperImpl(const void* Object, void* OutValue); \
static void SetItemStyle_WrapperImpl(void* Object, const void* InValue); \
static void GetScrollBarStyle_WrapperImpl(const void* Object, void* OutValue); \
static void GetContentPadding_WrapperImpl(const void* Object, void* OutValue); \
static void SetContentPadding_WrapperImpl(void* Object, const void* InValue); \
static void GetMaxListHeight_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaxListHeight_WrapperImpl(void* Object, const void* InValue); \
static void GetHasDownArrow_WrapperImpl(const void* Object, void* OutValue); \
static void SetHasDownArrow_WrapperImpl(void* Object, const void* InValue); \
static void GetEnableGamepadNavigationMode_WrapperImpl(const void* Object, void* OutValue); \
static void SetEnableGamepadNavigationMode_WrapperImpl(void* Object, const void* InValue); \
static void GetFont_WrapperImpl(const void* Object, void* OutValue); \
static void GetForegroundColor_WrapperImpl(const void* Object, void* OutValue); \
static void GetbIsFocusable_WrapperImpl(const void* Object, void* OutValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UComboBoxString, NO_API)


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComboBoxString(); \
	friend struct Z_Construct_UClass_UComboBoxString_Statics; \
public: \
	DECLARE_CLASS(UComboBoxString, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UComboBoxString) \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUComboBoxString(); \
	friend struct Z_Construct_UClass_UComboBoxString_Statics; \
public: \
	DECLARE_CLASS(UComboBoxString, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UComboBoxString) \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComboBoxString(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComboBoxString) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComboBoxString); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComboBoxString); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComboBoxString(UComboBoxString&&); \
	NO_API UComboBoxString(const UComboBoxString&); \
public: \
	NO_API virtual ~UComboBoxString();


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComboBoxString(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComboBoxString(UComboBoxString&&); \
	NO_API UComboBoxString(const UComboBoxString&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComboBoxString); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComboBoxString); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComboBoxString) \
	NO_API virtual ~UComboBoxString();


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(UMG_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(SelectedOption) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(SelectedOption) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_20_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_STANDARD_CONSTRUCTORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_FIELDNOTIFY \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_ENHANCED_CONSTRUCTORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h_23_FIELDNOTIFY \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ComboBoxString."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UComboBoxString>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxString_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
