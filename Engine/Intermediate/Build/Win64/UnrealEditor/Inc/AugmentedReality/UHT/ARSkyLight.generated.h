// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARSkyLight.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAREnvironmentCaptureProbe;
#ifdef AUGMENTEDREALITY_ARSkyLight_generated_h
#error "ARSkyLight.generated.h already included, missing '#pragma once' in ARSkyLight.h"
#endif
#define AUGMENTEDREALITY_ARSkyLight_generated_h

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_SPARSE_DATA
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetEnvironmentCaptureProbe);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetEnvironmentCaptureProbe);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_ACCESSORS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAARSkyLight(); \
	friend struct Z_Construct_UClass_AARSkyLight_Statics; \
public: \
	DECLARE_CLASS(AARSkyLight, ASkyLight, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(AARSkyLight)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAARSkyLight(); \
	friend struct Z_Construct_UClass_AARSkyLight_Statics; \
public: \
	DECLARE_CLASS(AARSkyLight, ASkyLight, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(AARSkyLight)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AARSkyLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARSkyLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARSkyLight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARSkyLight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARSkyLight(AARSkyLight&&); \
	NO_API AARSkyLight(const AARSkyLight&); \
public: \
	NO_API virtual ~AARSkyLight();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AARSkyLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARSkyLight(AARSkyLight&&); \
	NO_API AARSkyLight(const AARSkyLight&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARSkyLight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARSkyLight); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARSkyLight) \
	NO_API virtual ~AARSkyLight();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_13_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ARSkyLight."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class AARSkyLight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
