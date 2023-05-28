// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/EditableText.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
enum class ETextOverflowPolicy : uint8;
struct FSlateFontInfo;
#ifdef UMG_EditableText_generated_h
#error "EditableText.generated.h already included, missing '#pragma once' in EditableText.h"
#endif
#define UMG_EditableText_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_EditableText_h_31_DELEGATE \
static void FOnEditableTextChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnEditableTextChangedEvent, FText const& Text);


#define FID_Engine_Source_Runtime_UMG_Public_Components_EditableText_h_32_DELEGATE \
static void FOnEditableTextCommittedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnEditableTextCommittedEvent, FText const& Text, ETextCommit::Type CommitMethod);


#define FID_Engine_Source_Runtime_UMG_Public_Components_EditableText_h_27_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_EditableText_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetFontOutlineMaterial); \
	DECLARE_FUNCTION(execSetFontMaterial); \
	DECLARE_FUNCTION(execSetFont); \
	DECLARE_FUNCTION(execGetFont); \
	DECLARE_FUNCTION(execSetTextOverflowPolicy); \
	DECLARE_FUNCTION(execSetJustification); \
	DECLARE_FUNCTION(execGetJustification); \
	DECLARE_FUNCTION(execSetIsReadOnly); \
	DECLARE_FUNCTION(execSetMinimumDesiredWidth); \
	DECLARE_FUNCTION(execSetHintText); \
	DECLARE_FUNCTION(execGetHintText); \
	DECLARE_FUNCTION(execSetIsPassword); \
	DECLARE_FUNCTION(execSetText); \
	DECLARE_FUNCTION(execGetText);


#define FID_Engine_Source_Runtime_UMG_Public_Components_EditableText_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetFontOutlineMaterial); \
	DECLARE_FUNCTION(execSetFontMaterial); \
	DECLARE_FUNCTION(execSetFont); \
	DECLARE_FUNCTION(execGetFont); \
	DECLARE_FUNCTION(execSetTextOverflowPolicy); \
	DECLARE_FUNCTION(execSetJustification); \
	DECLARE_FUNCTION(execGetJustification); \
	DECLARE_FUNCTION(execSetIsReadOnly); \
	DECLARE_FUNCTION(execSetMinimumDesiredWidth); \
	DECLARE_FUNCTION(execSetHintText); \
	DECLARE_FUNCTION(execGetHintText); \
	DECLARE_FUNCTION(execSetIsPassword); \
	DECLARE_FUNCTION(execSetText); \
	DECLARE_FUNCTION(execGetText);


#define FID_Engine_Source_Runtime_UMG_Public_Components_EditableText_h_27_ACCESSORS \
static void GetText_WrapperImpl(const void* Object, void* OutValue); \
static void SetText_WrapperImpl(void* Object, const void* InValue); \
static void GetHintText_WrapperImpl(const void* Object, void* OutValue); \
static void SetHintText_WrapperImpl(void* Object, const void* InValue); \
static void SetWidgetStyle_WrapperImpl(void* Object, const void* InValue); \
static void GetIsReadOnly_WrapperImpl(const void* Object, void* OutValue); \
static void SetIsReadOnly_WrapperImpl(void* Object, const void* InValue); \
static void GetIsPassword_WrapperImpl(const void* Object, void* OutValue); \
static void SetIsPassword_WrapperImpl(void* Object, const void* InValue); \
static void GetMinimumDesiredWidth_WrapperImpl(const void* Object, void* OutValue); \
static void SetMinimumDesiredWidth_WrapperImpl(void* Object, const void* InValue); \
static void GetIsCaretMovedWhenGainFocus_WrapperImpl(const void* Object, void* OutValue); \
static void SetIsCaretMovedWhenGainFocus_WrapperImpl(void* Object, const void* InValue); \
static void GetSelectAllTextWhenFocused_WrapperImpl(const void* Object, void* OutValue); \
static void SetSelectAllTextWhenFocused_WrapperImpl(void* Object, const void* InValue); \
static void GetRevertTextOnEscape_WrapperImpl(const void* Object, void* OutValue); \
static void SetRevertTextOnEscape_WrapperImpl(void* Object, const void* InValue); \
static void GetClearKeyboardFocusOnCommit_WrapperImpl(const void* Object, void* OutValue); \
static void SetClearKeyboardFocusOnCommit_WrapperImpl(void* Object, const void* InValue); \
static void GetSelectAllTextOnCommit_WrapperImpl(const void* Object, void* OutValue); \
static void SetSelectAllTextOnCommit_WrapperImpl(void* Object, const void* InValue); \
static void GetJustification_WrapperImpl(const void* Object, void* OutValue); \
static void SetJustification_WrapperImpl(void* Object, const void* InValue); \
static void GetOverflowPolicy_WrapperImpl(const void* Object, void* OutValue); \
static void SetOverflowPolicy_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_EditableText_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableText(); \
	friend struct Z_Construct_UClass_UEditableText_Statics; \
public: \
	DECLARE_CLASS(UEditableText, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UEditableText)


#define FID_Engine_Source_Runtime_UMG_Public_Components_EditableText_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUEditableText(); \
	friend struct Z_Construct_UClass_UEditableText_Statics; \
public: \
	DECLARE_CLASS(UEditableText, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UEditableText)


#define FID_Engine_Source_Runtime_UMG_Public_Components_EditableText_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableText(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableText) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableText); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableText); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableText(UEditableText&&); \
	NO_API UEditableText(const UEditableText&); \
public: \
	NO_API virtual ~UEditableText();


#define FID_Engine_Source_Runtime_UMG_Public_Components_EditableText_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableText(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableText(UEditableText&&); \
	NO_API UEditableText(const UEditableText&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableText); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableText); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableText) \
	NO_API virtual ~UEditableText();


#define FID_Engine_Source_Runtime_UMG_Public_Components_EditableText_h_27_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(UMG_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(Text) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(Text) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_Engine_Source_Runtime_UMG_Public_Components_EditableText_h_24_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_EditableText_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_EditableText_h_27_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_EditableText_h_27_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_EditableText_h_27_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_EditableText_h_27_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_EditableText_h_27_STANDARD_CONSTRUCTORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_EditableText_h_27_FIELDNOTIFY \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_EditableText_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_EditableText_h_27_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_EditableText_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_EditableText_h_27_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_EditableText_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_EditableText_h_27_ENHANCED_CONSTRUCTORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_EditableText_h_27_FIELDNOTIFY \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EditableText."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UEditableText>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_EditableText_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
