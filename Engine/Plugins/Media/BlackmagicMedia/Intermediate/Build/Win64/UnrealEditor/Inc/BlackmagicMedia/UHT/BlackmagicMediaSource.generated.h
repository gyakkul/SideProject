// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlackmagicMediaSource.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLACKMAGICMEDIA_BlackmagicMediaSource_generated_h
#error "BlackmagicMediaSource.generated.h already included, missing '#pragma once' in BlackmagicMediaSource.h"
#endif
#define BLACKMAGICMEDIA_BlackmagicMediaSource_generated_h

#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_39_SPARSE_DATA
#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_39_RPC_WRAPPERS
#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_39_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_39_ACCESSORS
#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlackmagicMediaSource(); \
	friend struct Z_Construct_UClass_UBlackmagicMediaSource_Statics; \
public: \
	DECLARE_CLASS(UBlackmagicMediaSource, UTimeSynchronizableMediaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlackmagicMedia"), NO_API) \
	DECLARE_SERIALIZER(UBlackmagicMediaSource)


#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUBlackmagicMediaSource(); \
	friend struct Z_Construct_UClass_UBlackmagicMediaSource_Statics; \
public: \
	DECLARE_CLASS(UBlackmagicMediaSource, UTimeSynchronizableMediaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlackmagicMedia"), NO_API) \
	DECLARE_SERIALIZER(UBlackmagicMediaSource)


#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlackmagicMediaSource(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlackmagicMediaSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlackmagicMediaSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackmagicMediaSource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlackmagicMediaSource(UBlackmagicMediaSource&&); \
	NO_API UBlackmagicMediaSource(const UBlackmagicMediaSource&); \
public: \
	NO_API virtual ~UBlackmagicMediaSource();


#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlackmagicMediaSource(UBlackmagicMediaSource&&); \
	NO_API UBlackmagicMediaSource(const UBlackmagicMediaSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlackmagicMediaSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackmagicMediaSource); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBlackmagicMediaSource) \
	NO_API virtual ~UBlackmagicMediaSource();


#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_36_PROLOG
#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_39_SPARSE_DATA \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_39_RPC_WRAPPERS \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_39_ACCESSORS \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_39_INCLASS \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_39_SPARSE_DATA \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_39_ACCESSORS \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLACKMAGICMEDIA_API UClass* StaticClass<class UBlackmagicMediaSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h


#define FOREACH_ENUM_EBLACKMAGICMEDIASOURCECOLORFORMAT(op) \
	op(EBlackmagicMediaSourceColorFormat::YUV8) \
	op(EBlackmagicMediaSourceColorFormat::YUV10) 

enum class EBlackmagicMediaSourceColorFormat : uint8;
template<> struct TIsUEnumClass<EBlackmagicMediaSourceColorFormat> { enum { Value = true }; };
template<> BLACKMAGICMEDIA_API UEnum* StaticEnum<EBlackmagicMediaSourceColorFormat>();

#define FOREACH_ENUM_EBLACKMAGICMEDIAAUDIOCHANNEL(op) \
	op(EBlackmagicMediaAudioChannel::Stereo2) \
	op(EBlackmagicMediaAudioChannel::Surround8) 

enum class EBlackmagicMediaAudioChannel : uint8;
template<> struct TIsUEnumClass<EBlackmagicMediaAudioChannel> { enum { Value = true }; };
template<> BLACKMAGICMEDIA_API UEnum* StaticEnum<EBlackmagicMediaAudioChannel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
