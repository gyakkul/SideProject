// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionDepthOfFieldFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionDepthOfFieldFunction_generated_h
#error "MaterialExpressionDepthOfFieldFunction.generated.h already included, missing '#pragma once' in MaterialExpressionDepthOfFieldFunction.h"
#endif
#define ENGINE_MaterialExpressionDepthOfFieldFunction_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_30_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_30_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_30_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionDepthOfFieldFunction(); \
	friend struct Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionDepthOfFieldFunction, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionDepthOfFieldFunction)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionDepthOfFieldFunction(); \
	friend struct Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionDepthOfFieldFunction, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionDepthOfFieldFunction)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionDepthOfFieldFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionDepthOfFieldFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionDepthOfFieldFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionDepthOfFieldFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialExpressionDepthOfFieldFunction(UMaterialExpressionDepthOfFieldFunction&&); \
	NO_API UMaterialExpressionDepthOfFieldFunction(const UMaterialExpressionDepthOfFieldFunction&); \
public: \
	NO_API virtual ~UMaterialExpressionDepthOfFieldFunction();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionDepthOfFieldFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialExpressionDepthOfFieldFunction(UMaterialExpressionDepthOfFieldFunction&&); \
	NO_API UMaterialExpressionDepthOfFieldFunction(const UMaterialExpressionDepthOfFieldFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionDepthOfFieldFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionDepthOfFieldFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionDepthOfFieldFunction) \
	NO_API virtual ~UMaterialExpressionDepthOfFieldFunction();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_27_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_30_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_30_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_30_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_30_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_30_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_30_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionDepthOfFieldFunction."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionDepthOfFieldFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h


#define FOREACH_ENUM_EDEPTHOFFIELDFUNCTIONVALUE(op) \
	op(TDOF_NearAndFarMask) \
	op(TDOF_NearMask) \
	op(TDOF_FarMask) \
	op(TDOF_CircleOfConfusionRadius) 

enum EDepthOfFieldFunctionValue : int;
template<> ENGINE_API UEnum* StaticEnum<EDepthOfFieldFunctionValue>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
