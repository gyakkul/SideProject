// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/WrapBoxSlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMargin;
#ifdef UMG_WrapBoxSlot_generated_h
#error "WrapBoxSlot.generated.h already included, missing '#pragma once' in WrapBoxSlot.h"
#endif
#define UMG_WrapBoxSlot_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetNewLine); \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetFillSpanWhenLessThan); \
	DECLARE_FUNCTION(execSetFillEmptySpace); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetNewLine); \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetFillSpanWhenLessThan); \
	DECLARE_FUNCTION(execSetFillEmptySpace); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_ACCESSORS \
static void SetPadding_WrapperImpl(void* Object, const void* InValue); \
static void SetFillSpanWhenLessThan_WrapperImpl(void* Object, const void* InValue); \
static void SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void SetbFillEmptySpace_WrapperImpl(void* Object, const void* InValue); \
static void SetbForceNewLine_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWrapBoxSlot(); \
	friend struct Z_Construct_UClass_UWrapBoxSlot_Statics; \
public: \
	DECLARE_CLASS(UWrapBoxSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWrapBoxSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUWrapBoxSlot(); \
	friend struct Z_Construct_UClass_UWrapBoxSlot_Statics; \
public: \
	DECLARE_CLASS(UWrapBoxSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWrapBoxSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWrapBoxSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWrapBoxSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWrapBoxSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWrapBoxSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWrapBoxSlot(UWrapBoxSlot&&); \
	NO_API UWrapBoxSlot(const UWrapBoxSlot&); \
public: \
	NO_API virtual ~UWrapBoxSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWrapBoxSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWrapBoxSlot(UWrapBoxSlot&&); \
	NO_API UWrapBoxSlot(const UWrapBoxSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWrapBoxSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWrapBoxSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWrapBoxSlot) \
	NO_API virtual ~UWrapBoxSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_15_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WrapBoxSlot."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UWrapBoxSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
