// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LinkedAnimGraphLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimInstance;
enum class EAnimNodeReferenceConversionResult : uint8;
struct FAnimNodeReference;
struct FLinkedAnimGraphReference;
#ifdef ANIMGRAPHRUNTIME_LinkedAnimGraphLibrary_generated_h
#error "LinkedAnimGraphLibrary.generated.h already included, missing '#pragma once' in LinkedAnimGraphLibrary.h"
#endif
#define ANIMGRAPHRUNTIME_LinkedAnimGraphLibrary_generated_h

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLinkedAnimGraphReference_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeReference Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FLinkedAnimGraphReference>();

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_24_SPARSE_DATA
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLinkedAnimInstance); \
	DECLARE_FUNCTION(execHasLinkedAnimInstance); \
	DECLARE_FUNCTION(execConvertToLinkedAnimGraphPure); \
	DECLARE_FUNCTION(execConvertToLinkedAnimGraph);


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLinkedAnimInstance); \
	DECLARE_FUNCTION(execHasLinkedAnimInstance); \
	DECLARE_FUNCTION(execConvertToLinkedAnimGraphPure); \
	DECLARE_FUNCTION(execConvertToLinkedAnimGraph);


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_24_ACCESSORS
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULinkedAnimGraphLibrary(); \
	friend struct Z_Construct_UClass_ULinkedAnimGraphLibrary_Statics; \
public: \
	DECLARE_CLASS(ULinkedAnimGraphLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(ULinkedAnimGraphLibrary)


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_24_INCLASS \
private: \
	static void StaticRegisterNativesULinkedAnimGraphLibrary(); \
	friend struct Z_Construct_UClass_ULinkedAnimGraphLibrary_Statics; \
public: \
	DECLARE_CLASS(ULinkedAnimGraphLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(ULinkedAnimGraphLibrary)


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULinkedAnimGraphLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULinkedAnimGraphLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULinkedAnimGraphLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULinkedAnimGraphLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULinkedAnimGraphLibrary(ULinkedAnimGraphLibrary&&); \
	NO_API ULinkedAnimGraphLibrary(const ULinkedAnimGraphLibrary&); \
public: \
	NO_API virtual ~ULinkedAnimGraphLibrary();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULinkedAnimGraphLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULinkedAnimGraphLibrary(ULinkedAnimGraphLibrary&&); \
	NO_API ULinkedAnimGraphLibrary(const ULinkedAnimGraphLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULinkedAnimGraphLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULinkedAnimGraphLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULinkedAnimGraphLibrary) \
	NO_API virtual ~ULinkedAnimGraphLibrary();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_21_PROLOG
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_24_SPARSE_DATA \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_24_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_24_ACCESSORS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_24_INCLASS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_24_SPARSE_DATA \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_24_ACCESSORS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<class ULinkedAnimGraphLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
