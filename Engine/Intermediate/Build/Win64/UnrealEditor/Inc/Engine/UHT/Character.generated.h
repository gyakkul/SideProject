// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/Character.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
class UAnimMontage;
class UPrimitiveComponent;
struct FCharacterMoveResponsePackedBits;
struct FCharacterServerMovePackedBits;
struct FHitResult;
struct FRootMotionSourceGroup;
struct FVector_NetQuantize100;
struct FVector_NetQuantize10;
struct FVector_NetQuantizeNormal;
#ifdef ENGINE_Character_generated_h
#error "Character.generated.h already included, missing '#pragma once' in Character.h"
#endif
#define ENGINE_Character_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_33_DELEGATE \
ENGINE_API void FMovementModeChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MovementModeChangedSignature, ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_34_DELEGATE \
ENGINE_API void FCharacterMovementUpdatedSignature_DelegateWrapper(const FMulticastScriptDelegate& CharacterMovementUpdatedSignature, float DeltaSeconds, FVector OldLocation, FVector OldVelocity);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_35_DELEGATE \
ENGINE_API void FCharacterReachedApexSignature_DelegateWrapper(const FMulticastScriptDelegate& CharacterReachedApexSignature);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_36_DELEGATE \
ENGINE_API void FLandedSignature_DelegateWrapper(const FMulticastScriptDelegate& LandedSignature, FHitResult const& Hit);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRepRootMotionMontage_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRepRootMotionMontage>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_110_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSimulatedRootMotionReplicatedMove>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_169_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBasedMovementInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBasedMovementInfo>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_234_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_234_RPC_WRAPPERS \
	virtual void RootMotionDebugClientPrintOnScreen_Implementation(const FString& InString); \
	virtual void ClientCheatGhost_Implementation(); \
	virtual void ClientCheatFly_Implementation(); \
	virtual void ClientCheatWalk_Implementation(); \
	virtual void OnWalkingOffLedge_Implementation(FVector const& PreviousFloorImpactNormal, FVector const& PreviousFloorContactNormal, FVector const& PreviousLocation, float TimeDelta); \
	virtual void OnJumped_Implementation(); \
	virtual bool CanJumpInternal_Implementation() const; \
	virtual void ClientAdjustRootMotionSourcePosition_Implementation(float TimeStamp, FRootMotionSourceGroup ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode); \
	virtual void ClientAdjustRootMotionPosition_Implementation(float TimeStamp, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode); \
	virtual void ClientVeryShortAdjustPosition_Implementation(float TimeStamp, FVector NewLoc, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode); \
	virtual void ClientAdjustPosition_Implementation(float TimeStamp, FVector NewLoc, FVector NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode); \
	virtual void ClientAckGoodMove_Implementation(float TimeStamp); \
	virtual bool ServerMoveOld_Validate(float , FVector_NetQuantize10 , uint8 ); \
	virtual void ServerMoveOld_Implementation(float OldTimeStamp, FVector_NetQuantize10 OldAccel, uint8 OldMoveFlags); \
	virtual bool ServerMoveDualHybridRootMotion_Validate(float , FVector_NetQuantize10 , uint8 , uint32 , float , FVector_NetQuantize10 , FVector_NetQuantize100 , uint8 , uint8 , uint32 , UPrimitiveComponent* , FName , uint8 ); \
	virtual void ServerMoveDualHybridRootMotion_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
	virtual bool ServerMoveDualNoBase_Validate(float , FVector_NetQuantize10 , uint8 , uint32 , float , FVector_NetQuantize10 , FVector_NetQuantize100 , uint8 , uint8 , uint32 , uint8 ); \
	virtual void ServerMoveDualNoBase_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode); \
	virtual bool ServerMoveDual_Validate(float , FVector_NetQuantize10 , uint8 , uint32 , float , FVector_NetQuantize10 , FVector_NetQuantize100 , uint8 , uint8 , uint32 , UPrimitiveComponent* , FName , uint8 ); \
	virtual void ServerMoveDual_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
	virtual bool ServerMoveNoBase_Validate(float , FVector_NetQuantize10 , FVector_NetQuantize100 , uint8 , uint8 , uint32 , uint8 ); \
	virtual void ServerMoveNoBase_Implementation(float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode); \
	virtual bool ServerMove_Validate(float , FVector_NetQuantize10 , FVector_NetQuantize100 , uint8 , uint8 , uint32 , UPrimitiveComponent* , FName , uint8 ); \
	virtual void ServerMove_Implementation(float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
	virtual bool ClientMoveResponsePacked_Validate(FCharacterMoveResponsePackedBits const& ); \
	virtual void ClientMoveResponsePacked_Implementation(FCharacterMoveResponsePackedBits const& PackedBits); \
	virtual bool ServerMovePacked_Validate(FCharacterServerMovePackedBits const& ); \
	virtual void ServerMovePacked_Implementation(FCharacterServerMovePackedBits const& PackedBits); \
 \
	DECLARE_FUNCTION(execGetAnimRootMotionTranslationScale); \
	DECLARE_FUNCTION(execIsPlayingNetworkedRootMotionMontage); \
	DECLARE_FUNCTION(execHasAnyRootMotion); \
	DECLARE_FUNCTION(execIsPlayingRootMotion); \
	DECLARE_FUNCTION(execOnRep_RootMotion); \
	DECLARE_FUNCTION(execRootMotionDebugClientPrintOnScreen); \
	DECLARE_FUNCTION(execClientCheatGhost); \
	DECLARE_FUNCTION(execClientCheatFly); \
	DECLARE_FUNCTION(execClientCheatWalk); \
	DECLARE_FUNCTION(execCanCrouch); \
	DECLARE_FUNCTION(execUnCrouch); \
	DECLARE_FUNCTION(execCrouch); \
	DECLARE_FUNCTION(execOnWalkingOffLedge); \
	DECLARE_FUNCTION(execOnJumped); \
	DECLARE_FUNCTION(execLaunchCharacter); \
	DECLARE_FUNCTION(execGetCurrentMontage); \
	DECLARE_FUNCTION(execStopAnimMontage); \
	DECLARE_FUNCTION(execPlayAnimMontage); \
	DECLARE_FUNCTION(execIsJumpProvidingForce); \
	DECLARE_FUNCTION(execCanJumpInternal); \
	DECLARE_FUNCTION(execCanJump); \
	DECLARE_FUNCTION(execStopJumping); \
	DECLARE_FUNCTION(execJump); \
	DECLARE_FUNCTION(execOnRep_IsCrouched); \
	DECLARE_FUNCTION(execGetBaseRotationOffsetRotator); \
	DECLARE_FUNCTION(execGetBaseTranslationOffset); \
	DECLARE_FUNCTION(execOnRep_ReplayLastTransformUpdateTimeStamp); \
	DECLARE_FUNCTION(execOnRep_ReplicatedBasedMovement); \
	DECLARE_FUNCTION(execCacheInitialMeshOffset); \
	DECLARE_FUNCTION(execClientAdjustRootMotionSourcePosition); \
	DECLARE_FUNCTION(execClientAdjustRootMotionPosition); \
	DECLARE_FUNCTION(execClientVeryShortAdjustPosition); \
	DECLARE_FUNCTION(execClientAdjustPosition); \
	DECLARE_FUNCTION(execClientAckGoodMove); \
	DECLARE_FUNCTION(execServerMoveOld); \
	DECLARE_FUNCTION(execServerMoveDualHybridRootMotion); \
	DECLARE_FUNCTION(execServerMoveDualNoBase); \
	DECLARE_FUNCTION(execServerMoveDual); \
	DECLARE_FUNCTION(execServerMoveNoBase); \
	DECLARE_FUNCTION(execServerMove); \
	DECLARE_FUNCTION(execClientMoveResponsePacked); \
	DECLARE_FUNCTION(execServerMovePacked);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_234_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAnimRootMotionTranslationScale); \
	DECLARE_FUNCTION(execIsPlayingNetworkedRootMotionMontage); \
	DECLARE_FUNCTION(execHasAnyRootMotion); \
	DECLARE_FUNCTION(execIsPlayingRootMotion); \
	DECLARE_FUNCTION(execOnRep_RootMotion); \
	DECLARE_FUNCTION(execRootMotionDebugClientPrintOnScreen); \
	DECLARE_FUNCTION(execClientCheatGhost); \
	DECLARE_FUNCTION(execClientCheatFly); \
	DECLARE_FUNCTION(execClientCheatWalk); \
	DECLARE_FUNCTION(execCanCrouch); \
	DECLARE_FUNCTION(execUnCrouch); \
	DECLARE_FUNCTION(execCrouch); \
	DECLARE_FUNCTION(execOnWalkingOffLedge); \
	DECLARE_FUNCTION(execOnJumped); \
	DECLARE_FUNCTION(execLaunchCharacter); \
	DECLARE_FUNCTION(execGetCurrentMontage); \
	DECLARE_FUNCTION(execStopAnimMontage); \
	DECLARE_FUNCTION(execPlayAnimMontage); \
	DECLARE_FUNCTION(execIsJumpProvidingForce); \
	DECLARE_FUNCTION(execCanJumpInternal); \
	DECLARE_FUNCTION(execCanJump); \
	DECLARE_FUNCTION(execStopJumping); \
	DECLARE_FUNCTION(execJump); \
	DECLARE_FUNCTION(execOnRep_IsCrouched); \
	DECLARE_FUNCTION(execGetBaseRotationOffsetRotator); \
	DECLARE_FUNCTION(execGetBaseTranslationOffset); \
	DECLARE_FUNCTION(execOnRep_ReplayLastTransformUpdateTimeStamp); \
	DECLARE_FUNCTION(execOnRep_ReplicatedBasedMovement); \
	DECLARE_FUNCTION(execCacheInitialMeshOffset); \
	DECLARE_FUNCTION(execClientAdjustRootMotionSourcePosition); \
	DECLARE_FUNCTION(execClientAdjustRootMotionPosition); \
	DECLARE_FUNCTION(execClientVeryShortAdjustPosition); \
	DECLARE_FUNCTION(execClientAdjustPosition); \
	DECLARE_FUNCTION(execClientAckGoodMove); \
	DECLARE_FUNCTION(execServerMoveOld); \
	DECLARE_FUNCTION(execServerMoveDualHybridRootMotion); \
	DECLARE_FUNCTION(execServerMoveDualNoBase); \
	DECLARE_FUNCTION(execServerMoveDual); \
	DECLARE_FUNCTION(execServerMoveNoBase); \
	DECLARE_FUNCTION(execServerMove); \
	DECLARE_FUNCTION(execClientMoveResponsePacked); \
	DECLARE_FUNCTION(execServerMovePacked);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_234_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_234_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_234_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacter(); \
	friend struct Z_Construct_UClass_ACharacter_Statics; \
