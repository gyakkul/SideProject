// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonLazyImage.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
class UObject;
class UTexture2D;
#ifdef COMMONUI_CommonLazyImage_generated_h
#error "CommonLazyImage.generated.h already included, missing '#pragma once' in CommonLazyImage.h"
#endif
#define COMMONUI_CommonLazyImage_generated_h

#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_25_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMaterialTextureParamName); \
	DECLARE_FUNCTION(execIsLoading); \
	DECLARE_FUNCTION(execSetBrushFromLazyDisplayAsset); \
	DECLARE_FUNCTION(execSetBrushFromLazyMaterial); \
	DECLARE_FUNCTION(execSetBrushFromLazyTexture);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMaterialTextureParamName); \
	DECLARE_FUNCTION(execIsLoading); \
	DECLARE_FUNCTION(execSetBrushFromLazyDisplayAsset); \
	DECLARE_FUNCTION(execSetBrushFromLazyMaterial); \
	DECLARE_FUNCTION(execSetBrushFromLazyTexture);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_25_ACCESSORS
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonLazyImage(); \
	friend struct Z_Construct_UClass_UCommonLazyImage_Statics; \
public: \
	DECLARE_CLASS(UCommonLazyImage, UImage, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonLazyImage)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUCommonLazyImage(); \
	friend struct Z_Construct_UClass_UCommonLazyImage_Statics; \
public: \
	DECLARE_CLASS(UCommonLazyImage, UImage, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonLazyImage)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonLazyImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonLazyImage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonLazyImage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonLazyImage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonLazyImage(UCommonLazyImage&&); \
	NO_API UCommonLazyImage(const UCommonLazyImage&); \
public: \
	NO_API virtual ~UCommonLazyImage();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonLazyImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonLazyImage(UCommonLazyImage&&); \
	NO_API UCommonLazyImage(const UCommonLazyImage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonLazyImage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonLazyImage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonLazyImage) \
	NO_API virtual ~UCommonLazyImage();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_22_PROLOG
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_25_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_25_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_25_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_25_INCLASS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_25_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_25_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CommonLazyImage."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_API UClass* StaticClass<class UCommonLazyImage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyImage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
