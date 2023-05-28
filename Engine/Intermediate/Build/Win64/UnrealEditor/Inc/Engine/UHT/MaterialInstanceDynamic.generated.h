// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialInstanceDynamic.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstance;
class UMaterialInterface;
class URuntimeVirtualTexture;
class USparseVolumeTexture;
class UTexture;
struct FLinearColor;
struct FMaterialParameterInfo;
#ifdef ENGINE_MaterialInstanceDynamic_generated_h
#error "MaterialInstanceDynamic.generated.h already included, missing '#pragma once' in MaterialInstanceDynamic.h"
#endif
#define ENGINE_MaterialInstanceDynamic_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCopyParameterOverrides); \
	DECLARE_FUNCTION(execCopyInterpParameters); \
	DECLARE_FUNCTION(execK2_CopyMaterialInstanceParameters); \
	DECLARE_FUNCTION(execK2_InterpolateMaterialInstanceParams); \
	DECLARE_FUNCTION(execK2_GetVectorParameterValueByInfo); \
	DECLARE_FUNCTION(execK2_GetVectorParameterValue); \
	DECLARE_FUNCTION(execSetVectorParameterValueByInfo); \
	DECLARE_FUNCTION(execSetDoubleVectorParameterValue); \
	DECLARE_FUNCTION(execSetVectorParameterValue); \
	DECLARE_FUNCTION(execK2_GetTextureParameterValueByInfo); \
	DECLARE_FUNCTION(execK2_GetTextureParameterValue); \
	DECLARE_FUNCTION(execSetSparseVolumeTextureParameterValue); \
	DECLARE_FUNCTION(execSetRuntimeVirtualTextureParameterValueByInfo); \
	DECLARE_FUNCTION(execSetRuntimeVirtualTextureParameterValue); \
	DECLARE_FUNCTION(execSetTextureParameterValueByInfo); \
	DECLARE_FUNCTION(execSetTextureParameterValue); \
	DECLARE_FUNCTION(execK2_GetScalarParameterValueByInfo); \
	DECLARE_FUNCTION(execK2_GetScalarParameterValue); \
	DECLARE_FUNCTION(execSetScalarParameterByIndex); \
	DECLARE_FUNCTION(execInitializeScalarParameterAndGetIndex); \
	DECLARE_FUNCTION(execSetScalarParameterValueByInfo); \
	DECLARE_FUNCTION(execSetScalarParameterValue);


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCopyParameterOverrides); \
	DECLARE_FUNCTION(execCopyInterpParameters); \
	DECLARE_FUNCTION(execK2_CopyMaterialInstanceParameters); \
	DECLARE_FUNCTION(execK2_InterpolateMaterialInstanceParams); \
	DECLARE_FUNCTION(execK2_GetVectorParameterValueByInfo); \
	DECLARE_FUNCTION(execK2_GetVectorParameterValue); \
	DECLARE_FUNCTION(execSetVectorParameterValueByInfo); \
	DECLARE_FUNCTION(execSetDoubleVectorParameterValue); \
	DECLARE_FUNCTION(execSetVectorParameterValue); \
	DECLARE_FUNCTION(execK2_GetTextureParameterValueByInfo); \
	DECLARE_FUNCTION(execK2_GetTextureParameterValue); \
	DECLARE_FUNCTION(execSetSparseVolumeTextureParameterValue); \
	DECLARE_FUNCTION(execSetRuntimeVirtualTextureParameterValueByInfo); \
	DECLARE_FUNCTION(execSetRuntimeVirtualTextureParameterValue); \
	DECLARE_FUNCTION(execSetTextureParameterValueByInfo); \
	DECLARE_FUNCTION(execSetTextureParameterValue); \
	DECLARE_FUNCTION(execK2_GetScalarParameterValueByInfo); \
	DECLARE_FUNCTION(execK2_GetScalarParameterValue); \
	DECLARE_FUNCTION(execSetScalarParameterByIndex); \
	DECLARE_FUNCTION(execInitializeScalarParameterAndGetIndex); \
	DECLARE_FUNCTION(execSetScalarParameterValueByInfo); \
	DECLARE_FUNCTION(execSetScalarParameterValue);


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialInstanceDynamic(); \
	friend struct Z_Construct_UClass_UMaterialInstanceDynamic_Statics; \
public: \
	DECLARE_CLASS(UMaterialInstanceDynamic, UMaterialInstance, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialInstanceDynamic)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialInstanceDynamic(); \
	friend struct Z_Construct_UClass_UMaterialInstanceDynamic_Statics; \
public: \
	DECLARE_CLASS(UMaterialInstanceDynamic, UMaterialInstance, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialInstanceDynamic)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialInstanceDynamic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialInstanceDynamic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialInstanceDynamic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialInstanceDynamic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialInstanceDynamic(UMaterialInstanceDynamic&&); \
	NO_API UMaterialInstanceDynamic(const UMaterialInstanceDynamic&); \
public: \
	NO_API virtual ~UMaterialInstanceDynamic();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialInstanceDynamic(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialInstanceDynamic(UMaterialInstanceDynamic&&); \
	NO_API UMaterialInstanceDynamic(const UMaterialInstanceDynamic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialInstanceDynamic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialInstanceDynamic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMaterialInstanceDynamic) \
	NO_API virtual ~UMaterialInstanceDynamic();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialInstanceDynamic."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialInstanceDynamic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
