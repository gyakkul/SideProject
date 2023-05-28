// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/RetainerBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;
class UMaterialInterface;
#ifdef UMG_RetainerBox_generated_h
#error "RetainerBox.generated.h already included, missing '#pragma once' in RetainerBox.h"
#endif
#define UMG_RetainerBox_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRetainRendering); \
	DECLARE_FUNCTION(execSetTextureParameter); \
	DECLARE_FUNCTION(execSetEffectMaterial); \
	DECLARE_FUNCTION(execGetEffectMaterial); \
	DECLARE_FUNCTION(execRequestRender); \
	DECLARE_FUNCTION(execSetRenderingPhase);


#define FID_Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetRetainRendering); \
	DECLARE_FUNCTION(execSetTextureParameter); \
	DECLARE_FUNCTION(execSetEffectMaterial); \
	DECLARE_FUNCTION(execGetEffectMaterial); \
	DECLARE_FUNCTION(execRequestRender); \
	DECLARE_FUNCTION(execSetRenderingPhase);


#define FID_Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_ACCESSORS \
static void GetbRetainRender_WrapperImpl(const void* Object, void* OutValue); \
static void SetbRetainRender_WrapperImpl(void* Object, const void* InValue); \
static void GetRenderOnInvalidation_WrapperImpl(const void* Object, void* OutValue); \
static void GetRenderOnPhase_WrapperImpl(const void* Object, void* OutValue); \
static void GetPhase_WrapperImpl(const void* Object, void* OutValue); \
static void GetPhaseCount_WrapperImpl(const void* Object, void* OutValue); \
static void GetEffectMaterial_WrapperImpl(const void* Object, void* OutValue); \
static void SetEffectMaterial_WrapperImpl(void* Object, const void* InValue); \
static void GetTextureParameter_WrapperImpl(const void* Object, void* OutValue); \
static void SetTextureParameter_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURetainerBox(); \
	friend struct Z_Construct_UClass_URetainerBox_Statics; \
public: \
	DECLARE_CLASS(URetainerBox, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(URetainerBox)


#define FID_Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_INCLASS \
private: \
	static void StaticRegisterNativesURetainerBox(); \
	friend struct Z_Construct_UClass_URetainerBox_Statics; \
public: \
	DECLARE_CLASS(URetainerBox, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(URetainerBox)


#define FID_Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URetainerBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URetainerBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URetainerBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URetainerBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URetainerBox(URetainerBox&&); \
	NO_API URetainerBox(const URetainerBox&); \
public: \
	NO_API virtual ~URetainerBox();


#define FID_Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URetainerBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URetainerBox(URetainerBox&&); \
	NO_API URetainerBox(const URetainerBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URetainerBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URetainerBox); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URetainerBox) \
	NO_API virtual ~URetainerBox();


#define FID_Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_25_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RetainerBox."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class URetainerBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
