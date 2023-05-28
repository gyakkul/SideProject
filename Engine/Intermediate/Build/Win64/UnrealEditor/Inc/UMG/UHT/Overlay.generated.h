// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Overlay.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOverlaySlot;
class UWidget;
#ifdef UMG_Overlay_generated_h
#error "Overlay.generated.h already included, missing '#pragma once' in Overlay.h"
#endif
#define UMG_Overlay_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReplaceOverlayChildAt); \
	DECLARE_FUNCTION(execAddChildToOverlay);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReplaceOverlayChildAt); \
	DECLARE_FUNCTION(execAddChildToOverlay);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_ACCESSORS
#define FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOverlay(); \
	friend struct Z_Construct_UClass_UOverlay_Statics; \
public: \
	DECLARE_CLASS(UOverlay, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UOverlay)


#define FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUOverlay(); \
	friend struct Z_Construct_UClass_UOverlay_Statics; \
public: \
	DECLARE_CLASS(UOverlay, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UOverlay)


#define FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOverlay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOverlay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOverlay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOverlay); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOverlay(UOverlay&&); \
	NO_API UOverlay(const UOverlay&); \
public: \
	NO_API virtual ~UOverlay();


#define FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOverlay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOverlay(UOverlay&&); \
	NO_API UOverlay(const UOverlay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOverlay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOverlay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOverlay) \
	NO_API virtual ~UOverlay();


#define FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_17_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Overlay."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UOverlay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
