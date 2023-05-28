// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionFunctionInput.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionFunctionInput_generated_h
#error "MaterialExpressionFunctionInput.generated.h already included, missing '#pragma once' in MaterialExpressionFunctionInput.h"
#endif
#define ENGINE_MaterialExpressionFunctionInput_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_39_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_39_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_39_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_39_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionFunctionInput(); \
	friend struct Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionFunctionInput, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionFunctionInput)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionFunctionInput(); \
	friend struct Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionFunctionInput, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionFunctionInput)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionFunctionInput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionFunctionInput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionFunctionInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionFunctionInput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionFunctionInput(UMaterialExpressionFunctionInput&&); \
	ENGINE_API UMaterialExpressionFunctionInput(const UMaterialExpressionFunctionInput&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionFunctionInput();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionFunctionInput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionFunctionInput(UMaterialExpressionFunctionInput&&); \
	ENGINE_API UMaterialExpressionFunctionInput(const UMaterialExpressionFunctionInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionFunctionInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionFunctionInput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionFunctionInput) \
	ENGINE_API virtual ~UMaterialExpressionFunctionInput();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_36_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_39_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_39_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_39_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_39_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_39_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_39_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_39_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionFunctionInput."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionFunctionInput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h


#define FOREACH_ENUM_EFUNCTIONINPUTTYPE(op) \
	op(FunctionInput_Scalar) \
	op(FunctionInput_Vector2) \
	op(FunctionInput_Vector3) \
	op(FunctionInput_Vector4) \
	op(FunctionInput_Texture2D) \
	op(FunctionInput_TextureCube) \
	op(FunctionInput_Texture2DArray) \
	op(FunctionInput_VolumeTexture) \
	op(FunctionInput_StaticBool) \
	op(FunctionInput_MaterialAttributes) \
	op(FunctionInput_TextureExternal) \
	op(FunctionInput_Bool) \
	op(FunctionInput_Substrate) 

enum EFunctionInputType : int;
template<> ENGINE_API UEnum* StaticEnum<EFunctionInputType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
