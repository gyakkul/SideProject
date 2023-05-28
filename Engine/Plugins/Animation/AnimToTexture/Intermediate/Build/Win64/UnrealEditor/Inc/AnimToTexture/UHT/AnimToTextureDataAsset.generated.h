// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimToTextureDataAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequence;
class USkeletalMesh;
class UStaticMesh;
class UTexture2D;
#ifdef ANIMTOTEXTURE_AnimToTextureDataAsset_generated_h
#error "AnimToTextureDataAsset.generated.h already included, missing '#pragma once' in AnimToTextureDataAsset.h"
#endif
#define ANIMTOTEXTURE_AnimToTextureDataAsset_generated_h

#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics; \
	ANIMTOTEXTURE_API static class UScriptStruct* StaticStruct();


template<> ANIMTOTEXTURE_API UScriptStruct* StaticStruct<struct FAnimSequenceInfo>();

#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimInfo_Statics; \
	ANIMTOTEXTURE_API static class UScriptStruct* StaticStruct();


template<> ANIMTOTEXTURE_API UScriptStruct* StaticStruct<struct FAnimInfo>();

#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_110_SPARSE_DATA
#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_110_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_GetBoneWeightTexture); \
	DECLARE_FUNCTION(execBP_GetBoneRotationTexture); \
	DECLARE_FUNCTION(execBP_GetBonePositionTexture); \
	DECLARE_FUNCTION(execBP_GetSkeletalMesh); \
	DECLARE_FUNCTION(execBP_GetStaticMesh); \
	DECLARE_FUNCTION(execResetInfo); \
	DECLARE_FUNCTION(execGetIndexFromAnimSequence);


#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_GetBoneWeightTexture); \
	DECLARE_FUNCTION(execBP_GetBoneRotationTexture); \
	DECLARE_FUNCTION(execBP_GetBonePositionTexture); \
	DECLARE_FUNCTION(execBP_GetSkeletalMesh); \
	DECLARE_FUNCTION(execBP_GetStaticMesh); \
	DECLARE_FUNCTION(execResetInfo); \
	DECLARE_FUNCTION(execGetIndexFromAnimSequence);


#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_110_ACCESSORS
#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_110_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimToTextureDataAsset(); \
	friend struct Z_Construct_UClass_UAnimToTextureDataAsset_Statics; \
public: \
	DECLARE_CLASS(UAnimToTextureDataAsset, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimToTexture"), NO_API) \
	DECLARE_SERIALIZER(UAnimToTextureDataAsset)


#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_110_INCLASS \
private: \
	static void StaticRegisterNativesUAnimToTextureDataAsset(); \
	friend struct Z_Construct_UClass_UAnimToTextureDataAsset_Statics; \
public: \
	DECLARE_CLASS(UAnimToTextureDataAsset, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimToTexture"), NO_API) \
	DECLARE_SERIALIZER(UAnimToTextureDataAsset)


#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_110_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimToTextureDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimToTextureDataAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimToTextureDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimToTextureDataAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimToTextureDataAsset(UAnimToTextureDataAsset&&); \
	NO_API UAnimToTextureDataAsset(const UAnimToTextureDataAsset&); \
public: \
	NO_API virtual ~UAnimToTextureDataAsset();


#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_110_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimToTextureDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimToTextureDataAsset(UAnimToTextureDataAsset&&); \
	NO_API UAnimToTextureDataAsset(const UAnimToTextureDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimToTextureDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimToTextureDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimToTextureDataAsset) \
	NO_API virtual ~UAnimToTextureDataAsset();


#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_106_PROLOG
#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_110_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_110_SPARSE_DATA \
	FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_110_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_110_ACCESSORS \
	FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_110_INCLASS \
	FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_110_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_110_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_110_SPARSE_DATA \
	FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_110_ACCESSORS \
	FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_110_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_110_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMTOTEXTURE_API UClass* StaticClass<class UAnimToTextureDataAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h


#define FOREACH_ENUM_EANIMTOTEXTUREMODE(op) \
	op(EAnimToTextureMode::Vertex) \
	op(EAnimToTextureMode::Bone) 

enum class EAnimToTextureMode : uint8;
template<> struct TIsUEnumClass<EAnimToTextureMode> { enum { Value = true }; };
template<> ANIMTOTEXTURE_API UEnum* StaticEnum<EAnimToTextureMode>();

#define FOREACH_ENUM_EANIMTOTEXTUREPRECISION(op) \
	op(EAnimToTexturePrecision::EightBits) \
	op(EAnimToTexturePrecision::SixteenBits) 

enum class EAnimToTexturePrecision : uint8;
template<> struct TIsUEnumClass<EAnimToTexturePrecision> { enum { Value = true }; };
template<> ANIMTOTEXTURE_API UEnum* StaticEnum<EAnimToTexturePrecision>();

#define FOREACH_ENUM_EANIMTOTEXTURENUMBONEINFLUENCES(op) \
	op(EAnimToTextureNumBoneInfluences::One) \
	op(EAnimToTextureNumBoneInfluences::Two) \
	op(EAnimToTextureNumBoneInfluences::Four) 

enum class EAnimToTextureNumBoneInfluences : uint8;
template<> struct TIsUEnumClass<EAnimToTextureNumBoneInfluences> { enum { Value = true }; };
template<> ANIMTOTEXTURE_API UEnum* StaticEnum<EAnimToTextureNumBoneInfluences>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
