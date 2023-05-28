// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FoliageInstancedStaticMeshComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class UDamageType;
#ifdef FOLIAGE_FoliageInstancedStaticMeshComponent_generated_h
#error "FoliageInstancedStaticMeshComponent.generated.h already included, missing '#pragma once' in FoliageInstancedStaticMeshComponent.h"
#endif
#define FOLIAGE_FoliageInstancedStaticMeshComponent_generated_h

#define FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_16_DELEGATE \
FOLIAGE_API void FInstancePointDamageSignature_DelegateWrapper(const FMulticastScriptDelegate& InstancePointDamageSignature, int32 InstanceIndex, float Damage, AController* InstigatedBy, FVector HitLocation, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser);


#define FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_17_DELEGATE \
FOLIAGE_API void FInstanceRadialDamageSignature_DelegateWrapper(const FMulticastScriptDelegate& InstanceRadialDamageSignature, TArray<int32> const& Instances, TArray<float> const& Damages, AController* InstigatedBy, FVector Origin, float MaxRadius, const UDamageType* DamageType, AActor* DamageCauser);


#define FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_22_SPARSE_DATA
#define FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_22_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_22_ACCESSORS
#define FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFoliageInstancedStaticMeshComponent(); \
	friend struct Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UFoliageInstancedStaticMeshComponent, UHierarchicalInstancedStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Foliage"), NO_API) \
	DECLARE_SERIALIZER(UFoliageInstancedStaticMeshComponent)


#define FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUFoliageInstancedStaticMeshComponent(); \
	friend struct Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UFoliageInstancedStaticMeshComponent, UHierarchicalInstancedStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Foliage"), NO_API) \
	DECLARE_SERIALIZER(UFoliageInstancedStaticMeshComponent)


#define FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFoliageInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFoliageInstancedStaticMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFoliageInstancedStaticMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFoliageInstancedStaticMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFoliageInstancedStaticMeshComponent(UFoliageInstancedStaticMeshComponent&&); \
	NO_API UFoliageInstancedStaticMeshComponent(const UFoliageInstancedStaticMeshComponent&); \
public: \
	NO_API virtual ~UFoliageInstancedStaticMeshComponent();


#define FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFoliageInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFoliageInstancedStaticMeshComponent(UFoliageInstancedStaticMeshComponent&&); \
	NO_API UFoliageInstancedStaticMeshComponent(const UFoliageInstancedStaticMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFoliageInstancedStaticMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFoliageInstancedStaticMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFoliageInstancedStaticMeshComponent) \
	NO_API virtual ~UFoliageInstancedStaticMeshComponent();


#define FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_19_PROLOG
#define FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_22_SPARSE_DATA \
	FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_22_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_22_ACCESSORS \
	FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_22_INCLASS \
	FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_22_SPARSE_DATA \
	FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_22_ACCESSORS \
	FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FoliageInstancedStaticMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOLIAGE_API UClass* StaticClass<class UFoliageInstancedStaticMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
