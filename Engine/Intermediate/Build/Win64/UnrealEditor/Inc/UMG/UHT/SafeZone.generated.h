// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SafeZone.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_SafeZone_generated_h
#error "SafeZone.generated.h already included, missing '#pragma once' in SafeZone.h"
#endif
#define UMG_SafeZone_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSidesToPad);


#define FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSidesToPad);


#define FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_ACCESSORS \
static void GetPadLeft_WrapperImpl(const void* Object, void* OutValue); \
static void SetPadLeft_WrapperImpl(void* Object, const void* InValue); \
static void GetPadRight_WrapperImpl(const void* Object, void* OutValue); \
static void SetPadRight_WrapperImpl(void* Object, const void* InValue); \
static void GetPadTop_WrapperImpl(const void* Object, void* OutValue); \
static void SetPadTop_WrapperImpl(void* Object, const void* InValue); \
static void GetPadBottom_WrapperImpl(const void* Object, void* OutValue); \
static void SetPadBottom_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSafeZone(); \
	friend struct Z_Construct_UClass_USafeZone_Statics; \
public: \
	DECLARE_CLASS(USafeZone, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(USafeZone)


#define FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUSafeZone(); \
	friend struct Z_Construct_UClass_USafeZone_Statics; \
public: \
	DECLARE_CLASS(USafeZone, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(USafeZone)


#define FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USafeZone(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USafeZone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USafeZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USafeZone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USafeZone(USafeZone&&); \
	NO_API USafeZone(const USafeZone&); \
public: \
	NO_API virtual ~USafeZone();


#define FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USafeZone(USafeZone&&); \
	NO_API USafeZone(const USafeZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USafeZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USafeZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USafeZone) \
	NO_API virtual ~USafeZone();


#define FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_28_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class USafeZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
