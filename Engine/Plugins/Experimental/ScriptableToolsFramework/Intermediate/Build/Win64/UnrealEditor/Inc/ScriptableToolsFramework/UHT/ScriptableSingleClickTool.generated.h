// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseTools/ScriptableSingleClickTool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputDeviceRay;
struct FInputRayHit;
struct FScriptableToolModifierStates;
#ifdef SCRIPTABLETOOLSFRAMEWORK_ScriptableSingleClickTool_generated_h
#error "ScriptableSingleClickTool.generated.h already included, missing '#pragma once' in ScriptableSingleClickTool.h"
#endif
#define SCRIPTABLETOOLSFRAMEWORK_ScriptableSingleClickTool_generated_h

#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_30_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_30_RPC_WRAPPERS \
	virtual void OnHoverEnd_Implementation(FScriptableToolModifierStates const& Modifiers); \
	virtual bool OnHoverUpdate_Implementation(FInputDeviceRay HoverPos, FScriptableToolModifierStates const& Modifiers); \
	virtual void OnHoverBegin_Implementation(FInputDeviceRay HoverPos, FScriptableToolModifierStates const& Modifiers); \
	virtual FInputRayHit OnHoverHitTest_Implementation(FInputDeviceRay HoverPos, FScriptableToolModifierStates const& Modifiers); \
	virtual void OnHitByClick_Implementation(FInputDeviceRay ClickPos, FScriptableToolModifierStates const& Modifiers); \
	virtual FInputRayHit TestIfHitByClick_Implementation(FInputDeviceRay ClickPos, FScriptableToolModifierStates const& Modifiers); \
 \
	DECLARE_FUNCTION(execGetActiveModifiers); \
	DECLARE_FUNCTION(execIsAltDown); \
	DECLARE_FUNCTION(execIsCtrlDown); \
	DECLARE_FUNCTION(execIsShiftDown); \
	DECLARE_FUNCTION(execInActiveHover); \
	DECLARE_FUNCTION(execOnHoverEnd); \
	DECLARE_FUNCTION(execOnHoverUpdate); \
	DECLARE_FUNCTION(execOnHoverBegin); \
	DECLARE_FUNCTION(execOnHoverHitTest); \
	DECLARE_FUNCTION(execOnHitByClick); \
	DECLARE_FUNCTION(execTestIfHitByClick);


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActiveModifiers); \
	DECLARE_FUNCTION(execIsAltDown); \
	DECLARE_FUNCTION(execIsCtrlDown); \
	DECLARE_FUNCTION(execIsShiftDown); \
	DECLARE_FUNCTION(execInActiveHover); \
	DECLARE_FUNCTION(execOnHoverEnd); \
	DECLARE_FUNCTION(execOnHoverUpdate); \
	DECLARE_FUNCTION(execOnHoverBegin); \
	DECLARE_FUNCTION(execOnHoverHitTest); \
	DECLARE_FUNCTION(execOnHitByClick); \
	DECLARE_FUNCTION(execTestIfHitByClick);


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_30_ACCESSORS
#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_30_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptableSingleClickTool(); \
	friend struct Z_Construct_UClass_UScriptableSingleClickTool_Statics; \
public: \
	DECLARE_CLASS(UScriptableSingleClickTool, UScriptableInteractiveTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UScriptableSingleClickTool)


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUScriptableSingleClickTool(); \
	friend struct Z_Construct_UClass_UScriptableSingleClickTool_Statics; \
public: \
	DECLARE_CLASS(UScriptableSingleClickTool, UScriptableInteractiveTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UScriptableSingleClickTool)


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptableSingleClickTool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptableSingleClickTool) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptableSingleClickTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptableSingleClickTool); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScriptableSingleClickTool(UScriptableSingleClickTool&&); \
	NO_API UScriptableSingleClickTool(const UScriptableSingleClickTool&); \
public: \
	NO_API virtual ~UScriptableSingleClickTool();


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptableSingleClickTool(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScriptableSingleClickTool(UScriptableSingleClickTool&&); \
	NO_API UScriptableSingleClickTool(const UScriptableSingleClickTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptableSingleClickTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptableSingleClickTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UScriptableSingleClickTool) \
	NO_API virtual ~UScriptableSingleClickTool();


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_27_PROLOG
#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_30_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_30_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_30_ACCESSORS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_30_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_30_INCLASS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_30_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_30_ACCESSORS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_30_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCRIPTABLETOOLSFRAMEWORK_API UClass* StaticClass<class UScriptableSingleClickTool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
