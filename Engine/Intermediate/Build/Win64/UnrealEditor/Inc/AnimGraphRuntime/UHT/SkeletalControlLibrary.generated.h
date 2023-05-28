// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkeletalControlLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAnimNodeReferenceConversionResult : uint8;
struct FAnimNodeReference;
struct FSkeletalControlReference;
#ifdef ANIMGRAPHRUNTIME_SkeletalControlLibrary_generated_h
#error "SkeletalControlLibrary.generated.h already included, missing '#pragma once' in SkeletalControlLibrary.h"
#endif
#define ANIMGRAPHRUNTIME_SkeletalControlLibrary_generated_h

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SkeletalControlLibrary_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkeletalControlReference_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeReference Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FSkeletalControlReference>();

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SkeletalControlLibrary_h_26_SPARSE_DATA
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SkeletalControlLibrary_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAlpha); \
	DECLARE_FUNCTION(execSetAlpha); \
	DECLARE_FUNCTION(execConvertToSkeletalControlPure); \
	DECLARE_FUNCTION(execConvertToSkeletalControl);


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SkeletalControlLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAlpha); \
	DECLARE_FUNCTION(execSetAlpha); \
	DECLARE_FUNCTION(execConvertToSkeletalControlPure); \
	DECLARE_FUNCTION(execConvertToSkeletalControl);


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SkeletalControlLibrary_h_26_ACCESSORS
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SkeletalControlLibrary_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletalControlLibrary(); \
	friend struct Z_Construct_UClass_USkeletalControlLibrary_Statics; \
public: \
	DECLARE_CLASS(USkeletalControlLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(USkeletalControlLibrary)


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SkeletalControlLibrary_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUSkeletalControlLibrary(); \
	friend struct Z_Construct_UClass_USkeletalControlLibrary_Statics; \
public: \
	DECLARE_CLASS(USkeletalControlLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(USkeletalControlLibrary)


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SkeletalControlLibrary_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkeletalControlLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalControlLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkeletalControlLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalControlLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkeletalControlLibrary(USkeletalControlLibrary&&); \
	NO_API USkeletalControlLibrary(const USkeletalControlLibrary&); \
public: \
	NO_API virtual ~USkeletalControlLibrary();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SkeletalControlLibrary_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkeletalControlLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkeletalControlLibrary(USkeletalControlLibrary&&); \
	NO_API USkeletalControlLibrary(const USkeletalControlLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkeletalControlLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalControlLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalControlLibrary) \
	NO_API virtual ~USkeletalControlLibrary();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SkeletalControlLibrary_h_23_PROLOG
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SkeletalControlLibrary_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SkeletalControlLibrary_h_26_SPARSE_DATA \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SkeletalControlLibrary_h_26_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SkeletalControlLibrary_h_26_ACCESSORS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SkeletalControlLibrary_h_26_INCLASS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SkeletalControlLibrary_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SkeletalControlLibrary_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SkeletalControlLibrary_h_26_SPARSE_DATA \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SkeletalControlLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SkeletalControlLibrary_h_26_ACCESSORS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SkeletalControlLibrary_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SkeletalControlLibrary_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<class USkeletalControlLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SkeletalControlLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
