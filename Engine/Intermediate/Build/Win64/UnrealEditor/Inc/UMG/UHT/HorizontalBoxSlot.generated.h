// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/HorizontalBoxSlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMargin;
struct FSlateChildSize;
#ifdef UMG_HorizontalBoxSlot_generated_h
#error "HorizontalBoxSlot.generated.h already included, missing '#pragma once' in HorizontalBoxSlot.h"
#endif
#define UMG_HorizontalBoxSlot_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetSize); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetSize); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_ACCESSORS \
static void SetSize_WrapperImpl(void* Object, const void* InValue); \
static void SetPadding_WrapperImpl(void* Object, const void* InValue); \
static void SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHorizontalBoxSlot(); \
	friend struct Z_Construct_UClass_UHorizontalBoxSlot_Statics; \
public: \
	DECLARE_CLASS(UHorizontalBoxSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UHorizontalBoxSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUHorizontalBoxSlot(); \
	friend struct Z_Construct_UClass_UHorizontalBoxSlot_Statics; \
public: \
	DECLARE_CLASS(UHorizontalBoxSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UHorizontalBoxSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizontalBoxSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizontalBoxSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizontalBoxSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizontalBoxSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizontalBoxSlot(UHorizontalBoxSlot&&); \
	NO_API UHorizontalBoxSlot(const UHorizontalBoxSlot&); \
public: \
	NO_API virtual ~UHorizontalBoxSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizontalBoxSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizontalBoxSlot(UHorizontalBoxSlot&&); \
	NO_API UHorizontalBoxSlot(const UHorizontalBoxSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizontalBoxSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizontalBoxSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizontalBoxSlot) \
	NO_API virtual ~UHorizontalBoxSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_15_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HorizontalBoxSlot."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UHorizontalBoxSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
