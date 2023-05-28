// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GroomComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGroomAsset;
class UGroomBindingAsset;
class UMeshDeformer;
class UNiagaraComponent;
class UPhysicsAsset;
class USkeletalMeshComponent;
#ifdef HAIRSTRANDSCORE_GroomComponent_generated_h
#error "GroomComponent.generated.h already included, missing '#pragma once' in GroomComponent.h"
#endif
#define HAIRSTRANDSCORE_GroomComponent_generated_h

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_27_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetIsHairLengthScaleEnabled); \
	DECLARE_FUNCTION(execSetHairLengthScaleEnable); \
	DECLARE_FUNCTION(execSetHairLengthScale); \
	DECLARE_FUNCTION(execGetNiagaraComponent); \
	DECLARE_FUNCTION(execResetSimulation); \
	DECLARE_FUNCTION(execSetEnableSimulation); \
	DECLARE_FUNCTION(execResetCollisionComponents); \
	DECLARE_FUNCTION(execAddCollisionComponent); \
	DECLARE_FUNCTION(execSetMeshDeformer); \
	DECLARE_FUNCTION(execSetPhysicsAsset); \
	DECLARE_FUNCTION(execSetBindingAsset); \
	DECLARE_FUNCTION(execSetGroomAsset);


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetIsHairLengthScaleEnabled); \
	DECLARE_FUNCTION(execSetHairLengthScaleEnable); \
	DECLARE_FUNCTION(execSetHairLengthScale); \
	DECLARE_FUNCTION(execGetNiagaraComponent); \
	DECLARE_FUNCTION(execResetSimulation); \
	DECLARE_FUNCTION(execSetEnableSimulation); \
	DECLARE_FUNCTION(execResetCollisionComponents); \
	DECLARE_FUNCTION(execAddCollisionComponent); \
	DECLARE_FUNCTION(execSetMeshDeformer); \
	DECLARE_FUNCTION(execSetPhysicsAsset); \
	DECLARE_FUNCTION(execSetBindingAsset); \
	DECLARE_FUNCTION(execSetGroomAsset);


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_27_ACCESSORS
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGroomComponent(); \
	friend struct Z_Construct_UClass_UGroomComponent_Statics; \
public: \
	DECLARE_CLASS(UGroomComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HairStrandsCore"), NO_API) \
	DECLARE_SERIALIZER(UGroomComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UGroomComponent*>(this); }


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUGroomComponent(); \
	friend struct Z_Construct_UClass_UGroomComponent_Statics; \
public: \
	DECLARE_CLASS(UGroomComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HairStrandsCore"), NO_API) \
	DECLARE_SERIALIZER(UGroomComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UGroomComponent*>(this); }


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGroomComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGroomComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGroomComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGroomComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGroomComponent(UGroomComponent&&); \
	NO_API UGroomComponent(const UGroomComponent&); \
public: \
	NO_API virtual ~UGroomComponent();


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGroomComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGroomComponent(UGroomComponent&&); \
	NO_API UGroomComponent(const UGroomComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGroomComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGroomComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGroomComponent) \
	NO_API virtual ~UGroomComponent();


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_24_PROLOG
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_27_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_27_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_27_ACCESSORS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_27_INCLASS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_27_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_27_ACCESSORS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GroomComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HAIRSTRANDSCORE_API UClass* StaticClass<class UGroomComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
