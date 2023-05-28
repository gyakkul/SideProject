// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Image.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ISlateTextureAtlasInterface;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UObject;
class USlateBrushAsset;
class UTexture2D;
class UTexture2DDynamic;
struct FLinearColor;
struct FSlateBrush;
struct FSlateColor;
#ifdef UMG_Image_generated_h
#error "Image.generated.h already included, missing '#pragma once' in Image.h"
#endif
#define UMG_Image_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_Image_h_32_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_Image_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDynamicMaterial); \
	DECLARE_FUNCTION(execSetBrushFromSoftMaterial); \
	DECLARE_FUNCTION(execSetBrushFromSoftTexture); \
	DECLARE_FUNCTION(execSetBrushFromMaterial); \
	DECLARE_FUNCTION(execSetBrushFromTextureDynamic); \
	DECLARE_FUNCTION(execSetBrushFromAtlasInterface); \
	DECLARE_FUNCTION(execSetBrushFromTexture); \
	DECLARE_FUNCTION(execSetBrushFromAsset); \
	DECLARE_FUNCTION(execSetBrush); \
	DECLARE_FUNCTION(execSetBrushResourceObject); \
	DECLARE_FUNCTION(execSetBrushTintColor); \
	DECLARE_FUNCTION(execSetDesiredSizeOverride); \
	DECLARE_FUNCTION(execSetOpacity); \
	DECLARE_FUNCTION(execSetColorAndOpacity);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Image_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDynamicMaterial); \
	DECLARE_FUNCTION(execSetBrushFromSoftMaterial); \
	DECLARE_FUNCTION(execSetBrushFromSoftTexture); \
	DECLARE_FUNCTION(execSetBrushFromMaterial); \
	DECLARE_FUNCTION(execSetBrushFromTextureDynamic); \
	DECLARE_FUNCTION(execSetBrushFromAtlasInterface); \
	DECLARE_FUNCTION(execSetBrushFromTexture); \
	DECLARE_FUNCTION(execSetBrushFromAsset); \
	DECLARE_FUNCTION(execSetBrush); \
	DECLARE_FUNCTION(execSetBrushResourceObject); \
	DECLARE_FUNCTION(execSetBrushTintColor); \
	DECLARE_FUNCTION(execSetDesiredSizeOverride); \
	DECLARE_FUNCTION(execSetOpacity); \
	DECLARE_FUNCTION(execSetColorAndOpacity);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Image_h_32_ACCESSORS \
static void GetBrush_WrapperImpl(const void* Object, void* OutValue); \
static void SetBrush_WrapperImpl(void* Object, const void* InValue); \
static void GetColorAndOpacity_WrapperImpl(const void* Object, void* OutValue); \
static void SetColorAndOpacity_WrapperImpl(void* Object, const void* InValue); \
static void GetbFlipForRightToLeftFlowDirection_WrapperImpl(const void* Object, void* OutValue); \
static void SetbFlipForRightToLeftFlowDirection_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Image_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImage(); \
	friend struct Z_Construct_UClass_UImage_Statics; \
public: \
	DECLARE_CLASS(UImage, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UImage)


#define FID_Engine_Source_Runtime_UMG_Public_Components_Image_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUImage(); \
	friend struct Z_Construct_UClass_UImage_Statics; \
public: \
	DECLARE_CLASS(UImage, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UImage)


#define FID_Engine_Source_Runtime_UMG_Public_Components_Image_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImage(UImage&&); \
	NO_API UImage(const UImage&); \
public: \
	NO_API virtual ~UImage();


#define FID_Engine_Source_Runtime_UMG_Public_Components_Image_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImage(UImage&&); \
	NO_API UImage(const UImage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImage) \
	NO_API virtual ~UImage();


#define FID_Engine_Source_Runtime_UMG_Public_Components_Image_h_32_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(UMG_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(Brush) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(Brush) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_Engine_Source_Runtime_UMG_Public_Components_Image_h_29_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_Image_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_Image_h_32_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_Image_h_32_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Image_h_32_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Image_h_32_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Image_h_32_STANDARD_CONSTRUCTORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Image_h_32_FIELDNOTIFY \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_Image_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_Image_h_32_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_Image_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Image_h_32_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Image_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Image_h_32_ENHANCED_CONSTRUCTORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Image_h_32_FIELDNOTIFY \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Image."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UImage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_Image_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
