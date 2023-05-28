// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimToTextureInstancePlaybackHelpers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimToTextureDataAsset;
class UInstancedStaticMeshComponent;
struct FAnimToTextureAnimState;
struct FAnimToTextureInstanceData;
struct FAnimToTextureInstancePlaybackData;
#ifdef ANIMTOTEXTURE_AnimToTextureInstancePlaybackHelpers_generated_h
#error "AnimToTextureInstancePlaybackHelpers.generated.h already included, missing '#pragma once' in AnimToTextureInstancePlaybackHelpers.h"
#endif
#define ANIMTOTEXTURE_AnimToTextureInstancePlaybackHelpers_generated_h

#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics; \
	ANIMTOTEXTURE_API static class UScriptStruct* StaticStruct();


template<> ANIMTOTEXTURE_API UScriptStruct* StaticStruct<struct FAnimToTextureAnimState>();

#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimToTextureInstancePlaybackData_Statics; \
	ANIMTOTEXTURE_API static class UScriptStruct* StaticStruct();


template<> ANIMTOTEXTURE_API UScriptStruct* StaticStruct<struct FAnimToTextureInstancePlaybackData>();

#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimToTextureAnimationSyncData_Statics; \
	ANIMTOTEXTURE_API static class UScriptStruct* StaticStruct();


template<> ANIMTOTEXTURE_API UScriptStruct* StaticStruct<struct FAnimToTextureAnimationSyncData>();

#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimToTextureInstanceData_Statics; \
	ANIMTOTEXTURE_API static class UScriptStruct* StaticStruct();


template<> ANIMTOTEXTURE_API UScriptStruct* StaticStruct<struct FAnimToTextureInstanceData>();

#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_74_SPARSE_DATA
#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_74_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnimStateFromDataAsset); \
	DECLARE_FUNCTION(execGetInstanceTransform); \
	DECLARE_FUNCTION(execGetInstancePlaybackData); \
	DECLARE_FUNCTION(execUpdateInstanceData); \
	DECLARE_FUNCTION(execAllocateInstanceData); \
	DECLARE_FUNCTION(execBatchUpdateInstancedMeshComponent); \
	DECLARE_FUNCTION(execSetupInstancedMeshComponent);


#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnimStateFromDataAsset); \
	DECLARE_FUNCTION(execGetInstanceTransform); \
	DECLARE_FUNCTION(execGetInstancePlaybackData); \
	DECLARE_FUNCTION(execUpdateInstanceData); \
	DECLARE_FUNCTION(execAllocateInstanceData); \
	DECLARE_FUNCTION(execBatchUpdateInstancedMeshComponent); \
	DECLARE_FUNCTION(execSetupInstancedMeshComponent);


#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_74_ACCESSORS
#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimToTextureInstancePlaybackLibrary(); \
	friend struct Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary_Statics; \
public: \
	DECLARE_CLASS(UAnimToTextureInstancePlaybackLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimToTexture"), NO_API) \
	DECLARE_SERIALIZER(UAnimToTextureInstancePlaybackLibrary)


#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_74_INCLASS \
private: \
	static void StaticRegisterNativesUAnimToTextureInstancePlaybackLibrary(); \
	friend struct Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary_Statics; \
public: \
	DECLARE_CLASS(UAnimToTextureInstancePlaybackLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimToTexture"), NO_API) \
	DECLARE_SERIALIZER(UAnimToTextureInstancePlaybackLibrary)


#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_74_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimToTextureInstancePlaybackLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimToTextureInstancePlaybackLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimToTextureInstancePlaybackLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimToTextureInstancePlaybackLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimToTextureInstancePlaybackLibrary(UAnimToTextureInstancePlaybackLibrary&&); \
	NO_API UAnimToTextureInstancePlaybackLibrary(const UAnimToTextureInstancePlaybackLibrary&); \
public: \
	NO_API virtual ~UAnimToTextureInstancePlaybackLibrary();


#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_74_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimToTextureInstancePlaybackLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimToTextureInstancePlaybackLibrary(UAnimToTextureInstancePlaybackLibrary&&); \
	NO_API UAnimToTextureInstancePlaybackLibrary(const UAnimToTextureInstancePlaybackLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimToTextureInstancePlaybackLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimToTextureInstancePlaybackLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimToTextureInstancePlaybackLibrary) \
	NO_API virtual ~UAnimToTextureInstancePlaybackLibrary();


#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_71_PROLOG
#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_74_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_74_SPARSE_DATA \
	FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_74_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_74_ACCESSORS \
	FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_74_INCLASS \
	FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_74_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_74_SPARSE_DATA \
	FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_74_ACCESSORS \
	FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_74_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMTOTEXTURE_API UClass* StaticClass<class UAnimToTextureInstancePlaybackLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
