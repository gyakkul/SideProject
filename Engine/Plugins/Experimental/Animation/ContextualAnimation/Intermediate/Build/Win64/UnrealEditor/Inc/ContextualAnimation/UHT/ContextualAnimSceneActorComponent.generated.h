// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContextualAnimSceneActorComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
class UContextualAnimSceneActorComponent;
class USkinnedMeshComponent;
struct FContextualAnimIKTarget;
struct FContextualAnimSceneBindings;
#ifdef CONTEXTUALANIMATION_ContextualAnimSceneActorComponent_generated_h
#error "ContextualAnimSceneActorComponent.generated.h already included, missing '#pragma once' in ContextualAnimSceneActorComponent.h"
#endif
#define CONTEXTUALANIMATION_ContextualAnimSceneActorComponent_generated_h

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_15_DELEGATE \
CONTEXTUALANIMATION_API void FContextualAnimSceneActorCompDelegate_DelegateWrapper(const FMulticastScriptDelegate& ContextualAnimSceneActorCompDelegate, UContextualAnimSceneActorComponent* SceneActorComponent);


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_20_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_20_RPC_WRAPPERS \
	virtual bool ServerEarlyOutContextualAnimScene_Validate(); \
	virtual void ServerEarlyOutContextualAnimScene_Implementation(); \
	virtual bool ServerStartContextualAnimScene_Validate(FContextualAnimSceneBindings const& ); \
	virtual void ServerStartContextualAnimScene_Implementation(FContextualAnimSceneBindings const& InBindings); \
 \
	DECLARE_FUNCTION(execServerEarlyOutContextualAnimScene); \
	DECLARE_FUNCTION(execServerStartContextualAnimScene); \
	DECLARE_FUNCTION(execOnMontageBlendingOut); \
	DECLARE_FUNCTION(execOnRep_Bindings); \
	DECLARE_FUNCTION(execOnTickPose); \
	DECLARE_FUNCTION(execStartContextualAnimScene); \
	DECLARE_FUNCTION(execGetIKTargetByGoalName); \
	DECLARE_FUNCTION(execGetIKTargets); \
	DECLARE_FUNCTION(execOnLeftScene); \
	DECLARE_FUNCTION(execOnJoinedScene);


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerEarlyOutContextualAnimScene_Validate(); \
	virtual void ServerEarlyOutContextualAnimScene_Implementation(); \
	virtual bool ServerStartContextualAnimScene_Validate(FContextualAnimSceneBindings const& ); \
	virtual void ServerStartContextualAnimScene_Implementation(FContextualAnimSceneBindings const& InBindings); \
 \
	DECLARE_FUNCTION(execServerEarlyOutContextualAnimScene); \
	DECLARE_FUNCTION(execServerStartContextualAnimScene); \
	DECLARE_FUNCTION(execOnMontageBlendingOut); \
	DECLARE_FUNCTION(execOnRep_Bindings); \
	DECLARE_FUNCTION(execOnTickPose); \
	DECLARE_FUNCTION(execStartContextualAnimScene); \
	DECLARE_FUNCTION(execGetIKTargetByGoalName); \
	DECLARE_FUNCTION(execGetIKTargets); \
	DECLARE_FUNCTION(execOnLeftScene); \
	DECLARE_FUNCTION(execOnJoinedScene);


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_20_ACCESSORS
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_20_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContextualAnimSceneActorComponent(); \
	friend struct Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics; \
public: \
	DECLARE_CLASS(UContextualAnimSceneActorComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ContextualAnimation"), NO_API) \
	DECLARE_SERIALIZER(UContextualAnimSceneActorComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UContextualAnimSceneActorComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RepBindings=NETFIELD_REP_START, \
		NETFIELD_REP_END=RepBindings	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUContextualAnimSceneActorComponent(); \
	friend struct Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics; \
public: \
	DECLARE_CLASS(UContextualAnimSceneActorComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ContextualAnimation"), NO_API) \
	DECLARE_SERIALIZER(UContextualAnimSceneActorComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UContextualAnimSceneActorComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RepBindings=NETFIELD_REP_START, \
		NETFIELD_REP_END=RepBindings	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UContextualAnimSceneActorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContextualAnimSceneActorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContextualAnimSceneActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextualAnimSceneActorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContextualAnimSceneActorComponent(UContextualAnimSceneActorComponent&&); \
	NO_API UContextualAnimSceneActorComponent(const UContextualAnimSceneActorComponent&); \
public: \
	NO_API virtual ~UContextualAnimSceneActorComponent();


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContextualAnimSceneActorComponent(UContextualAnimSceneActorComponent&&); \
	NO_API UContextualAnimSceneActorComponent(const UContextualAnimSceneActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContextualAnimSceneActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextualAnimSceneActorComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContextualAnimSceneActorComponent) \
	NO_API virtual ~UContextualAnimSceneActorComponent();


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_20_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_20_INCLASS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_20_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTEXTUALANIMATION_API UClass* StaticClass<class UContextualAnimSceneActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
