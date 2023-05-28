// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/BorderSlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMargin;
#ifdef UMG_BorderSlot_generated_h
#error "BorderSlot.generated.h already included, missing '#pragma once' in BorderSlot.h"
#endif
#define UMG_BorderSlot_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_ACCESSORS \
static void SetPadding_WrapperImpl(void* Object, const void* InValue); \
static void SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBorderSlot(); \
	friend struct Z_Construct_UClass_UBorderSlot_Statics; \
public: \
	DECLARE_CLASS(UBorderSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UBorderSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUBorderSlot(); \
	friend struct Z_Construct_UClass_UBorderSlot_Statics; \
public: \
	DECLARE_CLASS(UBorderSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UBorderSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBorderSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBorderSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBorderSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBorderSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBorderSlot(UBorderSlot&&); \
	NO_API UBorderSlot(const UBorderSlot&); \
public: \
	NO_API virtual ~UBorderSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBorderSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBorderSlot(UBorderSlot&&); \
	NO_API UBorderSlot(const UBorderSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBorderSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBorderSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBorderSlot) \
	NO_API virtual ~UBorderSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_19_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BorderSlot."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UBorderSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
