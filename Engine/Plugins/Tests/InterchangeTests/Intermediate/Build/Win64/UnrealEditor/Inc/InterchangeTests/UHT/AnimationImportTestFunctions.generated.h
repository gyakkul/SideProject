// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImportTestFunctions/AnimationImportTestFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequence;
struct FInterchangeTestFunctionResult;
#ifdef INTERCHANGETESTS_AnimationImportTestFunctions_generated_h
#error "AnimationImportTestFunctions.generated.h already included, missing '#pragma once' in AnimationImportTestFunctions.h"
#endif
#define INTERCHANGETESTS_AnimationImportTestFunctions_generated_h

#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_14_SPARSE_DATA
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckCurveKeyLeaveTangentWeight); \
	DECLARE_FUNCTION(execCheckCurveKeyLeaveTangent); \
	DECLARE_FUNCTION(execCheckCurveKeyArriveTangentWeight); \
	DECLARE_FUNCTION(execCheckCurveKeyArriveTangent); \
	DECLARE_FUNCTION(execCheckCurveKeyValue); \
	DECLARE_FUNCTION(execCheckCurveKeyTime); \
	DECLARE_FUNCTION(execCheckAnimationFrameNumber); \
	DECLARE_FUNCTION(execCheckAnimationLength); \
	DECLARE_FUNCTION(execCheckImportedAnimSequenceCount);


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckCurveKeyLeaveTangentWeight); \
	DECLARE_FUNCTION(execCheckCurveKeyLeaveTangent); \
	DECLARE_FUNCTION(execCheckCurveKeyArriveTangentWeight); \
	DECLARE_FUNCTION(execCheckCurveKeyArriveTangent); \
	DECLARE_FUNCTION(execCheckCurveKeyValue); \
	DECLARE_FUNCTION(execCheckCurveKeyTime); \
	DECLARE_FUNCTION(execCheckAnimationFrameNumber); \
	DECLARE_FUNCTION(execCheckAnimationLength); \
	DECLARE_FUNCTION(execCheckImportedAnimSequenceCount);


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_14_ACCESSORS
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationImportTestFunctions(); \
	friend struct Z_Construct_UClass_UAnimationImportTestFunctions_Statics; \
public: \
	DECLARE_CLASS(UAnimationImportTestFunctions, UImportTestFunctionsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeTests"), NO_API) \
	DECLARE_SERIALIZER(UAnimationImportTestFunctions)


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationImportTestFunctions(); \
	friend struct Z_Construct_UClass_UAnimationImportTestFunctions_Statics; \
public: \
	DECLARE_CLASS(UAnimationImportTestFunctions, UImportTestFunctionsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeTests"), NO_API) \
	DECLARE_SERIALIZER(UAnimationImportTestFunctions)


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationImportTestFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationImportTestFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationImportTestFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationImportTestFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationImportTestFunctions(UAnimationImportTestFunctions&&); \
	NO_API UAnimationImportTestFunctions(const UAnimationImportTestFunctions&); \
public: \
	NO_API virtual ~UAnimationImportTestFunctions();


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationImportTestFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationImportTestFunctions(UAnimationImportTestFunctions&&); \
	NO_API UAnimationImportTestFunctions(const UAnimationImportTestFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationImportTestFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationImportTestFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationImportTestFunctions) \
	NO_API virtual ~UAnimationImportTestFunctions();


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_11_PROLOG
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_14_SPARSE_DATA \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_14_RPC_WRAPPERS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_14_ACCESSORS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_14_INCLASS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_14_SPARSE_DATA \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_14_ACCESSORS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGETESTS_API UClass* StaticClass<class UAnimationImportTestFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
