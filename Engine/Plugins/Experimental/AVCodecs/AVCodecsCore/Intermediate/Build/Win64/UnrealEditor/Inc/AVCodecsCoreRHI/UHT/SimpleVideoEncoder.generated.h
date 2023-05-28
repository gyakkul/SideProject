// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Video/Encoders/SimpleVideoEncoder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
class UTextureRenderTarget2D;
enum class ESimpleVideoCodec : uint8;
struct FSimpleVideoEncoderConfig;
struct FSimpleVideoPacket;
#ifdef AVCODECSCORERHI_SimpleVideoEncoder_generated_h
#error "SimpleVideoEncoder.generated.h already included, missing '#pragma once' in SimpleVideoEncoder.h"
#endif
#define AVCODECSCORERHI_SimpleVideoEncoder_generated_h

#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimpleVideoEncoderConfig_Statics; \
	AVCODECSCORERHI_API static class UScriptStruct* StaticStruct();


template<> AVCODECSCORERHI_API UScriptStruct* StaticStruct<struct FSimpleVideoEncoderConfig>();

#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_67_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_67_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetConfig); \
	DECLARE_FUNCTION(execGetConfig); \
	DECLARE_FUNCTION(execGetCodec); \
	DECLARE_FUNCTION(execReceivePackets); \
	DECLARE_FUNCTION(execReceivePacket); \
	DECLARE_FUNCTION(execSendFrameTexture); \
	DECLARE_FUNCTION(execSendFrameRenderTarget); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execOpen); \
	DECLARE_FUNCTION(execIsOpen); \
	DECLARE_FUNCTION(execIsAsync);


#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetConfig); \
	DECLARE_FUNCTION(execGetConfig); \
	DECLARE_FUNCTION(execGetCodec); \
	DECLARE_FUNCTION(execReceivePackets); \
	DECLARE_FUNCTION(execReceivePacket); \
	DECLARE_FUNCTION(execSendFrameTexture); \
	DECLARE_FUNCTION(execSendFrameRenderTarget); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execOpen); \
	DECLARE_FUNCTION(execIsOpen); \
	DECLARE_FUNCTION(execIsAsync);


#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_67_ACCESSORS
#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleVideoEncoder(); \
	friend struct Z_Construct_UClass_USimpleVideoEncoder_Statics; \
public: \
	DECLARE_CLASS(USimpleVideoEncoder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AVCodecsCoreRHI"), NO_API) \
	DECLARE_SERIALIZER(USimpleVideoEncoder)


#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_67_INCLASS \
private: \
	static void StaticRegisterNativesUSimpleVideoEncoder(); \
	friend struct Z_Construct_UClass_USimpleVideoEncoder_Statics; \
public: \
	DECLARE_CLASS(USimpleVideoEncoder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AVCodecsCoreRHI"), NO_API) \
	DECLARE_SERIALIZER(USimpleVideoEncoder)


#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_67_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleVideoEncoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleVideoEncoder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleVideoEncoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleVideoEncoder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimpleVideoEncoder(USimpleVideoEncoder&&); \
	NO_API USimpleVideoEncoder(const USimpleVideoEncoder&); \
public: \
	NO_API virtual ~USimpleVideoEncoder();


#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleVideoEncoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimpleVideoEncoder(USimpleVideoEncoder&&); \
	NO_API USimpleVideoEncoder(const USimpleVideoEncoder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleVideoEncoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleVideoEncoder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleVideoEncoder) \
	NO_API virtual ~USimpleVideoEncoder();


#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_64_PROLOG
#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_67_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_67_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_67_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_67_ACCESSORS \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_67_INCLASS \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_67_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_67_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_67_ACCESSORS \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_67_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVCODECSCORERHI_API UClass* StaticClass<class USimpleVideoEncoder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Encoders_SimpleVideoEncoder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
