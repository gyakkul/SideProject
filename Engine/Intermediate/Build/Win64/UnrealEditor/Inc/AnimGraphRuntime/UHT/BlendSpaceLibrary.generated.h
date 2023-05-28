// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlendSpaceLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAnimNodeReferenceConversionResult : uint8;
struct FAnimNodeReference;
struct FBlendSpaceReference;
#ifdef ANIMGRAPHRUNTIME_BlendSpaceLibrary_generated_h
#error "BlendSpaceLibrary.generated.h already included, missing '#pragma once' in BlendSpaceLibrary.h"
#endif
#define ANIMGRAPHRUNTIME_BlendSpaceLibrary_generated_h

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlendSpaceReference_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeReference Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FBlendSpaceReference>();

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_27_SPARSE_DATA
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSnapToPosition); \
	DECLARE_FUNCTION(execGetFilteredPosition); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execConvertToBlendSpacePure); \
	DECLARE_FUNCTION(execConvertToBlendSpace);


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSnapToPosition); \
	DECLARE_FUNCTION(execGetFilteredPosition); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execConvertToBlendSpacePure); \
	DECLARE_FUNCTION(execConvertToBlendSpace);


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_27_ACCESSORS
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlendSpaceLibrary(); \
	friend struct Z_Construct_UClass_UBlendSpaceLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlendSpaceLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(UBlendSpaceLibrary)


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUBlendSpaceLibrary(); \
	friend struct Z_Construct_UClass_UBlendSpaceLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlendSpaceLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(UBlendSpaceLibrary)


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlendSpaceLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendSpaceLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlendSpaceLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendSpaceLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlendSpaceLibrary(UBlendSpaceLibrary&&); \
	NO_API UBlendSpaceLibrary(const UBlendSpaceLibrary&); \
public: \
	NO_API virtual ~UBlendSpaceLibrary();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlendSpaceLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlendSpaceLibrary(UBlendSpaceLibrary&&); \
	NO_API UBlendSpaceLibrary(const UBlendSpaceLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlendSpaceLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendSpaceLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendSpaceLibrary) \
	NO_API virtual ~UBlendSpaceLibrary();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_24_PROLOG
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_27_SPARSE_DATA \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_27_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_27_ACCESSORS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_27_INCLASS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_27_SPARSE_DATA \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_27_ACCESSORS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<class UBlendSpaceLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
