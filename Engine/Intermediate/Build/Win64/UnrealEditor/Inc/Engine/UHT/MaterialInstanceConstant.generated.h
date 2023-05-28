// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialInstanceConstant.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
class UTexture;
struct FLinearColor;
#ifdef ENGINE_MaterialInstanceConstant_generated_h
#error "MaterialInstanceConstant.generated.h already included, missing '#pragma once' in MaterialInstanceConstant.h"
#endif
#define ENGINE_MaterialInstanceConstant_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_22_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execK2_GetVectorParameterValue); \
	DECLARE_FUNCTION(execK2_GetTextureParameterValue); \
	DECLARE_FUNCTION(execK2_GetScalarParameterValue);


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execK2_GetVectorParameterValue); \
	DECLARE_FUNCTION(execK2_GetTextureParameterValue); \
	DECLARE_FUNCTION(execK2_GetScalarParameterValue);


#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_22_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetNaniteOverrideMaterial);


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_22_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetNaniteOverrideMaterial);


#else
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_22_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_22_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_22_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialInstanceConstant(); \
	friend struct Z_Construct_UClass_UMaterialInstanceConstant_Statics; \
public: \
	DECLARE_CLASS(UMaterialInstanceConstant, UMaterialInstance, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialInstanceConstant)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialInstanceConstant(); \
	friend struct Z_Construct_UClass_UMaterialInstanceConstant_Statics; \
public: \
	DECLARE_CLASS(UMaterialInstanceConstant, UMaterialInstance, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialInstanceConstant)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialInstanceConstant(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialInstanceConstant) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialInstanceConstant); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialInstanceConstant); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialInstanceConstant(UMaterialInstanceConstant&&); \
	ENGINE_API UMaterialInstanceConstant(const UMaterialInstanceConstant&); \
public: \
	ENGINE_API virtual ~UMaterialInstanceConstant();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialInstanceConstant(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialInstanceConstant(UMaterialInstanceConstant&&); \
	ENGINE_API UMaterialInstanceConstant(const UMaterialInstanceConstant&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialInstanceConstant); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialInstanceConstant); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMaterialInstanceConstant) \
	ENGINE_API virtual ~UMaterialInstanceConstant();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_22_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_22_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_22_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_22_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_22_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_22_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_22_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialInstanceConstant."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialInstanceConstant>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
