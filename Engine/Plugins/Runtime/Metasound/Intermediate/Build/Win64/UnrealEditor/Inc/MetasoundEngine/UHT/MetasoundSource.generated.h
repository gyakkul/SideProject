// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundSource.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef METASOUNDENGINE_MetasoundSource_generated_h
#error "MetasoundSource.generated.h already included, missing '#pragma once' in MetasoundSource.h"
#endif
#define METASOUNDENGINE_MetasoundSource_generated_h

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_50_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_50_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_50_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_50_ACCESSORS
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_50_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMetaSoundSource, NO_API)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundSource(); \
	friend struct Z_Construct_UClass_UMetaSoundSource_Statics; \
public: \
	DECLARE_CLASS(UMetaSoundSource, USoundWaveProcedural, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), NO_API) \
	DECLARE_SERIALIZER(UMetaSoundSource) \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_50_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_50_INCLASS \
private: \
	static void StaticRegisterNativesUMetaSoundSource(); \
	friend struct Z_Construct_UClass_UMetaSoundSource_Statics; \
public: \
	DECLARE_CLASS(UMetaSoundSource, USoundWaveProcedural, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), NO_API) \
	DECLARE_SERIALIZER(UMetaSoundSource) \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_50_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaSoundSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaSoundSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundSource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMetaSoundSource(UMetaSoundSource&&); \
	NO_API UMetaSoundSource(const UMetaSoundSource&); \
public: \
	NO_API virtual ~UMetaSoundSource();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMetaSoundSource(UMetaSoundSource&&); \
	NO_API UMetaSoundSource(const UMetaSoundSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaSoundSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundSource) \
	NO_API virtual ~UMetaSoundSource();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_47_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_50_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_50_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_50_ACCESSORS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_50_INCLASS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_50_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_50_ACCESSORS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> METASOUNDENGINE_API UClass* StaticClass<class UMetaSoundSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h


#define FOREACH_ENUM_EMETASOUNDSOURCEAUDIOFORMAT(op) \
	op(EMetasoundSourceAudioFormat::Mono) \
	op(EMetasoundSourceAudioFormat::Stereo) \
	op(EMetasoundSourceAudioFormat::Quad) \
	op(EMetasoundSourceAudioFormat::FiveDotOne) \
	op(EMetasoundSourceAudioFormat::SevenDotOne) \
	op(EMetasoundSourceAudioFormat::COUNT) 

enum class EMetasoundSourceAudioFormat : uint8;
template<> struct TIsUEnumClass<EMetasoundSourceAudioFormat> { enum { Value = true }; };
template<> METASOUNDENGINE_API UEnum* StaticEnum<EMetasoundSourceAudioFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
