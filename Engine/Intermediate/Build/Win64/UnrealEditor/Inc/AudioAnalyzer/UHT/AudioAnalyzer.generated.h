// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioAnalyzer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioBus;
class UObject;
#ifdef AUDIOANALYZER_AudioAnalyzer_generated_h
#error "AudioAnalyzer.generated.h already included, missing '#pragma once' in AudioAnalyzer.h"
#endif
#define AUDIOANALYZER_AudioAnalyzer_generated_h

#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_25_SPARSE_DATA
#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_25_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_25_ACCESSORS
#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioAnalyzerSettings(); \
	friend struct Z_Construct_UClass_UAudioAnalyzerSettings_Statics; \
public: \
	DECLARE_CLASS(UAudioAnalyzerSettings, UAudioAnalyzerAssetBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioAnalyzer"), NO_API) \
	DECLARE_SERIALIZER(UAudioAnalyzerSettings)


#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUAudioAnalyzerSettings(); \
	friend struct Z_Construct_UClass_UAudioAnalyzerSettings_Statics; \
public: \
	DECLARE_CLASS(UAudioAnalyzerSettings, UAudioAnalyzerAssetBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioAnalyzer"), NO_API) \
	DECLARE_SERIALIZER(UAudioAnalyzerSettings)


#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioAnalyzerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioAnalyzerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioAnalyzerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioAnalyzerSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioAnalyzerSettings(UAudioAnalyzerSettings&&); \
	NO_API UAudioAnalyzerSettings(const UAudioAnalyzerSettings&); \
public: \
	NO_API virtual ~UAudioAnalyzerSettings();


#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioAnalyzerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioAnalyzerSettings(UAudioAnalyzerSettings&&); \
	NO_API UAudioAnalyzerSettings(const UAudioAnalyzerSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioAnalyzerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioAnalyzerSettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioAnalyzerSettings) \
	NO_API virtual ~UAudioAnalyzerSettings();


#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_22_PROLOG
#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_25_SPARSE_DATA \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_25_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_25_ACCESSORS \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_25_INCLASS \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_25_SPARSE_DATA \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_25_ACCESSORS \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOANALYZER_API UClass* StaticClass<class UAudioAnalyzerSettings>();

#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_70_SPARSE_DATA
#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_70_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopAnalyzing); \
	DECLARE_FUNCTION(execStartAnalyzing);


#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopAnalyzing); \
	DECLARE_FUNCTION(execStartAnalyzing);


#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_70_ACCESSORS
#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioAnalyzer(); \
	friend struct Z_Construct_UClass_UAudioAnalyzer_Statics; \
public: \
	DECLARE_CLASS(UAudioAnalyzer, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioAnalyzer"), NO_API) \
	DECLARE_SERIALIZER(UAudioAnalyzer)


#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_70_INCLASS \
private: \
	static void StaticRegisterNativesUAudioAnalyzer(); \
	friend struct Z_Construct_UClass_UAudioAnalyzer_Statics; \
public: \
	DECLARE_CLASS(UAudioAnalyzer, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioAnalyzer"), NO_API) \
	DECLARE_SERIALIZER(UAudioAnalyzer)


#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_70_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioAnalyzer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioAnalyzer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioAnalyzer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioAnalyzer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioAnalyzer(UAudioAnalyzer&&); \
	NO_API UAudioAnalyzer(const UAudioAnalyzer&); \
public: \
	NO_API virtual ~UAudioAnalyzer();


#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioAnalyzer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioAnalyzer(UAudioAnalyzer&&); \
	NO_API UAudioAnalyzer(const UAudioAnalyzer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioAnalyzer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioAnalyzer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioAnalyzer) \
	NO_API virtual ~UAudioAnalyzer();


#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_67_PROLOG
#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_70_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_70_SPARSE_DATA \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_70_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_70_ACCESSORS \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_70_INCLASS \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_70_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_70_SPARSE_DATA \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_70_ACCESSORS \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_70_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOANALYZER_API UClass* StaticClass<class UAudioAnalyzer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
