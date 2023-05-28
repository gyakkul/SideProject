// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VectorField/VectorFieldAnimated.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_VectorFieldAnimated_generated_h
#error "VectorFieldAnimated.generated.h already included, missing '#pragma once' in VectorFieldAnimated.h"
#endif
#define ENGINE_VectorFieldAnimated_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVectorFieldAnimated(); \
	friend struct Z_Construct_UClass_UVectorFieldAnimated_Statics; \
public: \
	DECLARE_CLASS(UVectorFieldAnimated, UVectorField, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UVectorFieldAnimated)


#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUVectorFieldAnimated(); \
	friend struct Z_Construct_UClass_UVectorFieldAnimated_Statics; \
public: \
	DECLARE_CLASS(UVectorFieldAnimated, UVectorField, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UVectorFieldAnimated)


#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVectorFieldAnimated(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVectorFieldAnimated) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVectorFieldAnimated); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVectorFieldAnimated); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UVectorFieldAnimated(UVectorFieldAnimated&&); \
	ENGINE_API UVectorFieldAnimated(const UVectorFieldAnimated&); \
public: \
	ENGINE_API virtual ~UVectorFieldAnimated();


#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVectorFieldAnimated(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UVectorFieldAnimated(UVectorFieldAnimated&&); \
	ENGINE_API UVectorFieldAnimated(const UVectorFieldAnimated&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVectorFieldAnimated); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVectorFieldAnimated); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVectorFieldAnimated) \
	ENGINE_API virtual ~UVectorFieldAnimated();


#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_27_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VectorFieldAnimated."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UVectorFieldAnimated>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h


#define FOREACH_ENUM_EVECTORFIELDCONSTRUCTIONOP(op) \
	op(VFCO_Extrude) \
	op(VFCO_Revolve) 

enum EVectorFieldConstructionOp : int;
template<> ENGINE_API UEnum* StaticEnum<EVectorFieldConstructionOp>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
