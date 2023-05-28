// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SequenceEvaluatorLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequenceBase;
enum class EAnimNodeReferenceConversionResult : uint8;
struct FAnimNodeReference;
struct FAnimUpdateContext;
struct FSequenceEvaluatorReference;
#ifdef ANIMGRAPHRUNTIME_SequenceEvaluatorLibrary_generated_h
#error "SequenceEvaluatorLibrary.generated.h already included, missing '#pragma once' in SequenceEvaluatorLibrary.h"
#endif
#define ANIMGRAPHRUNTIME_SequenceEvaluatorLibrary_generated_h

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSequenceEvaluatorReference_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeReference Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FSequenceEvaluatorReference>();

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_27_SPARSE_DATA
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSequence); \
	DECLARE_FUNCTION(execGetAccumulatedTime); \
	DECLARE_FUNCTION(execSetSequenceWithInertialBlending); \
	DECLARE_FUNCTION(execSetSequence); \
	DECLARE_FUNCTION(execAdvanceTime); \
	DECLARE_FUNCTION(execSetExplicitTime); \
	DECLARE_FUNCTION(execConvertToSequenceEvaluatorPure); \
	DECLARE_FUNCTION(execConvertToSequenceEvaluator);


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSequence); \
	DECLARE_FUNCTION(execGetAccumulatedTime); \
	DECLARE_FUNCTION(execSetSequenceWithInertialBlending); \
	DECLARE_FUNCTION(execSetSequence); \
	DECLARE_FUNCTION(execAdvanceTime); \
	DECLARE_FUNCTION(execSetExplicitTime); \
	DECLARE_FUNCTION(execConvertToSequenceEvaluatorPure); \
	DECLARE_FUNCTION(execConvertToSequenceEvaluator);


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_27_ACCESSORS
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequenceEvaluatorLibrary(); \
	friend struct Z_Construct_UClass_USequenceEvaluatorLibrary_Statics; \
public: \
	DECLARE_CLASS(USequenceEvaluatorLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(USequenceEvaluatorLibrary)


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUSequenceEvaluatorLibrary(); \
	friend struct Z_Construct_UClass_USequenceEvaluatorLibrary_Statics; \
public: \
	DECLARE_CLASS(USequenceEvaluatorLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(USequenceEvaluatorLibrary)


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequenceEvaluatorLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequenceEvaluatorLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequenceEvaluatorLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequenceEvaluatorLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USequenceEvaluatorLibrary(USequenceEvaluatorLibrary&&); \
	NO_API USequenceEvaluatorLibrary(const USequenceEvaluatorLibrary&); \
public: \
	NO_API virtual ~USequenceEvaluatorLibrary();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequenceEvaluatorLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USequenceEvaluatorLibrary(USequenceEvaluatorLibrary&&); \
	NO_API USequenceEvaluatorLibrary(const USequenceEvaluatorLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequenceEvaluatorLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequenceEvaluatorLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequenceEvaluatorLibrary) \
	NO_API virtual ~USequenceEvaluatorLibrary();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_24_PROLOG
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_27_SPARSE_DATA \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_27_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_27_ACCESSORS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_27_INCLASS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_27_SPARSE_DATA \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_27_ACCESSORS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<class USequenceEvaluatorLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
