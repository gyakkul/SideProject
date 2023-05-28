// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/WidgetLayoutLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UBorderSlot;
class UCanvasPanelSlot;
class UGridSlot;
class UHorizontalBoxSlot;
class UObject;
class UOverlaySlot;
class USafeZoneSlot;
class UScaleBoxSlot;
class UScrollBoxSlot;
class USizeBoxSlot;
class UUniformGridSlot;
class UVerticalBoxSlot;
class UWidget;
class UWidgetSwitcherSlot;
class UWrapBoxSlot;
struct FGeometry;
#ifdef UMG_WidgetLayoutLibrary_generated_h
#error "WidgetLayoutLibrary.generated.h already included, missing '#pragma once' in WidgetLayoutLibrary.h"
#endif
#define UMG_WidgetLayoutLibrary_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_30_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveAllWidgets); \
	DECLARE_FUNCTION(execSlotAsWidgetSwitcherSlot); \
	DECLARE_FUNCTION(execSlotAsWrapBoxSlot); \
	DECLARE_FUNCTION(execSlotAsSizeBoxSlot); \
	DECLARE_FUNCTION(execSlotAsScaleBoxSlot); \
	DECLARE_FUNCTION(execSlotAsSafeBoxSlot); \
	DECLARE_FUNCTION(execSlotAsScrollBoxSlot); \
	DECLARE_FUNCTION(execSlotAsVerticalBoxSlot); \
	DECLARE_FUNCTION(execSlotAsUniformGridSlot); \
	DECLARE_FUNCTION(execSlotAsOverlaySlot); \
	DECLARE_FUNCTION(execSlotAsHorizontalBoxSlot); \
	DECLARE_FUNCTION(execSlotAsGridSlot); \
	DECLARE_FUNCTION(execSlotAsCanvasSlot); \
	DECLARE_FUNCTION(execSlotAsBorderSlot); \
	DECLARE_FUNCTION(execGetMousePositionScaledByDPI); \
	DECLARE_FUNCTION(execGetMousePositionOnViewport); \
	DECLARE_FUNCTION(execGetMousePositionOnPlatform); \
	DECLARE_FUNCTION(execGetPlayerScreenWidgetGeometry); \
	DECLARE_FUNCTION(execGetViewportWidgetGeometry); \
	DECLARE_FUNCTION(execGetViewportSize); \
	DECLARE_FUNCTION(execGetViewportScale); \
	DECLARE_FUNCTION(execProjectWorldLocationToWidgetPosition);


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveAllWidgets); \
	DECLARE_FUNCTION(execSlotAsWidgetSwitcherSlot); \
	DECLARE_FUNCTION(execSlotAsWrapBoxSlot); \
	DECLARE_FUNCTION(execSlotAsSizeBoxSlot); \
	DECLARE_FUNCTION(execSlotAsScaleBoxSlot); \
	DECLARE_FUNCTION(execSlotAsSafeBoxSlot); \
	DECLARE_FUNCTION(execSlotAsScrollBoxSlot); \
	DECLARE_FUNCTION(execSlotAsVerticalBoxSlot); \
	DECLARE_FUNCTION(execSlotAsUniformGridSlot); \
	DECLARE_FUNCTION(execSlotAsOverlaySlot); \
	DECLARE_FUNCTION(execSlotAsHorizontalBoxSlot); \
	DECLARE_FUNCTION(execSlotAsGridSlot); \
	DECLARE_FUNCTION(execSlotAsCanvasSlot); \
	DECLARE_FUNCTION(execSlotAsBorderSlot); \
	DECLARE_FUNCTION(execGetMousePositionScaledByDPI); \
	DECLARE_FUNCTION(execGetMousePositionOnViewport); \
	DECLARE_FUNCTION(execGetMousePositionOnPlatform); \
	DECLARE_FUNCTION(execGetPlayerScreenWidgetGeometry); \
	DECLARE_FUNCTION(execGetViewportWidgetGeometry); \
	DECLARE_FUNCTION(execGetViewportSize); \
	DECLARE_FUNCTION(execGetViewportScale); \
	DECLARE_FUNCTION(execProjectWorldLocationToWidgetPosition);


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_30_ACCESSORS
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetLayoutLibrary(); \
	friend struct Z_Construct_UClass_UWidgetLayoutLibrary_Statics; \
public: \
	DECLARE_CLASS(UWidgetLayoutLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidgetLayoutLibrary)


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetLayoutLibrary(); \
	friend struct Z_Construct_UClass_UWidgetLayoutLibrary_Statics; \
public: \
	DECLARE_CLASS(UWidgetLayoutLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidgetLayoutLibrary)


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetLayoutLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetLayoutLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetLayoutLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetLayoutLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetLayoutLibrary(UWidgetLayoutLibrary&&); \
	NO_API UWidgetLayoutLibrary(const UWidgetLayoutLibrary&); \
public: \
	NO_API virtual ~UWidgetLayoutLibrary();


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetLayoutLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetLayoutLibrary(UWidgetLayoutLibrary&&); \
	NO_API UWidgetLayoutLibrary(const UWidgetLayoutLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetLayoutLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetLayoutLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetLayoutLibrary) \
	NO_API virtual ~UWidgetLayoutLibrary();


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_27_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_30_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_30_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_30_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_30_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_30_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_30_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WidgetLayoutLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UWidgetLayoutLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
