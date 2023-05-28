// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionTransform.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionTransform_generated_h
#error "MaterialExpressionTransform.generated.h already included, missing '#pragma once' in MaterialExpressionTransform.h"
#endif
#define ENGINE_MaterialExpressionTransform_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_69_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_69_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_69_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_69_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTransform(); \
	friend struct Z_Construct_UClass_UMaterialExpressionTransform_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionTransform, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionTransform)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_69_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTransform(); \
	friend struct Z_Construct_UClass_UMaterialExpressionTransform_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionTransform, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionTransform)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_69_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionTransform(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTransform) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionTransform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTransform); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionTransform(UMaterialExpressionTransform&&); \
	ENGINE_API UMaterialExpressionTransform(const UMaterialExpressionTransform&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionTransform();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionTransform(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionTransform(UMaterialExpressionTransform&&); \
	ENGINE_API UMaterialExpressionTransform(const UMaterialExpressionTransform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionTransform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTransform); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTransform) \
	ENGINE_API virtual ~UMaterialExpressionTransform();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_66_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_69_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_69_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_69_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_69_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_69_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_69_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_69_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_69_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_69_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_69_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionTransform."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h


#define FOREACH_ENUM_EMATERIALVECTORCOORDTRANSFORMSOURCE(op) \
	op(TRANSFORMSOURCE_Tangent) \
	op(TRANSFORMSOURCE_Local) \
	op(TRANSFORMSOURCE_World) \
	op(TRANSFORMSOURCE_View) \
	op(TRANSFORMSOURCE_Camera) \
	op(TRANSFORMSOURCE_ParticleWorld) \
	op(TRANSFORMSOURCE_Instance) 

enum EMaterialVectorCoordTransformSource : int;
template<> ENGINE_API UEnum* StaticEnum<EMaterialVectorCoordTransformSource>();

#define FOREACH_ENUM_EMATERIALVECTORCOORDTRANSFORM(op) \
	op(TRANSFORM_Tangent) \
	op(TRANSFORM_Local) \
	op(TRANSFORM_World) \
	op(TRANSFORM_View) \
	op(TRANSFORM_Camera) \
	op(TRANSFORM_ParticleWorld) \
	op(TRANSFORM_Instance) 

enum EMaterialVectorCoordTransform : int;
template<> ENGINE_API UEnum* StaticEnum<EMaterialVectorCoordTransform>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
