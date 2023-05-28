// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimToTextureBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimToTextureDataAsset;
class UMaterialInstanceConstant;
class USkeletalMesh;
class UStaticMesh;
enum class EAnimToTextureNumBoneInfluences : uint8;
#ifdef ANIMTOTEXTUREEDITOR_AnimToTextureBPLibrary_generated_h
#error "AnimToTextureBPLibrary.generated.h already included, missing '#pragma once' in AnimToTextureBPLibrary.h"
#endif
#define ANIMTOTEXTUREEDITOR_AnimToTextureBPLibrary_generated_h

#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_24_SPARSE_DATA
#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_24_RPC_WRAPPERS
#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITOR
#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_24_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateMaterialInstanceFromDataAsset); \
	DECLARE_FUNCTION(execSetLightMapIndex); \
	DECLARE_FUNCTION(execConvertSkeletalMeshToStaticMesh); \
	DECLARE_FUNCTION(execAnimationToTexture);


#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_24_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateMaterialInstanceFromDataAsset); \
	DECLARE_FUNCTION(execSetLightMapIndex); \
	DECLARE_FUNCTION(execConvertSkeletalMeshToStaticMesh); \
	DECLARE_FUNCTION(execAnimationToTexture);


#else
#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_24_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_24_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_24_ACCESSORS
#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimToTextureBPLibrary(); \
	friend struct Z_Construct_UClass_UAnimToTextureBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UAnimToTextureBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimToTextureEditor"), NO_API) \
	DECLARE_SERIALIZER(UAnimToTextureBPLibrary)


#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUAnimToTextureBPLibrary(); \
	friend struct Z_Construct_UClass_UAnimToTextureBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UAnimToTextureBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimToTextureEditor"), NO_API) \
	DECLARE_SERIALIZER(UAnimToTextureBPLibrary)


#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimToTextureBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimToTextureBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimToTextureBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimToTextureBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimToTextureBPLibrary(UAnimToTextureBPLibrary&&); \
	NO_API UAnimToTextureBPLibrary(const UAnimToTextureBPLibrary&); \
public: \
	NO_API virtual ~UAnimToTextureBPLibrary();


#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimToTextureBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimToTextureBPLibrary(UAnimToTextureBPLibrary&&); \
	NO_API UAnimToTextureBPLibrary(const UAnimToTextureBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimToTextureBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimToTextureBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimToTextureBPLibrary) \
	NO_API virtual ~UAnimToTextureBPLibrary();


#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_21_PROLOG
#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_24_SPARSE_DATA \
	FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_24_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_24_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_24_ACCESSORS \
	FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_24_INCLASS \
	FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_24_SPARSE_DATA \
	FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_24_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_24_ACCESSORS \
	FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimToTextureBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMTOTEXTUREEDITOR_API UClass* StaticClass<class UAnimToTextureBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
