// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/WidgetSwitcherSlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMargin;
#ifdef UMG_WidgetSwitcherSlot_generated_h
#error "WidgetSwitcherSlot.generated.h already included, missing '#pragma once' in WidgetSwitcherSlot.h"
#endif
#define UMG_WidgetSwitcherSlot_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_ACCESSORS \
static void SetPadding_WrapperImpl(void* Object, const void* InValue); \
static void SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetSwitcherSlot(); \
	friend struct Z_Construct_UClass_UWidgetSwitcherSlot_Statics; \
public: \
	DECLARE_CLASS(UWidgetSwitcherSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidgetSwitcherSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetSwitcherSlot(); \
	friend struct Z_Construct_UClass_UWidgetSwitcherSlot_Statics; \
public: \
	DECLARE_CLASS(UWidgetSwitcherSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidgetSwitcherSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetSwitcherSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetSwitcherSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetSwitcherSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetSwitcherSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetSwitcherSlot(UWidgetSwitcherSlot&&); \
	NO_API UWidgetSwitcherSlot(const UWidgetSwitcherSlot&); \
public: \
	NO_API virtual ~UWidgetSwitcherSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetSwitcherSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetSwitcherSlot(UWidgetSwitcherSlot&&); \
	NO_API UWidgetSwitcherSlot(const UWidgetSwitcherSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetSwitcherSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetSwitcherSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetSwitcherSlot) \
	NO_API virtual ~UWidgetSwitcherSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_17_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WidgetSwitcherSlot."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UWidgetSwitcherSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcherSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
