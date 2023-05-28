// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlendSpacePlayerLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBlendSpace;
enum class EAnimNodeReferenceConversionResult : uint8;
struct FAnimNodeReference;
struct FAnimUpdateContext;
struct FBlendSpacePlayerReference;
#ifdef ANIMGRAPHRUNTIME_BlendSpacePlayerLibrary_generated_h
#error "BlendSpacePlayerLibrary.generated.h already included, missing '#pragma once' in BlendSpacePlayerLibrary.h"
#endif
#define ANIMGRAPHRUNTIME_BlendSpacePlayerLibrary_generated_h

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpacePlayerLibrary_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlendSpacePlayerReference_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeReference Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FBlendSpacePlayerReference>();

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpacePlayerLibrary_h_27_SPARSE_DATA
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpacePlayerLibrary_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSnapToPosition); \
	DECLARE_FUNCTION(execShouldResetPlayTimeWhenBlendSpaceChanges); \
	DECLARE_FUNCTION(execGetLoop); \
	DECLARE_FUNCTION(execGetPlayRate); \
	DECLARE_FUNCTION(execGetStartPosition); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execGetBlendSpace); \
	DECLARE_FUNCTION(execSetLoop); \
	DECLARE_FUNCTION(execSetPlayRate); \
	DECLARE_FUNCTION(execSetResetPlayTimeWhenBlendSpaceChanges); \
	DECLARE_FUNCTION(execSetBlendSpaceWithInertialBlending); \
	DECLARE_FUNCTION(execSetBlendSpace); \
	DECLARE_FUNCTION(execConvertToBlendSpacePlayerPure); \
	DECLARE_FUNCTION(execConvertToBlendSpacePlayer);


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpacePlayerLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSnapToPosition); \
	DECLARE_FUNCTION(execShouldResetPlayTimeWhenBlendSpaceChanges); \
	DECLARE_FUNCTION(execGetLoop); \
	DECLARE_FUNCTION(execGetPlayRate); \
	DECLARE_FUNCTION(execGetStartPosition); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execGetBlendSpace); \
	DECLARE_FUNCTION(execSetLoop); \
	DECLARE_FUNCTION(execSetPlayRate); \
	DECLARE_FUNCTION(execSetResetPlayTimeWhenBlendSpaceChanges); \
	DECLARE_FUNCTION(execSetBlendSpaceWithInertialBlending); \
	DECLARE_FUNCTION(execSetBlendSpace); \
	DECLARE_FUNCTION(execConvertToBlendSpacePlayerPure); \
	DECLARE_FUNCTION(execConvertToBlendSpacePlayer);


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpacePlayerLibrary_h_27_ACCESSORS
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpacePlayerLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlendSpacePlayerLibrary(); \
	friend struct Z_Construct_UClass_UBlendSpacePlayerLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlendSpacePlayerLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(UBlendSpacePlayerLibrary)


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpacePlayerLibrary_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUBlendSpacePlayerLibrary(); \
	friend struct Z_Construct_UClass_UBlendSpacePlayerLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlendSpacePlayerLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(UBlendSpacePlayerLibrary)


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpacePlayerLibrary_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlendSpacePlayerLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendSpacePlayerLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlendSpacePlayerLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendSpacePlayerLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlendSpacePlayerLibrary(UBlendSpacePlayerLibrary&&); \
	NO_API UBlendSpacePlayerLibrary(const UBlendSpacePlayerLibrary&); \
public: \
	NO_API virtual ~UBlendSpacePlayerLibrary();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpacePlayerLibrary_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlendSpacePlayerLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlendSpacePlayerLibrary(UBlendSpacePlayerLibrary&&); \
	NO_API UBlendSpacePlayerLibrary(const UBlendSpacePlayerLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlendSpacePlayerLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendSpacePlayerLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendSpacePlayerLibrary) \
	NO_API virtual ~UBlendSpacePlayerLibrary();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpacePlayerLibrary_h_24_PROLOG
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpacePlayerLibrary_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpacePlayerLibrary_h_27_SPARSE_DATA \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpacePlayerLibrary_h_27_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpacePlayerLibrary_h_27_ACCESSORS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpacePlayerLibrary_h_27_INCLASS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpacePlayerLibrary_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpacePlayerLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpacePlayerLibrary_h_27_SPARSE_DATA \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpacePlayerLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpacePlayerLibrary_h_27_ACCESSORS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpacePlayerLibrary_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpacePlayerLibrary_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<class UBlendSpacePlayerLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpacePlayerLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
