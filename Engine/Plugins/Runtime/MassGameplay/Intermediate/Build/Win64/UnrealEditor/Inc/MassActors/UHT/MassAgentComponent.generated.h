// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassAgentComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSACTORS_MassAgentComponent_generated_h
#error "MassAgentComponent.generated.h already included, missing '#pragma once' in MassAgentComponent.h"
#endif
#define MASSACTORS_MassAgentComponent_generated_h

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_43_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_43_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_NetID); \
	DECLARE_FUNCTION(execKillEntity); \
	DECLARE_FUNCTION(execDisable); \
	DECLARE_FUNCTION(execEnable);


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_NetID); \
	DECLARE_FUNCTION(execKillEntity); \
	DECLARE_FUNCTION(execDisable); \
	DECLARE_FUNCTION(execEnable);


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_43_ACCESSORS
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassAgentComponent(); \
	friend struct Z_Construct_UClass_UMassAgentComponent_Statics; \
public: \
	DECLARE_CLASS(UMassAgentComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassActors"), NO_API) \
	DECLARE_SERIALIZER(UMassAgentComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NetID=NETFIELD_REP_START, \
		NETFIELD_REP_END=NetID	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUMassAgentComponent(); \
	friend struct Z_Construct_UClass_UMassAgentComponent_Statics; \
public: \
	DECLARE_CLASS(UMassAgentComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassActors"), NO_API) \
	DECLARE_SERIALIZER(UMassAgentComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NetID=NETFIELD_REP_START, \
		NETFIELD_REP_END=NetID	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassAgentComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassAgentComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassAgentComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassAgentComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMassAgentComponent(UMassAgentComponent&&); \
	NO_API UMassAgentComponent(const UMassAgentComponent&); \
public: \
	NO_API virtual ~UMassAgentComponent();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMassAgentComponent(UMassAgentComponent&&); \
	NO_API UMassAgentComponent(const UMassAgentComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassAgentComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassAgentComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassAgentComponent) \
	NO_API virtual ~UMassAgentComponent();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_40_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_43_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_43_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_43_ACCESSORS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_43_INCLASS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_43_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_43_ACCESSORS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSACTORS_API UClass* StaticClass<class UMassAgentComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentComponent_h


#define FOREACH_ENUM_EAGENTCOMPONENTSTATE(op) \
	op(EAgentComponentState::None) \
	op(EAgentComponentState::EntityPendingCreation) \
	op(EAgentComponentState::EntityCreated) \
	op(EAgentComponentState::PuppetPendingInitialization) \
	op(EAgentComponentState::PuppetInitialized) \
	op(EAgentComponentState::PuppetPaused) \
	op(EAgentComponentState::PuppetPendingReplication) \
	op(EAgentComponentState::PuppetReplicatedOrphan) 

enum class EAgentComponentState : uint8;
template<> struct TIsUEnumClass<EAgentComponentState> { enum { Value = true }; };
template<> MASSACTORS_API UEnum* StaticEnum<EAgentComponentState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
