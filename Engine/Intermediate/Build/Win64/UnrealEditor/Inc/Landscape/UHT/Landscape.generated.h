// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Landscape.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2D;
#ifdef LANDSCAPE_Landscape_generated_h
#error "Landscape.generated.h already included, missing '#pragma once' in Landscape.h"
#endif
#define LANDSCAPE_Landscape_generated_h

#define FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_116_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeLayerBrush>();

#define FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_167_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeLayer_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeLayer>();

#define FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_212_SPARSE_DATA
#define FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_212_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRenderHeightmap);


#define FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_212_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRenderHeightmap);


#define FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_212_ACCESSORS
#define FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_212_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALandscape(); \
	friend struct Z_Construct_UClass_ALandscape_Statics; \
public: \
	DECLARE_CLASS(ALandscape, ALandscapeProxy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ALandscape)


#define FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_212_INCLASS \
private: \
	static void StaticRegisterNativesALandscape(); \
	friend struct Z_Construct_UClass_ALandscape_Statics; \
public: \
	DECLARE_CLASS(ALandscape, ALandscapeProxy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ALandscape)


#define FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_212_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ALandscape(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscape) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ALandscape); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscape); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ALandscape(ALandscape&&); \
	LANDSCAPE_API ALandscape(const ALandscape&); \
public: \
	LANDSCAPE_API virtual ~ALandscape();


#define FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_212_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ALandscape(ALandscape&&); \
	LANDSCAPE_API ALandscape(const ALandscape&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ALandscape); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscape); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscape) \
	LANDSCAPE_API virtual ~ALandscape();


#define FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_209_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_212_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_212_SPARSE_DATA \
	FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_212_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_212_ACCESSORS \
	FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_212_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_212_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_212_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_212_SPARSE_DATA \
	FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_212_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_212_ACCESSORS \
	FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_212_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_212_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ALandscape>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h


#define FOREACH_ENUM_ELANDSCAPESETUPERRORS(op) \
	op(LSE_None) \
	op(LSE_NoLandscapeInfo) \
	op(LSE_CollsionXY) \
	op(LSE_NoLayerInfo) 

enum ELandscapeSetupErrors : int;
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeSetupErrors>();

#define FOREACH_ENUM_ERTDRAWINGTYPE(op) \
	op(ERTDrawingType::RTAtlas) \
	op(ERTDrawingType::RTAtlasToNonAtlas) \
	op(ERTDrawingType::RTNonAtlasToAtlas) \
	op(ERTDrawingType::RTNonAtlas) \
	op(ERTDrawingType::RTMips) 

enum class ERTDrawingType : uint8;
template<> struct TIsUEnumClass<ERTDrawingType> { enum { Value = true }; };
template<> LANDSCAPE_API UEnum* StaticEnum<ERTDrawingType>();

#define FOREACH_ENUM_EHEIGHTMAPRTTYPE(op) \
	op(EHeightmapRTType::HeightmapRT_CombinedAtlas) \
	op(EHeightmapRTType::HeightmapRT_CombinedNonAtlas) \
	op(EHeightmapRTType::HeightmapRT_Scratch1) \
	op(EHeightmapRTType::HeightmapRT_Scratch2) \
	op(EHeightmapRTType::HeightmapRT_Scratch3) \
	op(EHeightmapRTType::HeightmapRT_Mip1) \
	op(EHeightmapRTType::HeightmapRT_Mip2) \
	op(EHeightmapRTType::HeightmapRT_Mip3) \
	op(EHeightmapRTType::HeightmapRT_Mip4) \
	op(EHeightmapRTType::HeightmapRT_Mip5) \
	op(EHeightmapRTType::HeightmapRT_Mip6) \
	op(EHeightmapRTType::HeightmapRT_Mip7) \
	op(EHeightmapRTType::HeightmapRT_Count) 

enum class EHeightmapRTType : uint8;
template<> struct TIsUEnumClass<EHeightmapRTType> { enum { Value = true }; };
template<> LANDSCAPE_API UEnum* StaticEnum<EHeightmapRTType>();

#define FOREACH_ENUM_EWEIGHTMAPRTTYPE(op) \
	op(EWeightmapRTType::WeightmapRT_Scratch_RGBA) \
	op(EWeightmapRTType::WeightmapRT_Scratch1) \
	op(EWeightmapRTType::WeightmapRT_Scratch2) \
	op(EWeightmapRTType::WeightmapRT_Scratch3) \
	op(EWeightmapRTType::WeightmapRT_Mip0) \
	op(EWeightmapRTType::WeightmapRT_Mip1) \
	op(EWeightmapRTType::WeightmapRT_Mip2) \
	op(EWeightmapRTType::WeightmapRT_Mip3) \
	op(EWeightmapRTType::WeightmapRT_Mip4) \
	op(EWeightmapRTType::WeightmapRT_Mip5) \
	op(EWeightmapRTType::WeightmapRT_Mip6) \
	op(EWeightmapRTType::WeightmapRT_Mip7) \
	op(EWeightmapRTType::WeightmapRT_Count) 

enum class EWeightmapRTType : uint8;
template<> struct TIsUEnumClass<EWeightmapRTType> { enum { Value = true }; };
template<> LANDSCAPE_API UEnum* StaticEnum<EWeightmapRTType>();

#define FOREACH_ENUM_ELANDSCAPEBLENDMODE(op) \
	op(LSBM_AdditiveBlend) \
	op(LSBM_AlphaBlend) 

enum ELandscapeBlendMode : int;
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeBlendMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
