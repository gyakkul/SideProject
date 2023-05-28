// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpression.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpression_generated_h
#error "MaterialExpression.generated.h already included, missing '#pragma once' in MaterialExpression.h"
#endif
#define ENGINE_MaterialExpression_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_119_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FExpressionExecOutput_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FExpressionExecOutput>();

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_158_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMaterialExpressionCollection>();

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_185_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_185_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_185_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_185_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_185_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UMaterialExpression, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_185_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpression(); \
	friend struct Z_Construct_UClass_UMaterialExpression_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpression, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpression) \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_185_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_185_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpression(); \
	friend struct Z_Construct_UClass_UMaterialExpression_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpression, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpression) \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_185_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_185_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpression(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpression) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpression); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpression); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialExpression(UMaterialExpression&&); \
	NO_API UMaterialExpression(const UMaterialExpression&); \
public: \
	NO_API virtual ~UMaterialExpression();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_185_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpression(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialExpression(UMaterialExpression&&); \
	NO_API UMaterialExpression(const UMaterialExpression&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpression); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpression); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpression) \
	NO_API virtual ~UMaterialExpression();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_182_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_185_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_185_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_185_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_185_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_185_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_185_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_185_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_185_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_185_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_185_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_185_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_185_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpression."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpression>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
