// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClothingSimulationInteractor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClothingInteractor;
#ifdef CLOTHINGSYSTEMRUNTIMEINTERFACE_ClothingSimulationInteractor_generated_h
#error "ClothingSimulationInteractor.generated.h already included, missing '#pragma once' in ClothingSimulationInteractor.h"
#endif
#define CLOTHINGSYSTEMRUNTIMEINTERFACE_ClothingSimulationInteractor_generated_h

#define FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_30_SPARSE_DATA
#define FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_30_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_30_ACCESSORS
#define FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothingInteractor(); \
	friend struct Z_Construct_UClass_UClothingInteractor_Statics; \
public: \
	DECLARE_CLASS(UClothingInteractor, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ClothingSystemRuntimeInterface"), NO_API) \
	DECLARE_SERIALIZER(UClothingInteractor)


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUClothingInteractor(); \
	friend struct Z_Construct_UClass_UClothingInteractor_Statics; \
public: \
	DECLARE_CLASS(UClothingInteractor, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ClothingSystemRuntimeInterface"), NO_API) \
	DECLARE_SERIALIZER(UClothingInteractor)


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClothingInteractor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothingInteractor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClothingInteractor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothingInteractor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClothingInteractor(UClothingInteractor&&); \
	NO_API UClothingInteractor(const UClothingInteractor&); \
public: \
	NO_API virtual ~UClothingInteractor();


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClothingInteractor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClothingInteractor(UClothingInteractor&&); \
	NO_API UClothingInteractor(const UClothingInteractor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClothingInteractor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothingInteractor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothingInteractor) \
	NO_API virtual ~UClothingInteractor();


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_27_PROLOG
#define FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_30_SPARSE_DATA \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_30_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_30_ACCESSORS \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_30_INCLASS \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_30_SPARSE_DATA \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_30_ACCESSORS \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* StaticClass<class UClothingInteractor>();

#define FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_51_SPARSE_DATA
#define FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_51_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetClothingInteractor); \
	DECLARE_FUNCTION(execGetSimulationTime); \
	DECLARE_FUNCTION(execGetNumSubsteps); \
	DECLARE_FUNCTION(execGetNumIterations); \
	DECLARE_FUNCTION(execGetNumDynamicParticles); \
	DECLARE_FUNCTION(execGetNumKinematicParticles); \
	DECLARE_FUNCTION(execGetNumCloths); \
	DECLARE_FUNCTION(execSetNumSubsteps); \
	DECLARE_FUNCTION(execSetMaxNumIterations); \
	DECLARE_FUNCTION(execSetNumIterations); \
	DECLARE_FUNCTION(execDisableGravityOverride); \
	DECLARE_FUNCTION(execEnableGravityOverride); \
	DECLARE_FUNCTION(execSetAnimDriveSpringStiffness); \
	DECLARE_FUNCTION(execClothConfigUpdated); \
	DECLARE_FUNCTION(execPhysicsAssetUpdated);


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetClothingInteractor); \
	DECLARE_FUNCTION(execGetSimulationTime); \
	DECLARE_FUNCTION(execGetNumSubsteps); \
	DECLARE_FUNCTION(execGetNumIterations); \
	DECLARE_FUNCTION(execGetNumDynamicParticles); \
	DECLARE_FUNCTION(execGetNumKinematicParticles); \
	DECLARE_FUNCTION(execGetNumCloths); \
	DECLARE_FUNCTION(execSetNumSubsteps); \
	DECLARE_FUNCTION(execSetMaxNumIterations); \
	DECLARE_FUNCTION(execSetNumIterations); \
	DECLARE_FUNCTION(execDisableGravityOverride); \
	DECLARE_FUNCTION(execEnableGravityOverride); \
	DECLARE_FUNCTION(execSetAnimDriveSpringStiffness); \
	DECLARE_FUNCTION(execClothConfigUpdated); \
	DECLARE_FUNCTION(execPhysicsAssetUpdated);


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_51_ACCESSORS
#define FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothingSimulationInteractor(); \
	friend struct Z_Construct_UClass_UClothingSimulationInteractor_Statics; \
public: \
	DECLARE_CLASS(UClothingSimulationInteractor, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ClothingSystemRuntimeInterface"), NO_API) \
	DECLARE_SERIALIZER(UClothingSimulationInteractor)


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUClothingSimulationInteractor(); \
	friend struct Z_Construct_UClass_UClothingSimulationInteractor_Statics; \
public: \
	DECLARE_CLASS(UClothingSimulationInteractor, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ClothingSystemRuntimeInterface"), NO_API) \
	DECLARE_SERIALIZER(UClothingSimulationInteractor)


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClothingSimulationInteractor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothingSimulationInteractor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClothingSimulationInteractor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothingSimulationInteractor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClothingSimulationInteractor(UClothingSimulationInteractor&&); \
	NO_API UClothingSimulationInteractor(const UClothingSimulationInteractor&); \
public: \
	NO_API virtual ~UClothingSimulationInteractor();


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClothingSimulationInteractor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClothingSimulationInteractor(UClothingSimulationInteractor&&); \
	NO_API UClothingSimulationInteractor(const UClothingSimulationInteractor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClothingSimulationInteractor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothingSimulationInteractor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothingSimulationInteractor) \
	NO_API virtual ~UClothingSimulationInteractor();


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_48_PROLOG
#define FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_51_SPARSE_DATA \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_51_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_51_ACCESSORS \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_51_INCLASS \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_51_SPARSE_DATA \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_51_ACCESSORS \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* StaticClass<class UClothingSimulationInteractor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
