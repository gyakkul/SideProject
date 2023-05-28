// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/SpotLight.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SpotLight_generated_h
#error "SpotLight.generated.h already included, missing '#pragma once' in SpotLight.h"
#endif
#define ENGINE_SpotLight_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetOuterConeAngle); \
	DECLARE_FUNCTION(execSetInnerConeAngle);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetOuterConeAngle); \
	DECLARE_FUNCTION(execSetInnerConeAngle);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpotLight(); \
	friend struct Z_Construct_UClass_ASpotLight_Statics; \
public: \
	DECLARE_CLASS(ASpotLight, ALight, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ASpotLight)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASpotLight(); \
	friend struct Z_Construct_UClass_ASpotLight_Statics; \
public: \
	DECLARE_CLASS(ASpotLight, ALight, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ASpotLight)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ASpotLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpotLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ASpotLight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpotLight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ASpotLight(ASpotLight&&); \
	ENGINE_API ASpotLight(const ASpotLight&); \
public: \
	ENGINE_API virtual ~ASpotLight();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ASpotLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ASpotLight(ASpotLight&&); \
	ENGINE_API ASpotLight(const ASpotLight&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ASpotLight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpotLight); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpotLight) \
	ENGINE_API virtual ~ASpotLight();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SpotLight."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ASpotLight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
