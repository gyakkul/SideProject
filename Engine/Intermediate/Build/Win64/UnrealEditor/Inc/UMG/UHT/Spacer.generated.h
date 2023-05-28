// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Spacer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_Spacer_generated_h
#error "Spacer.generated.h already included, missing '#pragma once' in Spacer.h"
#endif
#define UMG_Spacer_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_Spacer_h_21_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_Spacer_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSize);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Spacer_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSize);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Spacer_h_21_ACCESSORS \
static void GetSize_WrapperImpl(const void* Object, void* OutValue); \
static void SetSize_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Spacer_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpacer(); \
	friend struct Z_Construct_UClass_USpacer_Statics; \
public: \
	DECLARE_CLASS(USpacer, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(USpacer)


#define FID_Engine_Source_Runtime_UMG_Public_Components_Spacer_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUSpacer(); \
	friend struct Z_Construct_UClass_USpacer_Statics; \
public: \
	DECLARE_CLASS(USpacer, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(USpacer)


#define FID_Engine_Source_Runtime_UMG_Public_Components_Spacer_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpacer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpacer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpacer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpacer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpacer(USpacer&&); \
	NO_API USpacer(const USpacer&); \
public: \
	NO_API virtual ~USpacer();


#define FID_Engine_Source_Runtime_UMG_Public_Components_Spacer_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpacer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpacer(USpacer&&); \
	NO_API USpacer(const USpacer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpacer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpacer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpacer) \
	NO_API virtual ~USpacer();


#define FID_Engine_Source_Runtime_UMG_Public_Components_Spacer_h_18_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_Spacer_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_Spacer_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_Spacer_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Spacer_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Spacer_h_21_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Spacer_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_Spacer_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_Spacer_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_Spacer_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Spacer_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Spacer_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Spacer_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Spacer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class USpacer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_Spacer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
