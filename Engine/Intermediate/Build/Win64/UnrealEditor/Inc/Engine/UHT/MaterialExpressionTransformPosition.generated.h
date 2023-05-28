// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionTransformPosition.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionTransformPosition_generated_h
#error "MaterialExpressionTransformPosition.generated.h already included, missing '#pragma once' in MaterialExpressionTransformPosition.h"
#endif
#define ENGINE_MaterialExpressionTransformPosition_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_42_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_42_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_42_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_42_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTransformPosition(); \
	friend struct Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionTransformPosition, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionTransformPosition)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTransformPosition(); \
	friend struct Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionTransformPosition, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionTransformPosition)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionTransformPosition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTransformPosition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionTransformPosition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTransformPosition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionTransformPosition(UMaterialExpressionTransformPosition&&); \
	ENGINE_API UMaterialExpressionTransformPosition(const UMaterialExpressionTransformPosition&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionTransformPosition();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionTransformPosition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionTransformPosition(UMaterialExpressionTransformPosition&&); \
	ENGINE_API UMaterialExpressionTransformPosition(const UMaterialExpressionTransformPosition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionTransformPosition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTransformPosition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTransformPosition) \
	ENGINE_API virtual ~UMaterialExpressionTransformPosition();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_39_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_42_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_42_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_42_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_42_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_42_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_42_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_42_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionTransformPosition."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionTransformPosition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h


#define FOREACH_ENUM_EMATERIALPOSITIONTRANSFORMSOURCE(op) \
	op(TRANSFORMPOSSOURCE_Local) \
	op(TRANSFORMPOSSOURCE_World) \
	op(TRANSFORMPOSSOURCE_TranslatedWorld) \
	op(TRANSFORMPOSSOURCE_View) \
	op(TRANSFORMPOSSOURCE_Camera) \
	op(TRANSFORMPOSSOURCE_Particle) \
	op(TRANSFORMPOSSOURCE_Instance) 

enum EMaterialPositionTransformSource : int;
template<> ENGINE_API UEnum* StaticEnum<EMaterialPositionTransformSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
