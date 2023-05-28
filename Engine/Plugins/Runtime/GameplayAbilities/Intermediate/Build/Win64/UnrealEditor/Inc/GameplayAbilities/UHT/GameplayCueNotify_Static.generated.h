// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayCueNotify_Static.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FGameplayCueParameters;
#ifdef GAMEPLAYABILITIES_GameplayCueNotify_Static_generated_h
#error "GameplayCueNotify_Static.generated.h already included, missing '#pragma once' in GameplayCueNotify_Static.h"
#endif
#define GAMEPLAYABILITIES_GameplayCueNotify_Static_generated_h

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Static_h_19_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Static_h_19_RPC_WRAPPERS \
	virtual bool OnRemove_Implementation(AActor* MyTarget, FGameplayCueParameters const& Parameters) const; \
	virtual bool WhileActive_Implementation(AActor* MyTarget, FGameplayCueParameters const& Parameters) const; \
	virtual bool OnActive_Implementation(AActor* MyTarget, FGameplayCueParameters const& Parameters) const; \
	virtual bool OnExecute_Implementation(AActor* MyTarget, FGameplayCueParameters const& Parameters) const; \
 \
	DECLARE_FUNCTION(execOnRemove); \
	DECLARE_FUNCTION(execWhileActive); \
	DECLARE_FUNCTION(execOnActive); \
	DECLARE_FUNCTION(execOnExecute);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Static_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool OnRemove_Implementation(AActor* MyTarget, FGameplayCueParameters const& Parameters) const; \
	virtual bool WhileActive_Implementation(AActor* MyTarget, FGameplayCueParameters const& Parameters) const; \
	virtual bool OnActive_Implementation(AActor* MyTarget, FGameplayCueParameters const& Parameters) const; \
	virtual bool OnExecute_Implementation(AActor* MyTarget, FGameplayCueParameters const& Parameters) const; \
 \
	DECLARE_FUNCTION(execOnRemove); \
	DECLARE_FUNCTION(execWhileActive); \
	DECLARE_FUNCTION(execOnActive); \
	DECLARE_FUNCTION(execOnExecute);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Static_h_19_ACCESSORS
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Static_h_19_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Static_h_19_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UGameplayCueNotify_Static, NO_API)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Static_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayCueNotify_Static(); \
	friend struct Z_Construct_UClass_UGameplayCueNotify_Static_Statics; \
public: \
	DECLARE_CLASS(UGameplayCueNotify_Static, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UGameplayCueNotify_Static) \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Static_h_19_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Static_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayCueNotify_Static(); \
	friend struct Z_Construct_UClass_UGameplayCueNotify_Static_Statics; \
public: \
	DECLARE_CLASS(UGameplayCueNotify_Static, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UGameplayCueNotify_Static) \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Static_h_19_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Static_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayCueNotify_Static(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayCueNotify_Static) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayCueNotify_Static); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayCueNotify_Static); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayCueNotify_Static(UGameplayCueNotify_Static&&); \
	NO_API UGameplayCueNotify_Static(const UGameplayCueNotify_Static&); \
public: \
	NO_API virtual ~UGameplayCueNotify_Static();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Static_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayCueNotify_Static(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayCueNotify_Static(UGameplayCueNotify_Static&&); \
	NO_API UGameplayCueNotify_Static(const UGameplayCueNotify_Static&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayCueNotify_Static); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayCueNotify_Static); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayCueNotify_Static) \
	NO_API virtual ~UGameplayCueNotify_Static();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Static_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Static_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Static_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Static_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Static_h_19_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Static_h_19_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Static_h_19_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Static_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Static_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Static_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Static_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Static_h_19_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Static_h_19_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Static_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Static_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameplayCueNotify_Static."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UGameplayCueNotify_Static>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_Static_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
