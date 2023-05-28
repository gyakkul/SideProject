// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LayeredBoneBlendLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAnimNodeReferenceConversionResult : uint8;
struct FAnimNodeReference;
struct FAnimUpdateContext;
struct FLayeredBoneBlendReference;
#ifdef ANIMGRAPHRUNTIME_LayeredBoneBlendLibrary_generated_h
#error "LayeredBoneBlendLibrary.generated.h already included, missing '#pragma once' in LayeredBoneBlendLibrary.h"
#endif
#define ANIMGRAPHRUNTIME_LayeredBoneBlendLibrary_generated_h

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLayeredBoneBlendReference_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeReference Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FLayeredBoneBlendReference>();

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_27_SPARSE_DATA
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetBlendMask); \
	DECLARE_FUNCTION(execGetNumPoses); \
	DECLARE_FUNCTION(execConvertToLayeredBlendPerBonePure); \
	DECLARE_FUNCTION(execConvertToLayeredBoneBlend);


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetBlendMask); \
	DECLARE_FUNCTION(execGetNumPoses); \
	DECLARE_FUNCTION(execConvertToLayeredBlendPerBonePure); \
	DECLARE_FUNCTION(execConvertToLayeredBoneBlend);


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_27_ACCESSORS
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULayeredBoneBlendLibrary(); \
	friend struct Z_Construct_UClass_ULayeredBoneBlendLibrary_Statics; \
public: \
	DECLARE_CLASS(ULayeredBoneBlendLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(ULayeredBoneBlendLibrary)


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_27_INCLASS \
private: \
	static void StaticRegisterNativesULayeredBoneBlendLibrary(); \
	friend struct Z_Construct_UClass_ULayeredBoneBlendLibrary_Statics; \
public: \
	DECLARE_CLASS(ULayeredBoneBlendLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(ULayeredBoneBlendLibrary)


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULayeredBoneBlendLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULayeredBoneBlendLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULayeredBoneBlendLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULayeredBoneBlendLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULayeredBoneBlendLibrary(ULayeredBoneBlendLibrary&&); \
	NO_API ULayeredBoneBlendLibrary(const ULayeredBoneBlendLibrary&); \
public: \
	NO_API virtual ~ULayeredBoneBlendLibrary();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULayeredBoneBlendLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULayeredBoneBlendLibrary(ULayeredBoneBlendLibrary&&); \
	NO_API ULayeredBoneBlendLibrary(const ULayeredBoneBlendLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULayeredBoneBlendLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULayeredBoneBlendLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULayeredBoneBlendLibrary) \
	NO_API virtual ~ULayeredBoneBlendLibrary();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_24_PROLOG
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_27_SPARSE_DATA \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_27_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_27_ACCESSORS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_27_INCLASS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_27_SPARSE_DATA \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_27_ACCESSORS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<class ULayeredBoneBlendLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LayeredBoneBlendLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
