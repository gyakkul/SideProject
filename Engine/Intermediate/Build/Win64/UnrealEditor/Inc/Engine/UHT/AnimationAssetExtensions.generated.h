// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimationAssetExtensions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimationAsset;
class USkeleton;
#ifdef ENGINE_AnimationAssetExtensions_generated_h
#error "AnimationAssetExtensions.generated.h already included, missing '#pragma once' in AnimationAssetExtensions.h"
#endif
#define ENGINE_AnimationAssetExtensions_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSkeleton);


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSkeleton);


#else
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationAssetExtensions(); \
	friend struct Z_Construct_UClass_UAnimationAssetExtensions_Statics; \
public: \
	DECLARE_CLASS(UAnimationAssetExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimationAssetExtensions)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationAssetExtensions(); \
	friend struct Z_Construct_UClass_UAnimationAssetExtensions_Statics; \
public: \
	DECLARE_CLASS(UAnimationAssetExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimationAssetExtensions)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationAssetExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationAssetExtensions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationAssetExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationAssetExtensions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationAssetExtensions(UAnimationAssetExtensions&&); \
	NO_API UAnimationAssetExtensions(const UAnimationAssetExtensions&); \
public: \
	NO_API virtual ~UAnimationAssetExtensions();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationAssetExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationAssetExtensions(UAnimationAssetExtensions&&); \
	NO_API UAnimationAssetExtensions(const UAnimationAssetExtensions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationAssetExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationAssetExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationAssetExtensions) \
	NO_API virtual ~UAnimationAssetExtensions();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimationAssetExtensions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
