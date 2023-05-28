// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioParameterControllerInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FAudioParameter;
#ifdef AUDIOEXTENSIONS_AudioParameterControllerInterface_generated_h
#error "AudioParameterControllerInterface.generated.h already included, missing '#pragma once' in AudioParameterControllerInterface.h"
#endif
#define AUDIOEXTENSIONS_AudioParameterControllerInterface_generated_h

#define FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h_27_SPARSE_DATA
#define FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetParameters_Blueprint); \
	DECLARE_FUNCTION(execSetObjectArrayParameter); \
	DECLARE_FUNCTION(execSetObjectParameter); \
	DECLARE_FUNCTION(execSetStringArrayParameter); \
	DECLARE_FUNCTION(execSetStringParameter); \
	DECLARE_FUNCTION(execSetFloatArrayParameter); \
	DECLARE_FUNCTION(execSetFloatParameter); \
	DECLARE_FUNCTION(execSetIntArrayParameter); \
	DECLARE_FUNCTION(execSetIntParameter); \
	DECLARE_FUNCTION(execSetBoolArrayParameter); \
	DECLARE_FUNCTION(execSetBoolParameter); \
	DECLARE_FUNCTION(execSetTriggerParameter); \
	DECLARE_FUNCTION(execResetParameters);


#define FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetParameters_Blueprint); \
	DECLARE_FUNCTION(execSetObjectArrayParameter); \
	DECLARE_FUNCTION(execSetObjectParameter); \
	DECLARE_FUNCTION(execSetStringArrayParameter); \
	DECLARE_FUNCTION(execSetStringParameter); \
	DECLARE_FUNCTION(execSetFloatArrayParameter); \
	DECLARE_FUNCTION(execSetFloatParameter); \
	DECLARE_FUNCTION(execSetIntArrayParameter); \
	DECLARE_FUNCTION(execSetIntParameter); \
	DECLARE_FUNCTION(execSetBoolArrayParameter); \
	DECLARE_FUNCTION(execSetBoolParameter); \
	DECLARE_FUNCTION(execSetTriggerParameter); \
	DECLARE_FUNCTION(execResetParameters);


#define FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h_27_ACCESSORS
#define FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioParameterControllerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioParameterControllerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioParameterControllerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioParameterControllerInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioParameterControllerInterface(UAudioParameterControllerInterface&&); \
	NO_API UAudioParameterControllerInterface(const UAudioParameterControllerInterface&); \
public: \
	NO_API virtual ~UAudioParameterControllerInterface();


#define FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioParameterControllerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioParameterControllerInterface(UAudioParameterControllerInterface&&); \
	NO_API UAudioParameterControllerInterface(const UAudioParameterControllerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioParameterControllerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioParameterControllerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioParameterControllerInterface) \
	NO_API virtual ~UAudioParameterControllerInterface();


#define FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h_27_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAudioParameterControllerInterface(); \
	friend struct Z_Construct_UClass_UAudioParameterControllerInterface_Statics; \
public: \
	DECLARE_CLASS(UAudioParameterControllerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AudioExtensions"), NO_API) \
	DECLARE_SERIALIZER(UAudioParameterControllerInterface)


#define FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h_27_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h_27_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h_27_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h_27_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h_27_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h_27_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h_27_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAudioParameterControllerInterface() {} \
public: \
	typedef UAudioParameterControllerInterface UClassType; \
	typedef IAudioParameterControllerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h_27_INCLASS_IINTERFACE \
protected: \
	virtual ~IAudioParameterControllerInterface() {} \
public: \
	typedef UAudioParameterControllerInterface UClassType; \
	typedef IAudioParameterControllerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h_24_PROLOG
#define FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h_27_SPARSE_DATA \
	FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h_27_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h_27_ACCESSORS \
	FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h_27_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h_27_SPARSE_DATA \
	FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h_27_ACCESSORS \
	FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h_27_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEXTENSIONS_API UClass* StaticClass<class UAudioParameterControllerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
