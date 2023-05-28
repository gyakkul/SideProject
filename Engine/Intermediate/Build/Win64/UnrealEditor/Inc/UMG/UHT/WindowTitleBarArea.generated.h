// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/WindowTitleBarArea.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMargin;
#ifdef UMG_WindowTitleBarArea_generated_h
#error "WindowTitleBarArea.generated.h already included, missing '#pragma once' in WindowTitleBarArea.h"
#endif
#define UMG_WindowTitleBarArea_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_23_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_23_ACCESSORS \
static void GetbWindowButtonsEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbWindowButtonsEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetbDoubleClickTogglesFullscreen_WrapperImpl(const void* Object, void* OutValue); \
static void SetbDoubleClickTogglesFullscreen_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWindowTitleBarArea(); \
	friend struct Z_Construct_UClass_UWindowTitleBarArea_Statics; \
public: \
	DECLARE_CLASS(UWindowTitleBarArea, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWindowTitleBarArea)


#define FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUWindowTitleBarArea(); \
	friend struct Z_Construct_UClass_UWindowTitleBarArea_Statics; \
public: \
	DECLARE_CLASS(UWindowTitleBarArea, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWindowTitleBarArea)


#define FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWindowTitleBarArea(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWindowTitleBarArea) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWindowTitleBarArea); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWindowTitleBarArea); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWindowTitleBarArea(UWindowTitleBarArea&&); \
	NO_API UWindowTitleBarArea(const UWindowTitleBarArea&); \
public: \
	NO_API virtual ~UWindowTitleBarArea();


#define FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWindowTitleBarArea(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWindowTitleBarArea(UWindowTitleBarArea&&); \
	NO_API UWindowTitleBarArea(const UWindowTitleBarArea&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWindowTitleBarArea); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWindowTitleBarArea); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWindowTitleBarArea) \
	NO_API virtual ~UWindowTitleBarArea();


#define FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_20_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_23_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_23_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_23_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_23_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_23_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_23_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WindowTitleBarArea."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UWindowTitleBarArea>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
