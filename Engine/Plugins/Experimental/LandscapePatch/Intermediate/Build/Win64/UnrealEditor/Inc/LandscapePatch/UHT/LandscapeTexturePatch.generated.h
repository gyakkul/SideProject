// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeTexturePatch.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
class UTextureRenderTarget2D;
enum class ELandscapeTextureHeightPatchEncoding : uint8;
enum class ELandscapeTextureHeightPatchZeroHeightMeaning : uint8;
enum class ELandscapeTexturePatchBlendMode : uint8;
enum class ELandscapeTexturePatchSourceMode : uint8;
struct FLandscapeTexturePatchEncodingSettings;
#ifdef LANDSCAPEPATCH_LandscapeTexturePatch_generated_h
#error "LandscapeTexturePatch.generated.h already included, missing '#pragma once' in LandscapeTexturePatch.h"
#endif
#define LANDSCAPEPATCH_LandscapeTexturePatch_generated_h

#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_126_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeTexturePatchEncodingSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LANDSCAPEPATCH_API UScriptStruct* StaticStruct<struct FLandscapeTexturePatchEncodingSettings>();

#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_152_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_152_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_152_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_152_ACCESSORS
#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_152_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeWeightPatchTextureInfo(); \
	friend struct Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics; \
public: \
	DECLARE_CLASS(ULandscapeWeightPatchTextureInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LandscapePatch"), NO_API) \
	DECLARE_SERIALIZER(ULandscapeWeightPatchTextureInfo)


#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_152_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeWeightPatchTextureInfo(); \
	friend struct Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics; \
public: \
	DECLARE_CLASS(ULandscapeWeightPatchTextureInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LandscapePatch"), NO_API) \
	DECLARE_SERIALIZER(ULandscapeWeightPatchTextureInfo)


#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_152_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULandscapeWeightPatchTextureInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeWeightPatchTextureInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandscapeWeightPatchTextureInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeWeightPatchTextureInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULandscapeWeightPatchTextureInfo(ULandscapeWeightPatchTextureInfo&&); \
	NO_API ULandscapeWeightPatchTextureInfo(const ULandscapeWeightPatchTextureInfo&); \
public: \
	NO_API virtual ~ULandscapeWeightPatchTextureInfo();


#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_152_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULandscapeWeightPatchTextureInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULandscapeWeightPatchTextureInfo(ULandscapeWeightPatchTextureInfo&&); \
	NO_API ULandscapeWeightPatchTextureInfo(const ULandscapeWeightPatchTextureInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandscapeWeightPatchTextureInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeWeightPatchTextureInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeWeightPatchTextureInfo) \
	NO_API virtual ~ULandscapeWeightPatchTextureInfo();


#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_149_PROLOG
#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_152_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_152_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_152_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_152_ACCESSORS \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_152_INCLASS \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_152_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_152_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_152_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_152_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_152_ACCESSORS \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_152_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_152_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPEPATCH_API UClass* StaticClass<class ULandscapeWeightPatchTextureInfo>();

#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_214_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_214_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSnapToLandscape); \
	DECLARE_FUNCTION(execReinitializeWeights); \
	DECLARE_FUNCTION(execReinitializeHeight); \
	DECLARE_FUNCTION(execClearWeightPatchBlendModeOverride); \
	DECLARE_FUNCTION(execSetWeightPatchBlendModeOverride); \
	DECLARE_FUNCTION(execSetUseAlphaChannelForWeightPatch); \
	DECLARE_FUNCTION(execGetWeightPatchRenderTarget); \
	DECLARE_FUNCTION(execSetWeightPatchTextureAsset); \
	DECLARE_FUNCTION(execSetWeightPatchSourceMode); \
	DECLARE_FUNCTION(execGetWeightPatchSourceMode); \
	DECLARE_FUNCTION(execGetAllWeightPatchLayerNames); \
	DECLARE_FUNCTION(execDisableAllWeightPatches); \
	DECLARE_FUNCTION(execRemoveAllWeightPatches); \
	DECLARE_FUNCTION(execRemoveWeightPatch); \
	DECLARE_FUNCTION(execAddWeightPatch); \
	DECLARE_FUNCTION(execSetZeroHeightMeaning); \
	DECLARE_FUNCTION(execSetHeightEncodingSettings); \
	DECLARE_FUNCTION(execResetHeightEncodingMode); \
	DECLARE_FUNCTION(execSetHeightEncodingMode); \
	DECLARE_FUNCTION(execSetUseAlphaChannelForHeight); \
	DECLARE_FUNCTION(execSetHeightRenderTargetFormat); \
	DECLARE_FUNCTION(execGetHeightRenderTarget); \
	DECLARE_FUNCTION(execSetHeightTextureAsset); \
	DECLARE_FUNCTION(execSetHeightSourceMode); \
	DECLARE_FUNCTION(execGetHeightSourceMode); \
	DECLARE_FUNCTION(execSetBlendMode); \
	DECLARE_FUNCTION(execSetFalloff); \
	DECLARE_FUNCTION(execGetInitResolutionFromLandscape); \
	DECLARE_FUNCTION(execSetResolution); \
	DECLARE_FUNCTION(execGetResolution); \
	DECLARE_FUNCTION(execGetFullUnscaledWorldSize); \
	DECLARE_FUNCTION(execSetUnscaledCoverage); \
	DECLARE_FUNCTION(execGetUnscaledCoverage); \
	DECLARE_FUNCTION(execGetPatchToWorldTransform);


#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_214_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSnapToLandscape); \
	DECLARE_FUNCTION(execReinitializeWeights); \
	DECLARE_FUNCTION(execReinitializeHeight); \
	DECLARE_FUNCTION(execClearWeightPatchBlendModeOverride); \
	DECLARE_FUNCTION(execSetWeightPatchBlendModeOverride); \
	DECLARE_FUNCTION(execSetUseAlphaChannelForWeightPatch); \
	DECLARE_FUNCTION(execGetWeightPatchRenderTarget); \
	DECLARE_FUNCTION(execSetWeightPatchTextureAsset); \
	DECLARE_FUNCTION(execSetWeightPatchSourceMode); \
	DECLARE_FUNCTION(execGetWeightPatchSourceMode); \
	DECLARE_FUNCTION(execGetAllWeightPatchLayerNames); \
	DECLARE_FUNCTION(execDisableAllWeightPatches); \
	DECLARE_FUNCTION(execRemoveAllWeightPatches); \
	DECLARE_FUNCTION(execRemoveWeightPatch); \
	DECLARE_FUNCTION(execAddWeightPatch); \
	DECLARE_FUNCTION(execSetZeroHeightMeaning); \
	DECLARE_FUNCTION(execSetHeightEncodingSettings); \
	DECLARE_FUNCTION(execResetHeightEncodingMode); \
	DECLARE_FUNCTION(execSetHeightEncodingMode); \
	DECLARE_FUNCTION(execSetUseAlphaChannelForHeight); \
	DECLARE_FUNCTION(execSetHeightRenderTargetFormat); \
	DECLARE_FUNCTION(execGetHeightRenderTarget); \
	DECLARE_FUNCTION(execSetHeightTextureAsset); \
	DECLARE_FUNCTION(execSetHeightSourceMode); \
	DECLARE_FUNCTION(execGetHeightSourceMode); \
	DECLARE_FUNCTION(execSetBlendMode); \
	DECLARE_FUNCTION(execSetFalloff); \
	DECLARE_FUNCTION(execGetInitResolutionFromLandscape); \
	DECLARE_FUNCTION(execSetResolution); \
	DECLARE_FUNCTION(execGetResolution); \
	DECLARE_FUNCTION(execGetFullUnscaledWorldSize); \
	DECLARE_FUNCTION(execSetUnscaledCoverage); \
	DECLARE_FUNCTION(execGetUnscaledCoverage); \
	DECLARE_FUNCTION(execGetPatchToWorldTransform);


#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_214_ACCESSORS
#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_214_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeTexturePatch(); \
	friend struct Z_Construct_UClass_ULandscapeTexturePatch_Statics; \
public: \
	DECLARE_CLASS(ULandscapeTexturePatch, ULandscapePatchComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LandscapePatch"), NO_API) \
	DECLARE_SERIALIZER(ULandscapeTexturePatch)


#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_214_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeTexturePatch(); \
	friend struct Z_Construct_UClass_ULandscapeTexturePatch_Statics; \
public: \
	DECLARE_CLASS(ULandscapeTexturePatch, ULandscapePatchComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LandscapePatch"), NO_API) \
	DECLARE_SERIALIZER(ULandscapeTexturePatch)


#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_214_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULandscapeTexturePatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeTexturePatch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandscapeTexturePatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeTexturePatch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULandscapeTexturePatch(ULandscapeTexturePatch&&); \
	NO_API ULandscapeTexturePatch(const ULandscapeTexturePatch&); \
public: \
	NO_API virtual ~ULandscapeTexturePatch();


#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_214_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULandscapeTexturePatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULandscapeTexturePatch(ULandscapeTexturePatch&&); \
	NO_API ULandscapeTexturePatch(const ULandscapeTexturePatch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandscapeTexturePatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeTexturePatch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeTexturePatch) \
	NO_API virtual ~ULandscapeTexturePatch();


#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_211_PROLOG
#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_214_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_214_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_214_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_214_ACCESSORS \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_214_INCLASS \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_214_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_214_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_214_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_214_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_214_ACCESSORS \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_214_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_214_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPEPATCH_API UClass* StaticClass<class ULandscapeTexturePatch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h


#define FOREACH_ENUM_ELANDSCAPETEXTUREPATCHSOURCEMODE(op) \
	op(ELandscapeTexturePatchSourceMode::None) \
	op(ELandscapeTexturePatchSourceMode::InternalTexture) \
	op(ELandscapeTexturePatchSourceMode::TextureBackedRenderTarget) \
	op(ELandscapeTexturePatchSourceMode::TextureAsset) 

enum class ELandscapeTexturePatchSourceMode : uint8;
template<> struct TIsUEnumClass<ELandscapeTexturePatchSourceMode> { enum { Value = true }; };
template<> LANDSCAPEPATCH_API UEnum* StaticEnum<ELandscapeTexturePatchSourceMode>();

#define FOREACH_ENUM_ELANDSCAPETEXTUREPATCHBLENDMODE(op) \
	op(ELandscapeTexturePatchBlendMode::AlphaBlend) \
	op(ELandscapeTexturePatchBlendMode::Additive) \
	op(ELandscapeTexturePatchBlendMode::Min) \
	op(ELandscapeTexturePatchBlendMode::Max) 

enum class ELandscapeTexturePatchBlendMode : uint8;
template<> struct TIsUEnumClass<ELandscapeTexturePatchBlendMode> { enum { Value = true }; };
template<> LANDSCAPEPATCH_API UEnum* StaticEnum<ELandscapeTexturePatchBlendMode>();

#define FOREACH_ENUM_ELANDSCAPETEXTUREPATCHFALLOFFMODE(op) \
	op(ELandscapeTexturePatchFalloffMode::Circle) \
	op(ELandscapeTexturePatchFalloffMode::RoundedRectangle) 

enum class ELandscapeTexturePatchFalloffMode : uint8;
template<> struct TIsUEnumClass<ELandscapeTexturePatchFalloffMode> { enum { Value = true }; };
template<> LANDSCAPEPATCH_API UEnum* StaticEnum<ELandscapeTexturePatchFalloffMode>();

#define FOREACH_ENUM_ELANDSCAPETEXTUREHEIGHTPATCHENCODING(op) \
	op(ELandscapeTextureHeightPatchEncoding::ZeroToOne) \
	op(ELandscapeTextureHeightPatchEncoding::WorldUnits) \
	op(ELandscapeTextureHeightPatchEncoding::NativePackedHeight) 

enum class ELandscapeTextureHeightPatchEncoding : uint8;
template<> struct TIsUEnumClass<ELandscapeTextureHeightPatchEncoding> { enum { Value = true }; };
template<> LANDSCAPEPATCH_API UEnum* StaticEnum<ELandscapeTextureHeightPatchEncoding>();

#define FOREACH_ENUM_ELANDSCAPETEXTUREHEIGHTPATCHZEROHEIGHTMEANING(op) \
	op(ELandscapeTextureHeightPatchZeroHeightMeaning::PatchZ) \
	op(ELandscapeTextureHeightPatchZeroHeightMeaning::LandscapeZ) \
	op(ELandscapeTextureHeightPatchZeroHeightMeaning::WorldZero) 

enum class ELandscapeTextureHeightPatchZeroHeightMeaning : uint8;
template<> struct TIsUEnumClass<ELandscapeTextureHeightPatchZeroHeightMeaning> { enum { Value = true }; };
template<> LANDSCAPEPATCH_API UEnum* StaticEnum<ELandscapeTextureHeightPatchZeroHeightMeaning>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
