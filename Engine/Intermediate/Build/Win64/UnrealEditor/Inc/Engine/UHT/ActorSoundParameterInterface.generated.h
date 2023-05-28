// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Audio/ActorSoundParameterInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAudioParameter;
#ifdef ENGINE_ActorSoundParameterInterface_generated_h
#error "ActorSoundParameterInterface.generated.h already included, missing '#pragma once' in ActorSoundParameterInterface.h"
#endif
#define ENGINE_ActorSoundParameterInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_RPC_WRAPPERS \
	virtual void GetActorSoundParams_Implementation(TArray<FAudioParameter>& Params) const {}; \
 \
	DECLARE_FUNCTION(execGetActorSoundParams);


#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActorSoundParams);


#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorSoundParameterInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorSoundParameterInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorSoundParameterInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorSoundParameterInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorSoundParameterInterface(UActorSoundParameterInterface&&); \
	NO_API UActorSoundParameterInterface(const UActorSoundParameterInterface&); \
public: \
	NO_API virtual ~UActorSoundParameterInterface();


#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorSoundParameterInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorSoundParameterInterface(UActorSoundParameterInterface&&); \
	NO_API UActorSoundParameterInterface(const UActorSoundParameterInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorSoundParameterInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorSoundParameterInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorSoundParameterInterface) \
	NO_API virtual ~UActorSoundParameterInterface();


#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUActorSoundParameterInterface(); \
	friend struct Z_Construct_UClass_UActorSoundParameterInterface_Statics; \
public: \
	DECLARE_CLASS(UActorSoundParameterInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UActorSoundParameterInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IActorSoundParameterInterface() {} \
public: \
	typedef UActorSoundParameterInterface UClassType; \
	typedef IActorSoundParameterInterface ThisClass; \
	static void Execute_GetActorSoundParams(const UObject* O, TArray<FAudioParameter>& Params); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_INCLASS_IINTERFACE \
protected: \
	virtual ~IActorSoundParameterInterface() {} \
public: \
	typedef UActorSoundParameterInterface UClassType; \
	typedef IActorSoundParameterInterface ThisClass; \
	static void Execute_GetActorSoundParams(const UObject* O, TArray<FAudioParameter>& Params); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_28_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UActorSoundParameterInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
