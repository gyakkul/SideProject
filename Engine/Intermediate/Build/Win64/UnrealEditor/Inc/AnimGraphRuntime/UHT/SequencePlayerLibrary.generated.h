// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SequencePlayerLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequenceBase;
enum class EAnimNodeReferenceConversionResult : uint8;
struct FAnimNodeReference;
struct FAnimUpdateContext;
struct FSequencePlayerReference;
#ifdef ANIMGRAPHRUNTIME_SequencePlayerLibrary_generated_h
#error "SequencePlayerLibrary.generated.h already included, missing '#pragma once' in SequencePlayerLibrary.h"
#endif
#define ANIMGRAPHRUNTIME_SequencePlayerLibrary_generated_h

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSequencePlayerReference_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeReference Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FSequencePlayerReference>();

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_27_SPARSE_DATA
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execComputePlayRateFromDuration); \
	DECLARE_FUNCTION(execGetLoopAnimation); \
	DECLARE_FUNCTION(execGetPlayRate); \
	DECLARE_FUNCTION(execGetStartPosition); \
	DECLARE_FUNCTION(execGetAccumulatedTime); \
	DECLARE_FUNCTION(execGetSequencePure); \
	DECLARE_FUNCTION(execGetSequence); \
	DECLARE_FUNCTION(execSetSequenceWithInertialBlending); \
	DECLARE_FUNCTION(execSetSequence); \
	DECLARE_FUNCTION(execSetPlayRate); \
	DECLARE_FUNCTION(execSetStartPosition); \
	DECLARE_FUNCTION(execSetAccumulatedTime); \
	DECLARE_FUNCTION(execConvertToSequencePlayerPure); \
	DECLARE_FUNCTION(execConvertToSequencePlayer);


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execComputePlayRateFromDuration); \
	DECLARE_FUNCTION(execGetLoopAnimation); \
	DECLARE_FUNCTION(execGetPlayRate); \
	DECLARE_FUNCTION(execGetStartPosition); \
	DECLARE_FUNCTION(execGetAccumulatedTime); \
	DECLARE_FUNCTION(execGetSequencePure); \
	DECLARE_FUNCTION(execGetSequence); \
	DECLARE_FUNCTION(execSetSequenceWithInertialBlending); \
	DECLARE_FUNCTION(execSetSequence); \
	DECLARE_FUNCTION(execSetPlayRate); \
	DECLARE_FUNCTION(execSetStartPosition); \
	DECLARE_FUNCTION(execSetAccumulatedTime); \
	DECLARE_FUNCTION(execConvertToSequencePlayerPure); \
	DECLARE_FUNCTION(execConvertToSequencePlayer);


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_27_ACCESSORS
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequencePlayerLibrary(); \
	friend struct Z_Construct_UClass_USequencePlayerLibrary_Statics; \
public: \
	DECLARE_CLASS(USequencePlayerLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(USequencePlayerLibrary)


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUSequencePlayerLibrary(); \
	friend struct Z_Construct_UClass_USequencePlayerLibrary_Statics; \
public: \
	DECLARE_CLASS(USequencePlayerLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(USequencePlayerLibrary)


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequencePlayerLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencePlayerLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencePlayerLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencePlayerLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USequencePlayerLibrary(USequencePlayerLibrary&&); \
	NO_API USequencePlayerLibrary(const USequencePlayerLibrary&); \
public: \
	NO_API virtual ~USequencePlayerLibrary();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequencePlayerLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USequencePlayerLibrary(USequencePlayerLibrary&&); \
	NO_API USequencePlayerLibrary(const USequencePlayerLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencePlayerLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencePlayerLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencePlayerLibrary) \
	NO_API virtual ~USequencePlayerLibrary();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_24_PROLOG
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_27_SPARSE_DATA \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_27_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_27_ACCESSORS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_27_INCLASS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_27_SPARSE_DATA \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_27_ACCESSORS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<class USequencePlayerLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
