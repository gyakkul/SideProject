// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosFlesh/FleshComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSFLESHENGINE_FleshComponent_generated_h
#error "FleshComponent.generated.h already included, missing '#pragma once' in FleshComponent.h"
#endif
#define CHAOSFLESHENGINE_FleshComponent_generated_h

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshComponent_h_31_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshComponent_h_31_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshComponent_h_31_ACCESSORS
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshComponent_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFleshComponent(); \
	friend struct Z_Construct_UClass_UFleshComponent_Statics; \
public: \
	DECLARE_CLASS(UFleshComponent, UDeformableGameplayComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosFleshEngine"), NO_API) \
	DECLARE_SERIALIZER(UFleshComponent)


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshComponent_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUFleshComponent(); \
	friend struct Z_Construct_UClass_UFleshComponent_Statics; \
public: \
	DECLARE_CLASS(UFleshComponent, UDeformableGameplayComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosFleshEngine"), NO_API) \
	DECLARE_SERIALIZER(UFleshComponent)


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshComponent_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFleshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFleshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFleshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFleshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFleshComponent(UFleshComponent&&); \
	NO_API UFleshComponent(const UFleshComponent&); \
public: \
	NO_API virtual ~UFleshComponent();


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshComponent_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFleshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFleshComponent(UFleshComponent&&); \
	NO_API UFleshComponent(const UFleshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFleshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFleshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFleshComponent) \
	NO_API virtual ~UFleshComponent();


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshComponent_h_28_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshComponent_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshComponent_h_31_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshComponent_h_31_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshComponent_h_31_ACCESSORS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshComponent_h_31_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshComponent_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshComponent_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshComponent_h_31_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshComponent_h_31_ACCESSORS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshComponent_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshComponent_h_31_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FleshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSFLESHENGINE_API UClass* StaticClass<class UFleshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
