// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/WidgetBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UDragDropOperation;
class UFont;
class UInterface;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UObject;
class USlateBrushAsset;
class UTexture2D;
class UUserWidget;
class UWidget;
enum class EColorVisionDeficiency : uint8;
enum class EMouseLockMode : uint8;
enum class EWindowTitleBarMode : uint8;
struct FAnalogInputEvent;
struct FCharacterEvent;
struct FEventReply;
struct FInputEvent;
struct FKey;
struct FKeyEvent;
struct FLinearColor;
struct FNavigationEvent;
struct FPaintContext;
struct FPointerEvent;
struct FSlateBrush;
#ifdef UMG_WidgetBlueprintLibrary_generated_h
#error "WidgetBlueprintLibrary.generated.h already included, missing '#pragma once' in WidgetBlueprintLibrary.h"
#endif
#define UMG_WidgetBlueprintLibrary_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_362_DELEGATE \
static void FOnGameWindowCloseButtonClickedDelegate_DelegateWrapper(const FScriptDelegate& OnGameWindowCloseButtonClickedDelegate);


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_32_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetWindowTitleBarCloseButtonActive); \
	DECLARE_FUNCTION(execSetWindowTitleBarOnCloseClickedDelegate); \
	DECLARE_FUNCTION(execRestorePreviousWindowTitleBarState); \
	DECLARE_FUNCTION(execSetWindowTitleBarState); \
	DECLARE_FUNCTION(execSetHardwareCursor); \
	DECLARE_FUNCTION(execSetColorVisionDeficiencyType); \
	DECLARE_FUNCTION(execGetSafeZonePadding); \
	DECLARE_FUNCTION(execGetInputEventFromNavigationEvent); \
	DECLARE_FUNCTION(execGetInputEventFromPointerEvent); \
	DECLARE_FUNCTION(execGetInputEventFromCharacterEvent); \
	DECLARE_FUNCTION(execGetKeyEventFromAnalogInputEvent); \
	DECLARE_FUNCTION(execGetInputEventFromKeyEvent); \
	DECLARE_FUNCTION(execGetAllWidgetsWithInterface); \
	DECLARE_FUNCTION(execGetAllWidgetsOfClass); \
	DECLARE_FUNCTION(execDismissAllMenus); \
	DECLARE_FUNCTION(execGetDynamicMaterial); \
	DECLARE_FUNCTION(execNoResourceBrush); \
	DECLARE_FUNCTION(execSetBrushResourceToMaterial); \
	DECLARE_FUNCTION(execSetBrushResourceToTexture); \
	DECLARE_FUNCTION(execGetBrushResourceAsMaterial); \
	DECLARE_FUNCTION(execGetBrushResourceAsTexture2D); \
	DECLARE_FUNCTION(execGetBrushResource); \
	DECLARE_FUNCTION(execMakeBrushFromMaterial); \
	DECLARE_FUNCTION(execMakeBrushFromTexture); \
	DECLARE_FUNCTION(execMakeBrushFromAsset); \
	DECLARE_FUNCTION(execCancelDragDrop); \
	DECLARE_FUNCTION(execGetDragDroppingContent); \
	DECLARE_FUNCTION(execIsDragDropping); \
	DECLARE_FUNCTION(execEndDragDrop); \
	DECLARE_FUNCTION(execDetectDragIfPressed); \
	DECLARE_FUNCTION(execDetectDrag); \
	DECLARE_FUNCTION(execSetMousePosition); \
	DECLARE_FUNCTION(execReleaseJoystickCapture); \
	DECLARE_FUNCTION(execClearUserFocus); \
	DECLARE_FUNCTION(execCaptureJoystick); \
	DECLARE_FUNCTION(execSetUserFocus); \
	DECLARE_FUNCTION(execUnlockMouse); \
	DECLARE_FUNCTION(execLockMouse); \
	DECLARE_FUNCTION(execReleaseMouseCapture); \
	DECLARE_FUNCTION(execCaptureMouse); \
	DECLARE_FUNCTION(execUnhandled); \
	DECLARE_FUNCTION(execHandled); \
	DECLARE_FUNCTION(execDrawTextFormatted); \
	DECLARE_FUNCTION(execDrawText); \
	DECLARE_FUNCTION(execDrawLines); \
	DECLARE_FUNCTION(execDrawLine); \
	DECLARE_FUNCTION(execDrawSpline); \
	DECLARE_FUNCTION(execDrawBox); \
	DECLARE_FUNCTION(execSetFocusToGameViewport); \
	DECLARE_FUNCTION(execSetInputMode_GameOnly); \
	DECLARE_FUNCTION(execSetInputMode_GameAndUIEx); \
	DECLARE_FUNCTION(execSetInputMode_UIOnlyEx); \
	DECLARE_FUNCTION(execCreateDragDropOperation); \
	DECLARE_FUNCTION(execCreate);


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetWindowTitleBarCloseButtonActive); \
	DECLARE_FUNCTION(execSetWindowTitleBarOnCloseClickedDelegate); \
	DECLARE_FUNCTION(execRestorePreviousWindowTitleBarState); \
	DECLARE_FUNCTION(execSetWindowTitleBarState); \
	DECLARE_FUNCTION(execSetHardwareCursor); \
	DECLARE_FUNCTION(execSetColorVisionDeficiencyType); \
	DECLARE_FUNCTION(execGetSafeZonePadding); \
	DECLARE_FUNCTION(execGetInputEventFromNavigationEvent); \
	DECLARE_FUNCTION(execGetInputEventFromPointerEvent); \
	DECLARE_FUNCTION(execGetInputEventFromCharacterEvent); \
	DECLARE_FUNCTION(execGetKeyEventFromAnalogInputEvent); \
	DECLARE_FUNCTION(execGetInputEventFromKeyEvent); \
	DECLARE_FUNCTION(execGetAllWidgetsWithInterface); \
	DECLARE_FUNCTION(execGetAllWidgetsOfClass); \
	DECLARE_FUNCTION(execDismissAllMenus); \
	DECLARE_FUNCTION(execGetDynamicMaterial); \
	DECLARE_FUNCTION(execNoResourceBrush); \
	DECLARE_FUNCTION(execSetBrushResourceToMaterial); \
	DECLARE_FUNCTION(execSetBrushResourceToTexture); \
	DECLARE_FUNCTION(execGetBrushResourceAsMaterial); \
	DECLARE_FUNCTION(execGetBrushResourceAsTexture2D); \
	DECLARE_FUNCTION(execGetBrushResource); \
	DECLARE_FUNCTION(execMakeBrushFromMaterial); \
	DECLARE_FUNCTION(execMakeBrushFromTexture); \
	DECLARE_FUNCTION(execMakeBrushFromAsset); \
	DECLARE_FUNCTION(execCancelDragDrop); \
	DECLARE_FUNCTION(execGetDragDroppingContent); \
	DECLARE_FUNCTION(execIsDragDropping); \
	DECLARE_FUNCTION(execEndDragDrop); \
	DECLARE_FUNCTION(execDetectDragIfPressed); \
	DECLARE_FUNCTION(execDetectDrag); \
	DECLARE_FUNCTION(execSetMousePosition); \
	DECLARE_FUNCTION(execReleaseJoystickCapture); \
	DECLARE_FUNCTION(execClearUserFocus); \
	DECLARE_FUNCTION(execCaptureJoystick); \
	DECLARE_FUNCTION(execSetUserFocus); \
	DECLARE_FUNCTION(execUnlockMouse); \
	DECLARE_FUNCTION(execLockMouse); \
	DECLARE_FUNCTION(execReleaseMouseCapture); \
	DECLARE_FUNCTION(execCaptureMouse); \
	DECLARE_FUNCTION(execUnhandled); \
	DECLARE_FUNCTION(execHandled); \
	DECLARE_FUNCTION(execDrawTextFormatted); \
	DECLARE_FUNCTION(execDrawText); \
	DECLARE_FUNCTION(execDrawLines); \
	DECLARE_FUNCTION(execDrawLine); \
	DECLARE_FUNCTION(execDrawSpline); \
	DECLARE_FUNCTION(execDrawBox); \
	DECLARE_FUNCTION(execSetFocusToGameViewport); \
	DECLARE_FUNCTION(execSetInputMode_GameOnly); \
	DECLARE_FUNCTION(execSetInputMode_GameAndUIEx); \
	DECLARE_FUNCTION(execSetInputMode_UIOnlyEx); \
	DECLARE_FUNCTION(execCreateDragDropOperation); \
	DECLARE_FUNCTION(execCreate);


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_32_ACCESSORS
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UWidgetBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UWidgetBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidgetBlueprintLibrary)


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UWidgetBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UWidgetBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidgetBlueprintLibrary)


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetBlueprintLibrary(UWidgetBlueprintLibrary&&); \
	NO_API UWidgetBlueprintLibrary(const UWidgetBlueprintLibrary&); \
public: \
	NO_API virtual ~UWidgetBlueprintLibrary();


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetBlueprintLibrary(UWidgetBlueprintLibrary&&); \
	NO_API UWidgetBlueprintLibrary(const UWidgetBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetBlueprintLibrary) \
	NO_API virtual ~UWidgetBlueprintLibrary();


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_32_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_32_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_32_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_32_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_32_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_32_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_32_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WidgetBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UWidgetBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
