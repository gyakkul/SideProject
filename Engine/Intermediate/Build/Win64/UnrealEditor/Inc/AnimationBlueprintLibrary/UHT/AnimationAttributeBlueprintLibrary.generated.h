// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationAttributeBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IAnimationDataController;
class IAnimationDataModel;
struct FAnimationAttributeIdentifier;
#ifdef ANIMATIONBLUEPRINTLIBRARY_AnimationAttributeBlueprintLibrary_generated_h
#error "AnimationAttributeBlueprintLibrary.generated.h already included, missing '#pragma once' in AnimationAttributeBlueprintLibrary.h"
#endif
#define ANIMATIONBLUEPRINTLIBRARY_AnimationAttributeBlueprintLibrary_generated_h

#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h_27_SPARSE_DATA
#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h_27_RPC_WRAPPERS
#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h_27_ACCESSORS
#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationAttributeBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UAnimationAttributeBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UAnimationAttributeBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationBlueprintLibrary"), NO_API) \
	DECLARE_SERIALIZER(UAnimationAttributeBlueprintLibrary)


#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationAttributeBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UAnimationAttributeBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UAnimationAttributeBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationBlueprintLibrary"), NO_API) \
	DECLARE_SERIALIZER(UAnimationAttributeBlueprintLibrary)


#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationAttributeBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationAttributeBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationAttributeBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationAttributeBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationAttributeBlueprintLibrary(UAnimationAttributeBlueprintLibrary&&); \
	NO_API UAnimationAttributeBlueprintLibrary(const UAnimationAttributeBlueprintLibrary&); \
public: \
	NO_API virtual ~UAnimationAttributeBlueprintLibrary();


#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationAttributeBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationAttributeBlueprintLibrary(UAnimationAttributeBlueprintLibrary&&); \
	NO_API UAnimationAttributeBlueprintLibrary(const UAnimationAttributeBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationAttributeBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationAttributeBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationAttributeBlueprintLibrary) \
	NO_API virtual ~UAnimationAttributeBlueprintLibrary();


#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h_24_PROLOG
#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h_27_SPARSE_DATA \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h_27_RPC_WRAPPERS \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h_27_ACCESSORS \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h_27_INCLASS \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h_27_SPARSE_DATA \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h_27_ACCESSORS \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATIONBLUEPRINTLIBRARY_API UClass* StaticClass<class UAnimationAttributeBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
