// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayTasksComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IGameplayTaskOwnerInterface;
class UGameplayTask;
class UGameplayTaskResource;
enum class EGameplayTaskRunResult : uint8;
struct FGameplayResourceSet;
#ifdef GAMEPLAYTASKS_GameplayTasksComponent_generated_h
#error "GameplayTasksComponent.generated.h already included, missing '#pragma once' in GameplayTasksComponent.h"
#endif
#define GAMEPLAYTASKS_GameplayTasksComponent_generated_h

#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_55_DELEGATE \
GAMEPLAYTASKS_API void FOnClaimedResourcesChangeSignature_DelegateWrapper(const FMulticastScriptDelegate& OnClaimedResourcesChangeSignature, FGameplayResourceSet NewlyClaimed, FGameplayResourceSet FreshlyReleased);


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_63_SPARSE_DATA
#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_63_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execK2_RunGameplayTask); \
	DECLARE_FUNCTION(execOnRep_SimulatedTasks);


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execK2_RunGameplayTask); \
	DECLARE_FUNCTION(execOnRep_SimulatedTasks);


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_63_ACCESSORS
#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayTasksComponent(); \
	friend struct Z_Construct_UClass_UGameplayTasksComponent_Statics; \
public: \
	DECLARE_CLASS(UGameplayTasksComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTasks"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTasksComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayTasksComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SimulatedTasks=NETFIELD_REP_START, \
		NETFIELD_REP_END=SimulatedTasks	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_63_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayTasksComponent(); \
	friend struct Z_Construct_UClass_UGameplayTasksComponent_Statics; \
public: \
	DECLARE_CLASS(UGameplayTasksComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTasks"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTasksComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayTasksComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SimulatedTasks=NETFIELD_REP_START, \
		NETFIELD_REP_END=SimulatedTasks	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayTasksComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTasksComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTasksComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTasksComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayTasksComponent(UGameplayTasksComponent&&); \
	NO_API UGameplayTasksComponent(const UGameplayTasksComponent&); \
public: \
	NO_API virtual ~UGameplayTasksComponent();


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_63_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayTasksComponent(UGameplayTasksComponent&&); \
	NO_API UGameplayTasksComponent(const UGameplayTasksComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTasksComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTasksComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTasksComponent) \
	NO_API virtual ~UGameplayTasksComponent();


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_60_PROLOG
#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_63_SPARSE_DATA \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_63_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_63_ACCESSORS \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_63_INCLASS \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_63_SPARSE_DATA \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_63_ACCESSORS \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_63_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTASKS_API UClass* StaticClass<class UGameplayTasksComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h


#define FOREACH_ENUM_EGAMEPLAYTASKRUNRESULT(op) \
	op(EGameplayTaskRunResult::Error) \
	op(EGameplayTaskRunResult::Failed) \
	op(EGameplayTaskRunResult::Success_Paused) \
	op(EGameplayTaskRunResult::Success_Active) \
	op(EGameplayTaskRunResult::Success_Finished) 

enum class EGameplayTaskRunResult : uint8;
template<> struct TIsUEnumClass<EGameplayTaskRunResult> { enum { Value = true }; };
template<> GAMEPLAYTASKS_API UEnum* StaticEnum<EGameplayTaskRunResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
