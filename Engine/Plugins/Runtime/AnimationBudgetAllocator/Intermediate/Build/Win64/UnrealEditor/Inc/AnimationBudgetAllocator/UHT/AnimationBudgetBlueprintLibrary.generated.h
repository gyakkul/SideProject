// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationBudgetBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FAnimationBudgetAllocatorParameters;
#ifdef ANIMATIONBUDGETALLOCATOR_AnimationBudgetBlueprintLibrary_generated_h
#error "AnimationBudgetBlueprintLibrary.generated.h already included, missing '#pragma once' in AnimationBudgetBlueprintLibrary.h"
#endif
#define ANIMATIONBUDGETALLOCATOR_AnimationBudgetBlueprintLibrary_generated_h

#define FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_16_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetAnimationBudgetParameters); \
	DECLARE_FUNCTION(execEnableAnimationBudget);


#define FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetAnimationBudgetParameters); \
	DECLARE_FUNCTION(execEnableAnimationBudget);


#define FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_16_ACCESSORS
#define FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationBudgetBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UAnimationBudgetBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UAnimationBudgetBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationBudgetAllocator"), NO_API) \
	DECLARE_SERIALIZER(UAnimationBudgetBlueprintLibrary)


#define FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationBudgetBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UAnimationBudgetBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UAnimationBudgetBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationBudgetAllocator"), NO_API) \
	DECLARE_SERIALIZER(UAnimationBudgetBlueprintLibrary)


#define FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationBudgetBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationBudgetBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationBudgetBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationBudgetBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationBudgetBlueprintLibrary(UAnimationBudgetBlueprintLibrary&&); \
	NO_API UAnimationBudgetBlueprintLibrary(const UAnimationBudgetBlueprintLibrary&); \
public: \
	NO_API virtual ~UAnimationBudgetBlueprintLibrary();


#define FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationBudgetBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationBudgetBlueprintLibrary(UAnimationBudgetBlueprintLibrary&&); \
	NO_API UAnimationBudgetBlueprintLibrary(const UAnimationBudgetBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationBudgetBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationBudgetBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationBudgetBlueprintLibrary) \
	NO_API virtual ~UAnimationBudgetBlueprintLibrary();


#define FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_16_ACCESSORS \
	FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_16_INCLASS \
	FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_16_ACCESSORS \
	FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATIONBUDGETALLOCATOR_API UClass* StaticClass<class UAnimationBudgetBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
