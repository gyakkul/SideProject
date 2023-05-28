// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonButtonBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonButtonBase;
class UCommonButtonStyle;
class UCommonTextStyle;
class UInputAction;
class UMaterialInstanceDynamic;
class USoundBase;
enum class ECommonInputType : uint8;
struct FDataTableRowHandle;
struct FMargin;
struct FSlateBrush;
#ifdef COMMONUI_CommonButtonBase_generated_h
#error "CommonButtonBase.generated.h already included, missing '#pragma once' in CommonButtonBase.h"
#endif
#define COMMONUI_CommonButtonBase_generated_h

#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics; \
	COMMONUI_API static class UScriptStruct* StaticStruct();


template<> COMMONUI_API UScriptStruct* StaticStruct<struct FCommonButtonStyleOptionalSlateSound>();

#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_57_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_57_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDisabledTextStyle); \
	DECLARE_FUNCTION(execGetSelectedHoveredTextStyle); \
	DECLARE_FUNCTION(execGetSelectedTextStyle); \
	DECLARE_FUNCTION(execGetNormalHoveredTextStyle); \
	DECLARE_FUNCTION(execGetNormalTextStyle); \
	DECLARE_FUNCTION(execGetCustomPadding); \
	DECLARE_FUNCTION(execGetButtonPadding); \
	DECLARE_FUNCTION(execGetDisabledBrush); \
	DECLARE_FUNCTION(execGetSelectedPressedBrush); \
	DECLARE_FUNCTION(execGetSelectedHoveredBrush); \
	DECLARE_FUNCTION(execGetSelectedBaseBrush); \
	DECLARE_FUNCTION(execGetNormalPressedBrush); \
	DECLARE_FUNCTION(execGetNormalHoveredBrush); \
	DECLARE_FUNCTION(execGetNormalBaseBrush); \
	DECLARE_FUNCTION(execGetMaterialBrush);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDisabledTextStyle); \
	DECLARE_FUNCTION(execGetSelectedHoveredTextStyle); \
	DECLARE_FUNCTION(execGetSelectedTextStyle); \
	DECLARE_FUNCTION(execGetNormalHoveredTextStyle); \
	DECLARE_FUNCTION(execGetNormalTextStyle); \
	DECLARE_FUNCTION(execGetCustomPadding); \
	DECLARE_FUNCTION(execGetButtonPadding); \
	DECLARE_FUNCTION(execGetDisabledBrush); \
	DECLARE_FUNCTION(execGetSelectedPressedBrush); \
	DECLARE_FUNCTION(execGetSelectedHoveredBrush); \
	DECLARE_FUNCTION(execGetSelectedBaseBrush); \
	DECLARE_FUNCTION(execGetNormalPressedBrush); \
	DECLARE_FUNCTION(execGetNormalHoveredBrush); \
	DECLARE_FUNCTION(execGetNormalBaseBrush); \
	DECLARE_FUNCTION(execGetMaterialBrush);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_57_ACCESSORS
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonButtonStyle(); \
	friend struct Z_Construct_UClass_UCommonButtonStyle_Statics; \
public: \
	DECLARE_CLASS(UCommonButtonStyle, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonButtonStyle)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_57_INCLASS \
private: \
	static void StaticRegisterNativesUCommonButtonStyle(); \
	friend struct Z_Construct_UClass_UCommonButtonStyle_Statics; \
public: \
	DECLARE_CLASS(UCommonButtonStyle, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonButtonStyle)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonButtonStyle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonButtonStyle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonButtonStyle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonButtonStyle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonButtonStyle(UCommonButtonStyle&&); \
	NO_API UCommonButtonStyle(const UCommonButtonStyle&); \
public: \
	NO_API virtual ~UCommonButtonStyle();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonButtonStyle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonButtonStyle(UCommonButtonStyle&&); \
	NO_API UCommonButtonStyle(const UCommonButtonStyle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonButtonStyle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonButtonStyle); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonButtonStyle) \
	NO_API virtual ~UCommonButtonStyle();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_54_PROLOG
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_57_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_57_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_57_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_57_INCLASS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_57_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_57_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_57_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_API UClass* StaticClass<class UCommonButtonStyle>();

#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_212_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_212_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_212_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_212_ACCESSORS
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_212_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonButtonInternalBase(); \
	friend struct Z_Construct_UClass_UCommonButtonInternalBase_Statics; \
public: \
	DECLARE_CLASS(UCommonButtonInternalBase, UButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonButtonInternalBase)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_212_INCLASS \
private: \
	static void StaticRegisterNativesUCommonButtonInternalBase(); \
	friend struct Z_Construct_UClass_UCommonButtonInternalBase_Statics; \
public: \
	DECLARE_CLASS(UCommonButtonInternalBase, UButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonButtonInternalBase)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_212_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonButtonInternalBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonButtonInternalBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonButtonInternalBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonButtonInternalBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonButtonInternalBase(UCommonButtonInternalBase&&); \
	NO_API UCommonButtonInternalBase(const UCommonButtonInternalBase&); \
