// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayTask_PlayContextualAnim.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UContextualAnimSceneAsset;
class UContextualAnimSceneInstance;
class UGameplayTask_PlayContextualAnim;
enum class EPlayContextualAnimExitMode : uint8;
enum class EPlayContextualAnimStatus : uint8;
#ifdef GAMEPLAYINTERACTIONSMODULE_GameplayTask_PlayContextualAnim_generated_h
#error "GameplayTask_PlayContextualAnim.generated.h already included, missing '#pragma once' in GameplayTask_PlayContextualAnim.h"
#endif
#define GAMEPLAYINTERACTIONSMODULE_GameplayTask_PlayContextualAnim_generated_h

#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FGameplayActuationStateBase Super;


template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<struct FGameplayActuationState_ContextualAnim>();

#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTransitionDesc_EnterContextualAnim_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FGameplayTransitionDesc Super;


template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<struct FGameplayTransitionDesc_EnterContextualAnim>();

#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTransitionDesc_ExitContextualAnim_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FGameplayTransitionDesc Super;


template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<struct FGameplayTransitionDesc_ExitContextualAnim>();

#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_106_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_106_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSectionEndTimeReached); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execSetExit); \
	DECLARE_FUNCTION(execPlayContextualAnim);


#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_106_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSectionEndTimeReached); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execSetExit); \
	DECLARE_FUNCTION(execPlayContextualAnim);


#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_106_ACCESSORS
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_106_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayTask_PlayContextualAnim(); \
	friend struct Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics; \
public: \
	DECLARE_CLASS(UGameplayTask_PlayContextualAnim, UGameplayTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayInteractionsModule"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTask_PlayContextualAnim) \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayTask_PlayContextualAnim*>(this); } \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SectionIdx=NETFIELD_REP_START, \
		AnimSetIdx, \
		Pivots, \
		SceneAsset, \
		InteractorRole, \
		InteractableObject, \
		InteractableObjectRole, \
		ExitSectionName, \
		NETFIELD_REP_END=ExitSectionName	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UGameplayTask_PlayContextualAnim) \
public:


#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_106_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayTask_PlayContextualAnim(); \
	friend struct Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics; \
public: \
	DECLARE_CLASS(UGameplayTask_PlayContextualAnim, UGameplayTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayInteractionsModule"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTask_PlayContextualAnim) \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayTask_PlayContextualAnim*>(this); } \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SectionIdx=NETFIELD_REP_START, \
		AnimSetIdx, \
		Pivots, \
		SceneAsset, \
		InteractorRole, \
		InteractableObject, \
		InteractableObjectRole, \
		ExitSectionName, \
		NETFIELD_REP_END=ExitSectionName	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UGameplayTask_PlayContextualAnim) \
public:


#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_106_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayTask_PlayContextualAnim(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTask_PlayContextualAnim) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTask_PlayContextualAnim); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTask_PlayContextualAnim); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayTask_PlayContextualAnim(UGameplayTask_PlayContextualAnim&&); \
	NO_API UGameplayTask_PlayContextualAnim(const UGameplayTask_PlayContextualAnim&); \
public: \
	NO_API virtual ~UGameplayTask_PlayContextualAnim();


#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_106_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayTask_PlayContextualAnim(UGameplayTask_PlayContextualAnim&&); \
	NO_API UGameplayTask_PlayContextualAnim(const UGameplayTask_PlayContextualAnim&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTask_PlayContextualAnim); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTask_PlayContextualAnim); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTask_PlayContextualAnim) \
	NO_API virtual ~UGameplayTask_PlayContextualAnim();


#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_103_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_106_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_106_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_106_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_106_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_106_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_106_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_106_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_106_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_106_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_106_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_106_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_106_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYINTERACTIONSMODULE_API UClass* StaticClass<class UGameplayTask_PlayContextualAnim>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h


#define FOREACH_ENUM_EPLAYCONTEXTUALANIMEXITMODE(op) \
	op(EPlayContextualAnimExitMode::DefaultExit) \
	op(EPlayContextualAnimExitMode::FastExit) \
	op(EPlayContextualAnimExitMode::Teleport) 

enum class EPlayContextualAnimExitMode : uint8;
template<> struct TIsUEnumClass<EPlayContextualAnimExitMode> { enum { Value = true }; };
template<> GAMEPLAYINTERACTIONSMODULE_API UEnum* StaticEnum<EPlayContextualAnimExitMode>();

#define FOREACH_ENUM_EPLAYCONTEXTUALANIMSTATUS(op) \
	op(EPlayContextualAnimStatus::Unset) \
	op(EPlayContextualAnimStatus::Playing) \
	op(EPlayContextualAnimStatus::DonePlaying) \
	op(EPlayContextualAnimStatus::Failed) 

enum class EPlayContextualAnimStatus : uint8;
template<> struct TIsUEnumClass<EPlayContextualAnimStatus> { enum { Value = true }; };
template<> GAMEPLAYINTERACTIONSMODULE_API UEnum* StaticEnum<EPlayContextualAnimStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
