// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/Controller.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
class UDamageType;
#ifdef ENGINE_Controller_generated_h
#error "Controller.generated.h already included, missing '#pragma once' in Controller.h"
#endif
#define ENGINE_Controller_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_18_DELEGATE \
ENGINE_API void FInstigatedAnyDamageSignature_DelegateWrapper(const FMulticastScriptDelegate& InstigatedAnyDamageSignature, float Damage, const UDamageType* DamageType, AActor* DamagedActor, AActor* DamageCauser);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_20_DELEGATE \
ENGINE_API void FOnPossessedPawnChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPossessedPawnChanged, APawn* OldPawn, APawn* NewPawn);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_RPC_WRAPPERS \
	virtual bool ClientSetRotation_Validate(FRotator , bool ); \
	virtual void ClientSetRotation_Implementation(FRotator NewRotation, bool bResetCamera); \
	virtual bool ClientSetLocation_Validate(FVector , FRotator ); \
	virtual void ClientSetLocation_Implementation(FVector NewLocation, FRotator NewRotation); \
 \
	DECLARE_FUNCTION(execResetIgnoreInputFlags); \
	DECLARE_FUNCTION(execIsLookInputIgnored); \
	DECLARE_FUNCTION(execResetIgnoreLookInput); \
	DECLARE_FUNCTION(execSetIgnoreLookInput); \
	DECLARE_FUNCTION(execIsMoveInputIgnored); \
	DECLARE_FUNCTION(execResetIgnoreMoveInput); \
	DECLARE_FUNCTION(execSetIgnoreMoveInput); \
	DECLARE_FUNCTION(execStopMovement); \
	DECLARE_FUNCTION(execGetPlayerViewPoint); \
	DECLARE_FUNCTION(execUnPossess); \
	DECLARE_FUNCTION(execPossess); \
	DECLARE_FUNCTION(execIsLocalController); \
	DECLARE_FUNCTION(execIsLocalPlayerController); \
	DECLARE_FUNCTION(execIsPlayerController); \
	DECLARE_FUNCTION(execGetDesiredRotation); \
	DECLARE_FUNCTION(execGetViewTarget); \
	DECLARE_FUNCTION(execK2_GetPawn); \
	DECLARE_FUNCTION(execClientSetRotation); \
	DECLARE_FUNCTION(execClientSetLocation); \
	DECLARE_FUNCTION(execOnRep_PlayerState); \
	DECLARE_FUNCTION(execOnRep_Pawn); \
	DECLARE_FUNCTION(execLineOfSightTo); \
	DECLARE_FUNCTION(execSetInitialLocationAndRotation); \
	DECLARE_FUNCTION(execSetControlRotation); \
	DECLARE_FUNCTION(execGetControlRotation);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ClientSetRotation_Validate(FRotator , bool ); \
	virtual void ClientSetRotation_Implementation(FRotator NewRotation, bool bResetCamera); \
	virtual bool ClientSetLocation_Validate(FVector , FRotator ); \
	virtual void ClientSetLocation_Implementation(FVector NewLocation, FRotator NewRotation); \
 \
	DECLARE_FUNCTION(execResetIgnoreInputFlags); \
	DECLARE_FUNCTION(execIsLookInputIgnored); \
	DECLARE_FUNCTION(execResetIgnoreLookInput); \
	DECLARE_FUNCTION(execSetIgnoreLookInput); \
	DECLARE_FUNCTION(execIsMoveInputIgnored); \
	DECLARE_FUNCTION(execResetIgnoreMoveInput); \
	DECLARE_FUNCTION(execSetIgnoreMoveInput); \
	DECLARE_FUNCTION(execStopMovement); \
	DECLARE_FUNCTION(execGetPlayerViewPoint); \
	DECLARE_FUNCTION(execUnPossess); \
	DECLARE_FUNCTION(execPossess); \
	DECLARE_FUNCTION(execIsLocalController); \
	DECLARE_FUNCTION(execIsLocalPlayerController); \
	DECLARE_FUNCTION(execIsPlayerController); \
	DECLARE_FUNCTION(execGetDesiredRotation); \
	DECLARE_FUNCTION(execGetViewTarget); \
	DECLARE_FUNCTION(execK2_GetPawn); \
	DECLARE_FUNCTION(execClientSetRotation); \
	DECLARE_FUNCTION(execClientSetLocation); \
	DECLARE_FUNCTION(execOnRep_PlayerState); \
	DECLARE_FUNCTION(execOnRep_Pawn); \
	DECLARE_FUNCTION(execLineOfSightTo); \
	DECLARE_FUNCTION(execSetInitialLocationAndRotation); \
	DECLARE_FUNCTION(execSetControlRotation); \
	DECLARE_FUNCTION(execGetControlRotation);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAController(); \
	friend struct Z_Construct_UClass_AController_Statics; \
public: \
	DECLARE_CLASS(AController, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AController) \
	virtual UObject* _getUObject() const override { return const_cast<AController*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlayerState=NETFIELD_REP_START, \
		Pawn, \
		NETFIELD_REP_END=Pawn	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_INCLASS \
private: \
	static void StaticRegisterNativesAController(); \
	friend struct Z_Construct_UClass_AController_Statics; \
public: \
	DECLARE_CLASS(AController, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AController) \
	virtual UObject* _getUObject() const override { return const_cast<AController*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlayerState=NETFIELD_REP_START, \
		Pawn, \
		NETFIELD_REP_END=Pawn	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AController(AController&&); \
	NO_API AController(const AController&); \
public: \
	NO_API virtual ~AController();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AController(AController&&); \
	NO_API AController(const AController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AController) \
	NO_API virtual ~AController();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_39_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
