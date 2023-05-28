// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SizeBoxSlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMargin;
#ifdef UMG_SizeBoxSlot_generated_h
#error "SizeBoxSlot.generated.h already included, missing '#pragma once' in SizeBoxSlot.h"
#endif
#define UMG_SizeBoxSlot_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_ACCESSORS \
static void SetPadding_WrapperImpl(void* Object, const void* InValue); \
static void SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSizeBoxSlot(); \
	friend struct Z_Construct_UClass_USizeBoxSlot_Statics; \
public: \
	DECLARE_CLASS(USizeBoxSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(USizeBoxSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSizeBoxSlot(); \
	friend struct Z_Construct_UClass_USizeBoxSlot_Statics; \
public: \
	DECLARE_CLASS(USizeBoxSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(USizeBoxSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USizeBoxSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USizeBoxSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USizeBoxSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USizeBoxSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USizeBoxSlot(USizeBoxSlot&&); \
	NO_API USizeBoxSlot(const USizeBoxSlot&); \
public: \
	NO_API virtual ~USizeBoxSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USizeBoxSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USizeBoxSlot(USizeBoxSlot&&); \
	NO_API USizeBoxSlot(const USizeBoxSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USizeBoxSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USizeBoxSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USizeBoxSlot) \
	NO_API virtual ~USizeBoxSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_16_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SizeBoxSlot."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class USizeBoxSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
