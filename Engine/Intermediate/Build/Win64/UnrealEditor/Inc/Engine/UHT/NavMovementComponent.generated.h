// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/NavMovementComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavMovementComponent_generated_h
#error "NavMovementComponent.generated.h already included, missing '#pragma once' in NavMovementComponent.h"
#endif
#define ENGINE_NavMovementComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsFlying); \
	DECLARE_FUNCTION(execIsSwimming); \
	DECLARE_FUNCTION(execIsMovingOnGround); \
	DECLARE_FUNCTION(execIsFalling); \
	DECLARE_FUNCTION(execIsCrouching); \
	DECLARE_FUNCTION(execStopMovementKeepPathing); \
	DECLARE_FUNCTION(execStopActiveMovement);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsFlying); \
	DECLARE_FUNCTION(execIsSwimming); \
	DECLARE_FUNCTION(execIsMovingOnGround); \
	DECLARE_FUNCTION(execIsFalling); \
	DECLARE_FUNCTION(execIsCrouching); \
	DECLARE_FUNCTION(execStopMovementKeepPathing); \
	DECLARE_FUNCTION(execStopActiveMovement);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavMovementComponent(); \
	friend struct Z_Construct_UClass_UNavMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UNavMovementComponent, UMovementComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNavMovementComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUNavMovementComponent(); \
	friend struct Z_Construct_UClass_UNavMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UNavMovementComponent, UMovementComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNavMovementComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavMovementComponent(UNavMovementComponent&&); \
	NO_API UNavMovementComponent(const UNavMovementComponent&); \
public: \
	NO_API virtual ~UNavMovementComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavMovementComponent(UNavMovementComponent&&); \
	NO_API UNavMovementComponent(const UNavMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavMovementComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavMovementComponent) \
	NO_API virtual ~UNavMovementComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_24_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NavMovementComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNavMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
