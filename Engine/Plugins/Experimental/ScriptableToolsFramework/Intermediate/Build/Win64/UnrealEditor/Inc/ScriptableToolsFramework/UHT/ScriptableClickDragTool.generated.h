// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseTools/ScriptableClickDragTool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputDeviceRay;
struct FInputRayHit;
struct FScriptableToolModifierStates;
#ifdef SCRIPTABLETOOLSFRAMEWORK_ScriptableClickDragTool_generated_h
#error "ScriptableClickDragTool.generated.h already included, missing '#pragma once' in ScriptableClickDragTool.h"
#endif
#define SCRIPTABLETOOLSFRAMEWORK_ScriptableClickDragTool_generated_h

#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_25_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_25_RPC_WRAPPERS \
	virtual void OnHoverEnd_Implementation(FScriptableToolModifierStates const& Modifiers); \
	virtual bool OnHoverUpdate_Implementation(FInputDeviceRay HoverPos, FScriptableToolModifierStates const& Modifiers); \
	virtual void OnHoverBegin_Implementation(FInputDeviceRay HoverPos, FScriptableToolModifierStates const& Modifiers); \
	virtual FInputRayHit OnHoverHitTest_Implementation(FInputDeviceRay HoverPos, FScriptableToolModifierStates const& Modifiers); \
	virtual void OnDragSequenceCancelled_Implementation(); \
	virtual void OnDragEnd_Implementation(FInputDeviceRay EndPosition, FScriptableToolModifierStates const& Modifiers); \
	virtual void OnDragUpdatePosition_Implementation(FInputDeviceRay NewPosition, FScriptableToolModifierStates const& Modifiers); \
	virtual void OnDragBegin_Implementation(FInputDeviceRay StartPosition, FScriptableToolModifierStates const& Modifiers); \
	virtual FInputRayHit TestIfCanBeginClickDrag_Implementation(FInputDeviceRay ClickPos, FScriptableToolModifierStates const& Modifiers); \
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
	DECLARE_FUNCTION(execInActiveClickDrag); \
	DECLARE_FUNCTION(execOnDragSequenceCancelled); \
	DECLARE_FUNCTION(execOnDragEnd); \
	DECLARE_FUNCTION(execOnDragUpdatePosition); \
	DECLARE_FUNCTION(execOnDragBegin); \
	DECLARE_FUNCTION(execTestIfCanBeginClickDrag);


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execInActiveClickDrag); \
	DECLARE_FUNCTION(execOnDragSequenceCancelled); \
	DECLARE_FUNCTION(execOnDragEnd); \
	DECLARE_FUNCTION(execOnDragUpdatePosition); \
	DECLARE_FUNCTION(execOnDragBegin); \
	DECLARE_FUNCTION(execTestIfCanBeginClickDrag);


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_25_ACCESSORS
#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_25_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptableClickDragTool(); \
	friend struct Z_Construct_UClass_UScriptableClickDragTool_Statics; \
public: \
	DECLARE_CLASS(UScriptableClickDragTool, UScriptableInteractiveTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UScriptableClickDragTool)


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUScriptableClickDragTool(); \
	friend struct Z_Construct_UClass_UScriptableClickDragTool_Statics; \
public: \
	DECLARE_CLASS(UScriptableClickDragTool, UScriptableInteractiveTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UScriptableClickDragTool)


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptableClickDragTool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptableClickDragTool) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptableClickDragTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptableClickDragTool); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScriptableClickDragTool(UScriptableClickDragTool&&); \
	NO_API UScriptableClickDragTool(const UScriptableClickDragTool&); \
public: \
	NO_API virtual ~UScriptableClickDragTool();


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptableClickDragTool(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScriptableClickDragTool(UScriptableClickDragTool&&); \
	NO_API UScriptableClickDragTool(const UScriptableClickDragTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptableClickDragTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptableClickDragTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UScriptableClickDragTool) \
	NO_API virtual ~UScriptableClickDragTool();


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_22_PROLOG
#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_25_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_25_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_25_ACCESSORS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_25_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_25_INCLASS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_25_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_25_ACCESSORS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_25_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCRIPTABLETOOLSFRAMEWORK_API UClass* StaticClass<class UScriptableClickDragTool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
