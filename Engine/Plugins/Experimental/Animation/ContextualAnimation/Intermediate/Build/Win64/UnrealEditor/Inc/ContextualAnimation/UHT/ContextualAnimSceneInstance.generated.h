// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContextualAnimSceneInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAnimMontage;
class UContextualAnimSceneInstance;
struct FBranchingPointNotifyPayload;
#ifdef CONTEXTUALANIMATION_ContextualAnimSceneInstance_generated_h
#error "ContextualAnimSceneInstance.generated.h already included, missing '#pragma once' in ContextualAnimSceneInstance.h"
#endif
#define CONTEXTUALANIMATION_ContextualAnimSceneInstance_generated_h

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneInstance_h_21_DELEGATE \
CONTEXTUALANIMATION_API void FOnContextualAnimSceneEnded_DelegateWrapper(const FMulticastScriptDelegate& OnContextualAnimSceneEnded, UContextualAnimSceneInstance* SceneInstance);


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneInstance_h_24_DELEGATE \
CONTEXTUALANIMATION_API void FOnContextualAnimSceneActorJoined_DelegateWrapper(const FMulticastScriptDelegate& OnContextualAnimSceneActorJoined, UContextualAnimSceneInstance* SceneInstance, AActor* Actor);


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneInstance_h_27_DELEGATE \
CONTEXTUALANIMATION_API void FOnContextualAnimSceneActorLeft_DelegateWrapper(const FMulticastScriptDelegate& OnContextualAnimSceneActorLeft, UContextualAnimSceneInstance* SceneInstance, AActor* Actor);


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneInstance_h_30_DELEGATE \
CONTEXTUALANIMATION_API void FOnContextualAnimSceneNotify_DelegateWrapper(const FMulticastScriptDelegate& OnContextualAnimSceneNotify, UContextualAnimSceneInstance* SceneInstance, AActor* Actor, FName NotifyName);


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneInstance_h_36_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneInstance_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnNotifyEndReceived); \
	DECLARE_FUNCTION(execOnNotifyBeginReceived); \
	DECLARE_FUNCTION(execOnMontageBlendingOut); \
	DECLARE_FUNCTION(execGetActorByRole);


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneInstance_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnNotifyEndReceived); \
	DECLARE_FUNCTION(execOnNotifyBeginReceived); \
	DECLARE_FUNCTION(execOnMontageBlendingOut); \
	DECLARE_FUNCTION(execGetActorByRole);


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneInstance_h_36_ACCESSORS
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneInstance_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContextualAnimSceneInstance(); \
	friend struct Z_Construct_UClass_UContextualAnimSceneInstance_Statics; \
public: \
	DECLARE_CLASS(UContextualAnimSceneInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContextualAnimation"), NO_API) \
	DECLARE_SERIALIZER(UContextualAnimSceneInstance)


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneInstance_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUContextualAnimSceneInstance(); \
	friend struct Z_Construct_UClass_UContextualAnimSceneInstance_Statics; \
public: \
	DECLARE_CLASS(UContextualAnimSceneInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContextualAnimation"), NO_API) \
	DECLARE_SERIALIZER(UContextualAnimSceneInstance)


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneInstance_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UContextualAnimSceneInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContextualAnimSceneInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContextualAnimSceneInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextualAnimSceneInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContextualAnimSceneInstance(UContextualAnimSceneInstance&&); \
	NO_API UContextualAnimSceneInstance(const UContextualAnimSceneInstance&); \
public: \
	NO_API virtual ~UContextualAnimSceneInstance();


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneInstance_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContextualAnimSceneInstance(UContextualAnimSceneInstance&&); \
	NO_API UContextualAnimSceneInstance(const UContextualAnimSceneInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContextualAnimSceneInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextualAnimSceneInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContextualAnimSceneInstance) \
	NO_API virtual ~UContextualAnimSceneInstance();


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneInstance_h_33_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneInstance_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneInstance_h_36_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneInstance_h_36_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneInstance_h_36_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneInstance_h_36_INCLASS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneInstance_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneInstance_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneInstance_h_36_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneInstance_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneInstance_h_36_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneInstance_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneInstance_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTEXTUALANIMATION_API UClass* StaticClass<class UContextualAnimSceneInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
