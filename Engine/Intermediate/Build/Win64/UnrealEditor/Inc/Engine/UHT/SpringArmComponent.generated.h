// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/SpringArmComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SpringArmComponent_generated_h
#error "SpringArmComponent.generated.h already included, missing '#pragma once' in SpringArmComponent.h"
#endif
#define ENGINE_SpringArmComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpringArmComponent_h_21_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpringArmComponent_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsCollisionFixApplied); \
	DECLARE_FUNCTION(execGetUnfixedCameraPosition); \
	DECLARE_FUNCTION(execGetTargetRotation);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpringArmComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsCollisionFixApplied); \
	DECLARE_FUNCTION(execGetUnfixedCameraPosition); \
	DECLARE_FUNCTION(execGetTargetRotation);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpringArmComponent_h_21_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpringArmComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpringArmComponent(); \
	friend struct Z_Construct_UClass_USpringArmComponent_Statics; \
public: \
	DECLARE_CLASS(USpringArmComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USpringArmComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpringArmComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUSpringArmComponent(); \
	friend struct Z_Construct_UClass_USpringArmComponent_Statics; \
public: \
	DECLARE_CLASS(USpringArmComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USpringArmComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpringArmComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpringArmComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpringArmComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpringArmComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpringArmComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpringArmComponent(USpringArmComponent&&); \
	NO_API USpringArmComponent(const USpringArmComponent&); \
public: \
	NO_API virtual ~USpringArmComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpringArmComponent_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpringArmComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpringArmComponent(USpringArmComponent&&); \
	NO_API USpringArmComponent(const USpringArmComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpringArmComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpringArmComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpringArmComponent) \
	NO_API virtual ~USpringArmComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpringArmComponent_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpringArmComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpringArmComponent_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpringArmComponent_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpringArmComponent_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpringArmComponent_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpringArmComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpringArmComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpringArmComponent_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpringArmComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpringArmComponent_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpringArmComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpringArmComponent_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SpringArmComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USpringArmComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpringArmComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