public: \
	NO_API virtual ~UCommonButtonInternalBase();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_212_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonButtonInternalBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonButtonInternalBase(UCommonButtonInternalBase&&); \
	NO_API UCommonButtonInternalBase(const UCommonButtonInternalBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonButtonInternalBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonButtonInternalBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonButtonInternalBase) \
	NO_API virtual ~UCommonButtonInternalBase();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_209_PROLOG
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_212_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_212_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_212_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_212_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_212_INCLASS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_212_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_212_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_212_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_212_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_212_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_212_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_212_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CommonButtonInternalBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_API UClass* StaticClass<class UCommonButtonInternalBase>();

#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_280_DELEGATE \
COMMONUI_API void FCommonSelectedStateChangedBase_DelegateWrapper(const FMulticastScriptDelegate& CommonSelectedStateChangedBase, UCommonButtonBase* Button, bool Selected);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_281_DELEGATE \
COMMONUI_API void FCommonButtonBaseClicked_DelegateWrapper(const FMulticastScriptDelegate& CommonButtonBaseClicked, UCommonButtonBase* Button);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_289_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_289_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNativeOnActionComplete); \
	DECLARE_FUNCTION(execNativeOnActionProgress); \
	DECLARE_FUNCTION(execSetSelectedInternal); \
	DECLARE_FUNCTION(execStopDoubleClickPropagation); \
	DECLARE_FUNCTION(execHandleButtonReleased); \
	DECLARE_FUNCTION(execHandleButtonPressed); \
	DECLARE_FUNCTION(execHandleFocusLost); \
	DECLARE_FUNCTION(execHandleFocusReceived); \
	DECLARE_FUNCTION(execHandleButtonClicked); \
	DECLARE_FUNCTION(execHandleTriggeringActionCommited); \
	DECLARE_FUNCTION(execOnInputMethodChanged); \
	DECLARE_FUNCTION(execSetLockedHoveredSoundOverride); \
	DECLARE_FUNCTION(execSetLockedPressedSoundOverride); \
	DECLARE_FUNCTION(execSetSelectedHoveredSoundOverride); \
	DECLARE_FUNCTION(execSetSelectedPressedSoundOverride); \
	DECLARE_FUNCTION(execSetHoveredSoundOverride); \
	DECLARE_FUNCTION(execSetPressedSoundOverride); \
	DECLARE_FUNCTION(execSetInputActionProgressMaterial); \
	DECLARE_FUNCTION(execGetSingleMaterialStyleMID); \
	DECLARE_FUNCTION(execGetIsFocusable); \
	DECLARE_FUNCTION(execSetIsFocusable); \
	DECLARE_FUNCTION(execGetEnhancedInputAction); \
	DECLARE_FUNCTION(execGetInputAction); \
	DECLARE_FUNCTION(execSetTriggeringEnhancedInputAction); \
	DECLARE_FUNCTION(execSetTriggeringInputAction); \
	DECLARE_FUNCTION(execSetTriggeredInputAction); \
	DECLARE_FUNCTION(execSetMinDimensions); \
	DECLARE_FUNCTION(execGetCurrentTextStyleClass); \
	DECLARE_FUNCTION(execGetCurrentTextStyle); \
	DECLARE_FUNCTION(execGetCurrentCustomPadding); \
	DECLARE_FUNCTION(execGetCurrentButtonPadding); \
	DECLARE_FUNCTION(execGetStyle); \
	DECLARE_FUNCTION(execSetStyle); \
	DECLARE_FUNCTION(execGetShouldSelectUponReceivingFocus); \
	DECLARE_FUNCTION(execSetShouldSelectUponReceivingFocus); \
	DECLARE_FUNCTION(execClearSelection); \
	DECLARE_FUNCTION(execGetLocked); \
	DECLARE_FUNCTION(execGetSelected); \
	DECLARE_FUNCTION(execSetIsLocked); \
	DECLARE_FUNCTION(execSetIsSelected); \
	DECLARE_FUNCTION(execSetShouldUseFallbackDefaultInputAction); \
	DECLARE_FUNCTION(execSetIsToggleable); \
	DECLARE_FUNCTION(execSetIsInteractableWhenSelected); \
	DECLARE_FUNCTION(execSetIsSelectable); \
	DECLARE_FUNCTION(execSetPressMethod); \
	DECLARE_FUNCTION(execSetTouchMethod); \
	DECLARE_FUNCTION(execSetClickMethod); \
	DECLARE_FUNCTION(execIsPressed); \
	DECLARE_FUNCTION(execIsInteractionEnabled); \
	DECLARE_FUNCTION(execSetHideInputAction); \
	DECLARE_FUNCTION(execSetIsInteractionEnabled); \
	DECLARE_FUNCTION(execDisableButtonWithReason);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_289_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNativeOnActionComplete); \
	DECLARE_FUNCTION(execNativeOnActionProgress); \
	DECLARE_FUNCTION(execSetSelectedInternal); \
	DECLARE_FUNCTION(execStopDoubleClickPropagation); \
	DECLARE_FUNCTION(execHandleButtonReleased); \
	DECLARE_FUNCTION(execHandleButtonPressed); \
	DECLARE_FUNCTION(execHandleFocusLost); \
	DECLARE_FUNCTION(execHandleFocusReceived); \
	DECLARE_FUNCTION(execHandleButtonClicked); \
	DECLARE_FUNCTION(execHandleTriggeringActionCommited); \
	DECLARE_FUNCTION(execOnInputMethodChanged); \
	DECLARE_FUNCTION(execSetLockedHoveredSoundOverride); \
	DECLARE_FUNCTION(execSetLockedPressedSoundOverride); \
	DECLARE_FUNCTION(execSetSelectedHoveredSoundOverride); \
	DECLARE_FUNCTION(execSetSelectedPressedSoundOverride); \
	DECLARE_FUNCTION(execSetHoveredSoundOverride); \
	DECLARE_FUNCTION(execSetPressedSoundOverride); \
	DECLARE_FUNCTION(execSetInputActionProgressMaterial); \
	DECLARE_FUNCTION(execGetSingleMaterialStyleMID); \
	DECLARE_FUNCTION(execGetIsFocusable); \
	DECLARE_FUNCTION(execSetIsFocusable); \
	DECLARE_FUNCTION(execGetEnhancedInputAction); \
	DECLARE_FUNCTION(execGetInputAction); \
	DECLARE_FUNCTION(execSetTriggeringEnhancedInputAction); \
	DECLARE_FUNCTION(execSetTriggeringInputAction); \
	DECLARE_FUNCTION(execSetTriggeredInputAction); \
	DECLARE_FUNCTION(execSetMinDimensions); \
	DECLARE_FUNCTION(execGetCurrentTextStyleClass); \
	DECLARE_FUNCTION(execGetCurrentTextStyle); \
	DECLARE_FUNCTION(execGetCurrentCustomPadding); \
	DECLARE_FUNCTION(execGetCurrentButtonPadding); \
	DECLARE_FUNCTION(execGetStyle); \
	DECLARE_FUNCTION(execSetStyle); \
	DECLARE_FUNCTION(execGetShouldSelectUponReceivingFocus); \
	DECLARE_FUNCTION(execSetShouldSelectUponReceivingFocus); \
	DECLARE_FUNCTION(execClearSelection); \
	DECLARE_FUNCTION(execGetLocked); \
	DECLARE_FUNCTION(execGetSelected); \
	DECLARE_FUNCTION(execSetIsLocked); \
	DECLARE_FUNCTION(execSetIsSelected); \
	DECLARE_FUNCTION(execSetShouldUseFallbackDefaultInputAction); \
	DECLARE_FUNCTION(execSetIsToggleable); \
	DECLARE_FUNCTION(execSetIsInteractableWhenSelected); \
	DECLARE_FUNCTION(execSetIsSelectable); \
	DECLARE_FUNCTION(execSetPressMethod); \
	DECLARE_FUNCTION(execSetTouchMethod); \
	DECLARE_FUNCTION(execSetClickMethod); \
	DECLARE_FUNCTION(execIsPressed); \
	DECLARE_FUNCTION(execIsInteractionEnabled); \
	DECLARE_FUNCTION(execSetHideInputAction); \
	DECLARE_FUNCTION(execSetIsInteractionEnabled); \
	DECLARE_FUNCTION(execDisableButtonWithReason);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_289_ACCESSORS
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_289_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_289_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonButtonBase(); \
	friend struct Z_Construct_UClass_UCommonButtonBase_Statics; \
public: \
	DECLARE_CLASS(UCommonButtonBase, UCommonUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonButtonBase)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_289_INCLASS \
private: \
	static void StaticRegisterNativesUCommonButtonBase(); \
	friend struct Z_Construct_UClass_UCommonButtonBase_Statics; \
public: \
	DECLARE_CLASS(UCommonButtonBase, UCommonUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonButtonBase)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_289_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonButtonBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonButtonBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonButtonBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonButtonBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonButtonBase(UCommonButtonBase&&); \
	NO_API UCommonButtonBase(const UCommonButtonBase&); \
public: \
	NO_API virtual ~UCommonButtonBase();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_289_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonButtonBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonButtonBase(UCommonButtonBase&&); \
	NO_API UCommonButtonBase(const UCommonButtonBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonButtonBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonButtonBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonButtonBase) \
	NO_API virtual ~UCommonButtonBase();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_286_PROLOG
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_289_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_289_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_289_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_289_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_289_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_289_INCLASS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_289_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_289_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_289_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_289_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_289_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_289_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_289_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_289_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CommonButtonBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_API UClass* StaticClass<class UCommonButtonBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
