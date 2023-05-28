// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IAudioModulation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEXTENSIONS_IAudioModulation_generated_h
#error "IAudioModulation.generated.h already included, missing '#pragma once' in IAudioModulation.h"
#endif
#define AUDIOEXTENSIONS_IAudioModulation_generated_h

#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_213_SPARSE_DATA
#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_213_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_213_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_213_ACCESSORS
#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_213_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundModulatorBase(); \
	friend struct Z_Construct_UClass_USoundModulatorBase_Statics; \
public: \
	DECLARE_CLASS(USoundModulatorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioExtensions"), NO_API) \
	DECLARE_SERIALIZER(USoundModulatorBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_213_INCLASS \
private: \
	static void StaticRegisterNativesUSoundModulatorBase(); \
	friend struct Z_Construct_UClass_USoundModulatorBase_Statics; \
public: \
	DECLARE_CLASS(USoundModulatorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioExtensions"), NO_API) \
	DECLARE_SERIALIZER(USoundModulatorBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_213_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundModulatorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundModulatorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundModulatorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundModulatorBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundModulatorBase(USoundModulatorBase&&); \
	NO_API USoundModulatorBase(const USoundModulatorBase&); \
public: \
	NO_API virtual ~USoundModulatorBase();


#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_213_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundModulatorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundModulatorBase(USoundModulatorBase&&); \
	NO_API USoundModulatorBase(const USoundModulatorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundModulatorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundModulatorBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundModulatorBase) \
	NO_API virtual ~USoundModulatorBase();


#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_210_PROLOG
#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_213_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_213_SPARSE_DATA \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_213_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_213_ACCESSORS \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_213_INCLASS \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_213_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_213_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_213_SPARSE_DATA \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_213_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_213_ACCESSORS \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_213_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h_213_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEXTENSIONS_API UClass* StaticClass<class USoundModulatorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioModulation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
