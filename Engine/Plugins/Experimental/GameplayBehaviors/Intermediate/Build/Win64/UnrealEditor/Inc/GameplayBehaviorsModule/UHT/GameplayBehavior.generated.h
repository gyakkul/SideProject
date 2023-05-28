// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayBehavior.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACharacter;
class APawn;
class UGameplayBehaviorConfig;
#ifdef GAMEPLAYBEHAVIORSMODULE_GameplayBehavior_generated_h
#error "GameplayBehavior.generated.h already included, missing '#pragma once' in GameplayBehavior.h"
#endif
#define GAMEPLAYBEHAVIORSMODULE_GameplayBehavior_generated_h

#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_36_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execK2_GetNextActorIndexInSequence); \
	DECLARE_FUNCTION(execK2_TriggerBehavior); \
	DECLARE_FUNCTION(execK2_AbortBehavior); \
	DECLARE_FUNCTION(execK2_EndBehavior);


#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execK2_GetNextActorIndexInSequence); \
	DECLARE_FUNCTION(execK2_TriggerBehavior); \
	DECLARE_FUNCTION(execK2_AbortBehavior); \
	DECLARE_FUNCTION(execK2_EndBehavior);


#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_36_ACCESSORS
#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_36_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayBehavior(); \
	friend struct Z_Construct_UClass_UGameplayBehavior_Statics; \
public: \
	DECLARE_CLASS(UGameplayBehavior, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameplayBehaviorsModule"), NO_API) \
	DECLARE_SERIALIZER(UGameplayBehavior) \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayBehavior*>(this); }


#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayBehavior(); \
	friend struct Z_Construct_UClass_UGameplayBehavior_Statics; \
public: \
	DECLARE_CLASS(UGameplayBehavior, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameplayBehaviorsModule"), NO_API) \
	DECLARE_SERIALIZER(UGameplayBehavior) \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayBehavior*>(this); }


#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayBehavior(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayBehavior) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayBehavior); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayBehavior); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayBehavior(UGameplayBehavior&&); \
	NO_API UGameplayBehavior(const UGameplayBehavior&); \
public: \
	NO_API virtual ~UGameplayBehavior();


#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayBehavior(UGameplayBehavior&&); \
	NO_API UGameplayBehavior(const UGameplayBehavior&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayBehavior); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayBehavior); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayBehavior) \
	NO_API virtual ~UGameplayBehavior();


#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_33_PROLOG
#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_36_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_36_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_36_ACCESSORS \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_36_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_36_INCLASS \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_36_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_36_ACCESSORS \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_36_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYBEHAVIORSMODULE_API UClass* StaticClass<class UGameplayBehavior>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_h


#define FOREACH_ENUM_EGAMEPLAYBEHAVIORINSTANTIATIONPOLICY(op) \
	op(EGameplayBehaviorInstantiationPolicy::Instantiate) \
	op(EGameplayBehaviorInstantiationPolicy::ConditionallyInstantiate) \
	op(EGameplayBehaviorInstantiationPolicy::DontInstantiate) 

enum class EGameplayBehaviorInstantiationPolicy : uint8;
template<> struct TIsUEnumClass<EGameplayBehaviorInstantiationPolicy> { enum { Value = true }; };
template<> GAMEPLAYBEHAVIORSMODULE_API UEnum* StaticEnum<EGameplayBehaviorInstantiationPolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
