// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AjaMediaOutput.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AJAMEDIAOUTPUT_AjaMediaOutput_generated_h
#error "AjaMediaOutput.generated.h already included, missing '#pragma once' in AjaMediaOutput.h"
#endif
#define AJAMEDIAOUTPUT_AjaMediaOutput_generated_h

#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_46_SPARSE_DATA
#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_46_RPC_WRAPPERS
#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_46_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_46_ACCESSORS
#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAjaMediaOutput(); \
	friend struct Z_Construct_UClass_UAjaMediaOutput_Statics; \
public: \
	DECLARE_CLASS(UAjaMediaOutput, UMediaOutput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AjaMediaOutput"), NO_API) \
	DECLARE_SERIALIZER(UAjaMediaOutput)


#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUAjaMediaOutput(); \
	friend struct Z_Construct_UClass_UAjaMediaOutput_Statics; \
public: \
	DECLARE_CLASS(UAjaMediaOutput, UMediaOutput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AjaMediaOutput"), NO_API) \
	DECLARE_SERIALIZER(UAjaMediaOutput)


#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAjaMediaOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAjaMediaOutput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAjaMediaOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAjaMediaOutput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAjaMediaOutput(UAjaMediaOutput&&); \
	NO_API UAjaMediaOutput(const UAjaMediaOutput&); \
public: \
	NO_API virtual ~UAjaMediaOutput();


#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAjaMediaOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAjaMediaOutput(UAjaMediaOutput&&); \
	NO_API UAjaMediaOutput(const UAjaMediaOutput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAjaMediaOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAjaMediaOutput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAjaMediaOutput) \
	NO_API virtual ~UAjaMediaOutput();


#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_43_PROLOG
#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_46_SPARSE_DATA \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_46_RPC_WRAPPERS \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_46_ACCESSORS \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_46_INCLASS \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_46_SPARSE_DATA \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_46_ACCESSORS \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_46_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AjaMediaOutput."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AJAMEDIAOUTPUT_API UClass* StaticClass<class UAjaMediaOutput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h


#define FOREACH_ENUM_EAJAMEDIAOUTPUTPIXELFORMAT(op) \
	op(EAjaMediaOutputPixelFormat::PF_8BIT_YUV) \
	op(EAjaMediaOutputPixelFormat::PF_10BIT_YUV) 

enum class EAjaMediaOutputPixelFormat : uint8;
template<> struct TIsUEnumClass<EAjaMediaOutputPixelFormat> { enum { Value = true }; };
template<> AJAMEDIAOUTPUT_API UEnum* StaticEnum<EAjaMediaOutputPixelFormat>();

#define FOREACH_ENUM_EAJAMEDIAOUTPUTAUDIOSAMPLERATE(op) \
	op(EAjaMediaOutputAudioSampleRate::SR_48k) 

enum class EAjaMediaOutputAudioSampleRate : uint32;
template<> struct TIsUEnumClass<EAjaMediaOutputAudioSampleRate> { enum { Value = true }; };
template<> AJAMEDIAOUTPUT_API UEnum* StaticEnum<EAjaMediaOutputAudioSampleRate>();

#define FOREACH_ENUM_EAJAMEDIAOUTPUTCHANNELCONFIGURATION(op) \
	op(EAjaMediaOutputChannelConfiguration::CH_6) \
	op(EAjaMediaOutputChannelConfiguration::CH_8) \
	op(EAjaMediaOutputChannelConfiguration::CH_16) 

enum class EAjaMediaOutputChannelConfiguration : uint8;
template<> struct TIsUEnumClass<EAjaMediaOutputChannelConfiguration> { enum { Value = true }; };
template<> AJAMEDIAOUTPUT_API UEnum* StaticEnum<EAjaMediaOutputChannelConfiguration>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
