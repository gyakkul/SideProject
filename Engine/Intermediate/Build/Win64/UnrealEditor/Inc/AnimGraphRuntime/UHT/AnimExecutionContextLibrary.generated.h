// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimExecutionContextLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimInstance;
enum class EAnimExecutionContextConversionResult : uint8;
struct FAnimComponentSpacePoseContext;
struct FAnimExecutionContext;
struct FAnimInitializationContext;
struct FAnimNodeReference;
struct FAnimPoseContext;
struct FAnimUpdateContext;
#ifdef ANIMGRAPHRUNTIME_AnimExecutionContextLibrary_generated_h
#error "AnimExecutionContextLibrary.generated.h already included, missing '#pragma once' in AnimExecutionContextLibrary.h"
#endif
#define ANIMGRAPHRUNTIME_AnimExecutionContextLibrary_generated_h

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimExecutionContextLibrary_h_17_SPARSE_DATA
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimExecutionContextLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConvertToComponentSpacePoseContext); \
	DECLARE_FUNCTION(execConvertToPoseContext); \
	DECLARE_FUNCTION(execGetCurrentWeight); \
	DECLARE_FUNCTION(execGetDeltaTime); \
	DECLARE_FUNCTION(execConvertToUpdateContext); \
	DECLARE_FUNCTION(execConvertToInitializationContext); \
	DECLARE_FUNCTION(execGetAnimNodeReference); \
	DECLARE_FUNCTION(execGetAnimInstance);


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimExecutionContextLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConvertToComponentSpacePoseContext); \
	DECLARE_FUNCTION(execConvertToPoseContext); \
	DECLARE_FUNCTION(execGetCurrentWeight); \
	DECLARE_FUNCTION(execGetDeltaTime); \
	DECLARE_FUNCTION(execConvertToUpdateContext); \
	DECLARE_FUNCTION(execConvertToInitializationContext); \
	DECLARE_FUNCTION(execGetAnimNodeReference); \
	DECLARE_FUNCTION(execGetAnimInstance);


#if WITH_EDITOR
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimExecutionContextLibrary_h_17_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPrototype_ThreadSafeAnimUpdateCall); \
	DECLARE_FUNCTION(execPrototype_ThreadSafeAnimNodeCall);


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimExecutionContextLibrary_h_17_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPrototype_ThreadSafeAnimUpdateCall); \
	DECLARE_FUNCTION(execPrototype_ThreadSafeAnimNodeCall);


#else
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimExecutionContextLibrary_h_17_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimExecutionContextLibrary_h_17_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimExecutionContextLibrary_h_17_ACCESSORS
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimExecutionContextLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimExecutionContextLibrary(); \
	friend struct Z_Construct_UClass_UAnimExecutionContextLibrary_Statics; \
public: \
	DECLARE_CLASS(UAnimExecutionContextLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAnimExecutionContextLibrary)


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimExecutionContextLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAnimExecutionContextLibrary(); \
	friend struct Z_Construct_UClass_UAnimExecutionContextLibrary_Statics; \
public: \
	DECLARE_CLASS(UAnimExecutionContextLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAnimExecutionContextLibrary)


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimExecutionContextLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimExecutionContextLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimExecutionContextLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimExecutionContextLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimExecutionContextLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimExecutionContextLibrary(UAnimExecutionContextLibrary&&); \
	NO_API UAnimExecutionContextLibrary(const UAnimExecutionContextLibrary&); \
public: \
	NO_API virtual ~UAnimExecutionContextLibrary();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimExecutionContextLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimExecutionContextLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimExecutionContextLibrary(UAnimExecutionContextLibrary&&); \
	NO_API UAnimExecutionContextLibrary(const UAnimExecutionContextLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimExecutionContextLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimExecutionContextLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimExecutionContextLibrary) \
	NO_API virtual ~UAnimExecutionContextLibrary();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimExecutionContextLibrary_h_14_PROLOG
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimExecutionContextLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimExecutionContextLibrary_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimExecutionContextLibrary_h_17_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimExecutionContextLibrary_h_17_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimExecutionContextLibrary_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimExecutionContextLibrary_h_17_INCLASS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimExecutionContextLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimExecutionContextLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimExecutionContextLibrary_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimExecutionContextLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimExecutionContextLibrary_h_17_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimExecutionContextLibrary_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimExecutionContextLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimExecutionContextLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<class UAnimExecutionContextLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimExecutionContextLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
