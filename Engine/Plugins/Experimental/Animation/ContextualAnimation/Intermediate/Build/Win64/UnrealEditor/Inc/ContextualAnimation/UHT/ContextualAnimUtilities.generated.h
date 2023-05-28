// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContextualAnimUtilities.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 struct FContextualAnimSceneBindingContext;
class AActor;
class UAnimMontage;
class UAnimSequenceBase;
class UContextualAnimSceneAsset;
class UObject;
class USkeletalMeshComponent;
struct FContextualAnimSceneBinding;
struct FContextualAnimSceneBindingContext;
struct FContextualAnimSceneBindings;
struct FContextualAnimSetPivot;
struct FLinearColor;
#ifdef CONTEXTUALANIMATION_ContextualAnimUtilities_generated_h
#error "ContextualAnimUtilities.generated.h already included, missing '#pragma once' in ContextualAnimUtilities.h"
#endif
#define CONTEXTUALANIMATION_ContextualAnimUtilities_generated_h

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_21_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_SceneBinding_GetSkeletalMesh); \
	DECLARE_FUNCTION(execBP_SceneBinding_GetActor); \
	DECLARE_FUNCTION(execBP_SceneBindingContext_GetVelocity); \
	DECLARE_FUNCTION(execBP_SceneBindingContext_GetTransform); \
	DECLARE_FUNCTION(execBP_SceneBindingContext_GetActor); \
	DECLARE_FUNCTION(execBP_SceneBindingContext_MakeFromActorWithExternalTransform); \
	DECLARE_FUNCTION(execBP_SceneBindingContext_MakeFromActor); \
	DECLARE_FUNCTION(execBP_SceneBindings_GetAlignmentTransformFromBinding); \
	DECLARE_FUNCTION(execBP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot); \
	DECLARE_FUNCTION(execBP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole); \
	DECLARE_FUNCTION(execBP_SceneBindings_GetSectionAndAnimSetIndices); \
	DECLARE_FUNCTION(execBP_SceneBindings_GetSceneAsset); \
	DECLARE_FUNCTION(execBP_SceneBinding_GetRoleFromBinding); \
	DECLARE_FUNCTION(execBP_SceneBinding_GetAnimationFromBinding); \
	DECLARE_FUNCTION(execBP_SceneBindings_GetBindingByActor); \
	DECLARE_FUNCTION(execBP_SceneBindings_GetBindingByRole); \
	DECLARE_FUNCTION(execBP_SceneBindings_GetBindings); \
	DECLARE_FUNCTION(execBP_SceneBindings_AddOrUpdateWarpTargetsForBindings); \
	DECLARE_FUNCTION(execBP_SceneBindings_CalculateAnimSetPivots); \
	DECLARE_FUNCTION(execBP_Montage_GetSectionLength); \
	DECLARE_FUNCTION(execBP_Montage_GetSectionTimeLeftFromPos); \
	DECLARE_FUNCTION(execBP_Montage_GetSectionStartAndEndTime); \
	DECLARE_FUNCTION(execBP_CreateContextualAnimSceneBindingsForTwoActors); \
	DECLARE_FUNCTION(execBP_CreateContextualAnimSceneBindings); \
	DECLARE_FUNCTION(execBP_DrawDebugPose);


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_SceneBinding_GetSkeletalMesh); \
	DECLARE_FUNCTION(execBP_SceneBinding_GetActor); \
	DECLARE_FUNCTION(execBP_SceneBindingContext_GetVelocity); \
	DECLARE_FUNCTION(execBP_SceneBindingContext_GetTransform); \
	DECLARE_FUNCTION(execBP_SceneBindingContext_GetActor); \
	DECLARE_FUNCTION(execBP_SceneBindingContext_MakeFromActorWithExternalTransform); \
	DECLARE_FUNCTION(execBP_SceneBindingContext_MakeFromActor); \
	DECLARE_FUNCTION(execBP_SceneBindings_GetAlignmentTransformFromBinding); \
	DECLARE_FUNCTION(execBP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot); \
	DECLARE_FUNCTION(execBP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole); \
	DECLARE_FUNCTION(execBP_SceneBindings_GetSectionAndAnimSetIndices); \
	DECLARE_FUNCTION(execBP_SceneBindings_GetSceneAsset); \
	DECLARE_FUNCTION(execBP_SceneBinding_GetRoleFromBinding); \
	DECLARE_FUNCTION(execBP_SceneBinding_GetAnimationFromBinding); \
	DECLARE_FUNCTION(execBP_SceneBindings_GetBindingByActor); \
	DECLARE_FUNCTION(execBP_SceneBindings_GetBindingByRole); \
	DECLARE_FUNCTION(execBP_SceneBindings_GetBindings); \
	DECLARE_FUNCTION(execBP_SceneBindings_AddOrUpdateWarpTargetsForBindings); \
	DECLARE_FUNCTION(execBP_SceneBindings_CalculateAnimSetPivots); \
	DECLARE_FUNCTION(execBP_Montage_GetSectionLength); \
	DECLARE_FUNCTION(execBP_Montage_GetSectionTimeLeftFromPos); \
	DECLARE_FUNCTION(execBP_Montage_GetSectionStartAndEndTime); \
	DECLARE_FUNCTION(execBP_CreateContextualAnimSceneBindingsForTwoActors); \
	DECLARE_FUNCTION(execBP_CreateContextualAnimSceneBindings); \
	DECLARE_FUNCTION(execBP_DrawDebugPose);


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_21_ACCESSORS
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContextualAnimUtilities(); \
	friend struct Z_Construct_UClass_UContextualAnimUtilities_Statics; \
public: \
	DECLARE_CLASS(UContextualAnimUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContextualAnimation"), NO_API) \
	DECLARE_SERIALIZER(UContextualAnimUtilities)


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUContextualAnimUtilities(); \
	friend struct Z_Construct_UClass_UContextualAnimUtilities_Statics; \
public: \
	DECLARE_CLASS(UContextualAnimUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContextualAnimation"), NO_API) \
	DECLARE_SERIALIZER(UContextualAnimUtilities)


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UContextualAnimUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContextualAnimUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContextualAnimUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextualAnimUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContextualAnimUtilities(UContextualAnimUtilities&&); \
	NO_API UContextualAnimUtilities(const UContextualAnimUtilities&); \
public: \
	NO_API virtual ~UContextualAnimUtilities();


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UContextualAnimUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContextualAnimUtilities(UContextualAnimUtilities&&); \
	NO_API UContextualAnimUtilities(const UContextualAnimUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContextualAnimUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextualAnimUtilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContextualAnimUtilities) \
	NO_API virtual ~UContextualAnimUtilities();


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_21_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_21_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_21_INCLASS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_21_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTEXTUALANIMATION_API UClass* StaticClass<class UContextualAnimUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
