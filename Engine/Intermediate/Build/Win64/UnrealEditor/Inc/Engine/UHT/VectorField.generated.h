// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VectorField/VectorField.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_VectorField_generated_h
#error "VectorField.generated.h already included, missing '#pragma once' in VectorField.h"
#endif
#define ENGINE_VectorField_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h_17_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h_17_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h_17_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVectorField(); \
	friend struct Z_Construct_UClass_UVectorField_Statics; \
public: \
	DECLARE_CLASS(UVectorField, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UVectorField)


#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUVectorField(); \
	friend struct Z_Construct_UClass_UVectorField_Statics; \
public: \
	DECLARE_CLASS(UVectorField, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UVectorField)


#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVectorField(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVectorField) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVectorField); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVectorField); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UVectorField(UVectorField&&); \
	ENGINE_API UVectorField(const UVectorField&); \
public: \
	ENGINE_API virtual ~UVectorField();


#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVectorField(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UVectorField(UVectorField&&); \
	ENGINE_API UVectorField(const UVectorField&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVectorField); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVectorField); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVectorField) \
	ENGINE_API virtual ~UVectorField();


#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h_17_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VectorField."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UVectorField>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
