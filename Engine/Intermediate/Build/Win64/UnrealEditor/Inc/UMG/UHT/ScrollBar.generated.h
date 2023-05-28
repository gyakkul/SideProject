// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ScrollBar.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_ScrollBar_generated_h
#error "ScrollBar.generated.h already included, missing '#pragma once' in ScrollBar.h"
#endif
#define UMG_ScrollBar_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetState);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetState);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_ACCESSORS \
static void GetWidgetStyle_WrapperImpl(const void* Object, void* OutValue); \
static void SetWidgetStyle_WrapperImpl(void* Object, const void* InValue); \
static void GetbAlwaysShowScrollbar_WrapperImpl(const void* Object, void* OutValue); \
static void SetbAlwaysShowScrollbar_WrapperImpl(void* Object, const void* InValue); \
static void GetbAlwaysShowScrollbarTrack_WrapperImpl(const void* Object, void* OutValue); \
static void SetbAlwaysShowScrollbarTrack_WrapperImpl(void* Object, const void* InValue); \
static void GetOrientation_WrapperImpl(const void* Object, void* OutValue); \
static void GetThickness_WrapperImpl(const void* Object, void* OutValue); \
static void SetThickness_WrapperImpl(void* Object, const void* InValue); \
static void GetPadding_WrapperImpl(const void* Object, void* OutValue); \
static void SetPadding_WrapperImpl(void* Object, const void* InValue);


#if WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UScrollBar, NO_API)


#else
#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_ARCHIVESERIALIZER
#endif
#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScrollBar(); \
	friend struct Z_Construct_UClass_UScrollBar_Statics; \
public: \
	DECLARE_CLASS(UScrollBar, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UScrollBar) \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUScrollBar(); \
	friend struct Z_Construct_UClass_UScrollBar_Statics; \
public: \
	DECLARE_CLASS(UScrollBar, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UScrollBar) \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScrollBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScrollBar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScrollBar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScrollBar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScrollBar(UScrollBar&&); \
	NO_API UScrollBar(const UScrollBar&); \
public: \
	NO_API virtual ~UScrollBar();


#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScrollBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScrollBar(UScrollBar&&); \
	NO_API UScrollBar(const UScrollBar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScrollBar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScrollBar); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScrollBar) \
	NO_API virtual ~UScrollBar();


#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_14_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ScrollBar."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UScrollBar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
