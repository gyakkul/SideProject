// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/PoseableMeshComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
#ifdef ENGINE_PoseableMeshComponent_generated_h
#error "PoseableMeshComponent.generated.h already included, missing '#pragma once' in PoseableMeshComponent.h"
#endif
#define ENGINE_PoseableMeshComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCopyPoseFromSkeletalComponent); \
	DECLARE_FUNCTION(execResetBoneTransformByName); \
	DECLARE_FUNCTION(execGetBoneScaleByName); \
	DECLARE_FUNCTION(execGetBoneRotationByName); \
	DECLARE_FUNCTION(execGetBoneLocationByName); \
	DECLARE_FUNCTION(execGetBoneTransformByName); \
	DECLARE_FUNCTION(execSetBoneScaleByName); \
	DECLARE_FUNCTION(execSetBoneRotationByName); \
	DECLARE_FUNCTION(execSetBoneLocationByName); \
	DECLARE_FUNCTION(execSetBoneTransformByName);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCopyPoseFromSkeletalComponent); \
	DECLARE_FUNCTION(execResetBoneTransformByName); \
	DECLARE_FUNCTION(execGetBoneScaleByName); \
	DECLARE_FUNCTION(execGetBoneRotationByName); \
	DECLARE_FUNCTION(execGetBoneLocationByName); \
	DECLARE_FUNCTION(execGetBoneTransformByName); \
	DECLARE_FUNCTION(execSetBoneScaleByName); \
	DECLARE_FUNCTION(execSetBoneRotationByName); \
	DECLARE_FUNCTION(execSetBoneLocationByName); \
	DECLARE_FUNCTION(execSetBoneTransformByName);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseableMeshComponent(); \
	friend struct Z_Construct_UClass_UPoseableMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UPoseableMeshComponent, USkinnedMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPoseableMeshComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUPoseableMeshComponent(); \
	friend struct Z_Construct_UClass_UPoseableMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UPoseableMeshComponent, USkinnedMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPoseableMeshComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoseableMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseableMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoseableMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseableMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPoseableMeshComponent(UPoseableMeshComponent&&); \
	NO_API UPoseableMeshComponent(const UPoseableMeshComponent&); \
public: \
	NO_API virtual ~UPoseableMeshComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoseableMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPoseableMeshComponent(UPoseableMeshComponent&&); \
	NO_API UPoseableMeshComponent(const UPoseableMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoseableMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseableMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseableMeshComponent) \
	NO_API virtual ~UPoseableMeshComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PoseableMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPoseableMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_PoseableMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
