// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MLDeformerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMLDeformerAsset;
class USkeletalMeshComponent;
#ifdef MLDEFORMERFRAMEWORK_MLDeformerComponent_generated_h
#error "MLDeformerComponent.generated.h already included, missing '#pragma once' in MLDeformerComponent.h"
#endif
#define MLDEFORMERFRAMEWORK_MLDeformerComponent_generated_h

#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_28_SPARSE_DATA
#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateSkeletalMeshComponent); \
	DECLARE_FUNCTION(execGetSkeletalMeshComponent); \
	DECLARE_FUNCTION(execFindSkeletalMeshComponent); \
	DECLARE_FUNCTION(execSetDeformerAsset); \
	DECLARE_FUNCTION(execGetDeformerAsset); \
	DECLARE_FUNCTION(execGetQualityLevel); \
	DECLARE_FUNCTION(execSetQualityLevel); \
	DECLARE_FUNCTION(execSetWeight); \
	DECLARE_FUNCTION(execGetWeight);


#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateSkeletalMeshComponent); \
	DECLARE_FUNCTION(execGetSkeletalMeshComponent); \
	DECLARE_FUNCTION(execFindSkeletalMeshComponent); \
	DECLARE_FUNCTION(execSetDeformerAsset); \
	DECLARE_FUNCTION(execGetDeformerAsset); \
	DECLARE_FUNCTION(execGetQualityLevel); \
	DECLARE_FUNCTION(execSetQualityLevel); \
	DECLARE_FUNCTION(execSetWeight); \
	DECLARE_FUNCTION(execGetWeight);


#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_28_ACCESSORS
#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMLDeformerComponent(); \
	friend struct Z_Construct_UClass_UMLDeformerComponent_Statics; \
public: \
	DECLARE_CLASS(UMLDeformerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MLDeformerFramework"), NO_API) \
	DECLARE_SERIALIZER(UMLDeformerComponent)


#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUMLDeformerComponent(); \
	friend struct Z_Construct_UClass_UMLDeformerComponent_Statics; \
public: \
	DECLARE_CLASS(UMLDeformerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MLDeformerFramework"), NO_API) \
	DECLARE_SERIALIZER(UMLDeformerComponent)


#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMLDeformerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMLDeformerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMLDeformerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMLDeformerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMLDeformerComponent(UMLDeformerComponent&&); \
	NO_API UMLDeformerComponent(const UMLDeformerComponent&); \
public: \
	NO_API virtual ~UMLDeformerComponent();


#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMLDeformerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMLDeformerComponent(UMLDeformerComponent&&); \
	NO_API UMLDeformerComponent(const UMLDeformerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMLDeformerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMLDeformerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMLDeformerComponent) \
	NO_API virtual ~UMLDeformerComponent();


#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_24_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_28_SPARSE_DATA \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_28_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_28_ACCESSORS \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_28_INCLASS \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_28_SPARSE_DATA \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_28_ACCESSORS \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MLDeformerComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MLDEFORMERFRAMEWORK_API UClass* StaticClass<class UMLDeformerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
