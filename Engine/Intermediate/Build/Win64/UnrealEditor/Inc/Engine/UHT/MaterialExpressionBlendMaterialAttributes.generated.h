// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionBlendMaterialAttributes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionBlendMaterialAttributes_generated_h
#error "MaterialExpressionBlendMaterialAttributes.generated.h already included, missing '#pragma once' in MaterialExpressionBlendMaterialAttributes.h"
#endif
#define ENGINE_MaterialExpressionBlendMaterialAttributes_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_26_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_26_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_26_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionBlendMaterialAttributes(); \
	friend struct Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionBlendMaterialAttributes, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionBlendMaterialAttributes)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionBlendMaterialAttributes(); \
	friend struct Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributes_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionBlendMaterialAttributes, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionBlendMaterialAttributes)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionBlendMaterialAttributes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionBlendMaterialAttributes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionBlendMaterialAttributes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionBlendMaterialAttributes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionBlendMaterialAttributes(UMaterialExpressionBlendMaterialAttributes&&); \
	ENGINE_API UMaterialExpressionBlendMaterialAttributes(const UMaterialExpressionBlendMaterialAttributes&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionBlendMaterialAttributes();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionBlendMaterialAttributes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionBlendMaterialAttributes(UMaterialExpressionBlendMaterialAttributes&&); \
	ENGINE_API UMaterialExpressionBlendMaterialAttributes(const UMaterialExpressionBlendMaterialAttributes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionBlendMaterialAttributes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionBlendMaterialAttributes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionBlendMaterialAttributes) \
	ENGINE_API virtual ~UMaterialExpressionBlendMaterialAttributes();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_23_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_26_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_26_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_26_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_26_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_26_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_26_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionBlendMaterialAttributes."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionBlendMaterialAttributes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlendMaterialAttributes_h


#define FOREACH_ENUM_EMATERIALATTRIBUTEBLEND(op) \
	op(EMaterialAttributeBlend::Blend) \
	op(EMaterialAttributeBlend::UseA) \
	op(EMaterialAttributeBlend::UseB) 

namespace EMaterialAttributeBlend { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EMaterialAttributeBlend::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
