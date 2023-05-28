// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/IAudioGameplayCondition.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOGAMEPLAY_IAudioGameplayCondition_generated_h
#error "IAudioGameplayCondition.generated.h already included, missing '#pragma once' in IAudioGameplayCondition.h"
#endif
#define AUDIOGAMEPLAY_IAudioGameplayCondition_generated_h

#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_12_SPARSE_DATA
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_12_RPC_WRAPPERS \
	AUDIOGAMEPLAY_API virtual bool ConditionMet_Position_Implementation(FVector const& Position) const { return false; }; \
	AUDIOGAMEPLAY_API virtual bool ConditionMet_Implementation() const { return false; }; \
 \
	DECLARE_FUNCTION(execConditionMet_Position); \
	DECLARE_FUNCTION(execConditionMet);


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConditionMet_Position); \
	DECLARE_FUNCTION(execConditionMet);


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_12_ACCESSORS
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_12_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOGAMEPLAY_API UAudioGameplayCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioGameplayCondition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOGAMEPLAY_API, UAudioGameplayCondition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioGameplayCondition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUDIOGAMEPLAY_API UAudioGameplayCondition(UAudioGameplayCondition&&); \
	AUDIOGAMEPLAY_API UAudioGameplayCondition(const UAudioGameplayCondition&); \
public: \
	AUDIOGAMEPLAY_API virtual ~UAudioGameplayCondition();


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOGAMEPLAY_API UAudioGameplayCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUDIOGAMEPLAY_API UAudioGameplayCondition(UAudioGameplayCondition&&); \
	AUDIOGAMEPLAY_API UAudioGameplayCondition(const UAudioGameplayCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOGAMEPLAY_API, UAudioGameplayCondition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioGameplayCondition); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioGameplayCondition) \
	AUDIOGAMEPLAY_API virtual ~UAudioGameplayCondition();


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAudioGameplayCondition(); \
	friend struct Z_Construct_UClass_UAudioGameplayCondition_Statics; \
public: \
	DECLARE_CLASS(UAudioGameplayCondition, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AudioGameplay"), AUDIOGAMEPLAY_API) \
	DECLARE_SERIALIZER(UAudioGameplayCondition)


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_12_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_12_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAudioGameplayCondition() {} \
public: \
	typedef UAudioGameplayCondition UClassType; \
	typedef IAudioGameplayCondition ThisClass; \
	AUDIOGAMEPLAY_API static bool Execute_ConditionMet(const UObject* O); \
	AUDIOGAMEPLAY_API static bool Execute_ConditionMet_Position(const UObject* O, FVector const& Position); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IAudioGameplayCondition() {} \
public: \
	typedef UAudioGameplayCondition UClassType; \
	typedef IAudioGameplayCondition ThisClass; \
	AUDIOGAMEPLAY_API static bool Execute_ConditionMet(const UObject* O); \
	AUDIOGAMEPLAY_API static bool Execute_ConditionMet_Position(const UObject* O, FVector const& Position); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_9_PROLOG
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_12_SPARSE_DATA \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_12_RPC_WRAPPERS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_12_ACCESSORS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_12_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_12_SPARSE_DATA \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_12_ACCESSORS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_12_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOGAMEPLAY_API UClass* StaticClass<class UAudioGameplayCondition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
