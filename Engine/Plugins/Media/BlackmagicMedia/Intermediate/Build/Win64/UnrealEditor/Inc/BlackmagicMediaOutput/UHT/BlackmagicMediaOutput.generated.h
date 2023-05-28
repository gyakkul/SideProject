// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlackmagicMediaOutput.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLACKMAGICMEDIAOUTPUT_BlackmagicMediaOutput_generated_h
#error "BlackmagicMediaOutput.generated.h already included, missing '#pragma once' in BlackmagicMediaOutput.h"
#endif
#define BLACKMAGICMEDIAOUTPUT_BlackmagicMediaOutput_generated_h

#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_52_SPARSE_DATA
#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_52_RPC_WRAPPERS
#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_52_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_52_ACCESSORS
#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlackmagicMediaOutput(); \
	friend struct Z_Construct_UClass_UBlackmagicMediaOutput_Statics; \
public: \
	DECLARE_CLASS(UBlackmagicMediaOutput, UMediaOutput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlackmagicMediaOutput"), NO_API) \
	DECLARE_SERIALIZER(UBlackmagicMediaOutput)


#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUBlackmagicMediaOutput(); \
	friend struct Z_Construct_UClass_UBlackmagicMediaOutput_Statics; \
public: \
	DECLARE_CLASS(UBlackmagicMediaOutput, UMediaOutput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlackmagicMediaOutput"), NO_API) \
	DECLARE_SERIALIZER(UBlackmagicMediaOutput)


#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlackmagicMediaOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlackmagicMediaOutput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlackmagicMediaOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackmagicMediaOutput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlackmagicMediaOutput(UBlackmagicMediaOutput&&); \
	NO_API UBlackmagicMediaOutput(const UBlackmagicMediaOutput&); \
public: \
	NO_API virtual ~UBlackmagicMediaOutput();


#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlackmagicMediaOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlackmagicMediaOutput(UBlackmagicMediaOutput&&); \
	NO_API UBlackmagicMediaOutput(const UBlackmagicMediaOutput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlackmagicMediaOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackmagicMediaOutput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlackmagicMediaOutput) \
	NO_API virtual ~UBlackmagicMediaOutput();


#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_49_PROLOG
#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_52_SPARSE_DATA \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_52_RPC_WRAPPERS \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_52_ACCESSORS \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_52_INCLASS \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_52_SPARSE_DATA \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_52_ACCESSORS \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_52_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_52_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BlackmagicMediaOutput."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLACKMAGICMEDIAOUTPUT_API UClass* StaticClass<class UBlackmagicMediaOutput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h


#define FOREACH_ENUM_EBLACKMAGICMEDIAOUTPUTPIXELFORMAT(op) \
	op(EBlackmagicMediaOutputPixelFormat::PF_8BIT_YUV) \
	op(EBlackmagicMediaOutputPixelFormat::PF_10BIT_YUV) 

enum class EBlackmagicMediaOutputPixelFormat : uint8;
template<> struct TIsUEnumClass<EBlackmagicMediaOutputPixelFormat> { enum { Value = true }; };
template<> BLACKMAGICMEDIAOUTPUT_API UEnum* StaticEnum<EBlackmagicMediaOutputPixelFormat>();

#define FOREACH_ENUM_EBLACKMAGICMEDIAOUTPUTAUDIOSAMPLERATE(op) \
	op(EBlackmagicMediaOutputAudioSampleRate::SR_48k) 

enum class EBlackmagicMediaOutputAudioSampleRate : uint32;
template<> struct TIsUEnumClass<EBlackmagicMediaOutputAudioSampleRate> { enum { Value = true }; };
template<> BLACKMAGICMEDIAOUTPUT_API UEnum* StaticEnum<EBlackmagicMediaOutputAudioSampleRate>();

#define FOREACH_ENUM_EBLACKMAGICMEDIAAUDIOOUTPUTCHANNELCOUNT(op) \
	op(EBlackmagicMediaAudioOutputChannelCount::CH_2) \
	op(EBlackmagicMediaAudioOutputChannelCount::CH_8) \
	op(EBlackmagicMediaAudioOutputChannelCount::CH_16) 

enum class EBlackmagicMediaAudioOutputChannelCount : uint8;
template<> struct TIsUEnumClass<EBlackmagicMediaAudioOutputChannelCount> { enum { Value = true }; };
template<> BLACKMAGICMEDIAOUTPUT_API UEnum* StaticEnum<EBlackmagicMediaAudioOutputChannelCount>();

#define FOREACH_ENUM_EBLACKMAGICMEDIAOUTPUTAUDIOBITDEPTH(op) \
	op(EBlackmagicMediaOutputAudioBitDepth::Signed_16Bits) \
	op(EBlackmagicMediaOutputAudioBitDepth::Signed_32Bits) 

enum class EBlackmagicMediaOutputAudioBitDepth : uint8;
template<> struct TIsUEnumClass<EBlackmagicMediaOutputAudioBitDepth> { enum { Value = true }; };
template<> BLACKMAGICMEDIAOUTPUT_API UEnum* StaticEnum<EBlackmagicMediaOutputAudioBitDepth>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
