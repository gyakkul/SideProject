// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayBehaviorsBlueprintFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBlackboardComponent;
class UBTNode;
class UObject;
struct FBlackboardKeySelector;
struct FGameplayTagContainer;
#ifdef GAMEPLAYBEHAVIORSMODULE_GameplayBehaviorsBlueprintFunctionLibrary_generated_h
#error "GameplayBehaviorsBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in GameplayBehaviorsBlueprintFunctionLibrary.h"
#endif
#define GAMEPLAYBEHAVIORSMODULE_GameplayBehaviorsBlueprintFunctionLibrary_generated_h

#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorsBlueprintFunctionLibrary_h_21_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorsBlueprintFunctionLibrary_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetValueAsGameplayTagForBlackboardComp); \
	DECLARE_FUNCTION(execGetBlackboardValueAsGameplayTagFromBlackboardComp); \
	DECLARE_FUNCTION(execAddGameplayTagFilterToBlackboardKeySelector); \
	DECLARE_FUNCTION(execSetBlackboardValueAsGameplayTag); \
	DECLARE_FUNCTION(execGetBlackboardValueAsGameplayTag);


#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorsBlueprintFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetValueAsGameplayTagForBlackboardComp); \
	DECLARE_FUNCTION(execGetBlackboardValueAsGameplayTagFromBlackboardComp); \
	DECLARE_FUNCTION(execAddGameplayTagFilterToBlackboardKeySelector); \
	DECLARE_FUNCTION(execSetBlackboardValueAsGameplayTag); \
	DECLARE_FUNCTION(execGetBlackboardValueAsGameplayTag);


#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorsBlueprintFunctionLibrary_h_21_ACCESSORS
#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorsBlueprintFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayBehaviorsBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UGameplayBehaviorsBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UGameplayBehaviorsBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayBehaviorsModule"), NO_API) \
	DECLARE_SERIALIZER(UGameplayBehaviorsBlueprintFunctionLibrary)


#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorsBlueprintFunctionLibrary_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayBehaviorsBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UGameplayBehaviorsBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UGameplayBehaviorsBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayBehaviorsModule"), NO_API) \
	DECLARE_SERIALIZER(UGameplayBehaviorsBlueprintFunctionLibrary)


#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorsBlueprintFunctionLibrary_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayBehaviorsBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayBehaviorsBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayBehaviorsBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayBehaviorsBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayBehaviorsBlueprintFunctionLibrary(UGameplayBehaviorsBlueprintFunctionLibrary&&); \
	NO_API UGameplayBehaviorsBlueprintFunctionLibrary(const UGameplayBehaviorsBlueprintFunctionLibrary&); \
public: \
	NO_API virtual ~UGameplayBehaviorsBlueprintFunctionLibrary();


#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorsBlueprintFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayBehaviorsBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayBehaviorsBlueprintFunctionLibrary(UGameplayBehaviorsBlueprintFunctionLibrary&&); \
	NO_API UGameplayBehaviorsBlueprintFunctionLibrary(const UGameplayBehaviorsBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayBehaviorsBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayBehaviorsBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayBehaviorsBlueprintFunctionLibrary) \
	NO_API virtual ~UGameplayBehaviorsBlueprintFunctionLibrary();


#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorsBlueprintFunctionLibrary_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorsBlueprintFunctionLibrary_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorsBlueprintFunctionLibrary_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorsBlueprintFunctionLibrary_h_21_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorsBlueprintFunctionLibrary_h_21_ACCESSORS \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorsBlueprintFunctionLibrary_h_21_INCLASS \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorsBlueprintFunctionLibrary_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorsBlueprintFunctionLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorsBlueprintFunctionLibrary_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorsBlueprintFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorsBlueprintFunctionLibrary_h_21_ACCESSORS \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorsBlueprintFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorsBlueprintFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYBEHAVIORSMODULE_API UClass* StaticClass<class UGameplayBehaviorsBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorsBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
