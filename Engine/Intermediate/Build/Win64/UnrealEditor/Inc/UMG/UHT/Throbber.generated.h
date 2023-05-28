// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Throbber.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_Throbber_generated_h
#error "Throbber.generated.h already included, missing '#pragma once' in Throbber.h"
#endif
#define UMG_Throbber_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetAnimateOpacity); \
	DECLARE_FUNCTION(execSetAnimateVertically); \
	DECLARE_FUNCTION(execSetAnimateHorizontally); \
	DECLARE_FUNCTION(execSetNumberOfPieces);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetAnimateOpacity); \
	DECLARE_FUNCTION(execSetAnimateVertically); \
	DECLARE_FUNCTION(execSetAnimateHorizontally); \
	DECLARE_FUNCTION(execSetNumberOfPieces);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_ACCESSORS \
static void GetNumberOfPieces_WrapperImpl(const void* Object, void* OutValue); \
static void SetNumberOfPieces_WrapperImpl(void* Object, const void* InValue); \
static void GetbAnimateHorizontally_WrapperImpl(const void* Object, void* OutValue); \
static void SetbAnimateHorizontally_WrapperImpl(void* Object, const void* InValue); \
static void GetbAnimateVertically_WrapperImpl(const void* Object, void* OutValue); \
static void SetbAnimateVertically_WrapperImpl(void* Object, const void* InValue); \
static void GetbAnimateOpacity_WrapperImpl(const void* Object, void* OutValue); \
static void SetbAnimateOpacity_WrapperImpl(void* Object, const void* InValue); \
static void GetImage_WrapperImpl(const void* Object, void* OutValue); \
static void SetImage_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUThrobber(); \
	friend struct Z_Construct_UClass_UThrobber_Statics; \
public: \
	DECLARE_CLASS(UThrobber, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UThrobber)


#define FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUThrobber(); \
	friend struct Z_Construct_UClass_UThrobber_Statics; \
public: \
	DECLARE_CLASS(UThrobber, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UThrobber)


#define FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UThrobber(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UThrobber) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UThrobber); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UThrobber); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UThrobber(UThrobber&&); \
	NO_API UThrobber(const UThrobber&); \
public: \
	NO_API virtual ~UThrobber();


#define FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UThrobber(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UThrobber(UThrobber&&); \
	NO_API UThrobber(const UThrobber&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UThrobber); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UThrobber); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UThrobber) \
	NO_API virtual ~UThrobber();


#define FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_18_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Throbber."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UThrobber>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
