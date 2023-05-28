// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Audio/SoundParameterControllerInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FAudioParameter;
#ifdef ENGINE_SoundParameterControllerInterface_generated_h
#error "SoundParameterControllerInterface.generated.h already included, missing '#pragma once' in SoundParameterControllerInterface.h"
#endif
#define ENGINE_SoundParameterControllerInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_19_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_19_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_19_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundParameterControllerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundParameterControllerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundParameterControllerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundParameterControllerInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundParameterControllerInterface(USoundParameterControllerInterface&&); \
	NO_API USoundParameterControllerInterface(const USoundParameterControllerInterface&); \
public: \
	NO_API virtual ~USoundParameterControllerInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundParameterControllerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundParameterControllerInterface(USoundParameterControllerInterface&&); \
	NO_API USoundParameterControllerInterface(const USoundParameterControllerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundParameterControllerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundParameterControllerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundParameterControllerInterface) \
	NO_API virtual ~USoundParameterControllerInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSoundParameterControllerInterface(); \
	friend struct Z_Construct_UClass_USoundParameterControllerInterface_Statics; \
public: \
	DECLARE_CLASS(USoundParameterControllerInterface, UAudioParameterControllerInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundParameterControllerInterface)


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_19_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_19_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_19_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISoundParameterControllerInterface() {} \
public: \
	typedef USoundParameterControllerInterface UClassType; \
	typedef ISoundParameterControllerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_19_INCLASS_IINTERFACE \
protected: \
	virtual ~ISoundParameterControllerInterface() {} \
public: \
	typedef USoundParameterControllerInterface UClassType; \
	typedef ISoundParameterControllerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_19_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundParameterControllerInterface>();

#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_68_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_68_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execObjectArrayToAudioParameter); \
	DECLARE_FUNCTION(execStringArrayToAudioParameter); \
	DECLARE_FUNCTION(execIntegerArrayToAudioParameter); \
	DECLARE_FUNCTION(execFloatArrayToAudioParameter); \
	DECLARE_FUNCTION(execBooleanArrayToAudioParameter); \
	DECLARE_FUNCTION(execObjectToAudioParameter); \
	DECLARE_FUNCTION(execStringToAudioParameter); \
	DECLARE_FUNCTION(execIntegerToAudioParameter); \
	DECLARE_FUNCTION(execFloatToAudioParameter); \
	DECLARE_FUNCTION(execBooleanToAudioParameter);


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execObjectArrayToAudioParameter); \
	DECLARE_FUNCTION(execStringArrayToAudioParameter); \
	DECLARE_FUNCTION(execIntegerArrayToAudioParameter); \
	DECLARE_FUNCTION(execFloatArrayToAudioParameter); \
	DECLARE_FUNCTION(execBooleanArrayToAudioParameter); \
	DECLARE_FUNCTION(execObjectToAudioParameter); \
	DECLARE_FUNCTION(execStringToAudioParameter); \
	DECLARE_FUNCTION(execIntegerToAudioParameter); \
	DECLARE_FUNCTION(execFloatToAudioParameter); \
	DECLARE_FUNCTION(execBooleanToAudioParameter);


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_68_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioParameterConversionStatics(); \
	friend struct Z_Construct_UClass_UAudioParameterConversionStatics_Statics; \
public: \
	DECLARE_CLASS(UAudioParameterConversionStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAudioParameterConversionStatics)


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_68_INCLASS \
private: \
	static void StaticRegisterNativesUAudioParameterConversionStatics(); \
	friend struct Z_Construct_UClass_UAudioParameterConversionStatics_Statics; \
public: \
	DECLARE_CLASS(UAudioParameterConversionStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAudioParameterConversionStatics)


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_68_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioParameterConversionStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioParameterConversionStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioParameterConversionStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioParameterConversionStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioParameterConversionStatics(UAudioParameterConversionStatics&&); \
	NO_API UAudioParameterConversionStatics(const UAudioParameterConversionStatics&); \
public: \
	NO_API virtual ~UAudioParameterConversionStatics();


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioParameterConversionStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioParameterConversionStatics(UAudioParameterConversionStatics&&); \
	NO_API UAudioParameterConversionStatics(const UAudioParameterConversionStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioParameterConversionStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioParameterConversionStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioParameterConversionStatics) \
	NO_API virtual ~UAudioParameterConversionStatics();


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_65_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_68_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_68_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_68_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_68_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_68_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_68_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_68_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_68_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_68_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAudioParameterConversionStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
