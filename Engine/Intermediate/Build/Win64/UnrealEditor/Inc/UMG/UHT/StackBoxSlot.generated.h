// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/StackBoxSlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_StackBoxSlot_generated_h
#error "StackBoxSlot.generated.h already included, missing '#pragma once' in StackBoxSlot.h"
#endif
#define UMG_StackBoxSlot_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_19_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_19_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_19_ACCESSORS \
static void GetPadding_WrapperImpl(const void* Object, void* OutValue); \
static void SetPadding_WrapperImpl(void* Object, const void* InValue); \
static void GetSize_WrapperImpl(const void* Object, void* OutValue); \
static void SetSize_WrapperImpl(void* Object, const void* InValue); \
static void GetHorizontalAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void GetVerticalAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStackBoxSlot(); \
	friend struct Z_Construct_UClass_UStackBoxSlot_Statics; \
public: \
	DECLARE_CLASS(UStackBoxSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UStackBoxSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUStackBoxSlot(); \
	friend struct Z_Construct_UClass_UStackBoxSlot_Statics; \
public: \
	DECLARE_CLASS(UStackBoxSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UStackBoxSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStackBoxSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStackBoxSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStackBoxSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStackBoxSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStackBoxSlot(UStackBoxSlot&&); \
	NO_API UStackBoxSlot(const UStackBoxSlot&); \
public: \
	NO_API virtual ~UStackBoxSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStackBoxSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStackBoxSlot(UStackBoxSlot&&); \
	NO_API UStackBoxSlot(const UStackBoxSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStackBoxSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStackBoxSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStackBoxSlot) \
	NO_API virtual ~UStackBoxSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_16_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_19_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UStackBoxSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
