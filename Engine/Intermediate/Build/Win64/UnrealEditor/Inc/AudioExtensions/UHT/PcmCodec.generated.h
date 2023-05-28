// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PcmCodec.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEXTENSIONS_PcmCodec_generated_h
#error "PcmCodec.generated.h already included, missing '#pragma once' in PcmCodec.h"
#endif
#define AUDIOEXTENSIONS_PcmCodec_generated_h

#define FID_Engine_Source_Runtime_AudioExtensions_Private_PcmCodec_h_20_SPARSE_DATA
#define FID_Engine_Source_Runtime_AudioExtensions_Private_PcmCodec_h_20_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_AudioExtensions_Private_PcmCodec_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_AudioExtensions_Private_PcmCodec_h_20_ACCESSORS
#define FID_Engine_Source_Runtime_AudioExtensions_Private_PcmCodec_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioPcmEncoderSettings(); \
	friend struct Z_Construct_UClass_UAudioPcmEncoderSettings_Statics; \
public: \
	DECLARE_CLASS(UAudioPcmEncoderSettings, UAudioCodecEncoderSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioExtensions"), NO_API) \
	DECLARE_SERIALIZER(UAudioPcmEncoderSettings)


#define FID_Engine_Source_Runtime_AudioExtensions_Private_PcmCodec_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAudioPcmEncoderSettings(); \
	friend struct Z_Construct_UClass_UAudioPcmEncoderSettings_Statics; \
public: \
	DECLARE_CLASS(UAudioPcmEncoderSettings, UAudioCodecEncoderSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioExtensions"), NO_API) \
	DECLARE_SERIALIZER(UAudioPcmEncoderSettings)


#define FID_Engine_Source_Runtime_AudioExtensions_Private_PcmCodec_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioPcmEncoderSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioPcmEncoderSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioPcmEncoderSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioPcmEncoderSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioPcmEncoderSettings(UAudioPcmEncoderSettings&&); \
	NO_API UAudioPcmEncoderSettings(const UAudioPcmEncoderSettings&); \
public: \
	NO_API virtual ~UAudioPcmEncoderSettings();


#define FID_Engine_Source_Runtime_AudioExtensions_Private_PcmCodec_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioPcmEncoderSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioPcmEncoderSettings(UAudioPcmEncoderSettings&&); \
	NO_API UAudioPcmEncoderSettings(const UAudioPcmEncoderSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioPcmEncoderSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioPcmEncoderSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioPcmEncoderSettings) \
	NO_API virtual ~UAudioPcmEncoderSettings();


#define FID_Engine_Source_Runtime_AudioExtensions_Private_PcmCodec_h_16_PROLOG
#define FID_Engine_Source_Runtime_AudioExtensions_Private_PcmCodec_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioExtensions_Private_PcmCodec_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_AudioExtensions_Private_PcmCodec_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AudioExtensions_Private_PcmCodec_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_AudioExtensions_Private_PcmCodec_h_20_INCLASS \
	FID_Engine_Source_Runtime_AudioExtensions_Private_PcmCodec_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AudioExtensions_Private_PcmCodec_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioExtensions_Private_PcmCodec_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_AudioExtensions_Private_PcmCodec_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioExtensions_Private_PcmCodec_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_AudioExtensions_Private_PcmCodec_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioExtensions_Private_PcmCodec_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEXTENSIONS_API UClass* StaticClass<class UAudioPcmEncoderSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioExtensions_Private_PcmCodec_h


#define FOREACH_ENUM_EPCMBITDEPTHCONVERSION(op) \
	op(EPcmBitDepthConversion::SameAsSource) \
	op(EPcmBitDepthConversion::Int16) \
	op(EPcmBitDepthConversion::Float32) 

enum class EPcmBitDepthConversion : uint8;
template<> struct TIsUEnumClass<EPcmBitDepthConversion> { enum { Value = true }; };
template<> AUDIOEXTENSIONS_API UEnum* StaticEnum<EPcmBitDepthConversion>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
