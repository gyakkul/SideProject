// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Meter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMeterResults;
#ifdef AUDIOSYNESTHESIA_Meter_generated_h
#error "Meter.generated.h already included, missing '#pragma once' in Meter.h"
#endif
#define AUDIOSYNESTHESIA_Meter_generated_h

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_26_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_26_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_26_ACCESSORS
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeterSettings(); \
	friend struct Z_Construct_UClass_UMeterSettings_Statics; \
public: \
	DECLARE_CLASS(UMeterSettings, UAudioSynesthesiaSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), NO_API) \
	DECLARE_SERIALIZER(UMeterSettings)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUMeterSettings(); \
	friend struct Z_Construct_UClass_UMeterSettings_Statics; \
public: \
	DECLARE_CLASS(UMeterSettings, UAudioSynesthesiaSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), NO_API) \
	DECLARE_SERIALIZER(UMeterSettings)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeterSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeterSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeterSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeterSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeterSettings(UMeterSettings&&); \
	NO_API UMeterSettings(const UMeterSettings&); \
public: \
	NO_API virtual ~UMeterSettings();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeterSettings(UMeterSettings&&); \
	NO_API UMeterSettings(const UMeterSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeterSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeterSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMeterSettings) \
	NO_API virtual ~UMeterSettings();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_23_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_26_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_26_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_26_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_26_INCLASS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_26_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_26_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOSYNESTHESIA_API UClass* StaticClass<class UMeterSettings>();

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeterResults_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUDIOSYNESTHESIA_API UScriptStruct* StaticStruct<struct FMeterResults>();

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_93_DELEGATE \
AUDIOSYNESTHESIA_API void FOnOverallMeterResults_DelegateWrapper(const FMulticastScriptDelegate& OnOverallMeterResults, TArray<FMeterResults> const& MeterResults);


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_99_DELEGATE \
AUDIOSYNESTHESIA_API void FOnLatestOverallMeterResults_DelegateWrapper(const FMulticastScriptDelegate& OnLatestOverallMeterResults, FMeterResults const& LatestOverallMeterResults);


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_105_DELEGATE \
AUDIOSYNESTHESIA_API void FOnPerChannelMeterResults_DelegateWrapper(const FMulticastScriptDelegate& OnPerChannelMeterResults, int32 ChannelIndex, TArray<FMeterResults> const& MeterResults);


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_111_DELEGATE \
AUDIOSYNESTHESIA_API void FOnLatestPerChannelMeterResults_DelegateWrapper(const FMulticastScriptDelegate& OnLatestPerChannelMeterResults, int32 ChannelIndex, FMeterResults const& LatestMeterResults);


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_124_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_124_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_124_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_124_ACCESSORS
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_124_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeterAnalyzer(); \
	friend struct Z_Construct_UClass_UMeterAnalyzer_Statics; \
public: \
	DECLARE_CLASS(UMeterAnalyzer, UAudioAnalyzer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), NO_API) \
	DECLARE_SERIALIZER(UMeterAnalyzer)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_124_INCLASS \
private: \
	static void StaticRegisterNativesUMeterAnalyzer(); \
	friend struct Z_Construct_UClass_UMeterAnalyzer_Statics; \
public: \
	DECLARE_CLASS(UMeterAnalyzer, UAudioAnalyzer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), NO_API) \
	DECLARE_SERIALIZER(UMeterAnalyzer)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_124_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeterAnalyzer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeterAnalyzer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeterAnalyzer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeterAnalyzer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeterAnalyzer(UMeterAnalyzer&&); \
	NO_API UMeterAnalyzer(const UMeterAnalyzer&); \
public: \
	NO_API virtual ~UMeterAnalyzer();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_124_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeterAnalyzer(UMeterAnalyzer&&); \
	NO_API UMeterAnalyzer(const UMeterAnalyzer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeterAnalyzer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeterAnalyzer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMeterAnalyzer) \
	NO_API virtual ~UMeterAnalyzer();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_121_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_124_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_124_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_124_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_124_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_124_INCLASS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_124_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_124_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_124_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_124_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_124_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_124_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_124_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOSYNESTHESIA_API UClass* StaticClass<class UMeterAnalyzer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h


#define FOREACH_ENUM_EMETERPEAKTYPE(op) \
	op(EMeterPeakType::MeanSquared) \
	op(EMeterPeakType::RootMeanSquared) \
	op(EMeterPeakType::Peak) \
	op(EMeterPeakType::Count) 

enum class EMeterPeakType : uint8;
template<> struct TIsUEnumClass<EMeterPeakType> { enum { Value = true }; };
template<> AUDIOSYNESTHESIA_API UEnum* StaticEnum<EMeterPeakType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
