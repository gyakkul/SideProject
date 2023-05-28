// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Loudness.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLoudnessResults;
#ifdef AUDIOSYNESTHESIA_Loudness_generated_h
#error "Loudness.generated.h already included, missing '#pragma once' in Loudness.h"
#endif
#define AUDIOSYNESTHESIA_Loudness_generated_h

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_35_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_35_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_35_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_35_ACCESSORS
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoudnessSettings(); \
	friend struct Z_Construct_UClass_ULoudnessSettings_Statics; \
public: \
	DECLARE_CLASS(ULoudnessSettings, UAudioSynesthesiaSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), NO_API) \
	DECLARE_SERIALIZER(ULoudnessSettings)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_35_INCLASS \
private: \
	static void StaticRegisterNativesULoudnessSettings(); \
	friend struct Z_Construct_UClass_ULoudnessSettings_Statics; \
public: \
	DECLARE_CLASS(ULoudnessSettings, UAudioSynesthesiaSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), NO_API) \
	DECLARE_SERIALIZER(ULoudnessSettings)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoudnessSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoudnessSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoudnessSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoudnessSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoudnessSettings(ULoudnessSettings&&); \
	NO_API ULoudnessSettings(const ULoudnessSettings&); \
public: \
	NO_API virtual ~ULoudnessSettings();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoudnessSettings(ULoudnessSettings&&); \
	NO_API ULoudnessSettings(const ULoudnessSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoudnessSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoudnessSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULoudnessSettings) \
	NO_API virtual ~ULoudnessSettings();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_32_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_35_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_35_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_35_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_35_INCLASS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_35_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_35_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOSYNESTHESIA_API UClass* StaticClass<class ULoudnessSettings>();

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLoudnessResults_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUDIOSYNESTHESIA_API UScriptStruct* StaticStruct<struct FLoudnessResults>();

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_98_DELEGATE \
AUDIOSYNESTHESIA_API void FOnOverallLoudnessResults_DelegateWrapper(const FMulticastScriptDelegate& OnOverallLoudnessResults, TArray<FLoudnessResults> const& OverallLoudnessResults);


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_101_DELEGATE \
AUDIOSYNESTHESIA_API void FOnLatestOverallLoudnessResults_DelegateWrapper(const FMulticastScriptDelegate& OnLatestOverallLoudnessResults, FLoudnessResults const& LatestOverallLoudnessResults);


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_104_DELEGATE \
AUDIOSYNESTHESIA_API void FOnPerChannelLoudnessResults_DelegateWrapper(const FMulticastScriptDelegate& OnPerChannelLoudnessResults, int32 ChannelIndex, TArray<FLoudnessResults> const& LoudnessResults);


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_107_DELEGATE \
AUDIOSYNESTHESIA_API void FOnLatestPerChannelLoudnessResults_DelegateWrapper(const FMulticastScriptDelegate& OnLatestPerChannelLoudnessResults, int32 ChannelIndex, FLoudnessResults const& LatestLoudnessResults);


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_119_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_119_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_119_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_119_ACCESSORS
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoudnessAnalyzer(); \
	friend struct Z_Construct_UClass_ULoudnessAnalyzer_Statics; \
public: \
	DECLARE_CLASS(ULoudnessAnalyzer, UAudioAnalyzer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), NO_API) \
	DECLARE_SERIALIZER(ULoudnessAnalyzer)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_119_INCLASS \
private: \
	static void StaticRegisterNativesULoudnessAnalyzer(); \
	friend struct Z_Construct_UClass_ULoudnessAnalyzer_Statics; \
public: \
	DECLARE_CLASS(ULoudnessAnalyzer, UAudioAnalyzer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), NO_API) \
	DECLARE_SERIALIZER(ULoudnessAnalyzer)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_119_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoudnessAnalyzer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoudnessAnalyzer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoudnessAnalyzer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoudnessAnalyzer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoudnessAnalyzer(ULoudnessAnalyzer&&); \
	NO_API ULoudnessAnalyzer(const ULoudnessAnalyzer&); \
public: \
	NO_API virtual ~ULoudnessAnalyzer();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_119_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoudnessAnalyzer(ULoudnessAnalyzer&&); \
	NO_API ULoudnessAnalyzer(const ULoudnessAnalyzer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoudnessAnalyzer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoudnessAnalyzer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULoudnessAnalyzer) \
	NO_API virtual ~ULoudnessAnalyzer();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_116_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_119_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_119_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_119_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_119_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_119_INCLASS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_119_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_119_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_119_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_119_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_119_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOSYNESTHESIA_API UClass* StaticClass<class ULoudnessAnalyzer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h


#define FOREACH_ENUM_ELOUDNESSCURVETYPEENUM(op) \
	op(ELoudnessCurveTypeEnum::A) \
	op(ELoudnessCurveTypeEnum::B) \
	op(ELoudnessCurveTypeEnum::C) \
	op(ELoudnessCurveTypeEnum::D) \
	op(ELoudnessCurveTypeEnum::None) 

enum class ELoudnessCurveTypeEnum : uint8;
template<> struct TIsUEnumClass<ELoudnessCurveTypeEnum> { enum { Value = true }; };
template<> AUDIOSYNESTHESIA_API UEnum* StaticEnum<ELoudnessCurveTypeEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
