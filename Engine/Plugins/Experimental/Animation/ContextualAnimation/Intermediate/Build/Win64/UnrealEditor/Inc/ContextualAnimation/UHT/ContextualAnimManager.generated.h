// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContextualAnimManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UContextualAnimManager;
class UContextualAnimSceneAsset;
class UContextualAnimSceneInstance;
class UObject;
struct FContextualAnimStartSceneParams;
#ifdef CONTEXTUALANIMATION_ContextualAnimManager_generated_h
#error "ContextualAnimManager.generated.h already included, missing '#pragma once' in ContextualAnimManager.h"
#endif
#define CONTEXTUALANIMATION_ContextualAnimManager_generated_h

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimManager_h_19_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimManager_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSceneInstanceEnded); \
	DECLARE_FUNCTION(execBP_TryStartScene); \
	DECLARE_FUNCTION(execGetContextualAnimManager); \
	DECLARE_FUNCTION(execGetSceneWithActor); \
	DECLARE_FUNCTION(execIsActorInAnyScene); \
	DECLARE_FUNCTION(execTryStopSceneWithActor);


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimManager_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSceneInstanceEnded); \
	DECLARE_FUNCTION(execBP_TryStartScene); \
	DECLARE_FUNCTION(execGetContextualAnimManager); \
	DECLARE_FUNCTION(execGetSceneWithActor); \
	DECLARE_FUNCTION(execIsActorInAnyScene); \
	DECLARE_FUNCTION(execTryStopSceneWithActor);


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimManager_h_19_ACCESSORS
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimManager_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContextualAnimManager(); \
	friend struct Z_Construct_UClass_UContextualAnimManager_Statics; \
public: \
	DECLARE_CLASS(UContextualAnimManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContextualAnimation"), NO_API) \
	DECLARE_SERIALIZER(UContextualAnimManager)


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimManager_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUContextualAnimManager(); \
	friend struct Z_Construct_UClass_UContextualAnimManager_Statics; \
public: \
	DECLARE_CLASS(UContextualAnimManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContextualAnimation"), NO_API) \
	DECLARE_SERIALIZER(UContextualAnimManager)


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimManager_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UContextualAnimManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContextualAnimManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContextualAnimManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextualAnimManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContextualAnimManager(UContextualAnimManager&&); \
	NO_API UContextualAnimManager(const UContextualAnimManager&); \
public: \
	NO_API virtual ~UContextualAnimManager();


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimManager_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContextualAnimManager(UContextualAnimManager&&); \
	NO_API UContextualAnimManager(const UContextualAnimManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContextualAnimManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextualAnimManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContextualAnimManager) \
	NO_API virtual ~UContextualAnimManager();


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimManager_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimManager_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimManager_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimManager_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimManager_h_19_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimManager_h_19_INCLASS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimManager_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimManager_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimManager_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimManager_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimManager_h_19_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimManager_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimManager_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTEXTUALANIMATION_API UClass* StaticClass<class UContextualAnimManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
