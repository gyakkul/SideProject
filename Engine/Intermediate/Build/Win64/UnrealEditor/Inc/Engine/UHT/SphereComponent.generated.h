// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SphereComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SphereComponent_generated_h
#error "SphereComponent.generated.h already included, missing '#pragma once' in SphereComponent.h"
#endif
#define ENGINE_SphereComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_19_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetShapeScale); \
	DECLARE_FUNCTION(execGetUnscaledSphereRadius); \
	DECLARE_FUNCTION(execGetScaledSphereRadius); \
	DECLARE_FUNCTION(execSetSphereRadius);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetShapeScale); \
	DECLARE_FUNCTION(execGetUnscaledSphereRadius); \
	DECLARE_FUNCTION(execGetScaledSphereRadius); \
	DECLARE_FUNCTION(execSetSphereRadius);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_19_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSphereComponent(); \
	friend struct Z_Construct_UClass_USphereComponent_Statics; \
public: \
	DECLARE_CLASS(USphereComponent, UShapeComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USphereComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSphereComponent(); \
	friend struct Z_Construct_UClass_USphereComponent_Statics; \
public: \
	DECLARE_CLASS(USphereComponent, UShapeComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USphereComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USphereComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USphereComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USphereComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USphereComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USphereComponent(USphereComponent&&); \
	NO_API USphereComponent(const USphereComponent&); \
public: \
	NO_API virtual ~USphereComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USphereComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USphereComponent(USphereComponent&&); \
	NO_API USphereComponent(const USphereComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USphereComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USphereComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USphereComponent) \
	NO_API virtual ~USphereComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SphereComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USphereComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
