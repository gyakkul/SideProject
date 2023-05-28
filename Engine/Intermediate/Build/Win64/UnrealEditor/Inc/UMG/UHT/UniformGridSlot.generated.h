// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/UniformGridSlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_UniformGridSlot_generated_h
#error "UniformGridSlot.generated.h already included, missing '#pragma once' in UniformGridSlot.h"
#endif
#define UMG_UniformGridSlot_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetColumn); \
	DECLARE_FUNCTION(execSetRow);


#define FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetColumn); \
	DECLARE_FUNCTION(execSetRow);


#define FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_ACCESSORS \
static void SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void SetRow_WrapperImpl(void* Object, const void* InValue); \
static void SetColumn_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUniformGridSlot(); \
	friend struct Z_Construct_UClass_UUniformGridSlot_Statics; \
public: \
	DECLARE_CLASS(UUniformGridSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UUniformGridSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUUniformGridSlot(); \
	friend struct Z_Construct_UClass_UUniformGridSlot_Statics; \
public: \
	DECLARE_CLASS(UUniformGridSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UUniformGridSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUniformGridSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUniformGridSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUniformGridSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUniformGridSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUniformGridSlot(UUniformGridSlot&&); \
	NO_API UUniformGridSlot(const UUniformGridSlot&); \
public: \
	NO_API virtual ~UUniformGridSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUniformGridSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUniformGridSlot(UUniformGridSlot&&); \
	NO_API UUniformGridSlot(const UUniformGridSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUniformGridSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUniformGridSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUniformGridSlot) \
	NO_API virtual ~UUniformGridSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_17_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class UniformGridSlot."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UUniformGridSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
