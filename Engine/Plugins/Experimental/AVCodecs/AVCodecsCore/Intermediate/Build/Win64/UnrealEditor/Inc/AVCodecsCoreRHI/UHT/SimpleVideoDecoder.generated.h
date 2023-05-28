// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Video/Decoders/SimpleVideoDecoder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2D;
enum class ESimpleVideoCodec : uint8;
struct FSimpleVideoPacket;
#ifdef AVCODECSCORERHI_SimpleVideoDecoder_generated_h
#error "SimpleVideoDecoder.generated.h already included, missing '#pragma once' in SimpleVideoDecoder.h"
#endif
#define AVCODECSCORERHI_SimpleVideoDecoder_generated_h

#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_17_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCodec); \
	DECLARE_FUNCTION(execReceiveFrame); \
	DECLARE_FUNCTION(execSendPacket); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execOpen); \
	DECLARE_FUNCTION(execIsOpen); \
	DECLARE_FUNCTION(execIsAsync);


#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCodec); \
	DECLARE_FUNCTION(execReceiveFrame); \
	DECLARE_FUNCTION(execSendPacket); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execOpen); \
	DECLARE_FUNCTION(execIsOpen); \
	DECLARE_FUNCTION(execIsAsync);


#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_17_ACCESSORS
#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleVideoDecoder(); \
	friend struct Z_Construct_UClass_USimpleVideoDecoder_Statics; \
public: \
	DECLARE_CLASS(USimpleVideoDecoder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AVCodecsCoreRHI"), NO_API) \
	DECLARE_SERIALIZER(USimpleVideoDecoder)


#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSimpleVideoDecoder(); \
	friend struct Z_Construct_UClass_USimpleVideoDecoder_Statics; \
public: \
	DECLARE_CLASS(USimpleVideoDecoder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AVCodecsCoreRHI"), NO_API) \
	DECLARE_SERIALIZER(USimpleVideoDecoder)


#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleVideoDecoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleVideoDecoder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleVideoDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleVideoDecoder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimpleVideoDecoder(USimpleVideoDecoder&&); \
	NO_API USimpleVideoDecoder(const USimpleVideoDecoder&); \
public: \
	NO_API virtual ~USimpleVideoDecoder();


#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleVideoDecoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimpleVideoDecoder(USimpleVideoDecoder&&); \
	NO_API USimpleVideoDecoder(const USimpleVideoDecoder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleVideoDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleVideoDecoder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleVideoDecoder) \
	NO_API virtual ~USimpleVideoDecoder();


#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_17_ACCESSORS \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_17_INCLASS \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_17_ACCESSORS \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVCODECSCORERHI_API UClass* StaticClass<class USimpleVideoDecoder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_Decoders_SimpleVideoDecoder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
