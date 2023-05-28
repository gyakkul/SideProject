// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationStateMachineLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBlendProfile;
class UCurveFloat;
enum class EAlphaBlendOption : uint8;
enum class EAnimNodeReferenceConversionResult : uint8;
struct FAnimationStateMachineReference;
struct FAnimationStateResultReference;
struct FAnimNodeReference;
struct FAnimUpdateContext;
#ifdef ANIMGRAPHRUNTIME_AnimationStateMachineLibrary_generated_h
#error "AnimationStateMachineLibrary.generated.h already included, missing '#pragma once' in AnimationStateMachineLibrary.h"
#endif
#define ANIMGRAPHRUNTIME_AnimationStateMachineLibrary_generated_h

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationStateResultReference_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeReference Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FAnimationStateResultReference>();

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationStateMachineReference_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeReference Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FAnimationStateMachineReference>();

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_36_SPARSE_DATA
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRelevantAnimTimeRemainingFraction); \
	DECLARE_FUNCTION(execGetRelevantAnimTimeRemaining); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execSetState); \
	DECLARE_FUNCTION(execIsStateBlendingOut); \
	DECLARE_FUNCTION(execIsStateBlendingIn); \
	DECLARE_FUNCTION(execConvertToAnimationStateMachinePure); \
	DECLARE_FUNCTION(execConvertToAnimationStateMachine); \
	DECLARE_FUNCTION(execConvertToAnimationStateResultPure); \
	DECLARE_FUNCTION(execConvertToAnimationStateResult);


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRelevantAnimTimeRemainingFraction); \
	DECLARE_FUNCTION(execGetRelevantAnimTimeRemaining); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execSetState); \
	DECLARE_FUNCTION(execIsStateBlendingOut); \
	DECLARE_FUNCTION(execIsStateBlendingIn); \
	DECLARE_FUNCTION(execConvertToAnimationStateMachinePure); \
	DECLARE_FUNCTION(execConvertToAnimationStateMachine); \
	DECLARE_FUNCTION(execConvertToAnimationStateResultPure); \
	DECLARE_FUNCTION(execConvertToAnimationStateResult);


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_36_ACCESSORS
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationStateMachineLibrary(); \
	friend struct Z_Construct_UClass_UAnimationStateMachineLibrary_Statics; \
public: \
	DECLARE_CLASS(UAnimationStateMachineLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAnimationStateMachineLibrary)


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationStateMachineLibrary(); \
	friend struct Z_Construct_UClass_UAnimationStateMachineLibrary_Statics; \
public: \
	DECLARE_CLASS(UAnimationStateMachineLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAnimationStateMachineLibrary)


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationStateMachineLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationStateMachineLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationStateMachineLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationStateMachineLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationStateMachineLibrary(UAnimationStateMachineLibrary&&); \
	NO_API UAnimationStateMachineLibrary(const UAnimationStateMachineLibrary&); \
public: \
	NO_API virtual ~UAnimationStateMachineLibrary();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationStateMachineLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationStateMachineLibrary(UAnimationStateMachineLibrary&&); \
	NO_API UAnimationStateMachineLibrary(const UAnimationStateMachineLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationStateMachineLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationStateMachineLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationStateMachineLibrary) \
	NO_API virtual ~UAnimationStateMachineLibrary();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_33_PROLOG
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_36_SPARSE_DATA \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_36_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_36_ACCESSORS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_36_INCLASS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_36_SPARSE_DATA \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_36_ACCESSORS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<class UAnimationStateMachineLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimationStateMachineLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
