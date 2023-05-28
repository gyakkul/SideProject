// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Groups/CommonButtonGroupBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonButtonBase;
#ifdef COMMONUI_CommonButtonGroupBase_generated_h
#error "CommonButtonGroupBase.generated.h already included, missing '#pragma once' in CommonButtonGroupBase.h"
#endif
#define COMMONUI_CommonButtonGroupBase_generated_h

#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_10_DELEGATE \
COMMONUI_API void FSimpleButtonBaseGroupDelegate_DelegateWrapper(const FMulticastScriptDelegate& SimpleButtonBaseGroupDelegate, UCommonButtonBase* AssociatedButton, int32 ButtonIndex);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_11_DELEGATE \
COMMONUI_API void FOnSelectionCleared_DelegateWrapper(const FMulticastScriptDelegate& OnSelectionCleared);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_20_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnButtonBaseUnhovered); \
	DECLARE_FUNCTION(execOnButtonBaseHovered); \
	DECLARE_FUNCTION(execOnHandleButtonBaseDoubleClicked); \
	DECLARE_FUNCTION(execOnHandleButtonBaseClicked); \
	DECLARE_FUNCTION(execOnSelectionStateChangedBase); \
	DECLARE_FUNCTION(execGetButtonCount); \
	DECLARE_FUNCTION(execHasAnyButtons); \
	DECLARE_FUNCTION(execGetSelectedButtonBase); \
	DECLARE_FUNCTION(execGetButtonBaseAtIndex); \
	DECLARE_FUNCTION(execFindButtonIndex); \
	DECLARE_FUNCTION(execGetHoveredButtonIndex); \
	DECLARE_FUNCTION(execGetSelectedButtonIndex); \
	DECLARE_FUNCTION(execSelectButtonAtIndex); \
	DECLARE_FUNCTION(execSelectPreviousButton); \
	DECLARE_FUNCTION(execSelectNextButton); \
	DECLARE_FUNCTION(execDeselectAll); \
	DECLARE_FUNCTION(execSetSelectionRequired);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnButtonBaseUnhovered); \
	DECLARE_FUNCTION(execOnButtonBaseHovered); \
	DECLARE_FUNCTION(execOnHandleButtonBaseDoubleClicked); \
	DECLARE_FUNCTION(execOnHandleButtonBaseClicked); \
	DECLARE_FUNCTION(execOnSelectionStateChangedBase); \
	DECLARE_FUNCTION(execGetButtonCount); \
	DECLARE_FUNCTION(execHasAnyButtons); \
	DECLARE_FUNCTION(execGetSelectedButtonBase); \
	DECLARE_FUNCTION(execGetButtonBaseAtIndex); \
	DECLARE_FUNCTION(execFindButtonIndex); \
	DECLARE_FUNCTION(execGetHoveredButtonIndex); \
	DECLARE_FUNCTION(execGetSelectedButtonIndex); \
	DECLARE_FUNCTION(execSelectButtonAtIndex); \
	DECLARE_FUNCTION(execSelectPreviousButton); \
	DECLARE_FUNCTION(execSelectNextButton); \
	DECLARE_FUNCTION(execDeselectAll); \
	DECLARE_FUNCTION(execSetSelectionRequired);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_20_ACCESSORS
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonButtonGroupBase(); \
	friend struct Z_Construct_UClass_UCommonButtonGroupBase_Statics; \
public: \
	DECLARE_CLASS(UCommonButtonGroupBase, UCommonWidgetGroupBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonButtonGroupBase)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUCommonButtonGroupBase(); \
	friend struct Z_Construct_UClass_UCommonButtonGroupBase_Statics; \
public: \
	DECLARE_CLASS(UCommonButtonGroupBase, UCommonWidgetGroupBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonButtonGroupBase)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonButtonGroupBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonButtonGroupBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonButtonGroupBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonButtonGroupBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonButtonGroupBase(UCommonButtonGroupBase&&); \
	NO_API UCommonButtonGroupBase(const UCommonButtonGroupBase&); \
public: \
	NO_API virtual ~UCommonButtonGroupBase();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonButtonGroupBase(UCommonButtonGroupBase&&); \
	NO_API UCommonButtonGroupBase(const UCommonButtonGroupBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonButtonGroupBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonButtonGroupBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonButtonGroupBase) \
	NO_API virtual ~UCommonButtonGroupBase();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_20_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_20_INCLASS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_20_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_API UClass* StaticClass<class UCommonButtonGroupBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Groups_CommonButtonGroupBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
