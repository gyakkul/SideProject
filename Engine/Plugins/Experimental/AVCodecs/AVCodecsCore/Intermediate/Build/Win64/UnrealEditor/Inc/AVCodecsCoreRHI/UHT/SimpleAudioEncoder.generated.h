// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Audio/Encoders/SimpleAudioEncoder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESimpleAudioCodec : uint8;
struct FSimpleAudioEncoderConfig;
struct FSimpleAudioPacket;
#ifdef AVCODECSCORERHI_SimpleAudioEncoder_generated_h
#error "SimpleAudioEncoder.generated.h already included, missing '#pragma once' in SimpleAudioEncoder.h"
#endif
#define AVCODECSCORERHI_SimpleAudioEncoder_generated_h

#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimpleAudioEncoderConfig_Statics; \
	AVCODECSCORERHI_API static class UScriptStruct* StaticStruct();


template<> AVCODECSCORERHI_API UScriptStruct* StaticStruct<struct FSimpleAudioEncoderConfig>();

#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_57_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_57_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetConfig); \
	DECLARE_FUNCTION(execGetConfig); \
	DECLARE_FUNCTION(execGetCodec); \
	DECLARE_FUNCTION(execReceivePackets); \
	DECLARE_FUNCTION(execReceivePacket); \
	DECLARE_FUNCTION(execSendFrameFloat); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execOpen); \
	DECLARE_FUNCTION(execIsOpen); \
	DECLARE_FUNCTION(execIsAsync);


#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetConfig); \
	DECLARE_FUNCTION(execGetConfig); \
	DECLARE_FUNCTION(execGetCodec); \
	DECLARE_FUNCTION(execReceivePackets); \
	DECLARE_FUNCTION(execReceivePacket); \
	DECLARE_FUNCTION(execSendFrameFloat); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execOpen); \
	DECLARE_FUNCTION(execIsOpen); \
	DECLARE_FUNCTION(execIsAsync);


#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_57_ACCESSORS
#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleAudioEncoder(); \
	friend struct Z_Construct_UClass_USimpleAudioEncoder_Statics; \
public: \
	DECLARE_CLASS(USimpleAudioEncoder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AVCodecsCoreRHI"), NO_API) \
	DECLARE_SERIALIZER(USimpleAudioEncoder)


#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_57_INCLASS \
private: \
	static void StaticRegisterNativesUSimpleAudioEncoder(); \
	friend struct Z_Construct_UClass_USimpleAudioEncoder_Statics; \
public: \
	DECLARE_CLASS(USimpleAudioEncoder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AVCodecsCoreRHI"), NO_API) \
	DECLARE_SERIALIZER(USimpleAudioEncoder)


#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleAudioEncoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleAudioEncoder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleAudioEncoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleAudioEncoder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimpleAudioEncoder(USimpleAudioEncoder&&); \
	NO_API USimpleAudioEncoder(const USimpleAudioEncoder&); \
public: \
	NO_API virtual ~USimpleAudioEncoder();


#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleAudioEncoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimpleAudioEncoder(USimpleAudioEncoder&&); \
	NO_API USimpleAudioEncoder(const USimpleAudioEncoder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleAudioEncoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleAudioEncoder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleAudioEncoder) \
	NO_API virtual ~USimpleAudioEncoder();


#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_54_PROLOG
#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_57_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_57_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_57_ACCESSORS \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_57_INCLASS \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_57_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_57_ACCESSORS \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_57_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVCODECSCORERHI_API UClass* StaticClass<class USimpleAudioEncoder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_Encoders_SimpleAudioEncoder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
