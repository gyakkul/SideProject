// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IAudioMotorSim.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAudioMotorSimInputContext;
struct FAudioMotorSimRuntimeContext;
#ifdef AUDIOMOTORSIM_IAudioMotorSim_generated_h
#error "IAudioMotorSim.generated.h already included, missing '#pragma once' in IAudioMotorSim.h"
#endif
#define AUDIOMOTORSIM_IAudioMotorSim_generated_h

#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_13_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_13_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_13_ACCESSORS
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioMotorSim(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioMotorSim) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioMotorSim); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioMotorSim); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioMotorSim(UAudioMotorSim&&); \
	NO_API UAudioMotorSim(const UAudioMotorSim&); \
public: \
	NO_API virtual ~UAudioMotorSim();


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioMotorSim(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioMotorSim(UAudioMotorSim&&); \
	NO_API UAudioMotorSim(const UAudioMotorSim&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioMotorSim); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioMotorSim); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioMotorSim) \
	NO_API virtual ~UAudioMotorSim();


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAudioMotorSim(); \
	friend struct Z_Construct_UClass_UAudioMotorSim_Statics; \
public: \
	DECLARE_CLASS(UAudioMotorSim, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AudioMotorSim"), NO_API) \
	DECLARE_SERIALIZER(UAudioMotorSim)


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAudioMotorSim() {} \
public: \
	typedef UAudioMotorSim UClassType; \
	typedef IAudioMotorSim ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IAudioMotorSim() {} \
public: \
	typedef UAudioMotorSim UClassType; \
	typedef IAudioMotorSim ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_10_PROLOG
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_13_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_13_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_13_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_13_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_13_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOMOTORSIM_API UClass* StaticClass<class UAudioMotorSim>();

#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_29_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_29_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_29_ACCESSORS
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_29_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioMotorSimComponent(); \
	friend struct Z_Construct_UClass_UAudioMotorSimComponent_Statics; \
public: \
	DECLARE_CLASS(UAudioMotorSimComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioMotorSim"), NO_API) \
	DECLARE_SERIALIZER(UAudioMotorSimComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UAudioMotorSimComponent*>(this); }


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUAudioMotorSimComponent(); \
	friend struct Z_Construct_UClass_UAudioMotorSimComponent_Statics; \
public: \
	DECLARE_CLASS(UAudioMotorSimComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioMotorSim"), NO_API) \
	DECLARE_SERIALIZER(UAudioMotorSimComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UAudioMotorSimComponent*>(this); }


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioMotorSimComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioMotorSimComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioMotorSimComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioMotorSimComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioMotorSimComponent(UAudioMotorSimComponent&&); \
	NO_API UAudioMotorSimComponent(const UAudioMotorSimComponent&); \
public: \
	NO_API virtual ~UAudioMotorSimComponent();


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioMotorSimComponent(UAudioMotorSimComponent&&); \
	NO_API UAudioMotorSimComponent(const UAudioMotorSimComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioMotorSimComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioMotorSimComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioMotorSimComponent) \
	NO_API virtual ~UAudioMotorSimComponent();


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_26_PROLOG
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_29_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_29_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_29_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_29_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_29_INCLASS \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_29_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_29_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_29_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOMOTORSIM_API UClass* StaticClass<class UAudioMotorSimComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
