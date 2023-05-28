// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Border.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;
class UMaterialInterface;
class USlateBrushAsset;
class UTexture2D;
struct FLinearColor;
struct FMargin;
struct FSlateBrush;
#ifdef UMG_Border_generated_h
#error "Border.generated.h already included, missing '#pragma once' in Border.h"
#endif
#define UMG_Border_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_Border_h_31_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_Border_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetDesiredSizeScale); \
	DECLARE_FUNCTION(execGetDynamicMaterial); \
	DECLARE_FUNCTION(execSetShowEffectWhenDisabled); \
	DECLARE_FUNCTION(execSetBrushFromMaterial); \
	DECLARE_FUNCTION(execSetBrushFromTexture); \
	DECLARE_FUNCTION(execSetBrushFromAsset); \
	DECLARE_FUNCTION(execSetBrush); \
	DECLARE_FUNCTION(execSetBrushColor); \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetPadding); \
	DECLARE_FUNCTION(execSetContentColorAndOpacity);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Border_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetDesiredSizeScale); \
	DECLARE_FUNCTION(execGetDynamicMaterial); \
	DECLARE_FUNCTION(execSetShowEffectWhenDisabled); \
	DECLARE_FUNCTION(execSetBrushFromMaterial); \
	DECLARE_FUNCTION(execSetBrushFromTexture); \
	DECLARE_FUNCTION(execSetBrushFromAsset); \
	DECLARE_FUNCTION(execSetBrush); \
	DECLARE_FUNCTION(execSetBrushColor); \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetPadding); \
	DECLARE_FUNCTION(execSetContentColorAndOpacity);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Border_h_31_ACCESSORS \
static void GetHorizontalAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void GetVerticalAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void GetbShowEffectWhenDisabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbShowEffectWhenDisabled_WrapperImpl(void* Object, const void* InValue); \
static void GetContentColorAndOpacity_WrapperImpl(const void* Object, void* OutValue); \
static void SetContentColorAndOpacity_WrapperImpl(void* Object, const void* InValue); \
static void GetPadding_WrapperImpl(const void* Object, void* OutValue); \
static void SetPadding_WrapperImpl(void* Object, const void* InValue); \
static void GetBrushColor_WrapperImpl(const void* Object, void* OutValue); \
static void SetBrushColor_WrapperImpl(void* Object, const void* InValue); \
static void GetDesiredSizeScale_WrapperImpl(const void* Object, void* OutValue); \
static void SetDesiredSizeScale_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Border_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBorder(); \
	friend struct Z_Construct_UClass_UBorder_Statics; \
public: \
	DECLARE_CLASS(UBorder, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UBorder)


#define FID_Engine_Source_Runtime_UMG_Public_Components_Border_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUBorder(); \
	friend struct Z_Construct_UClass_UBorder_Statics; \
public: \
	DECLARE_CLASS(UBorder, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UBorder)


#define FID_Engine_Source_Runtime_UMG_Public_Components_Border_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBorder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBorder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBorder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBorder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBorder(UBorder&&); \
	NO_API UBorder(const UBorder&); \
public: \
	NO_API virtual ~UBorder();


#define FID_Engine_Source_Runtime_UMG_Public_Components_Border_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBorder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBorder(UBorder&&); \
	NO_API UBorder(const UBorder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBorder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBorder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBorder) \
	NO_API virtual ~UBorder();


#define FID_Engine_Source_Runtime_UMG_Public_Components_Border_h_28_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_Border_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_Border_h_31_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_Border_h_31_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Border_h_31_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Border_h_31_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Border_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_Border_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_Border_h_31_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_Border_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Border_h_31_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Border_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Border_h_31_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Border."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UBorder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_Border_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
