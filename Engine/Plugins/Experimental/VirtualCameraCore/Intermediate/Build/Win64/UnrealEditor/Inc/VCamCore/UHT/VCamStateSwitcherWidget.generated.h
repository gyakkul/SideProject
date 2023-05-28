// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Switcher/VCamStateSwitcherWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVCamStateSwitcherWidget;
struct FVCamWidgetConnectionState;
#ifdef VCAMCORE_VCamStateSwitcherWidget_generated_h
#error "VCamStateSwitcherWidget.generated.h already included, missing '#pragma once' in VCamStateSwitcherWidget.h"
#endif
#define VCAMCORE_VCamStateSwitcherWidget_generated_h

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_11_DELEGATE \
VCAMCORE_API void FChangeConnectionStateEvent_DelegateWrapper(const FMulticastScriptDelegate& ChangeConnectionStateEvent, UVCamStateSwitcherWidget* Widget, FName OldState, FName NewState);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_22_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStateInfo); \
	DECLARE_FUNCTION(execGetStates); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execSetCurrentState); \
	DECLARE_FUNCTION(execK2_SetCurrentState);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStateInfo); \
	DECLARE_FUNCTION(execGetStates); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execSetCurrentState); \
	DECLARE_FUNCTION(execK2_SetCurrentState);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_22_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVCamStateSwitcherWidget(); \
	friend struct Z_Construct_UClass_UVCamStateSwitcherWidget_Statics; \
public: \
	DECLARE_CLASS(UVCamStateSwitcherWidget, UVCamWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VCamCore"), NO_API) \
	DECLARE_SERIALIZER(UVCamStateSwitcherWidget)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUVCamStateSwitcherWidget(); \
	friend struct Z_Construct_UClass_UVCamStateSwitcherWidget_Statics; \
public: \
	DECLARE_CLASS(UVCamStateSwitcherWidget, UVCamWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VCamCore"), NO_API) \
	DECLARE_SERIALIZER(UVCamStateSwitcherWidget)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVCamStateSwitcherWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVCamStateSwitcherWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamStateSwitcherWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamStateSwitcherWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVCamStateSwitcherWidget(UVCamStateSwitcherWidget&&); \
	NO_API UVCamStateSwitcherWidget(const UVCamStateSwitcherWidget&); \
public: \
	NO_API virtual ~UVCamStateSwitcherWidget();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVCamStateSwitcherWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVCamStateSwitcherWidget(UVCamStateSwitcherWidget&&); \
	NO_API UVCamStateSwitcherWidget(const UVCamStateSwitcherWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamStateSwitcherWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamStateSwitcherWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVCamStateSwitcherWidget) \
	NO_API virtual ~UVCamStateSwitcherWidget();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_22_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_22_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_22_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_22_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_22_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_22_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VCAMCORE_API UClass* StaticClass<class UVCamStateSwitcherWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
