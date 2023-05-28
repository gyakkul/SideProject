// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/StateTreeComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EStateTreeRunStatus : uint8;
struct FStateTreeEvent;
#ifdef GAMEPLAYSTATETREEMODULE_StateTreeComponent_generated_h
#error "StateTreeComponent.generated.h already included, missing '#pragma once' in StateTreeComponent.h"
#endif
#define GAMEPLAYSTATETREEMODULE_StateTreeComponent_generated_h

#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_19_DELEGATE \
GAMEPLAYSTATETREEMODULE_API void FStateTreeRunStatusChanged_DelegateWrapper(const FMulticastScriptDelegate& StateTreeRunStatusChanged, EStateTreeRunStatus StateTreeRunStatus);


#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_24_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStateTreeRunStatus); \
	DECLARE_FUNCTION(execSendStateTreeEvent); \
	DECLARE_FUNCTION(execSetStartLogicAutomatically);


#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStateTreeRunStatus); \
	DECLARE_FUNCTION(execSendStateTreeEvent); \
	DECLARE_FUNCTION(execSetStartLogicAutomatically);


#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_24_ACCESSORS
#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTreeComponent(); \
	friend struct Z_Construct_UClass_UStateTreeComponent_Statics; \
public: \
	DECLARE_CLASS(UStateTreeComponent, UBrainComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayStateTreeModule"), NO_API) \
	DECLARE_SERIALIZER(UStateTreeComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UStateTreeComponent*>(this); }


#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUStateTreeComponent(); \
	friend struct Z_Construct_UClass_UStateTreeComponent_Statics; \
public: \
	DECLARE_CLASS(UStateTreeComponent, UBrainComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayStateTreeModule"), NO_API) \
	DECLARE_SERIALIZER(UStateTreeComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UStateTreeComponent*>(this); }


#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStateTreeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTreeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateTreeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStateTreeComponent(UStateTreeComponent&&); \
	NO_API UStateTreeComponent(const UStateTreeComponent&); \
public: \
	NO_API virtual ~UStateTreeComponent();


#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStateTreeComponent(UStateTreeComponent&&); \
	NO_API UStateTreeComponent(const UStateTreeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateTreeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTreeComponent) \
	NO_API virtual ~UStateTreeComponent();


#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_21_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_24_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_24_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_24_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_24_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_24_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_24_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYSTATETREEMODULE_API UClass* StaticClass<class UStateTreeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
