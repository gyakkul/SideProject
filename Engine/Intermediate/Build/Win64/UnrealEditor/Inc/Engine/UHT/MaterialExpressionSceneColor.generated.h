// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionSceneColor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionSceneColor_generated_h
#error "MaterialExpressionSceneColor.generated.h already included, missing '#pragma once' in MaterialExpressionSceneColor.h"
#endif
#define ENGINE_MaterialExpressionSceneColor_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSceneColor(); \
	friend struct Z_Construct_UClass_UMaterialExpressionSceneColor_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionSceneColor, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionSceneColor)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSceneColor(); \
	friend struct Z_Construct_UClass_UMaterialExpressionSceneColor_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionSceneColor, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionSceneColor)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionSceneColor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSceneColor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionSceneColor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSceneColor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialExpressionSceneColor(UMaterialExpressionSceneColor&&); \
	NO_API UMaterialExpressionSceneColor(const UMaterialExpressionSceneColor&); \
public: \
	NO_API virtual ~UMaterialExpressionSceneColor();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionSceneColor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialExpressionSceneColor(UMaterialExpressionSceneColor&&); \
	NO_API UMaterialExpressionSceneColor(const UMaterialExpressionSceneColor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionSceneColor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSceneColor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSceneColor) \
	NO_API virtual ~UMaterialExpressionSceneColor();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_22_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionSceneColor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionSceneColor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h


#define FOREACH_ENUM_EMATERIALSCENEATTRIBUTEINPUTMODE(op) \
	op(EMaterialSceneAttributeInputMode::Coordinates) \
	op(EMaterialSceneAttributeInputMode::OffsetFraction) 

namespace EMaterialSceneAttributeInputMode { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EMaterialSceneAttributeInputMode::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
