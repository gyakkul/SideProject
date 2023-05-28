// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/PointLight.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PointLight_generated_h
#error "PointLight.generated.h already included, missing '#pragma once' in PointLight.h"
#endif
#define ENGINE_PointLight_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLightFalloffExponent); \
	DECLARE_FUNCTION(execSetRadius);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLightFalloffExponent); \
	DECLARE_FUNCTION(execSetRadius);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPointLight(); \
	friend struct Z_Construct_UClass_APointLight_Statics; \
public: \
	DECLARE_CLASS(APointLight, ALight, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(APointLight)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPointLight(); \
	friend struct Z_Construct_UClass_APointLight_Statics; \
public: \
	DECLARE_CLASS(APointLight, ALight, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(APointLight)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API APointLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APointLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, APointLight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APointLight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API APointLight(APointLight&&); \
	ENGINE_API APointLight(const APointLight&); \
public: \
	ENGINE_API virtual ~APointLight();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API APointLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API APointLight(APointLight&&); \
	ENGINE_API APointLight(const APointLight&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, APointLight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APointLight); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APointLight) \
	ENGINE_API virtual ~APointLight();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PointLight."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class APointLight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