public: \
	DECLARE_CLASS(ACharacter, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ACharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedBasedMovement=NETFIELD_REP_START, \
		AnimRootMotionTranslationScale, \
		ReplicatedServerLastTransformUpdateTimeStamp, \
		ReplayLastTransformUpdateTimeStamp, \
		ReplicatedMovementMode, \
		bIsCrouched, \
		bProxyIsJumpForceApplied, \
		JumpMaxHoldTime, \
		JumpMaxCount, \
		RepRootMotion, \
		NETFIELD_REP_END=RepRootMotion	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_234_INCLASS \
private: \
	static void StaticRegisterNativesACharacter(); \
	friend struct Z_Construct_UClass_ACharacter_Statics; \
public: \
	DECLARE_CLASS(ACharacter, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ACharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedBasedMovement=NETFIELD_REP_START, \
		AnimRootMotionTranslationScale, \
		ReplicatedServerLastTransformUpdateTimeStamp, \
		ReplayLastTransformUpdateTimeStamp, \
		ReplicatedMovementMode, \
		bIsCrouched, \
		bProxyIsJumpForceApplied, \
		JumpMaxHoldTime, \
		JumpMaxCount, \
		RepRootMotion, \
		NETFIELD_REP_END=RepRootMotion	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_234_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacter(ACharacter&&); \
	NO_API ACharacter(const ACharacter&); \
public: \
	NO_API virtual ~ACharacter();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_234_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacter(ACharacter&&); \
	NO_API ACharacter(const ACharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacter) \
	NO_API virtual ~ACharacter();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_231_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_234_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_234_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_234_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_234_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_234_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_234_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_234_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_234_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_234_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_234_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_234_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_234_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_234_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_234_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ACharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
