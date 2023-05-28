// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MotionExtractorUtilities.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequence;
enum class EMotionExtractor_Axis : uint8;
enum class EMotionExtractor_MotionType : uint8;
#ifdef ANIMATIONMODIFIERLIBRARY_MotionExtractorUtilities_generated_h
#error "MotionExtractorUtilities.generated.h already included, missing '#pragma once' in MotionExtractorUtilities.h"
#endif
#define ANIMATIONMODIFIERLIBRARY_MotionExtractorUtilities_generated_h

#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_18_SPARSE_DATA
#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMovingRangesFromRootMotion); \
	DECLARE_FUNCTION(execGetStoppedRangesFromRootMotion); \
	DECLARE_FUNCTION(execGetDesiredValue); \
	DECLARE_FUNCTION(execGenerateCurveName);


#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMovingRangesFromRootMotion); \
	DECLARE_FUNCTION(execGetStoppedRangesFromRootMotion); \
	DECLARE_FUNCTION(execGetDesiredValue); \
	DECLARE_FUNCTION(execGenerateCurveName);


#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_18_ACCESSORS
#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionExtractorUtilityLibrary(); \
	friend struct Z_Construct_UClass_UMotionExtractorUtilityLibrary_Statics; \
public: \
	DECLARE_CLASS(UMotionExtractorUtilityLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationModifierLibrary"), NO_API) \
	DECLARE_SERIALIZER(UMotionExtractorUtilityLibrary)


#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMotionExtractorUtilityLibrary(); \
	friend struct Z_Construct_UClass_UMotionExtractorUtilityLibrary_Statics; \
public: \
	DECLARE_CLASS(UMotionExtractorUtilityLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationModifierLibrary"), NO_API) \
	DECLARE_SERIALIZER(UMotionExtractorUtilityLibrary)


#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionExtractorUtilityLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionExtractorUtilityLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionExtractorUtilityLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionExtractorUtilityLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionExtractorUtilityLibrary(UMotionExtractorUtilityLibrary&&); \
	NO_API UMotionExtractorUtilityLibrary(const UMotionExtractorUtilityLibrary&); \
public: \
	NO_API virtual ~UMotionExtractorUtilityLibrary();


#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionExtractorUtilityLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionExtractorUtilityLibrary(UMotionExtractorUtilityLibrary&&); \
	NO_API UMotionExtractorUtilityLibrary(const UMotionExtractorUtilityLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionExtractorUtilityLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionExtractorUtilityLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionExtractorUtilityLibrary) \
	NO_API virtual ~UMotionExtractorUtilityLibrary();


#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_15_PROLOG
#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_18_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_18_ACCESSORS \
	FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_18_INCLASS \
	FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_18_ACCESSORS \
	FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATIONMODIFIERLIBRARY_API UClass* StaticClass<class UMotionExtractorUtilityLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
