// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ButtonSlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMargin;
#ifdef UMG_ButtonSlot_generated_h
#error "ButtonSlot.generated.h already included, missing '#pragma once' in ButtonSlot.h"
#endif
#define UMG_ButtonSlot_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h_19_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h_19_ACCESSORS \
static void GetPadding_WrapperImpl(const void* Object, void* OutValue); \
static void SetPadding_WrapperImpl(void* Object, const void* InValue); \
static void GetHorizontalAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void GetVerticalAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUButtonSlot(); \
	friend struct Z_Construct_UClass_UButtonSlot_Statics; \
public: \
	DECLARE_CLASS(UButtonSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UButtonSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUButtonSlot(); \
	friend struct Z_Construct_UClass_UButtonSlot_Statics; \
public: \
	DECLARE_CLASS(UButtonSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UButtonSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UButtonSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UButtonSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UButtonSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UButtonSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UButtonSlot(UButtonSlot&&); \
	NO_API UButtonSlot(const UButtonSlot&); \
public: \
	NO_API virtual ~UButtonSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UButtonSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UButtonSlot(UButtonSlot&&); \
	NO_API UButtonSlot(const UButtonSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UButtonSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UButtonSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UButtonSlot) \
	NO_API virtual ~UButtonSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h_16_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h_19_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ButtonSlot."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UButtonSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
