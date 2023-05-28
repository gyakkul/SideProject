// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/MultiLineEditableText.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
struct FSlateFontInfo;
struct FTextBlockStyle;
#ifdef UMG_MultiLineEditableText_generated_h
#error "MultiLineEditableText.generated.h already included, missing '#pragma once' in MultiLineEditableText.h"
#endif
#define UMG_MultiLineEditableText_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_27_DELEGATE \
static void FOnMultiLineEditableTextChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMultiLineEditableTextChangedEvent, FText const& Text);


#define FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_28_DELEGATE \
static void FOnMultiLineEditableTextCommittedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMultiLineEditableTextCommittedEvent, FText const& Text, ETextCommit::Type CommitMethod);


#define FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_23_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetFontOutlineMaterial); \
	DECLARE_FUNCTION(execSetFontMaterial); \
	DECLARE_FUNCTION(execSetFont); \
	DECLARE_FUNCTION(execGetFont); \
	DECLARE_FUNCTION(execSetWidgetStyle); \
	DECLARE_FUNCTION(execSetIsReadOnly); \
	DECLARE_FUNCTION(execSetHintText); \
	DECLARE_FUNCTION(execGetHintText); \
	DECLARE_FUNCTION(execSetText); \
	DECLARE_FUNCTION(execGetText);


#define FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetFontOutlineMaterial); \
	DECLARE_FUNCTION(execSetFontMaterial); \
	DECLARE_FUNCTION(execSetFont); \
	DECLARE_FUNCTION(execGetFont); \
	DECLARE_FUNCTION(execSetWidgetStyle); \
	DECLARE_FUNCTION(execSetIsReadOnly); \
	DECLARE_FUNCTION(execSetHintText); \
	DECLARE_FUNCTION(execGetHintText); \
	DECLARE_FUNCTION(execSetText); \
	DECLARE_FUNCTION(execGetText);


#define FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_23_ACCESSORS \
static void GetText_WrapperImpl(const void* Object, void* OutValue); \
static void SetText_WrapperImpl(void* Object, const void* InValue); \
static void GetHintText_WrapperImpl(const void* Object, void* OutValue); \
static void SetHintText_WrapperImpl(void* Object, const void* InValue); \
static void GetbIsReadOnly_WrapperImpl(const void* Object, void* OutValue); \
static void SetbIsReadOnly_WrapperImpl(void* Object, const void* InValue); \
static void GetSelectAllTextWhenFocused_WrapperImpl(const void* Object, void* OutValue); \
static void SetSelectAllTextWhenFocused_WrapperImpl(void* Object, const void* InValue); \
static void GetRevertTextOnEscape_WrapperImpl(const void* Object, void* OutValue); \
static void SetRevertTextOnEscape_WrapperImpl(void* Object, const void* InValue); \
static void GetClearKeyboardFocusOnCommit_WrapperImpl(const void* Object, void* OutValue); \
static void SetClearKeyboardFocusOnCommit_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiLineEditableText(); \
	friend struct Z_Construct_UClass_UMultiLineEditableText_Statics; \
public: \
	DECLARE_CLASS(UMultiLineEditableText, UTextLayoutWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UMultiLineEditableText)


#define FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUMultiLineEditableText(); \
	friend struct Z_Construct_UClass_UMultiLineEditableText_Statics; \
public: \
	DECLARE_CLASS(UMultiLineEditableText, UTextLayoutWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UMultiLineEditableText)


#define FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiLineEditableText(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiLineEditableText) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiLineEditableText); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiLineEditableText); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiLineEditableText(UMultiLineEditableText&&); \
	NO_API UMultiLineEditableText(const UMultiLineEditableText&); \
public: \
	NO_API virtual ~UMultiLineEditableText();


#define FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiLineEditableText(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiLineEditableText(UMultiLineEditableText&&); \
	NO_API UMultiLineEditableText(const UMultiLineEditableText&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiLineEditableText); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiLineEditableText); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiLineEditableText) \
	NO_API virtual ~UMultiLineEditableText();


#define FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_23_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(UMG_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(Text) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(Text) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_20_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_23_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_23_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_23_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_23_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_23_STANDARD_CONSTRUCTORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_23_FIELDNOTIFY \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_23_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_23_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_23_ENHANCED_CONSTRUCTORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h_23_FIELDNOTIFY \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MultiLineEditableText."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UMultiLineEditableText>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableText_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
